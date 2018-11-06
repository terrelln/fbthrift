#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from folly.iobuf import IOBuf as __IOBuf
import typing as _typing
from thrift.py3.server import RequestContext, ServiceInterface
from abc import abstractmethod, ABCMeta

import module.types as _module_types

_NestedContainersInterfaceT = _typing.TypeVar('_NestedContainersInterfaceT', bound='NestedContainersInterface')


class NestedContainersInterface(
    ServiceInterface
    , metaclass=ABCMeta
):

    @staticmethod
    def pass_context_mapList(
        fn: _typing.Callable[
                [_NestedContainersInterfaceT, RequestContext, _typing.Mapping[int, _typing.Sequence[int]]],
                _typing.Coroutine[_typing.Any, _typing.Any, None]
        ]
    ) -> _typing.Callable[
        [_NestedContainersInterfaceT, _typing.Mapping[int, _typing.Sequence[int]]],
        _typing.Coroutine[_typing.Any, _typing.Any, None]
    ]: ...

    @abstractmethod
    async def mapList(
        self,
        foo: _typing.Mapping[int, _typing.Sequence[int]]
    ) -> None: ...

    @staticmethod
    def pass_context_mapSet(
        fn: _typing.Callable[
                [_NestedContainersInterfaceT, RequestContext, _typing.Mapping[int, _typing.AbstractSet[int]]],
                _typing.Coroutine[_typing.Any, _typing.Any, None]
        ]
    ) -> _typing.Callable[
        [_NestedContainersInterfaceT, _typing.Mapping[int, _typing.AbstractSet[int]]],
        _typing.Coroutine[_typing.Any, _typing.Any, None]
    ]: ...

    @abstractmethod
    async def mapSet(
        self,
        foo: _typing.Mapping[int, _typing.AbstractSet[int]]
    ) -> None: ...

    @staticmethod
    def pass_context_listMap(
        fn: _typing.Callable[
                [_NestedContainersInterfaceT, RequestContext, _typing.Sequence[_typing.Mapping[int, int]]],
                _typing.Coroutine[_typing.Any, _typing.Any, None]
        ]
    ) -> _typing.Callable[
        [_NestedContainersInterfaceT, _typing.Sequence[_typing.Mapping[int, int]]],
        _typing.Coroutine[_typing.Any, _typing.Any, None]
    ]: ...

    @abstractmethod
    async def listMap(
        self,
        foo: _typing.Sequence[_typing.Mapping[int, int]]
    ) -> None: ...

    @staticmethod
    def pass_context_listSet(
        fn: _typing.Callable[
                [_NestedContainersInterfaceT, RequestContext, _typing.Sequence[_typing.AbstractSet[int]]],
                _typing.Coroutine[_typing.Any, _typing.Any, None]
        ]
    ) -> _typing.Callable[
        [_NestedContainersInterfaceT, _typing.Sequence[_typing.AbstractSet[int]]],
        _typing.Coroutine[_typing.Any, _typing.Any, None]
    ]: ...

    @abstractmethod
    async def listSet(
        self,
        foo: _typing.Sequence[_typing.AbstractSet[int]]
    ) -> None: ...

    @staticmethod
    def pass_context_turtles(
        fn: _typing.Callable[
                [_NestedContainersInterfaceT, RequestContext, _typing.Sequence[_typing.Sequence[_typing.Mapping[int, _typing.Mapping[int, _typing.AbstractSet[int]]]]]],
                _typing.Coroutine[_typing.Any, _typing.Any, None]
        ]
    ) -> _typing.Callable[
        [_NestedContainersInterfaceT, _typing.Sequence[_typing.Sequence[_typing.Mapping[int, _typing.Mapping[int, _typing.AbstractSet[int]]]]]],
        _typing.Coroutine[_typing.Any, _typing.Any, None]
    ]: ...

    @abstractmethod
    async def turtles(
        self,
        foo: _typing.Sequence[_typing.Sequence[_typing.Mapping[int, _typing.Mapping[int, _typing.AbstractSet[int]]]]]
    ) -> None: ...
    pass


