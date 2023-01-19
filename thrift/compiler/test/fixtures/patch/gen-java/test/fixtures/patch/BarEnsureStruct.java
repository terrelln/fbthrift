/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.patch;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import com.google.common.collect.*;
import java.util.*;
import javax.annotation.Nullable;
import org.apache.thrift.*;
import org.apache.thrift.transport.*;
import org.apache.thrift.protocol.*;
import static com.google.common.base.MoreObjects.toStringHelper;
import static com.google.common.base.MoreObjects.ToStringHelper;

@SwiftGenerated
@com.facebook.swift.codec.ThriftStruct(value="BarEnsureStruct", builder=BarEnsureStruct.Builder.class)
public final class BarEnsureStruct implements com.facebook.thrift.payload.ThriftSerializable {

    @ThriftConstructor
    public BarEnsureStruct(
        @com.facebook.swift.codec.ThriftField(value=-1, name="loop", isLegacyId=true, requiredness=Requiredness.OPTIONAL) final test.fixtures.patch.Loop loop
    ) {
        this.loop = loop;
    }
    
    @ThriftConstructor
    protected BarEnsureStruct() {
      this.loop = null;
    }
    
    public static class Builder {
    
        private test.fixtures.patch.Loop loop = null;
    
        @com.facebook.swift.codec.ThriftField(value=-1, name="loop", isLegacyId=true, requiredness=Requiredness.OPTIONAL)
        public Builder setLoop(test.fixtures.patch.Loop loop) {
            this.loop = loop;
            return this;
        }
    
        public test.fixtures.patch.Loop getLoop() { return loop; }
    
        public Builder() { }
        public Builder(BarEnsureStruct other) {
            this.loop = other.loop;
        }
    
        @ThriftConstructor
        public BarEnsureStruct build() {
            BarEnsureStruct result = new BarEnsureStruct (
                this.loop
            );
            return result;
        }
    }
        
    public static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<String, Integer> THRIFT_NAMES_TO_IDS = new HashMap();
    public static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();
    private static final TStruct STRUCT_DESC = new TStruct("BarEnsureStruct");
    private final test.fixtures.patch.Loop loop;
    public static final int _LOOP = -1;
    private static final TField LOOP_FIELD_DESC = new TField("loop", TType.STRUCT, (short)-1);
    static {
      NAMES_TO_IDS.put("loop", -1);
      THRIFT_NAMES_TO_IDS.put("loop", -1);
      FIELD_METADATA.put(-1, LOOP_FIELD_DESC);
      com.facebook.thrift.type.TypeRegistry.add(new com.facebook.thrift.type.Type(
        new com.facebook.thrift.type.UniversalName("test.dev/fixtures/patch/BarEnsureStruct"), 
        BarEnsureStruct.class, BarEnsureStruct::read0));
    }
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=-1, name="loop", isLegacyId=true, requiredness=Requiredness.OPTIONAL)
    public test.fixtures.patch.Loop getLoop() { return loop; }
    
    @java.lang.Override
    public String toString() {
        ToStringHelper helper = toStringHelper(this);
        helper.add("loop", loop);
        return helper.toString();
    }
    
    @java.lang.Override
    public boolean equals(java.lang.Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
    
        BarEnsureStruct other = (BarEnsureStruct)o;
    
        return
            Objects.equals(loop, other.loop) &&
            true;
    }
    
    @java.lang.Override
    public int hashCode() {
        return Arrays.deepHashCode(new java.lang.Object[] {
            loop
        });
    }
    
    
    public static com.facebook.thrift.payload.Reader<BarEnsureStruct> asReader() {
      return BarEnsureStruct::read0;
    }
    
    public static BarEnsureStruct read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin(BarEnsureStruct.NAMES_TO_IDS, BarEnsureStruct.THRIFT_NAMES_TO_IDS, BarEnsureStruct.FIELD_METADATA);
      BarEnsureStruct.Builder builder = new BarEnsureStruct.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        case _LOOP:
          if (__field.type == TType.STRUCT) {
            test.fixtures.patch.Loop loop = test.fixtures.patch.Loop.read0(oprot);
            builder.setLoop(loop);
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
      if (loop != null) {
        oprot.writeFieldBegin(LOOP_FIELD_DESC);
        this.loop.write0(oprot);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
    private static class _BarEnsureStructLazy {
        private static final BarEnsureStruct _DEFAULT = new BarEnsureStruct.Builder().build();
    }
    
    public static BarEnsureStruct defaultInstance() {
        return  _BarEnsureStructLazy._DEFAULT;
    }
}
