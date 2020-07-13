/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.sink;

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
@ThriftStruct(value="FinalResponse", builder=FinalResponse.Builder.class)
public final class FinalResponse {
    @ThriftConstructor
    public FinalResponse(
        @ThriftField(value=1, name="content", requiredness=Requiredness.NONE) final String content
    ) {
        this.content = content;
    }
    
    @ThriftConstructor
    protected FinalResponse() {
      this.content = null;
    }
    
    public static class Builder {
        private String content = null;
    
        @ThriftField(value=1, name="content", requiredness=Requiredness.NONE)
        public Builder setContent(String content) {
            this.content = content;
            return this;
        }
        
        public String getContent() { return content; }
    
        public Builder() { }
        public Builder(FinalResponse other) {
            this.content = other.content;
        }
    
        @ThriftConstructor
        public FinalResponse build() {
            return new FinalResponse (
                this.content
            );
        }
    }
    
    public static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<Integer, Object> FIELD_METADATA = new HashMap<>();
    private static final TStruct STRUCT_DESC = new TStruct("FinalResponse");
    private final String content;
    public static final int _CONTENT = 1;
    private static final TField CONTENT_FIELD_DESC = new TField("content", TType.STRING, (short)1);
    static {
      NAMES_TO_IDS.put("content", 1);
      FIELD_METADATA.put(1, CONTENT_FIELD_DESC);
    }
    
    @ThriftField(value=1, name="content", requiredness=Requiredness.NONE)
    public String getContent() { return content; }
    
    @Override
    public String toString() {
        ToStringHelper helper = toStringHelper(this);
        helper.add("content", content);
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
    
        FinalResponse other = (FinalResponse)o;
    
        return
            Objects.equals(content, other.content) &&
            true;
    }
    
    @Override
    public int hashCode() {
        return Arrays.deepHashCode(new Object[] {
            content
        });
    }
    
    
      // Currently, the read0 method cannot read metadatamap for JSON styled serialization.
      // Perhaps, it will be implemented in the future!
    public static FinalResponse read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin();
      FinalResponse.Builder builder = new FinalResponse.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        case _CONTENT:
          if (__field.type == TType.STRING) {
            String content = oprot.readString();
            builder.setContent(content);
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
      if (this.content != null) {
        oprot.writeFieldBegin(CONTENT_FIELD_DESC);
        oprot.writeString(this.content);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
}
