/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "thrift/annotation/gen-py3/cpp/metadata.h"

namespace facebook {
namespace thrift {
namespace annotation {
namespace cpp {
::apache::thrift::metadata::ThriftMetadata cpp_getThriftModuleMetadata() {
  ::apache::thrift::metadata::ThriftServiceMetadataResponse response;
  ::apache::thrift::metadata::ThriftMetadata& metadata = *response.metadata_ref();
  ::apache::thrift::detail::md::EnumMetadata<RefType>::gen(metadata);
  ::apache::thrift::detail::md::EnumMetadata<EnumUnderlyingType>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Ref>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Lazy>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<DisableLazyChecksum>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Adapter>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<PackIsset>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<MinimizePadding>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<TriviallyRelocatable>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<ScopedEnumAsUnionType>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<StrongType>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<FieldInterceptor>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<UseOpEncode>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<EnumType>::gen(metadata);
  return metadata;
}
} // namespace facebook
} // namespace thrift
} // namespace annotation
} // namespace cpp