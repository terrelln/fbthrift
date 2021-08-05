#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

cimport cython
from typing import AsyncIterator
from cpython.version cimport PY_VERSION_HEX
from libc.stdint cimport (
    int8_t as cint8_t,
    int16_t as cint16_t,
    int32_t as cint32_t,
    int64_t as cint64_t,
)
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr, make_unique
from libcpp.string cimport string
from libcpp cimport bool as cbool
from cpython cimport bool as pbool
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap
from libcpp.utility cimport move as cmove
from libcpp.pair cimport pair
from cython.operator cimport dereference as deref
from cpython.ref cimport PyObject
from thrift.py3.exceptions cimport (
    cTApplicationException,
    ApplicationError as __ApplicationError,
    cTApplicationExceptionType__UNKNOWN)
from thrift.py3.server cimport ServiceInterface, RequestContext, Cpp2RequestContext
from thrift.py3.server import RequestContext, pass_context
from folly cimport (
  cFollyPromise,
  cFollyUnit,
  c_unit,
)
from thrift.py3.common cimport (
    cThriftServiceMetadataResponse as __fbthrift_cThriftServiceMetadataResponse,
    ServiceMetadata,
    MetadataBox as __MetadataBox,
)

if PY_VERSION_HEX >= 0x030702F0:  # 3.7.2 Final
    from thrift.py3.server cimport THRIFT_REQUEST_CONTEXT as __THRIFT_REQUEST_CONTEXT

cimport folly.futures
from folly.executor cimport get_executor
cimport folly.iobuf as _fbthrift_iobuf
import folly.iobuf as _fbthrift_iobuf
from folly.iobuf cimport move as move_iobuf
from folly.memory cimport to_shared_ptr as __to_shared_ptr

cimport module.types as _module_types
import module.types as _module_types

cimport module.services_reflection as _services_reflection

import asyncio
import functools
import sys
import traceback
import types as _py_types

from module.services_wrapper cimport cServiceInterface



@cython.auto_pickle(False)
cdef class Promise_cint32_t:
    cdef cFollyPromise[cint32_t] cPromise

    @staticmethod
    cdef create(cFollyPromise[cint32_t] cPromise):
        cdef Promise_cint32_t inst = Promise_cint32_t.__new__(Promise_cint32_t)
        inst.cPromise = cmove(cPromise)
        return inst

cdef object _Service_annotations = _py_types.MappingProxyType({
})


@cython.auto_pickle(False)
cdef class ServiceInterface(
    ServiceInterface
):
    annotations = _Service_annotations

    def __cinit__(self):
        self._cpp_obj = cServiceInterface(
            <PyObject *> self,
            get_executor()
        )

    @staticmethod
    def pass_context_func(fn):
        return pass_context(fn)

    async def func(
            self,
            arg1,
            arg2):
        raise NotImplementedError("async def func is not implemented")

    @classmethod
    def __get_reflection__(cls):
        return _services_reflection.get_reflection__Service(for_clients=False)

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftServiceMetadataResponse response
        ServiceMetadata[_services_reflection.cServiceSvIf].gen(response)
        return __MetadataBox.box(cmove(deref(response.metadata_ref())))

    @staticmethod
    def __get_thrift_name__():
        return "module.Service"



cdef api void call_cy_Service_func(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[cint32_t] cPromise,
    unique_ptr[string] arg1,
    unique_ptr[_module_types.cFoo] arg2
):
    cdef Promise_cint32_t __promise = Promise_cint32_t.create(cmove(cPromise))
    arg_arg1 = (deref(arg1)).data().decode('UTF-8')
    arg_arg2 = _module_types.Foo.create(shared_ptr[_module_types.cFoo](arg2.release()))
    __context = RequestContext.create(ctx)
    if PY_VERSION_HEX >= 0x030702F0:  # 3.7.2 Final
        __context_token = __THRIFT_REQUEST_CONTEXT.set(__context)
        __context = None
    asyncio.get_event_loop().create_task(
        Service_func_coro(
            self,
            __context,
            __promise,
            arg_arg1,
            arg_arg2
        )
    )
    if PY_VERSION_HEX >= 0x030702F0:  # 3.7.2 Final
        __THRIFT_REQUEST_CONTEXT.reset(__context_token)

async def Service_func_coro(
    object self,
    object ctx,
    Promise_cint32_t promise,
    arg1,
    arg2
):
    try:
        if ctx and getattr(self.func, "pass_context", False):
            result = await self.func(ctx,
                      arg1,
                      arg2)
        else:
            result = await self.func(
                      arg1,
                      arg2)
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler func:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(<cint32_t> result)

