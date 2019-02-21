/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/GeneratedHeaderHelper.h>
#include <thrift/lib/cpp2/Thrift.h>
#include <thrift/lib/cpp2/gen/module_types_h.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>


// BEGIN declare_enums
namespace cpp2 {

enum class MyEnum {
  MyValue1 = 0,
  MyValue2 = 1,
  REALM = 2
};

using _MyEnum_EnumMapFactory = apache::thrift::detail::TEnumMapFactory<MyEnum, MyEnum>;
extern const _MyEnum_EnumMapFactory::ValuesToNamesMapType _MyEnum_VALUES_TO_NAMES;
extern const _MyEnum_EnumMapFactory::NamesToValuesMapType _MyEnum_NAMES_TO_VALUES;



} // cpp2
namespace std {


template<> struct hash<typename  ::cpp2::MyEnum> : public apache::thrift::detail::enum_hash<typename  ::cpp2::MyEnum> {};
template<> struct equal_to<typename  ::cpp2::MyEnum> : public apache::thrift::detail::enum_equal_to<typename  ::cpp2::MyEnum> {};


} // std

namespace apache { namespace thrift {


template <> struct TEnumDataStorage< ::cpp2::MyEnum>;

template <> struct TEnumTraits< ::cpp2::MyEnum> {
  using type =  ::cpp2::MyEnum;

  static constexpr std::size_t const size = 3;
  static folly::Range<type const*> const values;
  static folly::Range<folly::StringPiece const*> const names;

  static char const* findName(type value);
  static bool findValue(char const* name, type* out);

  static constexpr type min() { return type::MyValue1; }
  static constexpr type max() { return type::REALM; }
};


}} // apache::thrift


// END declare_enums
// BEGIN struct_indirection

// END struct_indirection
// BEGIN forward_declare
namespace cpp2 {
class MyStruct;
class MyDataItem;
} // cpp2
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
class MyStruct final : private apache::thrift::detail::st::ComparisonOperators<MyStruct> {
 public:

  MyStruct();

  // FragileConstructor for use in initialization lists only.
  MyStruct(apache::thrift::FragileConstructor, int64_t MyIntField__arg, std::string MyStringField__arg,  ::cpp2::MyDataItem MyDataField__arg, int64_t majorVer__arg,  ::cpp2::MyEnum myEnum__arg);
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<1, _T> arg) {
    MyIntField = arg.extract();
    __isset.MyIntField = true;
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<2, _T> arg) {
    MyStringField = arg.extract();
    __isset.MyStringField = true;
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<3, _T> arg) {
    MyDataField = arg.extract();
    __isset.MyDataField = true;
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<4, _T> arg) {
    majorVer = arg.extract();
    __isset.majorVer = true;
  }
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<5, _T> arg) {
    myEnum = arg.extract();
    __isset.myEnum = true;
  }

  MyStruct(MyStruct&&) = default;

  MyStruct(const MyStruct&) = default;

  MyStruct& operator=(MyStruct&&) = default;

  MyStruct& operator=(const MyStruct&) = default;
  void __clear();

  ~MyStruct();

  int64_t MyIntField;
  std::string MyStringField;
   ::cpp2::MyDataItem MyDataField;
  int64_t majorVer;
   ::cpp2::MyEnum myEnum;

  struct __isset {
    bool MyIntField;
    bool MyStringField;
    bool MyDataField;
    bool majorVer;
    bool myEnum;
  } __isset = {};
  bool operator==(const MyStruct& rhs) const;
  bool operator<(const MyStruct& rhs) const;

  int64_t get_MyIntField() const {
    return MyIntField;
  }

  int64_t& set_MyIntField(int64_t MyIntField_) {
    MyIntField = MyIntField_;
    __isset.MyIntField = true;
    return MyIntField;
  }

  const std::string& get_MyStringField() const& {
    return MyStringField;
  }

  std::string get_MyStringField() && {
    return std::move(MyStringField);
  }

  template <typename T_MyStruct_MyStringField_struct_setter = std::string>
  std::string& set_MyStringField(T_MyStruct_MyStringField_struct_setter&& MyStringField_) {
    MyStringField = std::forward<T_MyStruct_MyStringField_struct_setter>(MyStringField_);
    __isset.MyStringField = true;
    return MyStringField;
  }
  const  ::cpp2::MyDataItem& get_MyDataField() const&;
   ::cpp2::MyDataItem get_MyDataField() &&;

  template <typename T_MyStruct_MyDataField_struct_setter =  ::cpp2::MyDataItem>
   ::cpp2::MyDataItem& set_MyDataField(T_MyStruct_MyDataField_struct_setter&& MyDataField_) {
    MyDataField = std::forward<T_MyStruct_MyDataField_struct_setter>(MyDataField_);
    __isset.MyDataField = true;
    return MyDataField;
  }

  int64_t get_majorVer() const {
    return majorVer;
  }

  int64_t& set_majorVer(int64_t majorVer_) {
    majorVer = majorVer_;
    __isset.majorVer = true;
    return majorVer;
  }

   ::cpp2::MyEnum get_myEnum() const {
    return myEnum;
  }

   ::cpp2::MyEnum& set_myEnum( ::cpp2::MyEnum myEnum_) {
    myEnum = myEnum_;
    __isset.myEnum = true;
    return myEnum;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< MyStruct >;
};

void swap(MyStruct& a, MyStruct& b);
extern template void MyStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t MyStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t MyStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void MyStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t MyStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t MyStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

template <class Protocol_>
uint32_t MyStruct::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCurrentPosition().getCurrentPosition();
  readNoXfer(iprot);
  return iprot->getCurrentPosition().getCurrentPosition() - _xferStart;
}

} // cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::cpp2::MyStruct>::clear( ::cpp2::MyStruct* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::MyStruct>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::MyStruct>::write(Protocol* proto,  ::cpp2::MyStruct const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> void Cpp2Ops< ::cpp2::MyStruct>::read(Protocol* proto,  ::cpp2::MyStruct* obj) {
  return obj->readNoXfer(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::MyStruct>::serializedSize(Protocol const* proto,  ::cpp2::MyStruct const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::MyStruct>::serializedSizeZC(Protocol const* proto,  ::cpp2::MyStruct const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace cpp2 {
class MyDataItem final : private apache::thrift::detail::st::ComparisonOperators<MyDataItem> {
 public:

  MyDataItem() {}
  // FragileConstructor for use in initialization lists only.
  MyDataItem(apache::thrift::FragileConstructor);

  MyDataItem(MyDataItem&&) = default;

  MyDataItem(const MyDataItem&) = default;

  MyDataItem& operator=(MyDataItem&&) = default;

  MyDataItem& operator=(const MyDataItem&) = default;
  void __clear();
  bool operator==(const MyDataItem& rhs) const;
  bool operator<(const MyDataItem& rhs) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< MyDataItem >;
};

void swap(MyDataItem& a, MyDataItem& b);
extern template void MyDataItem::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t MyDataItem::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t MyDataItem::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t MyDataItem::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void MyDataItem::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t MyDataItem::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t MyDataItem::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t MyDataItem::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

template <class Protocol_>
uint32_t MyDataItem::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCurrentPosition().getCurrentPosition();
  readNoXfer(iprot);
  return iprot->getCurrentPosition().getCurrentPosition() - _xferStart;
}

} // cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::cpp2::MyDataItem>::clear( ::cpp2::MyDataItem* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::MyDataItem>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::MyDataItem>::write(Protocol* proto,  ::cpp2::MyDataItem const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> void Cpp2Ops< ::cpp2::MyDataItem>::read(Protocol* proto,  ::cpp2::MyDataItem* obj) {
  return obj->readNoXfer(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::MyDataItem>::serializedSize(Protocol const* proto,  ::cpp2::MyDataItem const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::MyDataItem>::serializedSizeZC(Protocol const* proto,  ::cpp2::MyDataItem const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
