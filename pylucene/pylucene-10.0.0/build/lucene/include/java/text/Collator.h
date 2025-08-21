#ifndef java_text_Collator_H
#define java_text_Collator_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class Cloneable;
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
        mid_clone_5655ed8670534604,
        mid_compare_3eac829a4fafb93c,
        mid_compare_40855b2159b37f04,
        mid_equals_570b5248a6da3ef6,
        mid_equals_c0bb61902cd4a0bf,
        mid_getAvailableLocales_3d06acbf6689fb6c,
        mid_getDecomposition_20fbf7565993c3d7,
        mid_getInstance_0efeb584271753a9,
        mid_getInstance_63a52192f47873ba,
        mid_getStrength_20fbf7565993c3d7,
        mid_hashCode_20fbf7565993c3d7,
        mid_setDecomposition_540b2b23d51b1efd,
        mid_setStrength_540b2b23d51b1efd,
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
