/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "module_types.h"

#include "module_types.tcc"

#include <algorithm>

namespace cpp2 {

template uint32_t MyField::read<apache::thrift::BinaryProtocolReader>(apache::thrift::BinaryProtocolReader*);
template uint32_t MyField::write<apache::thrift::BinaryProtocolWriter>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyField::serializedSize<apache::thrift::BinaryProtocolWriter>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyField::serializedSizeZC<apache::thrift::BinaryProtocolWriter>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyField::read<apache::thrift::CompactProtocolReader>(apache::thrift::CompactProtocolReader*);
template uint32_t MyField::write<apache::thrift::CompactProtocolWriter>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t MyField::serializedSize<apache::thrift::CompactProtocolWriter>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t MyField::serializedSizeZC<apache::thrift::CompactProtocolWriter>(apache::thrift::CompactProtocolWriter*) const;

void MyField::__clear() {
  opt_value = 0;
  value = 0;
  req_value = 0;
  __isset.__clear();
}

bool MyField::operator==(const MyField& rhs) const {
  if (__isset.opt_value != rhs.__isset.opt_value) {
    return false;
  }
  else if (__isset.opt_value && !((opt_value == rhs.opt_value))) {
    return false;
  }
  if (!((value == rhs.value))) {
    return false;
  }
  if (!((req_value == rhs.req_value))) {
    return false;
  }
  return true;
}

void swap(MyField& a, MyField& b) {
  using ::std::swap;
  swap(a.opt_value, b.opt_value);
  swap(a.value, b.value);
  swap(a.req_value, b.req_value);
  swap(a.__isset, b.__isset);
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

template uint32_t MyStruct::read<apache::thrift::BinaryProtocolReader>(apache::thrift::BinaryProtocolReader*);
template uint32_t MyStruct::write<apache::thrift::BinaryProtocolWriter>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<apache::thrift::BinaryProtocolWriter>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyStruct::serializedSizeZC<apache::thrift::BinaryProtocolWriter>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyStruct::read<apache::thrift::CompactProtocolReader>(apache::thrift::CompactProtocolReader*);
template uint32_t MyStruct::write<apache::thrift::CompactProtocolWriter>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<apache::thrift::CompactProtocolWriter>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t MyStruct::serializedSizeZC<apache::thrift::CompactProtocolWriter>(apache::thrift::CompactProtocolWriter*) const;

MyStruct::MyStruct(const MyStruct& src0) {
  if (src0.opt_ref) opt_ref.reset(new  ::cpp2::MyField(*src0.opt_ref));
  if (src0.ref) ref.reset(new  ::cpp2::MyField(*src0.ref));
  if (src0.req_ref) req_ref.reset(new  ::cpp2::MyField(*src0.req_ref));
}

MyStruct& MyStruct::operator=(const MyStruct& src1) {
  MyStruct tmp2(src1);
  swap(*this, tmp2);
  return *this;
}

void MyStruct::__clear() {
  if (opt_ref) ::apache::thrift::Cpp2Ops<  ::cpp2::MyField>::clear(opt_ref.get());
  if (ref) ::apache::thrift::Cpp2Ops<  ::cpp2::MyField>::clear(ref.get());
  if (req_ref) ::apache::thrift::Cpp2Ops<  ::cpp2::MyField>::clear(req_ref.get());
  __isset.__clear();
}

bool MyStruct::operator==(const MyStruct& rhs) const {
  if (!(((opt_ref && rhs.opt_ref && *opt_ref == *rhs.opt_ref) ||(!opt_ref && !rhs.opt_ref)))) {
    return false;
  }
  if (!(((ref && rhs.ref && *ref == *rhs.ref) ||(!ref && !rhs.ref)))) {
    return false;
  }
  if (!(((req_ref && rhs.req_ref && *req_ref == *rhs.req_ref) ||(!req_ref && !rhs.req_ref)))) {
    return false;
  }
  return true;
}

void swap(MyStruct& a, MyStruct& b) {
  using ::std::swap;
  swap(a.opt_ref, b.opt_ref);
  swap(a.ref, b.ref);
  swap(a.req_ref, b.req_ref);
  swap(a.__isset, b.__isset);
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

} // cpp2