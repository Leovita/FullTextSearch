#ifndef java_text_Collator_H
#define java_text_Collator_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Cloneable;
    class Class;
    class String;
  }
  namespace util {
    class Comparator;
    class Locale;
  }
  namespace text {
    class Collator;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class Collator : public ::java::lang::Object {
     public:
      enum {
        mid_clone_4819806f62f1360a,
        mid_compare_d543d4acd34a463f,
        mid_compare_69b7b8451ec9257c,
        mid_equals_00d17418847797d4,
        mid_equals_8159c21a76bdf601,
        mid_getAvailableLocales_0daa090ed7228b3c,
        mid_getDecomposition_bd89ce15dad49192,
        mid_getInstance_0c6f472392900c4f,
        mid_getInstance_152785a46f1bab65,
        mid_getStrength_bd89ce15dad49192,
        mid_hashCode_bd89ce15dad49192,
        mid_setDecomposition_8226bd0b0fc13dba,
        mid_setStrength_8226bd0b0fc13dba,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit Collator(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      Collator(const Collator& obj) : ::java::lang::Object(obj) {}

      static jint CANONICAL_DECOMPOSITION;
      static jint FULL_DECOMPOSITION;
      static jint IDENTICAL;
      static jint NO_DECOMPOSITION;
      static jint PRIMARY;
      static jint SECONDARY;
      static jint TERTIARY;

      ::java::lang::Object clone() const;
      jint compare(const ::java::lang::String &, const ::java::lang::String &) const;
      jint compare(const ::java::lang::Object &, const ::java::lang::Object &) const;
      jboolean equals(const ::java::lang::Object &) const;
      jboolean equals(const ::java::lang::String &, const ::java::lang::String &) const;
      static JArray< ::java::util::Locale > getAvailableLocales();
      jint getDecomposition() const;
      static Collator getInstance();
      static Collator getInstance(const ::java::util::Locale &);
      jint getStrength() const;
      jint hashCode() const;
      void setDecomposition(jint) const;
      void setStrength(jint) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace text {
    extern PyType_Def PY_TYPE_DEF(Collator);
    extern PyTypeObject *PY_TYPE(Collator);

    class t_Collator {
    public:
      PyObject_HEAD
      Collator object;
      static PyObject *wrap_Object(const Collator&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
