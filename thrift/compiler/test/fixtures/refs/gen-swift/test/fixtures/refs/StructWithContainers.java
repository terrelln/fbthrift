/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.refs;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import com.google.common.collect.*;
import java.util.*;
import org.apache.thrift.*;
import org.apache.thrift.async.*;
import org.apache.thrift.meta_data.*;
import org.apache.thrift.server.*;
import org.apache.thrift.transport.*;
import org.apache.thrift.protocol.*;
import org.apache.thrift.meta_data.FieldMetaData;
import org.apache.thrift.meta_data.FieldValueMetaData;
import static com.google.common.base.MoreObjects.toStringHelper;
import static com.google.common.base.MoreObjects.ToStringHelper;

@SwiftGenerated
@ThriftStruct(value="StructWithContainers", builder=StructWithContainers.Builder.class)
public final class StructWithContainers {
    @ThriftConstructor
    public StructWithContainers(
        @ThriftField(value=1, name="list_ref", requiredness=Requiredness.NONE) final List<Integer> listRef,
        @ThriftField(value=2, name="set_ref", requiredness=Requiredness.NONE) final Set<Integer> setRef,
        @ThriftField(value=3, name="map_ref", requiredness=Requiredness.NONE) final Map<Integer, Integer> mapRef,
        @ThriftField(value=4, name="list_ref_unique", requiredness=Requiredness.NONE) final List<Integer> listRefUnique,
        @ThriftField(value=5, name="set_ref_shared", requiredness=Requiredness.NONE) final Set<Integer> setRefShared,
        @ThriftField(value=6, name="list_ref_shared_const", requiredness=Requiredness.NONE) final List<Integer> listRefSharedConst
    ) {
        this.listRef = listRef;
        this.setRef = setRef;
        this.mapRef = mapRef;
        this.listRefUnique = listRefUnique;
        this.setRefShared = setRefShared;
        this.listRefSharedConst = listRefSharedConst;
    }
    
    @ThriftConstructor
    protected StructWithContainers() {
      this.listRef = null;
      this.setRef = null;
      this.mapRef = null;
      this.listRefUnique = null;
      this.setRefShared = null;
      this.listRefSharedConst = null;
    }
    
    public static class Builder {
        private List<Integer> listRef = null;
        private Set<Integer> setRef = null;
        private Map<Integer, Integer> mapRef = null;
        private List<Integer> listRefUnique = null;
        private Set<Integer> setRefShared = null;
        private List<Integer> listRefSharedConst = null;
    
        @ThriftField(value=1, name="list_ref", requiredness=Requiredness.NONE)
        public Builder setListRef(List<Integer> listRef) {
            this.listRef = listRef;
            return this;
        }
        
        public List<Integer> getListRef() { return listRef; }
    
            @ThriftField(value=2, name="set_ref", requiredness=Requiredness.NONE)
        public Builder setSetRef(Set<Integer> setRef) {
            this.setRef = setRef;
            return this;
        }
        
        public Set<Integer> getSetRef() { return setRef; }
    
            @ThriftField(value=3, name="map_ref", requiredness=Requiredness.NONE)
        public Builder setMapRef(Map<Integer, Integer> mapRef) {
            this.mapRef = mapRef;
            return this;
        }
        
        public Map<Integer, Integer> getMapRef() { return mapRef; }
    
            @ThriftField(value=4, name="list_ref_unique", requiredness=Requiredness.NONE)
        public Builder setListRefUnique(List<Integer> listRefUnique) {
            this.listRefUnique = listRefUnique;
            return this;
        }
        
        public List<Integer> getListRefUnique() { return listRefUnique; }
    
            @ThriftField(value=5, name="set_ref_shared", requiredness=Requiredness.NONE)
        public Builder setSetRefShared(Set<Integer> setRefShared) {
            this.setRefShared = setRefShared;
            return this;
        }
        
        public Set<Integer> getSetRefShared() { return setRefShared; }
    
            @ThriftField(value=6, name="list_ref_shared_const", requiredness=Requiredness.NONE)
        public Builder setListRefSharedConst(List<Integer> listRefSharedConst) {
            this.listRefSharedConst = listRefSharedConst;
            return this;
        }
        
        public List<Integer> getListRefSharedConst() { return listRefSharedConst; }
    
        public Builder() { }
        public Builder(StructWithContainers other) {
            this.listRef = other.listRef;
            this.setRef = other.setRef;
            this.mapRef = other.mapRef;
            this.listRefUnique = other.listRefUnique;
            this.setRefShared = other.setRefShared;
            this.listRefSharedConst = other.listRefSharedConst;
        }
    
        @ThriftConstructor
        public StructWithContainers build() {
            return new StructWithContainers (
                this.listRef,
                this.setRef,
                this.mapRef,
                this.listRefUnique,
                this.setRefShared,
                this.listRefSharedConst
            );
        }
    }
    
    public static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<Integer, Object> FIELD_METADATA = new HashMap<>();
    private static final TStruct STRUCT_DESC = new TStruct("StructWithContainers");
    private final List<Integer> listRef;
    public static final int _LIST_REF = 1;
    private static final TField LIST_REF_FIELD_DESC = new TField("listRef", TType.LIST, (short)1);
        private final Set<Integer> setRef;
    public static final int _SET_REF = 2;
    private static final TField SET_REF_FIELD_DESC = new TField("setRef", TType.SET, (short)2);
        private final Map<Integer, Integer> mapRef;
    public static final int _MAP_REF = 3;
    private static final TField MAP_REF_FIELD_DESC = new TField("mapRef", TType.MAP, (short)3);
        private final List<Integer> listRefUnique;
    public static final int _LIST_REF_UNIQUE = 4;
    private static final TField LIST_REF_UNIQUE_FIELD_DESC = new TField("listRefUnique", TType.LIST, (short)4);
        private final Set<Integer> setRefShared;
    public static final int _SET_REF_SHARED = 5;
    private static final TField SET_REF_SHARED_FIELD_DESC = new TField("setRefShared", TType.SET, (short)5);
        private final List<Integer> listRefSharedConst;
    public static final int _LIST_REF_SHARED_CONST = 6;
    private static final TField LIST_REF_SHARED_CONST_FIELD_DESC = new TField("listRefSharedConst", TType.LIST, (short)6);
    static {
      NAMES_TO_IDS.put("listRef", 1);
      FIELD_METADATA.put(1, LIST_REF_FIELD_DESC);
      NAMES_TO_IDS.put("setRef", 2);
      FIELD_METADATA.put(2, SET_REF_FIELD_DESC);
      NAMES_TO_IDS.put("mapRef", 3);
      FIELD_METADATA.put(3, MAP_REF_FIELD_DESC);
      NAMES_TO_IDS.put("listRefUnique", 4);
      FIELD_METADATA.put(4, LIST_REF_UNIQUE_FIELD_DESC);
      NAMES_TO_IDS.put("setRefShared", 5);
      FIELD_METADATA.put(5, SET_REF_SHARED_FIELD_DESC);
      NAMES_TO_IDS.put("listRefSharedConst", 6);
      FIELD_METADATA.put(6, LIST_REF_SHARED_CONST_FIELD_DESC);
    }
    
    @ThriftField(value=1, name="list_ref", requiredness=Requiredness.NONE)
    public List<Integer> getListRef() { return listRef; }
    
    
    @ThriftField(value=2, name="set_ref", requiredness=Requiredness.NONE)
    public Set<Integer> getSetRef() { return setRef; }
    
    
    @ThriftField(value=3, name="map_ref", requiredness=Requiredness.NONE)
    public Map<Integer, Integer> getMapRef() { return mapRef; }
    
    
    @ThriftField(value=4, name="list_ref_unique", requiredness=Requiredness.NONE)
    public List<Integer> getListRefUnique() { return listRefUnique; }
    
    
    @ThriftField(value=5, name="set_ref_shared", requiredness=Requiredness.NONE)
    public Set<Integer> getSetRefShared() { return setRefShared; }
    
    
    @ThriftField(value=6, name="list_ref_shared_const", requiredness=Requiredness.NONE)
    public List<Integer> getListRefSharedConst() { return listRefSharedConst; }
    
    @Override
    public String toString() {
        ToStringHelper helper = toStringHelper(this);
        helper.add("listRef", listRef);
        helper.add("setRef", setRef);
        helper.add("mapRef", mapRef);
        helper.add("listRefUnique", listRefUnique);
        helper.add("setRefShared", setRefShared);
        helper.add("listRefSharedConst", listRefSharedConst);
        return helper.toString();
    }
    
    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
    
        StructWithContainers other = (StructWithContainers)o;
    
        return
            Objects.equals(listRef, other.listRef) &&
            Objects.equals(setRef, other.setRef) &&
            Objects.equals(mapRef, other.mapRef) &&
            Objects.equals(listRefUnique, other.listRefUnique) &&
            Objects.equals(setRefShared, other.setRefShared) &&
            Objects.equals(listRefSharedConst, other.listRefSharedConst) &&
            true;
    }
    
    @Override
    public int hashCode() {
        return Arrays.deepHashCode(new Object[] {
            listRef,
            setRef,
            mapRef,
            listRefUnique,
            setRefShared,
            listRefSharedConst
        });
    }
    
    
      // Currently, the read0 method cannot read metadatamap for JSON styled serialization.
      // Perhaps, it will be implemented in the future!
    public static StructWithContainers read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin();
      StructWithContainers.Builder builder = new StructWithContainers.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        case _LIST_REF:
          if (__field.type == TType.LIST) {
            List<Integer> listRef;
            {
            TList _list = oprot.readListBegin();
            if (_list.size < 0) {
                throw new TException("Using an unsupported Map, size is less than zero.");
            }
            listRef = new ArrayList<Integer>(_list.size);
            for (int _i = 0; _i < _list.size; _i++) {
                
                int _value1 = oprot.readI32();
                listRef.add(_value1);
            }
            oprot.readListEnd();
            }
            builder.setListRef(listRef);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _SET_REF:
          if (__field.type == TType.SET) {
            Set<Integer> setRef;
            {
            TSet _set = oprot.readSetBegin();
            if (_set.size < 0) {
                throw new TException("Using an unsupported Map, size is less than zero.");
            }
            setRef = new HashSet<Integer>(_set.size);
            for (int _i = 0; _i < _set.size; _i++) {
                
                int _value1 = oprot.readI32();
                setRef.add(_value1);
            }
            oprot.readSetEnd();
            }
            builder.setSetRef(setRef);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _MAP_REF:
          if (__field.type == TType.MAP) {
            Map<Integer, Integer> mapRef;
            {
            TMap _map = oprot.readMapBegin();
            if (_map.size < 0) {
                throw new TException("Using an unsupported Map, size is less than zero.");
            }
            mapRef = new HashMap<Integer, Integer>(_map.size);
            for (int _i = 0; _i < _map.size; _i++) {
                
                int _key1 = oprot.readI32();

                int _value1 = oprot.readI32();
                mapRef.put(_key1, _value1);
            }
            }
            oprot.readMapEnd();
            builder.setMapRef(mapRef);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _LIST_REF_UNIQUE:
          if (__field.type == TType.LIST) {
            List<Integer> listRefUnique;
            {
            TList _list = oprot.readListBegin();
            if (_list.size < 0) {
                throw new TException("Using an unsupported Map, size is less than zero.");
            }
            listRefUnique = new ArrayList<Integer>(_list.size);
            for (int _i = 0; _i < _list.size; _i++) {
                
                int _value1 = oprot.readI32();
                listRefUnique.add(_value1);
            }
            oprot.readListEnd();
            }
            builder.setListRefUnique(listRefUnique);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _SET_REF_SHARED:
          if (__field.type == TType.SET) {
            Set<Integer> setRefShared;
            {
            TSet _set = oprot.readSetBegin();
            if (_set.size < 0) {
                throw new TException("Using an unsupported Map, size is less than zero.");
            }
            setRefShared = new HashSet<Integer>(_set.size);
            for (int _i = 0; _i < _set.size; _i++) {
                
                int _value1 = oprot.readI32();
                setRefShared.add(_value1);
            }
            oprot.readSetEnd();
            }
            builder.setSetRefShared(setRefShared);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _LIST_REF_SHARED_CONST:
          if (__field.type == TType.LIST) {
            List<Integer> listRefSharedConst;
            {
            TList _list = oprot.readListBegin();
            if (_list.size < 0) {
                throw new TException("Using an unsupported Map, size is less than zero.");
            }
            listRefSharedConst = new ArrayList<Integer>(_list.size);
            for (int _i = 0; _i < _list.size; _i++) {
                
                int _value1 = oprot.readI32();
                listRefSharedConst.add(_value1);
            }
            oprot.readListEnd();
            }
            builder.setListRefSharedConst(listRefSharedConst);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(oprot, __field.type);
          break;
        }
        oprot.readFieldEnd();
      }
      oprot.readStructEnd();
      return builder.build();
    }
    
    public void write0(TProtocol oprot) throws TException {
      oprot.writeStructBegin(STRUCT_DESC);
      if (this.listRef != null) {
        oprot.writeFieldBegin(LIST_REF_FIELD_DESC);
        List<Integer> _iter0 = this.listRef;
        oprot.writeListBegin(new TList(TType.I32, _iter0.size()));
        for (int _iter1 : _iter0) {
          oprot.writeI32(_iter1);
        }
        oprot.writeListEnd();
        oprot.writeFieldEnd();
      }
      if (this.setRef != null) {
        oprot.writeFieldBegin(SET_REF_FIELD_DESC);
        Set<Integer> _iter0 = this.setRef;
        oprot.writeSetBegin(new TSet(TType.I32, _iter0.size()));
        for (int _iter1 : _iter0) {
          oprot.writeI32(_iter1);
        }
        oprot.writeSetEnd();
        oprot.writeFieldEnd();
      }
      if (this.mapRef != null) {
        oprot.writeFieldBegin(MAP_REF_FIELD_DESC);
        Map<Integer, Integer> _iter0 = this.mapRef;
        oprot.writeMapBegin(new TMap(TType.I32, TType.I32, _iter0.size()));
        for (Map.Entry<Integer, Integer> _iter1 : _iter0.entrySet()) {
          oprot.writeI32(_iter1.getKey());
          oprot.writeI32(_iter1.getValue());
        }
        oprot.writeMapEnd();
        oprot.writeFieldEnd();
      }
      if (this.listRefUnique != null) {
        oprot.writeFieldBegin(LIST_REF_UNIQUE_FIELD_DESC);
        List<Integer> _iter0 = this.listRefUnique;
        oprot.writeListBegin(new TList(TType.I32, _iter0.size()));
        for (int _iter1 : _iter0) {
          oprot.writeI32(_iter1);
        }
        oprot.writeListEnd();
        oprot.writeFieldEnd();
      }
      if (this.setRefShared != null) {
        oprot.writeFieldBegin(SET_REF_SHARED_FIELD_DESC);
        Set<Integer> _iter0 = this.setRefShared;
        oprot.writeSetBegin(new TSet(TType.I32, _iter0.size()));
        for (int _iter1 : _iter0) {
          oprot.writeI32(_iter1);
        }
        oprot.writeSetEnd();
        oprot.writeFieldEnd();
      }
      if (this.listRefSharedConst != null) {
        oprot.writeFieldBegin(LIST_REF_SHARED_CONST_FIELD_DESC);
        List<Integer> _iter0 = this.listRefSharedConst;
        oprot.writeListBegin(new TList(TType.I32, _iter0.size()));
        for (int _iter1 : _iter0) {
          oprot.writeI32(_iter1);
        }
        oprot.writeListEnd();
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
}
