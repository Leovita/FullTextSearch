#ifndef java_text_NumberFormat_H
#define java_text_NumberFormat_H

#include "java/text/Format.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class Number;
    class Object;
    class StringBuffer;
  }
  namespace text {
    class NumberFormat;
  }
  namespace util {
    class Locale;
    class Currency;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class NumberFormat : public ::java::text::Format {
     public:
      enum {
        mid_clone_5655ed8670534604,
        mid_equals_570b5248a6da3ef6,
        mid_format_4822cf3d793bd8b0,
        mid_format_f0c925499cca37b2,
        mid_getAvailableLocales_3d06acbf6689fb6c,
        mid_getCompactNumberInstance_98badc23d3190d40,
        mid_getCurrency_a3e058b826a2a60f,
        mid_getCurrencyInstance_98badc23d3190d40,
        mid_getCurrencyInstance_76b8a53a485d6bac,
        mid_getInstance_98badc23d3190d40,
        mid_getInstance_76b8a53a485d6bac,
        mid_getIntegerInstance_98badc23d3190d40,
        mid_getIntegerInstance_76b8a53a485d6bac,
        mid_getMaximumFractionDigits_20fbf7565993c3d7,
        mid_getMaximumIntegerDigits_20fbf7565993c3d7,
        mid_getMinimumFractionDigits_20fbf7565993c3d7,
        mid_getMinimumIntegerDigits_20fbf7565993c3d7,
        mid_getNumberInstance_98badc23d3190d40,
        mid_getNumberInstance_76b8a53a485d6bac,
        mid_getPercentInstance_98badc23d3190d40,
        mid_getPercentInstance_76b8a53a485d6bac,
        mid_hashCode_20fbf7565993c3d7,
        mid_isGroupingUsed_947277eca0748c4e,
        mid_isParseIntegerOnly_947277eca0748c4e,
        mid_parse_b1b30075af4e4fdc,
        mid_setCurrency_21045b2434fa5a39,
        mid_setGroupingUsed_b110fc3a58c081ab,
        mid_setMaximumFractionDigits_540b2b23d51b1efd,
        mid_setMaximumIntegerDigits_540b2b23d51b1efd,
        mid_setMinimumFractionDigits_540b2b23d51b1efd,
        mid_setMinimumIntegerDigits_540b2b23d51b1efd,
        mid_setParseIntegerOnly_b110fc3a58c081ab,
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
      ::java::lang::Number parse(const ::java::lang::String &) const;
      void setCurrency(const ::java::util::Currency &) const;
      void setGroupingUsed(jboolean) const;
      void setMaximumFractionDigits(jint) const;
      void setMaximumIntegerDigits(jint) const;
      void setMinimumFractionDigits(jint) const;
      void setMinimumIntegerDigits(jint) const;
      void setParseIntegerOnly(jboolean) const;
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
