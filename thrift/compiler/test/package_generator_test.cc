/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <map>
#include <gtest/gtest.h>

#include <thrift/compiler/codemod/package_generator.h>

namespace apache::thrift::compiler {

TEST(PackageGeneratorTest, file_path) {
  std::string path = "/foo/bar/baz.thrift";
  EXPECT_EQ(
      codemod::package_name_generator::from_file_path(path),
      "meta.com/foo/bar/baz");
  path = "baz.thrift";
  EXPECT_EQ(
      codemod::package_name_generator::from_file_path(path), "meta.com/baz");
  path = "python/foo/bar.thrift";
  EXPECT_EQ(
      codemod::package_name_generator::from_file_path(path),
      "meta.com/foo/bar");
}

TEST(PackageGeneratorTest, namespace) {
  codemod::package_name_generator gen("test.foo.bar");
  EXPECT_EQ(gen.generate("apache.org"), "apache.org/test/foo/bar");

  codemod::package_name_generator gen_with_domain("facebook.foo.bar");
  EXPECT_EQ(gen_with_domain.generate("apache.org"), "facebook.com/foo/bar");

  codemod::package_name_generator gen_with_default_domain("test.foo.bar");
  EXPECT_EQ(gen_with_default_domain.generate(), "meta.com/test/foo/bar");
}

TEST(PackageGeneratorTest, common_package) {
  std::map<std::string, std::string> namespaces = {
      {"cpp2", "foo.bar.baz"}, {"hack", "baz"}};

  auto get_common_pkg = [&]() {
    return codemod::package_name_generator_util::from_namespaces(namespaces)
        .find_common_package();
  };

  // No common package found
  EXPECT_EQ(get_common_pkg(), "");

  // Common Package with no domain in common namespaces
  namespaces["python"] = "foo.bar.baz";
  EXPECT_EQ(get_common_pkg(), "meta.com/foo/bar/baz");

  /*
   * Since domain is not present in any of the common namespaces,
   * Any available domain should be used.
   */
  namespaces["java"] = "org.apache.foobar";
  EXPECT_EQ(get_common_pkg(), "apache.org/foo/bar/baz");

  // Common namespace with domain
  namespaces["cpp2"] = "facebook.foo.bar.baz";
  EXPECT_EQ(get_common_pkg(), "facebook.com/foo/bar/baz");

  /*
   * Packages from cpp2 and python namespaces have different domains but
   * same path.
   * Use the common path of cpp2 and python namespaces
   * and domain from either one of them
   */
  namespaces["python"] = "meta.foo.bar.baz";
  EXPECT_EQ(get_common_pkg(), "meta.com/foo/bar/baz");

  // cpp and python ns have same path => foo.bar.baz
  // java and hack ns have same path => foobar
  // since "foo.bar.baz" is longer than "foobar", choose the longer one
  namespaces["hack"] = "apache.foobar";
  EXPECT_EQ(get_common_pkg(), "meta.com/foo/bar/baz");
}
} // namespace apache::thrift::compiler
