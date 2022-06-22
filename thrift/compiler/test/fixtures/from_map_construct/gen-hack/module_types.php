<?hh
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift enum:-
 * TestEnum
 */
enum TestEnum: int {
  UNKNOWN = 0;
  VALUE1 = 1;
  VALUE2 = 2;
}

class TestEnum_TEnumStaticMetadata implements \IThriftEnumStaticMetadata {
  public static function getEnumMetadata()[]: \tmeta_ThriftEnum {
    return tmeta_ThriftEnum::fromShape(
      shape(
        "name" => "module.TestEnum",
        "elements" => dict[
          0 => "UNKNOWN",
          1 => "VALUE1",
          2 => "VALUE2",
        ],
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TEnumAnnotations {
    return shape(
      'enum' => dict[],
      'constants' => dict[
      ],
    );
  }
}

/**
 * Original thrift struct:-
 * Foo
 */
class Foo implements \IThriftSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'a',
      'type' => \TType::LST,
      'etype' => \TType::STRING,
      'elem' => shape(
        'type' => \TType::STRING,
      ),
      'format' => 'collection',
    ),
    2 => shape(
      'var' => 'b',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::LST,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::LST,
        'etype' => \TType::SET,
        'elem' => shape(
          'type' => \TType::SET,
          'etype' => \TType::I32,
          'elem' => shape(
            'type' => \TType::I32,
          ),
          'format' => 'collection',
        ),
        'format' => 'collection',
      ),
      'format' => 'collection',
    ),
    3 => shape(
      'var' => 'c',
      'type' => \TType::I64,
    ),
    4 => shape(
      'var' => 'd',
      'type' => \TType::BOOL,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'a' => 1,
    'b' => 2,
    'c' => 3,
    'd' => 4,
  ];

  const type TConstructorShape = shape(
    ?'a' => ?Vector<string>,
    ?'b' => ?Map<string, Vector<Set<int>>>,
    ?'c' => ?int,
    ?'d' => ?bool,
  );

  const int STRUCTURAL_ID = 3946809642153193229;
  /**
   * Original thrift field:-
   * 1: list<string> a
   */
  public Vector<string> $a;
  /**
   * Original thrift field:-
   * 2: map<string, list<set<i32>>> b
   */
  public ?Map<string, Vector<Set<int>>> $b;
  /**
   * Original thrift field:-
   * 3: i64 c
   */
  public int $c;
  /**
   * Original thrift field:-
   * 4: bool d
   */
  public bool $d;

  public function __construct(?Vector<string> $a = null, ?Map<string, Vector<Set<int>>> $b = null, ?int $c = null, ?bool $d = null)[] {
    $this->a = $a ?? Vector {};
    $this->b = $b;
    $this->c = $c ?? 7;
    $this->d = $d ?? false;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'a'),
      Shapes::idx($shape, 'b'),
      Shapes::idx($shape, 'c'),
      Shapes::idx($shape, 'd'),
    );
  }

  public static function fromMap_DEPRECATED(@KeyedContainer<string, mixed> $map)[]: this {
    return new static(
      HH\FIXME\UNSAFE_CAST<mixed, Vector<string>>(idx($map, 'a'), 'map value is mixed'),
      HH\FIXME\UNSAFE_CAST<mixed, Map<string, Vector<Set<int>>>>(idx($map, 'b'), 'map value is mixed'),
      HH\FIXME\UNSAFE_CAST<mixed, int>(idx($map, 'c'), 'map value is mixed'),
      HH\FIXME\UNSAFE_CAST<mixed, bool>(idx($map, 'd'), 'map value is mixed'),
    );
  }

  public function getName()[]: string {
    return 'Foo';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.Foo",
        "fields" => vec[
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_list" => tmeta_ThriftListType::fromShape(
                    shape(
                      "valueType" => tmeta_ThriftType::fromShape(
                        shape(
                          "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                        )
                      ),
                    )
                  ),
                )
              ),
              "name" => "a",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 2,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_map" => tmeta_ThriftMapType::fromShape(
                    shape(
                      "keyType" => tmeta_ThriftType::fromShape(
                        shape(
                          "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                        )
                      ),
                      "valueType" => tmeta_ThriftType::fromShape(
                        shape(
                          "t_list" => tmeta_ThriftListType::fromShape(
                            shape(
                              "valueType" => tmeta_ThriftType::fromShape(
                                shape(
                                  "t_set" => tmeta_ThriftSetType::fromShape(
                                    shape(
                                      "valueType" => tmeta_ThriftType::fromShape(
                                        shape(
                                          "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_I32_TYPE,
                                        )
                                      ),
                                    )
                                  ),
                                )
                              ),
                            )
                          ),
                        )
                      ),
                    )
                  ),
                )
              ),
              "name" => "b",
              "is_optional" => true,
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 3,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_I64_TYPE,
                )
              ),
              "name" => "c",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 4,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_BOOL_TYPE,
                )
              ),
              "name" => "d",
              "is_optional" => true,
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

enum TestUnionEnum: int {
  _EMPTY_ = 0;
  string_field = 1;
  int_field = 2;
  enum_field = 3;
  foo_struct = 4;
}

/**
 * Original thrift struct:-
 * TestUnion
 */
class TestUnion implements \IThriftSyncStruct, \IThriftUnion<TestUnionEnum> {
  use \ThriftUnionSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'string_field',
      'union' => true,
      'type' => \TType::STRING,
    ),
    2 => shape(
      'var' => 'int_field',
      'union' => true,
      'type' => \TType::I32,
    ),
    3 => shape(
      'var' => 'enum_field',
      'union' => true,
      'type' => \TType::I32,
      'enum' => TestEnum::class,
    ),
    4 => shape(
      'var' => 'foo_struct',
      'union' => true,
      'type' => \TType::STRUCT,
      'class' => Foo::class,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'string_field' => 1,
    'int_field' => 2,
    'enum_field' => 3,
    'foo_struct' => 4,
  ];

  const type TConstructorShape = shape(
    ?'string_field' => ?string,
    ?'int_field' => ?int,
    ?'enum_field' => ?TestEnum,
    ?'foo_struct' => ?Foo,
  );

  const int STRUCTURAL_ID = 1329962823516941134;
  /**
   * Original thrift field:-
   * 1: string string_field
   */
  public ?string $string_field;
  /**
   * Original thrift field:-
   * 2: i32 int_field
   */
  public ?int $int_field;
  /**
   * Original thrift field:-
   * 3: enum module.TestEnum enum_field
   */
  public ?TestEnum $enum_field;
  /**
   * Original thrift field:-
   * 4: struct module.Foo foo_struct
   */
  public ?Foo $foo_struct;
  protected TestUnionEnum $_type = TestUnionEnum::_EMPTY_;

  public function __construct(?string $string_field = null, ?int $int_field = null, ?TestEnum $enum_field = null, ?Foo $foo_struct = null)[] {
    $this->_type = TestUnionEnum::_EMPTY_;
    if ($string_field !== null) {
      $this->string_field = $string_field;
      $this->_type = TestUnionEnum::string_field;
    }
    if ($int_field !== null) {
      $this->int_field = $int_field;
      $this->_type = TestUnionEnum::int_field;
    }
    if ($enum_field !== null) {
      $this->enum_field = $enum_field;
      $this->_type = TestUnionEnum::enum_field;
    }
    if ($foo_struct !== null) {
      $this->foo_struct = $foo_struct;
      $this->_type = TestUnionEnum::foo_struct;
    }
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'string_field'),
      Shapes::idx($shape, 'int_field'),
      Shapes::idx($shape, 'enum_field'),
      Shapes::idx($shape, 'foo_struct'),
    );
  }

  public static function fromMap_DEPRECATED(@KeyedContainer<string, mixed> $map)[]: this {
    return new static(
      HH\FIXME\UNSAFE_CAST<mixed, string>(idx($map, 'string_field'), 'map value is mixed'),
      HH\FIXME\UNSAFE_CAST<mixed, int>(idx($map, 'int_field'), 'map value is mixed'),
      HH\FIXME\UNSAFE_CAST<mixed, TestEnum>(idx($map, 'enum_field'), 'map value is mixed'),
      HH\FIXME\UNSAFE_CAST<mixed, Foo>(idx($map, 'foo_struct'), 'map value is mixed'),
    );
  }

  public function getName()[]: string {
    return 'TestUnion';
  }

  public function getType()[]: TestUnionEnum {
    return $this->_type;
  }

  public function reset()[write_props]: void {
    switch ($this->_type) {
      case TestUnionEnum::string_field:
        $this->string_field = null;
        break;
      case TestUnionEnum::int_field:
        $this->int_field = null;
        break;
      case TestUnionEnum::enum_field:
        $this->enum_field = null;
        break;
      case TestUnionEnum::foo_struct:
        $this->foo_struct = null;
        break;
      case TestUnionEnum::_EMPTY_:
        break;
    }
    $this->_type = TestUnionEnum::_EMPTY_;
  }

  public function set_string_field(string $string_field)[write_props]: this {
    $this->reset();
    $this->_type = TestUnionEnum::string_field;
    $this->string_field = $string_field;
    return $this;
  }

  public function get_string_field()[]: ?string {
    return $this->string_field;
  }

  public function getx_string_field()[]: string {
    invariant(
      $this->_type === TestUnionEnum::string_field,
      'get_string_field called on an instance of TestUnion whose current type is %s',
      (string)$this->_type,
    );
    return $this->string_field as nonnull;
  }

  public function set_int_field(int $int_field)[write_props]: this {
    $this->reset();
    $this->_type = TestUnionEnum::int_field;
    $this->int_field = $int_field;
    return $this;
  }

  public function get_int_field()[]: ?int {
    return $this->int_field;
  }

  public function getx_int_field()[]: int {
    invariant(
      $this->_type === TestUnionEnum::int_field,
      'get_int_field called on an instance of TestUnion whose current type is %s',
      (string)$this->_type,
    );
    return $this->int_field as nonnull;
  }

  public function set_enum_field(TestEnum $enum_field)[write_props]: this {
    $this->reset();
    $this->_type = TestUnionEnum::enum_field;
    $this->enum_field = $enum_field;
    return $this;
  }

  public function get_enum_field()[]: ?TestEnum {
    return $this->enum_field;
  }

  public function getx_enum_field()[]: TestEnum {
    invariant(
      $this->_type === TestUnionEnum::enum_field,
      'get_enum_field called on an instance of TestUnion whose current type is %s',
      (string)$this->_type,
    );
    return $this->enum_field as nonnull;
  }

  public function set_foo_struct(Foo $foo_struct)[write_props]: this {
    $this->reset();
    $this->_type = TestUnionEnum::foo_struct;
    $this->foo_struct = $foo_struct;
    return $this;
  }

  public function get_foo_struct()[]: ?Foo {
    return $this->foo_struct;
  }

  public function getx_foo_struct()[]: Foo {
    invariant(
      $this->_type === TestUnionEnum::foo_struct,
      'get_foo_struct called on an instance of TestUnion whose current type is %s',
      (string)$this->_type,
    );
    return $this->foo_struct as nonnull;
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.TestUnion",
        "fields" => vec[
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "string_field",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 2,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_I32_TYPE,
                )
              ),
              "name" => "int_field",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 3,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_enum" => tmeta_ThriftEnumType::fromShape(
                    shape(
                      "name" => "module.TestEnum",
                    )
                  ),
                )
              ),
              "name" => "enum_field",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 4,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_struct" => tmeta_ThriftStructType::fromShape(
                    shape(
                      "name" => "module.Foo",
                    )
                  ),
                )
              ),
              "name" => "foo_struct",
            )
          ),
        ],
        "is_union" => true,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

/**
 * Original thrift exception:-
 * Baz
 */
class Baz extends \TException implements \IThriftSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'message',
      'type' => \TType::STRING,
    ),
    2 => shape(
      'var' => 'some_field',
      'type' => \TType::STRUCT,
      'class' => Foo::class,
    ),
    3 => shape(
      'var' => 'some_container',
      'type' => \TType::SET,
      'etype' => \TType::STRING,
      'elem' => shape(
        'type' => \TType::STRING,
      ),
      'format' => 'collection',
    ),
    4 => shape(
      'var' => 'code',
      'type' => \TType::I32,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'message' => 1,
    'some_field' => 2,
    'some_container' => 3,
    'code' => 4,
  ];

  const type TConstructorShape = shape(
    ?'message' => ?string,
    ?'some_field' => ?Foo,
    ?'some_container' => ?Set<string>,
    ?'code' => ?int,
  );

  const int STRUCTURAL_ID = 1663976252517274137;
  /**
   * Original thrift field:-
   * 1: string message
   */
  public string $message;
  /**
   * Original thrift field:-
   * 2: struct module.Foo some_field
   */
  public ?Foo $some_field;
  /**
   * Original thrift field:-
   * 3: set<string> some_container
   */
  public Set<string> $some_container;
  /**
   * Original thrift field:-
   * 4: i32 code
   */
  public int $code;

  public function __construct(?string $message = null, ?Foo $some_field = null, ?Set<string> $some_container = null, ?int $code = null)[] {
    parent::__construct();
    $this->message = $message ?? '';
    $this->some_field = $some_field;
    $this->some_container = $some_container ?? Set {};
    $this->code = $code ?? 0;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'message'),
      Shapes::idx($shape, 'some_field'),
      Shapes::idx($shape, 'some_container'),
      Shapes::idx($shape, 'code'),
    );
  }

  public static function fromMap_DEPRECATED(@KeyedContainer<string, mixed> $map)[]: this {
    return new static(
      HH\FIXME\UNSAFE_CAST<mixed, string>(idx($map, 'message'), 'map value is mixed'),
      HH\FIXME\UNSAFE_CAST<mixed, Foo>(idx($map, 'some_field'), 'map value is mixed'),
      HH\FIXME\UNSAFE_CAST<mixed, Set<string>>(idx($map, 'some_container'), 'map value is mixed'),
      HH\FIXME\UNSAFE_CAST<mixed, int>(idx($map, 'code'), 'map value is mixed'),
    );
  }

  public function getName()[]: string {
    return 'Baz';
  }

  public static function getExceptionMetadata()[]: \tmeta_ThriftException {
    return tmeta_ThriftException::fromShape(
      shape(
        "name" => "module.Baz",
        "fields" => vec[
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "message",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 2,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_struct" => tmeta_ThriftStructType::fromShape(
                    shape(
                      "name" => "module.Foo",
                    )
                  ),
                )
              ),
              "name" => "some_field",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 3,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_set" => tmeta_ThriftSetType::fromShape(
                    shape(
                      "valueType" => tmeta_ThriftType::fromShape(
                        shape(
                          "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                        )
                      ),
                    )
                  ),
                )
              ),
              "name" => "some_container",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 4,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_I32_TYPE,
                )
              ),
              "name" => "code",
            )
          ),
        ],
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

/**
 * Original thrift exception:-
 * OptBaz
 */
class OptBaz extends \TException implements \IThriftSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'message',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'message' => 1,
  ];

  const type TConstructorShape = shape(
    ?'message' => ?string,
  );

  const int STRUCTURAL_ID = 546500496397478593;
  /**
   * Original thrift field:-
   * 1: string message
   */
  public string $message;

  public function __construct(?string $message = null)[] {
    parent::__construct();
    $this->message = $message ?? '';
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'message'),
    );
  }

  public static function fromMap_DEPRECATED(@KeyedContainer<string, mixed> $map)[]: this {
    return new static(
      HH\FIXME\UNSAFE_CAST<mixed, string>(idx($map, 'message'), 'map value is mixed'),
    );
  }

  public function getName()[]: string {
    return 'OptBaz';
  }

  public static function getExceptionMetadata()[]: \tmeta_ThriftException {
    return tmeta_ThriftException::fromShape(
      shape(
        "name" => "module.OptBaz",
        "fields" => vec[
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "message",
              "is_optional" => true,
            )
          ),
        ],
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

