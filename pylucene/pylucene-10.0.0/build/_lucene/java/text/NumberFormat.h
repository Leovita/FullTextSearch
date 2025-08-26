#ifndef java_text_NumberFormat_H
#define java_text_NumberFormat_H

#include "java/text/Format.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
    class Number;
    class StringBuffer;
    class String;
  }
  namespace text {
    class NumberFormat;
  }
  namespace util {
    class Currency;
    class Locale;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class NumberFormat : public ::java::text::Format {
     public:
      enum {
        mid_clone_4819806f62f1360a,
        mid_equals_00d17418847797d4,
        mid_format_cddd216549402f17,
        mid_format_229c7997533c8554,
        mid_getAvailableLocales_0daa090ed7228b3c,
        mid_getCompactNumberInstance_cae2d46e75202e5c,
        mid_getCurrency_ac0abfec5849b895,
        mid_getCurrencyInstance_cae2d46e75202e5c,
        mid_getCurrencyInstance_90f45acdc5014a52,
        mid_getInstance_cae2d46e75202e5c,
        mid_getInstance_90f45acdc5014a52,
        mid_getIntegerInstance_cae2d46e75202e5c,
        mid_getIntegerInstance_90f45acdc5014a52,
        mid_getMaximumFractionDigits_bd89ce15dad49192,
        mid_getMaximumIntegerDigits_bd89ce15dad49192,
        mid_getMinimumFractionDigits_bd89ce15dad49192,
        mid_getMinimumIntegerDigits_bd89ce15dad49192,
        mid_getNumberInstance_cae2d46e75202e5c,
        mid_getNumberInstance_90f45acdc5014a52,
        mid_getPercentInstance_cae2d46e75202e5c,
        mid_getPercentInstance_90f45acdc5014a52,
        mid_hashCode_bd89ce15dad49192,
        mid_isGroupingUsed_9aa4f33e82ea333f,
        mid_isParseIntegerOnly_9aa4f33e82ea333f,
        mid_isStrict_9aa4f33e82ea333f,
        mid_parse_6763c37c38b51449,
        mid_setCurrency_9d1207d1a857fe11,
        mid_setGroupingUsed_f5dd97eebf6a215a,
        mid_setMaximumFractionDigits_8226bd0b0fc13dba,
        mid_setMaximumIntegerDigits_8226bd0b0fc13dba,
        mid_setMinimumFractionDigits_8226bd0b0fc13dba,
        mid_setMinimumIntegerDigits_8226bd0b0fc13dba,
        mid_setParseIntegerOnly_f5dd97eebf6a215a,
        mid_setStrict_f5dd97eebf6a215a,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit NumberFormat(jobject obj) : ::java::text::Format(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      NumberFormat(const NumberFormat& obj) : ::java::text::Format(obj) {}

      static jint FRACTION_FIELD;
      static jint INTEGER_FIELD;

      ::java::lang::Object clone() const;
      jboolean equals(const ::java::lang::Object &) const;
      ::java::lang::String format(jdouble) const;
      ::java::lang::String format(jlong) const;
      static JArray< ::java::util::Locale > getAvailableLocales();
      static NumberFormat getCompactNumberInstance();
      ::java::util::Currency getCurrency() const;
      static NumberFormat getCurrencyInstance();
      static NumberFormat getCurrencyInstance(const ::java::util::Locale &);
      static NumberFormat getInstance();
      static NumberFormat getInstance(const ::java::util::Locale &);
      static NumberFormat getIntegerInstance();
      static NumberFormat getIntegerInstance(const ::java::util::Locale &);
      jint getMaximumFractionDigits() const;
      jint getMaximumIntegerDigits() const;
      jint getMinimumFractionDigits() const;
      jint getMinimumIntegerDigits() const;
      static NumberFormat getNumberInstance();
      static NumberFormat getNumberInstance(const ::java::util::Locale &);
      static NumberFormat getPercentInstance();
      static NumberFormat getPercentInstance(const ::java::util::Locale &);
      jint hashCode() const;
      jboolean isGroupingUsed() const;
      jboolean isParseIntegerOnly() const;
      jboolean isStrict() const;
      ::java::lang::Number parse(const ::java::lang::String &) const;
      void setCurrency(const ::java::util::Currency &) const;
      void setGroupingUsed(jboolean) const;
      void setMaximumFractionDigits(jint) const;
      void setMaximumIntegerDigits(jint) const;
      void setMinimumFractionDigits(jint) const;
      void setMinimumIntegerDigits(jint) const;
      void setParseIntegerOnly(jboolean) const;
      void setStrict(jboolean) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace text {
    extern PyType_Def PY_TYPE_DEF(NumberFormat);
    extern PyTypeObject *PY_TYPE(NumberFormat);

    class t_NumberFormat {
    public:
      PyObject_HEAD
      NumberFormat object;
      static PyObject *wrap_Object(const NumberFormat&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
