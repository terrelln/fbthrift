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

_SimpleServiceInterfaceT = _typing.TypeVar('_SimpleServiceInterfaceT', bound='SimpleServiceInterface')


class SimpleServiceInterface(
    ServiceInterface
    , metaclass=ABCMeta
):

    @staticmethod
    def pass_context_get_five(
        fn: _typing.Callable[
                [_SimpleServiceInterfaceT, RequestContext],
                _typing.Coroutine[_typing.Any, _typing.Any, int]
        ]
    ) -> _typing.Callable[
        [_SimpleServiceInterfaceT],
        _typing.Coroutine[_typing.Any, _typing.Any, int]
    ]: ...

    @abstractmethod
    async def get_five(
        self
    ) -> int: ...

    @staticmethod
    def pass_context_add_five(
        fn: _typing.Callable[
                [_SimpleServiceInterfaceT, RequestContext, int],
                _typing.Coroutine[_typing.Any, _typing.Any, int]
        ]
    ) -> _typing.Callable[
        [_SimpleServiceInterfaceT, int],
        _typing.Coroutine[_typing.Any, _typing.Any, int]
    ]: ...

    @abstractmethod
    async def add_five(
        self,
        num: int
    ) -> int: ...

    @staticmethod
    def pass_context_do_nothing(
        fn: _typing.Callable[
                [_SimpleServiceInterfaceT, RequestContext],
                _typing.Coroutine[_typing.Any, _typing.Any, None]
        ]
    ) -> _typing.Callable[
        [_SimpleServiceInterfaceT],
        _typing.Coroutine[_typing.Any, _typing.Any, None]
    ]: ...

    @abstractmethod
    async def do_nothing(
        self
    ) -> None: ...

    @staticmethod
    def pass_context_concat(
        fn: _typing.Callable[
                [_SimpleServiceInterfaceT, RequestContext, str, str],
                _typing.Coroutine[_typing.Any, _typing.Any, str]
        ]
    ) -> _typing.Callable[
        [_SimpleServiceInterfaceT, str, str],
        _typing.Coroutine[_typing.Any, _typing.Any, str]
    ]: ...

    @abstractmethod
    async def concat(
        self,
        first: str,
        second: str
    ) -> str: ...

    @staticmethod
    def pass_context_get_value(
        fn: _typing.Callable[
                [_SimpleServiceInterfaceT, RequestContext, _module_types.SimpleStruct],
                _typing.Coroutine[_typing.Any, _typing.Any, int]
        ]
    ) -> _typing.Callable[
        [_SimpleServiceInterfaceT, _module_types.SimpleStruct],
        _typing.Coroutine[_typing.Any, _typing.Any, int]
    ]: ...

    @abstractmethod
    async def get_value(
        self,
        simple_struct: _module_types.SimpleStruct
    ) -> int: ...

    @staticmethod
    def pass_context_negate(
        fn: _typing.Callable[
                [_SimpleServiceInterfaceT, RequestContext, bool],
                _typing.Coroutine[_typing.Any, _typing.Any, bool]
        ]
    ) -> _typing.Callable[
        [_SimpleServiceInterfaceT, bool],
        _typing.Coroutine[_typing.Any, _typing.Any, bool]
    ]: ...

    @abstractmethod
    async def negate(
        self,
        input: bool
    ) -> bool: ...

    @staticmethod
    def pass_context_tiny(
        fn: _typing.Callable[
                [_SimpleServiceInterfaceT, RequestContext, int],
                _typing.Coroutine[_typing.Any, _typing.Any, int]
        ]
    ) -> _typing.Callable[
        [_SimpleServiceInterfaceT, int],
        _typing.Coroutine[_typing.Any, _typing.Any, int]
    ]: ...

    @abstractmethod
    async def tiny(
        self,
        input: int
    ) -> int: ...

    @staticmethod
    def pass_context_small(
        fn: _typing.Callable[
                [_SimpleServiceInterfaceT, RequestContext, int],
                _typing.Coroutine[_typing.Any, _typing.Any, int]
        ]
    ) -> _typing.Callable[
        [_SimpleServiceInterfaceT, int],
        _typing.Coroutine[_typing.Any, _typing.Any, int]
    ]: ...

    @abstractmethod
    async def small(
        self,
        input: int
    ) -> int: ...

    @staticmethod
    def pass_context_big(
        fn: _typing.Callable[
                [_SimpleServiceInterfaceT, RequestContext, int],
                _typing.Coroutine[_typing.Any, _typing.Any, int]
        ]
    ) -> _typing.Callable[
        [_SimpleServiceInterfaceT, int],
        _typing.Coroutine[_typing.Any, _typing.Any, int]
    ]: ...

    @abstractmethod
    async def big(
        self,
        input: int
    ) -> int: ...

    @staticmethod
    def pass_context_two(
        fn: _typing.Callable[
                [_SimpleServiceInterfaceT, RequestContext, float],
                _typing.Coroutine[_typing.Any, _typing.Any, float]
        ]
    ) -> _typing.Callable[
        [_SimpleServiceInterfaceT, float],
        _typing.Coroutine[_typing.Any, _typing.Any, float]
    ]: ...

    @abstractmethod
    async def two(
        self,
        input: float
    ) -> float: ...

    @staticmethod
    def pass_context_expected_exception(
        fn: _typing.Callable[
                [_SimpleServiceInterfaceT, RequestContext],
                _typing.Coroutine[_typing.Any, _typing.Any, None]
        ]
    ) -> _typing.Callable[
        [_SimpleServiceInterfaceT],
        _typing.Coroutine[_typing.Any, _typing.Any, None]
    ]: ...

    @abstractmethod
    async def expected_exception(
        self
    ) -> None: ...

    @staticmethod
    def pass_context_unexpected_exception(
        fn: _typing.Callable[
                [_SimpleServiceInterfaceT, RequestContext],
                _typing.Coroutine[_typing.Any, _typing.Any, int]
        ]
    ) -> _typing.Callable[
        [_SimpleServiceInterfaceT],
        _typing.Coroutine[_typing.Any, _typing.Any, int]
    ]: ...

    @abstractmethod
    async def unexpected_exception(
        self
    ) -> int: ...

    @staticmethod
    def pass_context_sum_i16_list(
        fn: _typing.Callable[
                [_SimpleServiceInterfaceT, RequestContext, _typing.Sequence[int]],
                _typing.Coroutine[_typing.Any, _typing.Any, int]
        ]
    ) -> _typing.Callable[
        [_SimpleServiceInterfaceT, _typing.Sequence[int]],
        _typing.Coroutine[_typing.Any, _typing.Any, int]
    ]: ...

    @abstractmethod
    async def sum_i16_list(
        self,
        numbers: _typing.Sequence[int]
    ) -> int: ...

    @staticmethod
    def pass_context_sum_i32_list(
        fn: _typing.Callable[
                [_SimpleServiceInterfaceT, RequestContext, _typing.Sequence[int]],
                _typing.Coroutine[_typing.Any, _typing.Any, int]
        ]
    ) -> _typing.Callable[
        [_SimpleServiceInterfaceT, _typing.Sequence[int]],
        _typing.Coroutine[_typing.Any, _typing.Any, int]
    ]: ...

    @abstractmethod
    async def sum_i32_list(
        self,
        numbers: _typing.Sequence[int]
    ) -> int: ...

    @staticmethod
    def pass_context_sum_i64_list(
        fn: _typing.Callable[
                [_SimpleServiceInterfaceT, RequestContext, _typing.Sequence[int]],
                _typing.Coroutine[_typing.Any, _typing.Any, int]
        ]
    ) -> _typing.Callable[
        [_SimpleServiceInterfaceT, _typing.Sequence[int]],
        _typing.Coroutine[_typing.Any, _typing.Any, int]
    ]: ...

    @abstractmethod
    async def sum_i64_list(
        self,
        numbers: _typing.Sequence[int]
    ) -> int: ...

    @staticmethod
    def pass_context_concat_many(
        fn: _typing.Callable[
                [_SimpleServiceInterfaceT, RequestContext, _typing.Sequence[str]],
                _typing.Coroutine[_typing.Any, _typing.Any, str]
        ]
    ) -> _typing.Callable[
        [_SimpleServiceInterfaceT, _typing.Sequence[str]],
        _typing.Coroutine[_typing.Any, _typing.Any, str]
    ]: ...

    @abstractmethod
    async def concat_many(
        self,
        words: _typing.Sequence[str]
    ) -> str: ...

    @staticmethod
    def pass_context_count_structs(
        fn: _typing.Callable[
                [_SimpleServiceInterfaceT, RequestContext, _typing.Sequence[_module_types.SimpleStruct]],
                _typing.Coroutine[_typing.Any, _typing.Any, int]
        ]
    ) -> _typing.Callable[
        [_SimpleServiceInterfaceT, _typing.Sequence[_module_types.SimpleStruct]],
        _typing.Coroutine[_typing.Any, _typing.Any, int]
    ]: ...

    @abstractmethod
    async def count_structs(
        self,
        items: _typing.Sequence[_module_types.SimpleStruct]
    ) -> int: ...

    @staticmethod
    def pass_context_sum_set(
        fn: _typing.Callable[
                [_SimpleServiceInterfaceT, RequestContext, _typing.AbstractSet[int]],
                _typing.Coroutine[_typing.Any, _typing.Any, int]
        ]
    ) -> _typing.Callable[
        [_SimpleServiceInterfaceT, _typing.AbstractSet[int]],
        _typing.Coroutine[_typing.Any, _typing.Any, int]
    ]: ...

    @abstractmethod
    async def sum_set(
        self,
        numbers: _typing.AbstractSet[int]
    ) -> int: ...

    @staticmethod
    def pass_context_contains_word(
        fn: _typing.Callable[
                [_SimpleServiceInterfaceT, RequestContext, _typing.AbstractSet[str], str],
                _typing.Coroutine[_typing.Any, _typing.Any, bool]
        ]
    ) -> _typing.Callable[
        [_SimpleServiceInterfaceT, _typing.AbstractSet[str], str],
        _typing.Coroutine[_typing.Any, _typing.Any, bool]
    ]: ...

    @abstractmethod
    async def contains_word(
        self,
        words: _typing.AbstractSet[str],
        word: str
    ) -> bool: ...

    @staticmethod
    def pass_context_get_map_value(
        fn: _typing.Callable[
                [_SimpleServiceInterfaceT, RequestContext, _typing.Mapping[str, str], str],
                _typing.Coroutine[_typing.Any, _typing.Any, str]
        ]
    ) -> _typing.Callable[
        [_SimpleServiceInterfaceT, _typing.Mapping[str, str], str],
        _typing.Coroutine[_typing.Any, _typing.Any, str]
    ]: ...

    @abstractmethod
    async def get_map_value(
        self,
        words: _typing.Mapping[str, str],
        key: str
    ) -> str: ...

    @staticmethod
    def pass_context_map_length(
        fn: _typing.Callable[
                [_SimpleServiceInterfaceT, RequestContext, _typing.Mapping[str, _module_types.SimpleStruct]],
                _typing.Coroutine[_typing.Any, _typing.Any, int]
        ]
    ) -> _typing.Callable[
        [_SimpleServiceInterfaceT, _typing.Mapping[str, _module_types.SimpleStruct]],
        _typing.Coroutine[_typing.Any, _typing.Any, int]
    ]: ...

    @abstractmethod
    async def map_length(
        self,
        items: _typing.Mapping[str, _module_types.SimpleStruct]
    ) -> int: ...

    @staticmethod
    def pass_context_sum_map_values(
        fn: _typing.Callable[
                [_SimpleServiceInterfaceT, RequestContext, _typing.Mapping[str, int]],
                _typing.Coroutine[_typing.Any, _typing.Any, int]
        ]
    ) -> _typing.Callable[
        [_SimpleServiceInterfaceT, _typing.Mapping[str, int]],
        _typing.Coroutine[_typing.Any, _typing.Any, int]
    ]: ...

    @abstractmethod
    async def sum_map_values(
        self,
        items: _typing.Mapping[str, int]
    ) -> int: ...

    @staticmethod
    def pass_context_complex_sum_i32(
        fn: _typing.Callable[
                [_SimpleServiceInterfaceT, RequestContext, _module_types.ComplexStruct],
                _typing.Coroutine[_typing.Any, _typing.Any, int]
        ]
    ) -> _typing.Callable[
        [_SimpleServiceInterfaceT, _module_types.ComplexStruct],
        _typing.Coroutine[_typing.Any, _typing.Any, int]
    ]: ...

    @abstractmethod
    async def complex_sum_i32(
        self,
        counter: _module_types.ComplexStruct
    ) -> int: ...

    @staticmethod
    def pass_context_repeat_name(
        fn: _typing.Callable[
                [_SimpleServiceInterfaceT, RequestContext, _module_types.ComplexStruct],
                _typing.Coroutine[_typing.Any, _typing.Any, str]
        ]
    ) -> _typing.Callable[
        [_SimpleServiceInterfaceT, _module_types.ComplexStruct],
        _typing.Coroutine[_typing.Any, _typing.Any, str]
    ]: ...

    @abstractmethod
    async def repeat_name(
        self,
        counter: _module_types.ComplexStruct
    ) -> str: ...

    @staticmethod
    def pass_context_get_struct(
        fn: _typing.Callable[
                [_SimpleServiceInterfaceT, RequestContext],
                _typing.Coroutine[_typing.Any, _typing.Any, _module_types.SimpleStruct]
        ]
    ) -> _typing.Callable[
        [_SimpleServiceInterfaceT],
        _typing.Coroutine[_typing.Any, _typing.Any, _module_types.SimpleStruct]
    ]: ...

    @abstractmethod
    async def get_struct(
        self
    ) -> _module_types.SimpleStruct: ...

    @staticmethod
    def pass_context_fib(
        fn: _typing.Callable[
                [_SimpleServiceInterfaceT, RequestContext, int],
                _typing.Coroutine[_typing.Any, _typing.Any, _typing.Sequence[int]]
        ]
    ) -> _typing.Callable[
        [_SimpleServiceInterfaceT, int],
        _typing.Coroutine[_typing.Any, _typing.Any, _typing.Sequence[int]]
    ]: ...

    @abstractmethod
    async def fib(
        self,
        n: int
    ) -> _typing.Sequence[int]: ...

    @staticmethod
    def pass_context_unique_words(
        fn: _typing.Callable[
                [_SimpleServiceInterfaceT, RequestContext, _typing.Sequence[str]],
                _typing.Coroutine[_typing.Any, _typing.Any, _typing.AbstractSet[str]]
        ]
    ) -> _typing.Callable[
        [_SimpleServiceInterfaceT, _typing.Sequence[str]],
        _typing.Coroutine[_typing.Any, _typing.Any, _typing.AbstractSet[str]]
    ]: ...

    @abstractmethod
    async def unique_words(
        self,
        words: _typing.Sequence[str]
    ) -> _typing.AbstractSet[str]: ...

    @staticmethod
    def pass_context_words_count(
        fn: _typing.Callable[
                [_SimpleServiceInterfaceT, RequestContext, _typing.Sequence[str]],
                _typing.Coroutine[_typing.Any, _typing.Any, _typing.Mapping[str, int]]
        ]
    ) -> _typing.Callable[
        [_SimpleServiceInterfaceT, _typing.Sequence[str]],
        _typing.Coroutine[_typing.Any, _typing.Any, _typing.Mapping[str, int]]
    ]: ...

    @abstractmethod
    async def words_count(
        self,
        words: _typing.Sequence[str]
    ) -> _typing.Mapping[str, int]: ...

    @staticmethod
    def pass_context_set_enum(
        fn: _typing.Callable[
                [_SimpleServiceInterfaceT, RequestContext, _module_types.AnEnum],
                _typing.Coroutine[_typing.Any, _typing.Any, _module_types.AnEnum]
        ]
    ) -> _typing.Callable[
        [_SimpleServiceInterfaceT, _module_types.AnEnum],
        _typing.Coroutine[_typing.Any, _typing.Any, _module_types.AnEnum]
    ]: ...

    @abstractmethod
    async def set_enum(
        self,
        in_enum: _module_types.AnEnum
    ) -> _module_types.AnEnum: ...

    @staticmethod
    def pass_context_list_of_lists(
        fn: _typing.Callable[
                [_SimpleServiceInterfaceT, RequestContext, int, int],
                _typing.Coroutine[_typing.Any, _typing.Any, _typing.Sequence[_typing.Sequence[int]]]
        ]
    ) -> _typing.Callable[
        [_SimpleServiceInterfaceT, int, int],
        _typing.Coroutine[_typing.Any, _typing.Any, _typing.Sequence[_typing.Sequence[int]]]
    ]: ...

    @abstractmethod
    async def list_of_lists(
        self,
        num_lists: int,
        num_items: int
    ) -> _typing.Sequence[_typing.Sequence[int]]: ...

    @staticmethod
    def pass_context_word_character_frequency(
        fn: _typing.Callable[
                [_SimpleServiceInterfaceT, RequestContext, str],
                _typing.Coroutine[_typing.Any, _typing.Any, _typing.Mapping[str, _typing.Mapping[str, int]]]
        ]
    ) -> _typing.Callable[
        [_SimpleServiceInterfaceT, str],
        _typing.Coroutine[_typing.Any, _typing.Any, _typing.Mapping[str, _typing.Mapping[str, int]]]
    ]: ...

    @abstractmethod
    async def word_character_frequency(
        self,
        sentence: str
    ) -> _typing.Mapping[str, _typing.Mapping[str, int]]: ...

    @staticmethod
    def pass_context_list_of_sets(
        fn: _typing.Callable[
                [_SimpleServiceInterfaceT, RequestContext, str],
                _typing.Coroutine[_typing.Any, _typing.Any, _typing.Sequence[_typing.AbstractSet[str]]]
        ]
    ) -> _typing.Callable[
        [_SimpleServiceInterfaceT, str],
        _typing.Coroutine[_typing.Any, _typing.Any, _typing.Sequence[_typing.AbstractSet[str]]]
    ]: ...

    @abstractmethod
    async def list_of_sets(
        self,
        some_words: str
    ) -> _typing.Sequence[_typing.AbstractSet[str]]: ...

    @staticmethod
    def pass_context_nested_map_argument(
        fn: _typing.Callable[
                [_SimpleServiceInterfaceT, RequestContext, _typing.Mapping[str, _typing.Sequence[_module_types.SimpleStruct]]],
                _typing.Coroutine[_typing.Any, _typing.Any, int]
        ]
    ) -> _typing.Callable[
        [_SimpleServiceInterfaceT, _typing.Mapping[str, _typing.Sequence[_module_types.SimpleStruct]]],
        _typing.Coroutine[_typing.Any, _typing.Any, int]
    ]: ...

    @abstractmethod
    async def nested_map_argument(
        self,
        struct_map: _typing.Mapping[str, _typing.Sequence[_module_types.SimpleStruct]]
    ) -> int: ...

    @staticmethod
    def pass_context_make_sentence(
        fn: _typing.Callable[
                [_SimpleServiceInterfaceT, RequestContext, _typing.Sequence[_typing.Sequence[str]]],
                _typing.Coroutine[_typing.Any, _typing.Any, str]
        ]
    ) -> _typing.Callable[
        [_SimpleServiceInterfaceT, _typing.Sequence[_typing.Sequence[str]]],
        _typing.Coroutine[_typing.Any, _typing.Any, str]
    ]: ...

    @abstractmethod
    async def make_sentence(
        self,
        word_chars: _typing.Sequence[_typing.Sequence[str]]
    ) -> str: ...

    @staticmethod
    def pass_context_get_union(
        fn: _typing.Callable[
                [_SimpleServiceInterfaceT, RequestContext, _typing.Sequence[_typing.AbstractSet[int]]],
                _typing.Coroutine[_typing.Any, _typing.Any, _typing.AbstractSet[int]]
        ]
    ) -> _typing.Callable[
        [_SimpleServiceInterfaceT, _typing.Sequence[_typing.AbstractSet[int]]],
        _typing.Coroutine[_typing.Any, _typing.Any, _typing.AbstractSet[int]]
    ]: ...

    @abstractmethod
    async def get_union(
        self,
        sets: _typing.Sequence[_typing.AbstractSet[int]]
    ) -> _typing.AbstractSet[int]: ...

    @staticmethod
    def pass_context_get_keys(
        fn: _typing.Callable[
                [_SimpleServiceInterfaceT, RequestContext, _typing.Sequence[_typing.Mapping[str, str]]],
                _typing.Coroutine[_typing.Any, _typing.Any, _typing.AbstractSet[str]]
        ]
    ) -> _typing.Callable[
        [_SimpleServiceInterfaceT, _typing.Sequence[_typing.Mapping[str, str]]],
        _typing.Coroutine[_typing.Any, _typing.Any, _typing.AbstractSet[str]]
    ]: ...

    @abstractmethod
    async def get_keys(
        self,
        string_map: _typing.Sequence[_typing.Mapping[str, str]]
    ) -> _typing.AbstractSet[str]: ...

    @staticmethod
    def pass_context_lookup_double(
        fn: _typing.Callable[
                [_SimpleServiceInterfaceT, RequestContext, int],
                _typing.Coroutine[_typing.Any, _typing.Any, float]
        ]
    ) -> _typing.Callable[
        [_SimpleServiceInterfaceT, int],
        _typing.Coroutine[_typing.Any, _typing.Any, float]
    ]: ...

    @abstractmethod
    async def lookup_double(
        self,
        key: int
    ) -> float: ...

    @staticmethod
    def pass_context_retrieve_binary(
        fn: _typing.Callable[
                [_SimpleServiceInterfaceT, RequestContext, bytes],
                _typing.Coroutine[_typing.Any, _typing.Any, bytes]
        ]
    ) -> _typing.Callable[
        [_SimpleServiceInterfaceT, bytes],
        _typing.Coroutine[_typing.Any, _typing.Any, bytes]
    ]: ...

    @abstractmethod
    async def retrieve_binary(
        self,
        something: bytes
    ) -> bytes: ...

    @staticmethod
    def pass_context_contain_binary(
        fn: _typing.Callable[
                [_SimpleServiceInterfaceT, RequestContext, _typing.Sequence[bytes]],
                _typing.Coroutine[_typing.Any, _typing.Any, _typing.AbstractSet[bytes]]
        ]
    ) -> _typing.Callable[
        [_SimpleServiceInterfaceT, _typing.Sequence[bytes]],
        _typing.Coroutine[_typing.Any, _typing.Any, _typing.AbstractSet[bytes]]
    ]: ...

    @abstractmethod
    async def contain_binary(
        self,
        binaries: _typing.Sequence[bytes]
    ) -> _typing.AbstractSet[bytes]: ...

    @staticmethod
    def pass_context_contain_enum(
        fn: _typing.Callable[
                [_SimpleServiceInterfaceT, RequestContext, _typing.Sequence[_module_types.AnEnum]],
                _typing.Coroutine[_typing.Any, _typing.Any, _typing.Sequence[_module_types.AnEnum]]
        ]
    ) -> _typing.Callable[
        [_SimpleServiceInterfaceT, _typing.Sequence[_module_types.AnEnum]],
        _typing.Coroutine[_typing.Any, _typing.Any, _typing.Sequence[_module_types.AnEnum]]
    ]: ...

    @abstractmethod
    async def contain_enum(
        self,
        the_enum: _typing.Sequence[_module_types.AnEnum]
    ) -> _typing.Sequence[_module_types.AnEnum]: ...
    pass


_DerivedServiceInterfaceT = _typing.TypeVar('_DerivedServiceInterfaceT', bound='DerivedServiceInterface')


class DerivedServiceInterface(
SimpleServiceInterface
    , metaclass=ABCMeta
):

    @staticmethod
    def pass_context_get_six(
        fn: _typing.Callable[
                [_DerivedServiceInterfaceT, RequestContext],
                _typing.Coroutine[_typing.Any, _typing.Any, int]
        ]
    ) -> _typing.Callable[
        [_DerivedServiceInterfaceT],
        _typing.Coroutine[_typing.Any, _typing.Any, int]
    ]: ...

    @abstractmethod
    async def get_six(
        self
    ) -> int: ...
    pass


_RederivedServiceInterfaceT = _typing.TypeVar('_RederivedServiceInterfaceT', bound='RederivedServiceInterface')


class RederivedServiceInterface(
DerivedServiceInterface
    , metaclass=ABCMeta
):

    @staticmethod
    def pass_context_get_seven(
        fn: _typing.Callable[
                [_RederivedServiceInterfaceT, RequestContext],
                _typing.Coroutine[_typing.Any, _typing.Any, int]
        ]
    ) -> _typing.Callable[
        [_RederivedServiceInterfaceT],
        _typing.Coroutine[_typing.Any, _typing.Any, int]
    ]: ...

    @abstractmethod
    async def get_seven(
        self
    ) -> int: ...
    pass


