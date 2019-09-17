/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
package test.fixtures.basicannotations;

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
public class MyStruct implements TBase, java.io.Serializable, Cloneable, Comparable<MyStruct> {
  private static final TStruct STRUCT_DESC = new TStruct("MyStruct");
  private static final TField MAJOR_FIELD_DESC = new TField("major", TType.I64, (short)1);
  private static final TField PACKAGE_FIELD_DESC = new TField("package", TType.STRING, (short)2);
  private static final TField ANNOTATION_WITH_QUOTE_FIELD_DESC = new TField("annotation_with_quote", TType.STRING, (short)3);

  public long major;
  public String package;
  public String annotation_with_quote;
  public static final int MAJOR = 1;
  public static final int PACKAGE = 2;
  public static final int ANNOTATION_WITH_QUOTE = 3;
  public static boolean DEFAULT_PRETTY_PRINT = true;

  // isset id assignments
  private static final int __MAJOR_ISSET_ID = 0;
  private BitSet __isset_bit_vector = new BitSet(1);

  public static final Map<Integer, FieldMetaData> metaDataMap;
  static {
    Map<Integer, FieldMetaData> tmpMetaDataMap = new HashMap<Integer, FieldMetaData>();
    tmpMetaDataMap.put(MAJOR, new FieldMetaData("major", TFieldRequirementType.DEFAULT, 
        new FieldValueMetaData(TType.I64)));
    tmpMetaDataMap.put(PACKAGE, new FieldMetaData("package", TFieldRequirementType.DEFAULT, 
        new FieldValueMetaData(TType.STRING)));
    tmpMetaDataMap.put(ANNOTATION_WITH_QUOTE, new FieldMetaData("annotation_with_quote", TFieldRequirementType.DEFAULT, 
        new FieldValueMetaData(TType.STRING)));
    metaDataMap = Collections.unmodifiableMap(tmpMetaDataMap);
  }

  static {
    FieldMetaData.addStructMetaDataMap(MyStruct.class, metaDataMap);
  }

  public MyStruct() {
  }

  public MyStruct(
    long major,
    String package,
    String annotation_with_quote)
  {
    this();
    this.major = major;
    setMajorIsSet(true);
    this.package = package;
    this.annotation_with_quote = annotation_with_quote;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public MyStruct(MyStruct other) {
    __isset_bit_vector.clear();
    __isset_bit_vector.or(other.__isset_bit_vector);
    this.major = TBaseHelper.deepCopy(other.major);
    if (other.isSetPackage()) {
      this.package = TBaseHelper.deepCopy(other.package);
    }
    if (other.isSetAnnotation_with_quote()) {
      this.annotation_with_quote = TBaseHelper.deepCopy(other.annotation_with_quote);
    }
  }

  public MyStruct deepCopy() {
    return new MyStruct(this);
  }

  @Deprecated
  public MyStruct clone() {
    return new MyStruct(this);
  }

  public long getMajor() {
    return this.major;
  }

  public MyStruct setMajor(long major) {
    this.major = major;
    setMajorIsSet(true);
    return this;
  }

  public void unsetMajor() {
    __isset_bit_vector.clear(__MAJOR_ISSET_ID);
  }

  // Returns true if field major is set (has been assigned a value) and false otherwise
  public boolean isSetMajor() {
    return __isset_bit_vector.get(__MAJOR_ISSET_ID);
  }

  public void setMajorIsSet(boolean __value) {
    __isset_bit_vector.set(__MAJOR_ISSET_ID, __value);
  }

  public String getPackage() {
    return this.package;
  }

  public MyStruct setPackage(String package) {
    this.package = package;
    return this;
  }

  public void unsetPackage() {
    this.package = null;
  }

  // Returns true if field package is set (has been assigned a value) and false otherwise
  public boolean isSetPackage() {
    return this.package != null;
  }

  public void setPackageIsSet(boolean __value) {
    if (!__value) {
      this.package = null;
    }
  }

  public String getAnnotation_with_quote() {
    return this.annotation_with_quote;
  }

  public MyStruct setAnnotation_with_quote(String annotation_with_quote) {
    this.annotation_with_quote = annotation_with_quote;
    return this;
  }

  public void unsetAnnotation_with_quote() {
    this.annotation_with_quote = null;
  }

  // Returns true if field annotation_with_quote is set (has been assigned a value) and false otherwise
  public boolean isSetAnnotation_with_quote() {
    return this.annotation_with_quote != null;
  }

  public void setAnnotation_with_quoteIsSet(boolean __value) {
    if (!__value) {
      this.annotation_with_quote = null;
    }
  }

  public void setFieldValue(int fieldID, Object __value) {
    switch (fieldID) {
    case MAJOR:
      if (__value == null) {
        unsetMajor();
      } else {
        setMajor((Long)__value);
      }
      break;

    case PACKAGE:
      if (__value == null) {
        unsetPackage();
      } else {
        setPackage((String)__value);
      }
      break;

    case ANNOTATION_WITH_QUOTE:
      if (__value == null) {
        unsetAnnotation_with_quote();
      } else {
        setAnnotation_with_quote((String)__value);
      }
      break;

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  public Object getFieldValue(int fieldID) {
    switch (fieldID) {
    case MAJOR:
      return new Long(getMajor());

    case PACKAGE:
      return getPackage();

    case ANNOTATION_WITH_QUOTE:
      return getAnnotation_with_quote();

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  // Returns true if field corresponding to fieldID is set (has been assigned a value) and false otherwise
  public boolean isSet(int fieldID) {
    switch (fieldID) {
    case MAJOR:
      return isSetMajor();
    case PACKAGE:
      return isSetPackage();
    case ANNOTATION_WITH_QUOTE:
      return isSetAnnotation_with_quote();
    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  @Override
  public boolean equals(Object that) {
    if (that == null)
      return false;
    if (that instanceof MyStruct)
      return this.equals((MyStruct)that);
    return false;
  }

  public boolean equals(MyStruct that) {
    if (that == null)
      return false;
    if (this == that)
      return true;

    boolean this_present_major = true;
    boolean that_present_major = true;
    if (this_present_major || that_present_major) {
      if (!(this_present_major && that_present_major))
        return false;
      if (!TBaseHelper.equalsNobinary(this.major, that.major))
        return false;
    }

    boolean this_present_package = true && this.isSetPackage();
    boolean that_present_package = true && that.isSetPackage();
    if (this_present_package || that_present_package) {
      if (!(this_present_package && that_present_package))
        return false;
      if (!TBaseHelper.equalsNobinary(this.package, that.package))
        return false;
    }

    boolean this_present_annotation_with_quote = true && this.isSetAnnotation_with_quote();
    boolean that_present_annotation_with_quote = true && that.isSetAnnotation_with_quote();
    if (this_present_annotation_with_quote || that_present_annotation_with_quote) {
      if (!(this_present_annotation_with_quote && that_present_annotation_with_quote))
        return false;
      if (!TBaseHelper.equalsNobinary(this.annotation_with_quote, that.annotation_with_quote))
        return false;
    }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {major, package, annotation_with_quote});
  }

  @Override
  public int compareTo(MyStruct other) {
    if (other == null) {
      // See java.lang.Comparable docs
      throw new NullPointerException();
    }

    if (other == this) {
      return 0;
    }
    int lastComparison = 0;

    lastComparison = Boolean.valueOf(isSetMajor()).compareTo(other.isSetMajor());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(major, other.major);
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetPackage()).compareTo(other.isSetPackage());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(package, other.package);
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetAnnotation_with_quote()).compareTo(other.isSetAnnotation_with_quote());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(annotation_with_quote, other.annotation_with_quote);
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
        case MAJOR:
          if (__field.type == TType.I64) {
            this.major = iprot.readI64();
            setMajorIsSet(true);
          } else { 
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case PACKAGE:
          if (__field.type == TType.STRING) {
            this.package = iprot.readString();
          } else { 
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case ANNOTATION_WITH_QUOTE:
          if (__field.type == TType.STRING) {
            this.annotation_with_quote = iprot.readString();
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
    oprot.writeFieldBegin(MAJOR_FIELD_DESC);
    oprot.writeI64(this.major);
    oprot.writeFieldEnd();
    if (this.package != null) {
      oprot.writeFieldBegin(PACKAGE_FIELD_DESC);
      oprot.writeString(this.package);
      oprot.writeFieldEnd();
    }
    if (this.annotation_with_quote != null) {
      oprot.writeFieldBegin(ANNOTATION_WITH_QUOTE_FIELD_DESC);
      oprot.writeString(this.annotation_with_quote);
      oprot.writeFieldEnd();
    }
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
    StringBuilder sb = new StringBuilder("MyStruct");
    sb.append(space);
    sb.append("(");
    sb.append(newLine);
    boolean first = true;

    sb.append(indentStr);
    sb.append("major");
    sb.append(space);
    sb.append(":").append(space);
    sb.append(TBaseHelper.toString(this.getMajor(), indent + 1, prettyPrint));
    first = false;
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("package");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getPackage() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getPackage(), indent + 1, prettyPrint));
    }
    first = false;
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("annotation_with_quote");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getAnnotation_with_quote() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getAnnotation_with_quote(), indent + 1, prettyPrint));
    }
    first = false;
    sb.append(newLine + TBaseHelper.reduceIndent(indentStr));
    sb.append(")");
    return sb.toString();
  }

  public void validate() throws TException {
    // check for required fields
  }

}

