/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;
import java.util.Collections;
import java.util.BitSet;
import java.util.Arrays;
import com.facebook.thrift.*;
import com.facebook.thrift.async.*;
import com.facebook.thrift.meta_data.*;
import com.facebook.thrift.server.*;
import com.facebook.thrift.transport.*;
import com.facebook.thrift.protocol.*;

@SuppressWarnings({ "unused", "serial" })
public class NonCopyableStruct implements TBase, java.io.Serializable, Cloneable, Comparable<NonCopyableStruct> {
  private static final TStruct STRUCT_DESC = new TStruct("NonCopyableStruct");
  private static final TField NUM_FIELD_DESC = new TField("num", TType.I64, (short)1);

  public long num;
  public static final int NUM = 1;
  public static boolean DEFAULT_PRETTY_PRINT = true;

  // isset id assignments
  private static final int __NUM_ISSET_ID = 0;
  private BitSet __isset_bit_vector = new BitSet(1);

  public static final Map<Integer, FieldMetaData> metaDataMap;
  static {
    Map<Integer, FieldMetaData> tmpMetaDataMap = new HashMap<Integer, FieldMetaData>();
    tmpMetaDataMap.put(NUM, new FieldMetaData("num", TFieldRequirementType.DEFAULT, 
        new FieldValueMetaData(TType.I64)));
    metaDataMap = Collections.unmodifiableMap(tmpMetaDataMap);
  }

  static {
    FieldMetaData.addStructMetaDataMap(NonCopyableStruct.class, metaDataMap);
  }

  public NonCopyableStruct() {
  }

  public NonCopyableStruct(
    long num)
  {
    this();
    this.num = num;
    setNumIsSet(true);
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public NonCopyableStruct(NonCopyableStruct other) {
    __isset_bit_vector.clear();
    __isset_bit_vector.or(other.__isset_bit_vector);
    this.num = TBaseHelper.deepCopy(other.num);
  }

  public NonCopyableStruct deepCopy() {
    return new NonCopyableStruct(this);
  }

  @Deprecated
  public NonCopyableStruct clone() {
    return new NonCopyableStruct(this);
  }

  public long getNum() {
    return this.num;
  }

  public NonCopyableStruct setNum(long num) {
    this.num = num;
    setNumIsSet(true);
    return this;
  }

  public void unsetNum() {
    __isset_bit_vector.clear(__NUM_ISSET_ID);
  }

  // Returns true if field num is set (has been assigned a value) and false otherwise
  public boolean isSetNum() {
    return __isset_bit_vector.get(__NUM_ISSET_ID);
  }

  public void setNumIsSet(boolean __value) {
    __isset_bit_vector.set(__NUM_ISSET_ID, __value);
  }

  public void setFieldValue(int fieldID, Object __value) {
    switch (fieldID) {
    case NUM:
      if (__value == null) {
        unsetNum();
      } else {
        setNum((Long)__value);
      }
      break;

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  public Object getFieldValue(int fieldID) {
    switch (fieldID) {
    case NUM:
      return new Long(getNum());

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  // Returns true if field corresponding to fieldID is set (has been assigned a value) and false otherwise
  public boolean isSet(int fieldID) {
    switch (fieldID) {
    case NUM:
      return isSetNum();
    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  @Override
  public boolean equals(Object that) {
    if (that == null)
      return false;
    if (that instanceof NonCopyableStruct)
      return this.equals((NonCopyableStruct)that);
    return false;
  }

  public boolean equals(NonCopyableStruct that) {
    if (that == null)
      return false;
    if (this == that)
      return true;

    boolean this_present_num = true;
    boolean that_present_num = true;
    if (this_present_num || that_present_num) {
      if (!(this_present_num && that_present_num))
        return false;
      if (!TBaseHelper.equalsNobinary(this.num, that.num))
        return false;
    }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {num});
  }

  @Override
  public int compareTo(NonCopyableStruct other) {
    if (other == null) {
      // See java.lang.Comparable docs
      throw new NullPointerException();
    }

    if (other == this) {
      return 0;
    }
    int lastComparison = 0;

    lastComparison = Boolean.valueOf(isSetNum()).compareTo(other.isSetNum());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(num, other.num);
    if (lastComparison != 0) {
      return lastComparison;
    }
    return 0;
  }

  public void read(TProtocol iprot) throws TException {
    TField __field;
    iprot.readStructBegin(metaDataMap);
    while (true)
    {
      __field = iprot.readFieldBegin();
      if (__field.type == TType.STOP) { 
        break;
      }
      switch (__field.id)
      {
        case NUM:
          if (__field.type == TType.I64) {
            this.num = iprot.readI64();
            setNumIsSet(true);
          } else { 
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(iprot, __field.type);
          break;
      }
      iprot.readFieldEnd();
    }
    iprot.readStructEnd();


    // check for required fields of primitive type, which can't be checked in the validate method
    validate();
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    oprot.writeFieldBegin(NUM_FIELD_DESC);
    oprot.writeI64(this.num);
    oprot.writeFieldEnd();
    oprot.writeFieldStop();
    oprot.writeStructEnd();
  }

  @Override
  public String toString() {
    return toString(DEFAULT_PRETTY_PRINT);
  }

  @Override
  public String toString(boolean prettyPrint) {
    return toString(1, prettyPrint);
  }

  @Override
  public String toString(int indent, boolean prettyPrint) {
    String indentStr = prettyPrint ? TBaseHelper.getIndentedString(indent) : "";
    String newLine = prettyPrint ? "\n" : "";
    String space = prettyPrint ? " " : "";
    StringBuilder sb = new StringBuilder("NonCopyableStruct");
    sb.append(space);
    sb.append("(");
    sb.append(newLine);
    boolean first = true;

    sb.append(indentStr);
    sb.append("num");
    sb.append(space);
    sb.append(":").append(space);
    sb.append(TBaseHelper.toString(this.getNum(), indent + 1, prettyPrint));
    first = false;
    sb.append(newLine + TBaseHelper.reduceIndent(indentStr));
    sb.append(")");
    return sb.toString();
  }

  public void validate() throws TException {
    // check for required fields
  }

}

