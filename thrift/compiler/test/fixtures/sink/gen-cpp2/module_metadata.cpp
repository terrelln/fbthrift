/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/sink/gen-cpp2/module_metadata.h"

namespace apache {
namespace thrift {
namespace detail {
namespace md {
using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;
using ThriftPrimitiveType = ::apache::thrift::metadata::ThriftPrimitiveType;
using ThriftType = ::apache::thrift::metadata::ThriftType;
using ThriftService = ::apache::thrift::metadata::ThriftService;
using ThriftServiceContext = ::apache::thrift::metadata::ThriftServiceContext;
using ThriftFunctionGenerator = void (*)(ThriftMetadata&, ThriftService&);


const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::InitialResponse>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.InitialResponse", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_InitialResponse = res.first->second;
  module_InitialResponse.name_ref() = "module.InitialResponse";
  module_InitialResponse.is_union_ref() = false;
  static const EncodedThriftField
  module_InitialResponse_fields[] = {
    {1, "content", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_InitialResponse_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = f.id;
    field.name_ref() = f.name;
    field.is_optional_ref() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type_ref(), metadata);
    field.structured_annotations_ref() = f.structured_annotations;
    module_InitialResponse.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::FinalResponse>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.FinalResponse", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_FinalResponse = res.first->second;
  module_FinalResponse.name_ref() = "module.FinalResponse";
  module_FinalResponse.is_union_ref() = false;
  static const EncodedThriftField
  module_FinalResponse_fields[] = {
    {1, "content", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_FinalResponse_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = f.id;
    field.name_ref() = f.name;
    field.is_optional_ref() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type_ref(), metadata);
    field.structured_annotations_ref() = f.structured_annotations;
    module_FinalResponse.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::SinkPayload>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.SinkPayload", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_SinkPayload = res.first->second;
  module_SinkPayload.name_ref() = "module.SinkPayload";
  module_SinkPayload.is_union_ref() = false;
  static const EncodedThriftField
  module_SinkPayload_fields[] = {
    {1, "content", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_SinkPayload_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = f.id;
    field.name_ref() = f.name;
    field.is_optional_ref() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type_ref(), metadata);
    field.structured_annotations_ref() = f.structured_annotations;
    module_SinkPayload.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::CompatibleWithKeywordSink>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.CompatibleWithKeywordSink", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_CompatibleWithKeywordSink = res.first->second;
  module_CompatibleWithKeywordSink.name_ref() = "module.CompatibleWithKeywordSink";
  module_CompatibleWithKeywordSink.is_union_ref() = false;
  static const EncodedThriftField
  module_CompatibleWithKeywordSink_fields[] = {
    {1, "sink", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_CompatibleWithKeywordSink_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = f.id;
    field.name_ref() = f.name;
    field.is_optional_ref() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type_ref(), metadata);
    field.structured_annotations_ref() = f.structured_annotations;
    module_CompatibleWithKeywordSink.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::InitialException>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.InitialException", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_InitialException = res.first->second;
  module_InitialException.name_ref() = "module.InitialException";
  module_InitialException.is_union_ref() = false;
  static const EncodedThriftField
  module_InitialException_fields[] = {
    {1, "reason", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_InitialException_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = f.id;
    field.name_ref() = f.name;
    field.is_optional_ref() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type_ref(), metadata);
    field.structured_annotations_ref() = f.structured_annotations;
    module_InitialException.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::SinkException1>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.SinkException1", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_SinkException1 = res.first->second;
  module_SinkException1.name_ref() = "module.SinkException1";
  module_SinkException1.is_union_ref() = false;
  static const EncodedThriftField
  module_SinkException1_fields[] = {
    {1, "reason", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_SinkException1_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = f.id;
    field.name_ref() = f.name;
    field.is_optional_ref() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type_ref(), metadata);
    field.structured_annotations_ref() = f.structured_annotations;
    module_SinkException1.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::SinkException2>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.SinkException2", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_SinkException2 = res.first->second;
  module_SinkException2.name_ref() = "module.SinkException2";
  module_SinkException2.is_union_ref() = false;
  static const EncodedThriftField
  module_SinkException2_fields[] = {
    {1, "reason", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_SinkException2_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = f.id;
    field.name_ref() = f.name;
    field.is_optional_ref() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type_ref(), metadata);
    field.structured_annotations_ref() = f.structured_annotations;
    module_SinkException2.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}

void ExceptionMetadata<::cpp2::InitialException>::gen(ThriftMetadata& metadata) {
  auto res = metadata.exceptions_ref()->emplace("module.InitialException", ::apache::thrift::metadata::ThriftException{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftException& module_InitialException = res.first->second;
  module_InitialException.name_ref() = "module.InitialException";
  static const EncodedThriftField
  module_InitialException_fields[] = {
    {1, "reason", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_InitialException_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = f.id;
    field.name_ref() = f.name;
    field.is_optional_ref() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type_ref(), metadata);
    module_InitialException.fields_ref()->push_back(std::move(field));
  }
}
void ExceptionMetadata<::cpp2::SinkException1>::gen(ThriftMetadata& metadata) {
  auto res = metadata.exceptions_ref()->emplace("module.SinkException1", ::apache::thrift::metadata::ThriftException{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftException& module_SinkException1 = res.first->second;
  module_SinkException1.name_ref() = "module.SinkException1";
  static const EncodedThriftField
  module_SinkException1_fields[] = {
    {1, "reason", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_SinkException1_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = f.id;
    field.name_ref() = f.name;
    field.is_optional_ref() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type_ref(), metadata);
    module_SinkException1.fields_ref()->push_back(std::move(field));
  }
}
void ExceptionMetadata<::cpp2::SinkException2>::gen(ThriftMetadata& metadata) {
  auto res = metadata.exceptions_ref()->emplace("module.SinkException2", ::apache::thrift::metadata::ThriftException{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftException& module_SinkException2 = res.first->second;
  module_SinkException2.name_ref() = "module.SinkException2";
  static const EncodedThriftField
  module_SinkException2_fields[] = {
    {1, "reason", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_SinkException2_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = f.id;
    field.name_ref() = f.name;
    field.is_optional_ref() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type_ref(), metadata);
    module_SinkException2.fields_ref()->push_back(std::move(field));
  }
}
void ServiceMetadata<::cpp2::SinkServiceSvIf>::gen_method(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name_ref() = "method";
  auto func_ret_type = std::make_unique<Sink>(std::make_unique<Struct< ::cpp2::SinkPayload>>("module.SinkPayload"), std::make_unique<Struct< ::cpp2::FinalResponse>>("module.FinalResponse"));
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  func.is_oneway_ref() = false;
  service.functions_ref()->push_back(std::move(func));
}
void ServiceMetadata<::cpp2::SinkServiceSvIf>::gen_methodAndReponse(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name_ref() = "methodAndReponse";
  auto func_ret_type = std::make_unique<Sink>(std::make_unique<Struct< ::cpp2::SinkPayload>>("module.SinkPayload"), std::make_unique<Struct< ::cpp2::FinalResponse>>("module.FinalResponse"), std::make_unique<Struct< ::cpp2::InitialResponse>>("module.InitialResponse"));
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  func.is_oneway_ref() = false;
  service.functions_ref()->push_back(std::move(func));
}
void ServiceMetadata<::cpp2::SinkServiceSvIf>::gen_methodThrow(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name_ref() = "methodThrow";
  auto func_ret_type = std::make_unique<Sink>(std::make_unique<Struct< ::cpp2::SinkPayload>>("module.SinkPayload"), std::make_unique<Struct< ::cpp2::FinalResponse>>("module.FinalResponse"));
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  ::apache::thrift::metadata::ThriftField module_SinkService_methodThrow_ex_1;
  module_SinkService_methodThrow_ex_1.id_ref() = 1;
  module_SinkService_methodThrow_ex_1.name_ref() = "ex";
  module_SinkService_methodThrow_ex_1.is_optional_ref() = false;
  auto module_SinkService_methodThrow_ex_1_type = std::make_unique<Struct< ::cpp2::InitialException>>("module.InitialException");
  module_SinkService_methodThrow_ex_1_type->writeAndGenType(*module_SinkService_methodThrow_ex_1.type_ref(), metadata);
  func.exceptions_ref()->push_back(std::move(module_SinkService_methodThrow_ex_1));
  ExceptionMetadata< ::cpp2::InitialException>::gen(metadata);
  func.is_oneway_ref() = false;
  service.functions_ref()->push_back(std::move(func));
}
void ServiceMetadata<::cpp2::SinkServiceSvIf>::gen_methodSinkThrow(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name_ref() = "methodSinkThrow";
  auto func_ret_type = std::make_unique<Sink>(std::make_unique<Struct< ::cpp2::SinkPayload>>("module.SinkPayload"), std::make_unique<Struct< ::cpp2::FinalResponse>>("module.FinalResponse"));
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  func.is_oneway_ref() = false;
  service.functions_ref()->push_back(std::move(func));
}
void ServiceMetadata<::cpp2::SinkServiceSvIf>::gen_methodFinalThrow(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name_ref() = "methodFinalThrow";
  auto func_ret_type = std::make_unique<Sink>(std::make_unique<Struct< ::cpp2::SinkPayload>>("module.SinkPayload"), std::make_unique<Struct< ::cpp2::FinalResponse>>("module.FinalResponse"));
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  func.is_oneway_ref() = false;
  service.functions_ref()->push_back(std::move(func));
}
void ServiceMetadata<::cpp2::SinkServiceSvIf>::gen_methodBothThrow(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name_ref() = "methodBothThrow";
  auto func_ret_type = std::make_unique<Sink>(std::make_unique<Struct< ::cpp2::SinkPayload>>("module.SinkPayload"), std::make_unique<Struct< ::cpp2::FinalResponse>>("module.FinalResponse"));
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  func.is_oneway_ref() = false;
  service.functions_ref()->push_back(std::move(func));
}
void ServiceMetadata<::cpp2::SinkServiceSvIf>::gen_methodFast(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name_ref() = "methodFast";
  auto func_ret_type = std::make_unique<Sink>(std::make_unique<Struct< ::cpp2::SinkPayload>>("module.SinkPayload"), std::make_unique<Struct< ::cpp2::FinalResponse>>("module.FinalResponse"));
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  func.is_oneway_ref() = false;
  service.functions_ref()->push_back(std::move(func));
}

void ServiceMetadata<::cpp2::SinkServiceSvIf>::gen(::apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  const ::apache::thrift::metadata::ThriftServiceContextRef* self = genRecurse(*response.metadata_ref(), *response.services_ref());
  DCHECK(self != nullptr);
  // TODO(praihan): Remove ThriftServiceContext from response. But in the meantime, we need to fill the field with the result of looking up in ThriftMetadata.
  ::apache::thrift::metadata::ThriftServiceContext context;
  context.module_ref() = *self->module_ref();
  context.service_info_ref() = response.metadata_ref()->services_ref()->at(*self->service_name_ref());
  response.context_ref() = std::move(context);
}

const ThriftServiceContextRef* ServiceMetadata<::cpp2::SinkServiceSvIf>::genRecurse(ThriftMetadata& metadata, std::vector<ThriftServiceContextRef>& services) {
  (void) metadata;
  ::apache::thrift::metadata::ThriftService module_SinkService;
  module_SinkService.name_ref() = "module.SinkService";
  static const ThriftFunctionGenerator functions[] = {
    ServiceMetadata<::cpp2::SinkServiceSvIf>::gen_method,
    ServiceMetadata<::cpp2::SinkServiceSvIf>::gen_methodAndReponse,
    ServiceMetadata<::cpp2::SinkServiceSvIf>::gen_methodThrow,
    ServiceMetadata<::cpp2::SinkServiceSvIf>::gen_methodSinkThrow,
    ServiceMetadata<::cpp2::SinkServiceSvIf>::gen_methodFinalThrow,
    ServiceMetadata<::cpp2::SinkServiceSvIf>::gen_methodBothThrow,
    ServiceMetadata<::cpp2::SinkServiceSvIf>::gen_methodFast,
  };
  for (auto& function_gen : functions) {
    function_gen(metadata, module_SinkService);
  }
  // We need to keep the index around because a reference or iterator could be invalidated.
  auto selfIndex = services.size();
  services.emplace_back();
  ThriftServiceContextRef& context = services[selfIndex];
  metadata.services_ref()->emplace("module.SinkService", std::move(module_SinkService));
  context.service_name_ref() = "module.SinkService";
  ::apache::thrift::metadata::ThriftModuleContext module;
  module.name_ref() = "module";
  context.module_ref() = std::move(module);
  return &context;
}
} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
