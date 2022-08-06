/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/includes/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/includes/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/includes/gen-cpp2/module_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::MyStruct>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::MyStruct>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

const folly::StringPiece MyStruct::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<MyStruct>::fields_names[folly::to_underlying(ord) - 1];
}

MyStruct::MyStruct(const MyStruct&) = default;
MyStruct& MyStruct::operator=(const MyStruct&) = default;
MyStruct::MyStruct(FOLLY_MAYBE_UNUSED MyStruct&& other) noexcept :
    __fbthrift_field_MyIncludedField(std::move(other.__fbthrift_field_MyIncludedField)),
    __fbthrift_field_MyOtherIncludedField(std::move(other.__fbthrift_field_MyOtherIncludedField)),
    __fbthrift_field_MyIncludedInt(std::move(other.__fbthrift_field_MyIncludedInt)),
    __isset(other.__isset) {
}

MyStruct& MyStruct::operator=(FOLLY_MAYBE_UNUSED MyStruct&& other) noexcept {
    this->__fbthrift_field_MyIncludedField = std::move(other.__fbthrift_field_MyIncludedField);
    this->__fbthrift_field_MyOtherIncludedField = std::move(other.__fbthrift_field_MyOtherIncludedField);
    this->__fbthrift_field_MyIncludedInt = std::move(other.__fbthrift_field_MyIncludedInt);
    __isset = other.__isset;
    return *this;
}


MyStruct::MyStruct(apache::thrift::FragileConstructor, ::cpp2::Included MyIncludedField__arg, ::cpp2::Included MyOtherIncludedField__arg, ::cpp2::IncludedInt64 MyIncludedInt__arg) :
    __fbthrift_field_MyIncludedField(std::move(MyIncludedField__arg)),
    __fbthrift_field_MyOtherIncludedField(std::move(MyOtherIncludedField__arg)),
    __fbthrift_field_MyIncludedInt(std::move(MyIncludedInt__arg)) {
  __isset.set(folly::index_constant<0>(), true);
  __isset.set(folly::index_constant<1>(), true);
  __isset.set(folly::index_constant<2>(), true);
}


void MyStruct::__fbthrift_clear() {
  // clear all fields
  ::apache::thrift::clear(this->__fbthrift_field_MyIncludedField);
  ::apache::thrift::clear(this->__fbthrift_field_MyOtherIncludedField);
  this->__fbthrift_field_MyIncludedInt = ::cpp2::IncludedInt64();
  __isset = {};
}

void MyStruct::__fbthrift_clear_terse_fields() {
}

bool MyStruct::__fbthrift_is_empty() const {
  return false;
}

bool MyStruct::operator==(FOLLY_MAYBE_UNUSED const MyStruct& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (!(lhs.MyIncludedField_ref() == rhs.MyIncludedField_ref())) {
    return false;
  }
  if (!(lhs.MyOtherIncludedField_ref() == rhs.MyOtherIncludedField_ref())) {
    return false;
  }
  if (!(lhs.MyIncludedInt_ref() == rhs.MyIncludedInt_ref())) {
    return false;
  }
  return true;
}

bool MyStruct::operator<(FOLLY_MAYBE_UNUSED const MyStruct& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (!(lhs.MyIncludedField_ref() == rhs.MyIncludedField_ref())) {
    return lhs.MyIncludedField_ref() < rhs.MyIncludedField_ref();
  }
  if (!(lhs.MyOtherIncludedField_ref() == rhs.MyOtherIncludedField_ref())) {
    return lhs.MyOtherIncludedField_ref() < rhs.MyOtherIncludedField_ref();
  }
  if (!(lhs.MyIncludedInt_ref() == rhs.MyIncludedInt_ref())) {
    return lhs.MyIncludedInt_ref() < rhs.MyIncludedInt_ref();
  }
  return false;
}

const ::cpp2::Included& MyStruct::get_MyIncludedField() const& {
  return __fbthrift_field_MyIncludedField;
}

::cpp2::Included MyStruct::get_MyIncludedField() && {
  return std::move(__fbthrift_field_MyIncludedField);
}

const ::cpp2::Included& MyStruct::get_MyOtherIncludedField() const& {
  return __fbthrift_field_MyOtherIncludedField;
}

::cpp2::Included MyStruct::get_MyOtherIncludedField() && {
  return std::move(__fbthrift_field_MyOtherIncludedField);
}


void swap(FOLLY_MAYBE_UNUSED MyStruct& a, FOLLY_MAYBE_UNUSED MyStruct& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_MyIncludedField, b.__fbthrift_field_MyIncludedField);
  swap(a.__fbthrift_field_MyOtherIncludedField, b.__fbthrift_field_MyOtherIncludedField);
  swap(a.__fbthrift_field_MyIncludedInt, b.__fbthrift_field_MyIncludedInt);
  swap(a.__isset, b.__isset);
}

template void MyStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t MyStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void MyStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t MyStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        MyStruct,
        ::apache::thrift::type_class::structure,
        ::cpp2::Included>,
    "inconsistent use of json option");
static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        MyStruct,
        ::apache::thrift::type_class::structure,
        ::cpp2::Included>,
    "inconsistent use of json option");

} // cpp2

namespace cpp2 { namespace {
FOLLY_MAYBE_UNUSED FOLLY_ERASE void validateAdapters() {
}
}} // cpp2
