#ifndef java_util_Currency_H
#define java_util_Currency_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class Serializable;
  }
  namespace util {
    class Set;
    class Locale;
    class Currency;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class Currency : public ::java::lang::Object {
     public:
      enum {
        mid_getAvailableCurrencies_4df174295554d7bd,
        mid_getCurrencyCode_09a7afff1868fc5e,
        mid_getDefaultFractionDigits_20fbf7565993c3d7,
        mid_getDisplayName_09a7afff1868fc5e,
        mid_getDisplayName_d2a6991e8d2aa45a,
        mid_getInstance_0f0ac219bc095928,
        mid_getInstance_744d01caf13d4e54,
        mid_getNumericCode_20fbf7565993c3d7,
        mid_getNumericCodeAsString_09a7afff1868fc5e,
        mid_getSymbol_09a7afff1868fc5e,
        mid_getSymbol_d2a6991e8d2aa45a,
        mid_toString_09a7afff1868fc5e,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Currency(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Currency(const Currency& obj) : ::java::lang::Object(obj) {}

      static ::java::util::Set getAvailableCurrencies();
      ::java::lang::String getCurrencyCode() const;
      jint getDefaultFractionDigits() const;
      ::java::lang::String getDisplayName() const;
      ::java::lang::String getDisplayName(const ::java::util::Locale &) const;
      static Currency getInstance(const ::java::lang::String &);
      static Currency getInstance(const ::java::util::Locale &);
      jint getNumericCode() const;
      ::java::lang::String getNumericCodeAsString() const;
      ::java::lang::String getSymbol() const;
      ::java::lang::String getSymbol(const ::java::util::Locale &) const;
      ::java::lang::String toString() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(Currency);
    extern PyTypeObject *PY_TYPE(Currency);

    class t_Currency {
    public:
      PyObject_HEAD
      Currency object;
      static PyObject *wrap_Object(const Currency&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
