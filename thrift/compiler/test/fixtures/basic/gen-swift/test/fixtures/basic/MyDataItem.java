/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.basic;

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
@ThriftStruct(value="MyDataItem", builder=MyDataItem.Builder.class)
public final class MyDataItem {
    @ThriftConstructor
    public MyDataItem(
    ) {
    }
    
    
    
    public static class Builder {
    
    public Builder() { }
        public Builder(MyDataItem other) {
        }
    
        @ThriftConstructor
        public MyDataItem build() {
            return new MyDataItem (
            );
        }
    }
    
    public static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<Integer, Object> FIELD_METADATA = new HashMap<>();
    private static final TStruct STRUCT_DESC = new TStruct("MyDataItem");
static {
    }
    @Override
    public String toString() {
        ToStringHelper helper = toStringHelper(this);
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
    
        MyDataItem other = (MyDataItem)o;
    
        return
            true;
    }
    
    @Override
    public int hashCode() {
        return Arrays.deepHashCode(new Object[] {
        });
    }
    
    
      // Currently, the read0 method cannot read metadatamap for JSON styled serialization.
      // Perhaps, it will be implemented in the future!
    public static MyDataItem read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin();
      MyDataItem.Builder builder = new MyDataItem.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
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
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
}
