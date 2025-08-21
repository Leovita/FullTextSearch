#ifndef java_text_DecimalFormat_H
#define java_text_DecimalFormat_H

#include "java/text/NumberFormat.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class Number;
    class Object;
    class StringBuffer;
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
        mid_init$_3720c61b0679eb3e,
        mid_init$_0d82408c6e55bc30,
        mid_applyLocalizedPattern_0d82408c6e55bc30,
        mid_applyPattern_0d82408c6e55bc30,
        mid_clone_5655ed8670534604,
        mid_equals_570b5248a6da3ef6,
        mid_getCurrency_a3e058b826a2a60f,
        mid_getGroupingSize_20fbf7565993c3d7,
        mid_getMaximumFractionDigits_20fbf7565993c3d7,
        mid_getMaximumIntegerDigits_20fbf7565993c3d7,
        mid_getMinimumFractionDigits_20fbf7565993c3d7,
        mid_getMinimumIntegerDigits_20fbf7565993c3d7,
        mid_getMultiplier_20fbf7565993c3d7,
        mid_getNegativePrefix_09a7afff1868fc5e,
        mid_getNegativeSuffix_09a7afff1868fc5e,
        mid_getPositivePrefix_09a7afff1868fc5e,
        mid_getPositiveSuffix_09a7afff1868fc5e,
        mid_hashCode_20fbf7565993c3d7,
        mid_isDecimalSeparatorAlwaysShown_947277eca0748c4e,
        mid_isParseBigDecimal_947277eca0748c4e,
        mid_setCurrency_21045b2434fa5a39,
        mid_setDecimalSeparatorAlwaysShown_b110fc3a58c081ab,
        mid_setGroupingSize_540b2b23d51b1efd,
        mid_setGroupingUsed_b110fc3a58c081ab,
        mid_setMaximumFractionDigits_540b2b23d51b1efd,
        mid_setMaximumIntegerDigits_540b2b23d51b1efd,
        mid_setMinimumFractionDigits_540b2b23d51b1efd,
        mid_setMinimumIntegerDigits_540b2b23d51b1efd,
        mid_setMultiplier_540b2b23d51b1efd,
        mid_setNegativePrefix_0d82408c6e55bc30,
        mid_setNegativeSuffix_0d82408c6e55bc30,
        mid_setParseBigDecimal_b110fc3a58c081ab,
        mid_setPositivePrefix_0d82408c6e55bc30,
        mid_setPositiveSuffix_0d82408c6e55bc30,
        mid_toLocalizedPattern_09a7afff1868fc5e,
        mid_toPattern_09a7afff1868fc5e,
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
      ::java::lang::String toLocalizedPattern() const;
      ::java::lang::String toPattern() const;
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
