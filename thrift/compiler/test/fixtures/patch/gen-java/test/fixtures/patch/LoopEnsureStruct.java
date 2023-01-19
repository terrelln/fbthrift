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
@com.facebook.swift.codec.ThriftStruct(value="LoopEnsureStruct", builder=LoopEnsureStruct.Builder.class)
public final class LoopEnsureStruct implements com.facebook.thrift.payload.ThriftSerializable {

    @ThriftConstructor
    public LoopEnsureStruct(
        @com.facebook.swift.codec.ThriftField(value=-1, name="bar", isLegacyId=true, requiredness=Requiredness.OPTIONAL) final test.fixtures.patch.Bar bar
    ) {
        this.bar = bar;
    }
    
    @ThriftConstructor
    protected LoopEnsureStruct() {
      this.bar = null;
    }
    
    public static class Builder {
    
        private test.fixtures.patch.Bar bar = null;
    
        @com.facebook.swift.codec.ThriftField(value=-1, name="bar", isLegacyId=true, requiredness=Requiredness.OPTIONAL)
        public Builder setBar(test.fixtures.patch.Bar bar) {
            this.bar = bar;
            return this;
        }
    
        public test.fixtures.patch.Bar getBar() { return bar; }
    
        public Builder() { }
        public Builder(LoopEnsureStruct other) {
            this.bar = other.bar;
        }
    
        @ThriftConstructor
        public LoopEnsureStruct build() {
            LoopEnsureStruct result = new LoopEnsureStruct (
                this.bar
            );
            return result;
        }
    }
        
    public static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<String, Integer> THRIFT_NAMES_TO_IDS = new HashMap();
    public static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();
    private static final TStruct STRUCT_DESC = new TStruct("LoopEnsureStruct");
    private final test.fixtures.patch.Bar bar;
    public static final int _BAR = -1;
    private static final TField BAR_FIELD_DESC = new TField("bar", TType.STRUCT, (short)-1);
    static {
      NAMES_TO_IDS.put("bar", -1);
      THRIFT_NAMES_TO_IDS.put("bar", -1);
      FIELD_METADATA.put(-1, BAR_FIELD_DESC);
      com.facebook.thrift.type.TypeRegistry.add(new com.facebook.thrift.type.Type(
        new com.facebook.thrift.type.UniversalName("test.dev/fixtures/patch/LoopEnsureStruct"), 
        LoopEnsureStruct.class, LoopEnsureStruct::read0));
    }
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=-1, name="bar", isLegacyId=true, requiredness=Requiredness.OPTIONAL)
    public test.fixtures.patch.Bar getBar() { return bar; }
    
    @java.lang.Override
    public String toString() {
        ToStringHelper helper = toStringHelper(this);
        helper.add("bar", bar);
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
    
        LoopEnsureStruct other = (LoopEnsureStruct)o;
    
        return
            Objects.equals(bar, other.bar) &&
            true;
    }
    
    @java.lang.Override
    public int hashCode() {
        return Arrays.deepHashCode(new java.lang.Object[] {
            bar
        });
    }
    
    
    public static com.facebook.thrift.payload.Reader<LoopEnsureStruct> asReader() {
      return LoopEnsureStruct::read0;
    }
    
    public static LoopEnsureStruct read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin(LoopEnsureStruct.NAMES_TO_IDS, LoopEnsureStruct.THRIFT_NAMES_TO_IDS, LoopEnsureStruct.FIELD_METADATA);
      LoopEnsureStruct.Builder builder = new LoopEnsureStruct.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        case _BAR:
          if (__field.type == TType.STRUCT) {
            test.fixtures.patch.Bar bar = test.fixtures.patch.Bar.read0(oprot);
            builder.setBar(bar);
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
      if (bar != null) {
        oprot.writeFieldBegin(BAR_FIELD_DESC);
        this.bar.write0(oprot);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
    private static class _LoopEnsureStructLazy {
        private static final LoopEnsureStruct _DEFAULT = new LoopEnsureStruct.Builder().build();
    }
    
    public static LoopEnsureStruct defaultInstance() {
        return  _LoopEnsureStructLazy._DEFAULT;
    }
}
