#ifndef java_text_DecimalFormat_H
#define java_text_DecimalFormat_H

#include "java/text/NumberFormat.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
    class Number;
    class StringBuffer;
    class String;
  }
  namespace util {
    class Currency;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class DecimalFormat : public ::java::text::NumberFormat {
     public:
      enum {
        mid_init$_e7bdbe105ce1bafb,
        mid_init$_ee46a189998009d6,
        mid_applyLocalizedPattern_ee46a189998009d6,
        mid_applyPattern_ee46a189998009d6,
        mid_clone_4819806f62f1360a,
        mid_equals_00d17418847797d4,
        mid_getCurrency_ac0abfec5849b895,
        mid_getGroupingSize_bd89ce15dad49192,
        mid_getMaximumFractionDigits_bd89ce15dad49192,
        mid_getMaximumIntegerDigits_bd89ce15dad49192,
        mid_getMinimumFractionDigits_bd89ce15dad49192,
        mid_getMinimumIntegerDigits_bd89ce15dad49192,
        mid_getMultiplier_bd89ce15dad49192,
        mid_getNegativePrefix_e7df854526d67fa3,
        mid_getNegativeSuffix_e7df854526d67fa3,
        mid_getPositivePrefix_e7df854526d67fa3,
        mid_getPositiveSuffix_e7df854526d67fa3,
        mid_hashCode_bd89ce15dad49192,
        mid_isDecimalSeparatorAlwaysShown_9aa4f33e82ea333f,
        mid_isParseBigDecimal_9aa4f33e82ea333f,
        mid_isStrict_9aa4f33e82ea333f,
        mid_setCurrency_9d1207d1a857fe11,
        mid_setDecimalSeparatorAlwaysShown_f5dd97eebf6a215a,
        mid_setGroupingSize_8226bd0b0fc13dba,
        mid_setGroupingUsed_f5dd97eebf6a215a,
        mid_setMaximumFractionDigits_8226bd0b0fc13dba,
        mid_setMaximumIntegerDigits_8226bd0b0fc13dba,
        mid_setMinimumFractionDigits_8226bd0b0fc13dba,
        mid_setMinimumIntegerDigits_8226bd0b0fc13dba,
        mid_setMultiplier_8226bd0b0fc13dba,
        mid_setNegativePrefix_ee46a189998009d6,
        mid_setNegativeSuffix_ee46a189998009d6,
        mid_setParseBigDecimal_f5dd97eebf6a215a,
        mid_setPositivePrefix_ee46a189998009d6,
        mid_setPositiveSuffix_ee46a189998009d6,
        mid_setStrict_f5dd97eebf6a215a,
        mid_toLocalizedPattern_e7df854526d67fa3,
        mid_toPattern_e7df854526d67fa3,
        mid_toString_e7df854526d67fa3,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit DecimalFormat(jobject obj) : ::java::text::NumberFormat(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      DecimalFormat(const DecimalFormat& obj) : ::java::text::NumberFormat(obj) {}

      DecimalFormat();
      DecimalFormat(const ::java::lang::String &);

      void applyLocalizedPattern(const ::java::lang::String &) const;
      void applyPattern(const ::java::lang::String &) const;
      ::java::lang::Object clone() const;
      jboolean equals(const ::java::lang::Object &) const;
      ::java::util::Currency getCurrency() const;
      jint getGroupingSize() const;
      jint getMaximumFractionDigits() const;
      jint getMaximumIntegerDigits() const;
      jint getMinimumFractionDigits() const;
      jint getMinimumIntegerDigits() const;
      jint getMultiplier() const;
      ::java::lang::String getNegativePrefix() const;
      ::java::lang::String getNegativeSuffix() const;
      ::java::lang::String getPositivePrefix() const;
      ::java::lang::String getPositiveSuffix() const;
      jint hashCode() const;
      jboolean isDecimalSeparatorAlwaysShown() const;
      jboolean isParseBigDecimal() const;
      jboolean isStrict() const;
      void setCurrency(const ::java::util::Currency &) const;
      void setDecimalSeparatorAlwaysShown(jboolean) const;
      void setGroupingSize(jint) const;
      void setGroupingUsed(jboolean) const;
      void setMaximumFractionDigits(jint) const;
      void setMaximumIntegerDigits(jint) const;
      void setMinimumFractionDigits(jint) const;
      void setMinimumIntegerDigits(jint) const;
      void setMultiplier(jint) const;
      void setNegativePrefix(const ::java::lang::String &) const;
      void setNegativeSuffix(const ::java::lang::String &) const;
      void setParseBigDecimal(jboolean) const;
      void setPositivePrefix(const ::java::lang::String &) const;
      void setPositiveSuffix(const ::java::lang::String &) const;
      void setStrict(jboolean) const;
      ::java::lang::String toLocalizedPattern() const;
      ::java::lang::String toPattern() const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace text {
    extern PyType_Def PY_TYPE_DEF(DecimalFormat);
    extern PyTypeObject *PY_TYPE(DecimalFormat);

    class t_DecimalFormat {
    public:
      PyObject_HEAD
      DecimalFormat object;
      static PyObject *wrap_Object(const DecimalFormat&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
