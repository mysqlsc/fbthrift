/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_data_h.h>

#include "thrift/compiler/test/fixtures/any/gen-cpp2/module_types.h"

namespace apache { namespace thrift {


template <> struct TEnumDataStorage<::cpp2::MyUnion::Type> {
  using type = ::cpp2::MyUnion::Type;
  static constexpr const std::size_t size = 1;
  static constexpr const std::array<type, size> values = {{
    type::myString,
  }};
  static constexpr const std::array<folly::StringPiece, size> names = {{
    "myString",
  }};
};

}} // apache::thrift