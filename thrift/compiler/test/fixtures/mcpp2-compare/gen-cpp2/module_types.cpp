/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/module_types.h"

#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/module_types.tcc"

#include <algorithm>

#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/module_data.h"



namespace some { namespace valid { namespace ns {

bool Empty::operator==(const Empty& /* rhs */) const {
  return true;
}

void swap(Empty& a, Empty& b) {
  using ::std::swap;
  (void)a;
  (void)b;
}

template uint32_t Empty::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Empty::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Empty::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Empty::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Empty::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t Empty::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Empty::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Empty::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}}} // some::valid::ns
namespace apache { namespace thrift {

}} // apache::thrift
namespace some { namespace valid { namespace ns {

void MyStruct::__clear() {
  MyBoolField = 0;
  MyIntField = 12LL;
  MyStringField = apache::thrift::StringTraits< std::string>::fromStringLiteral("test");
  MyStringField2 = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  __isset.__clear();
}

bool MyStruct::operator==(const MyStruct& rhs) const {
  if (!((MyBoolField == rhs.MyBoolField))) {
    return false;
  }
  if (!((MyIntField == rhs.MyIntField))) {
    return false;
  }
  if (!((MyStringField == rhs.MyStringField))) {
    return false;
  }
  if (!((MyStringField2 == rhs.MyStringField2))) {
    return false;
  }
  return true;
}

void swap(MyStruct& a, MyStruct& b) {
  using ::std::swap;
  swap(a.MyBoolField, b.MyBoolField);
  swap(a.MyIntField, b.MyIntField);
  swap(a.MyStringField, b.MyStringField);
  swap(a.MyStringField2, b.MyStringField2);
  swap(a.__isset, b.__isset);
}

template uint32_t MyStruct::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t MyStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyStruct::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t MyStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}}} // some::valid::ns
namespace apache { namespace thrift {

}} // apache::thrift
namespace some { namespace valid { namespace ns {

void containerStruct::__clear() {
  fieldA = 0;
  fieldB.clear();
  fieldC.clear();
  __isset.__clear();
}

bool containerStruct::operator==(const containerStruct& rhs) const {
  if (!((fieldA == rhs.fieldA))) {
    return false;
  }
  if (!((fieldB == rhs.fieldB))) {
    return false;
  }
  if (!((fieldC == rhs.fieldC))) {
    return false;
  }
  return true;
}

const std::set<int32_t>& containerStruct::get_fieldB() const& {
  return fieldB;
}

std::set<int32_t> containerStruct::get_fieldB() && {
  return std::move(fieldB);
}

const std::set<std::set<std::set<std::string>>>& containerStruct::get_fieldC() const& {
  return fieldC;
}

std::set<std::set<std::set<std::string>>> containerStruct::get_fieldC() && {
  return std::move(fieldC);
}

void swap(containerStruct& a, containerStruct& b) {
  using ::std::swap;
  swap(a.fieldA, b.fieldA);
  swap(a.fieldB, b.fieldB);
  swap(a.fieldC, b.fieldC);
  swap(a.__isset, b.__isset);
}

template uint32_t containerStruct::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t containerStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t containerStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t containerStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t containerStruct::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t containerStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t containerStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t containerStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}}} // some::valid::ns
namespace apache { namespace thrift {

}} // apache::thrift
namespace some { namespace valid { namespace ns {

}}} // some::valid::ns
