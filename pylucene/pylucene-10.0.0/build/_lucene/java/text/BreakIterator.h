#ifndef java_text_BreakIterator_H
#define java_text_BreakIterator_H

#include "java/lang/Object.h"

namespace java {
  namespace text {
    class BreakIterator;
  }
  namespace lang {
    class Cloneable;
    class Class;
    class String;
  }
  namespace util {
    class Locale;
  }
}
template<class T> class JArray;

namespace java {
  namespace text {

    class BreakIterator : public ::java::lang::Object {
     public:
      enum {
        mid_clone_4819806f62f1360a,
        mid_current_bd89ce15dad49192,
        mid_first_bd89ce15dad49192,
        mid_following_a3904e10f5bb9437,
        mid_getAvailableLocales_0daa090ed7228b3c,
        mid_getCharacterInstance_be856f4ba1b0c28d,
        mid_getCharacterInstance_0144641a48e32b21,
        mid_getLineInstance_be856f4ba1b0c28d,
        mid_getLineInstance_0144641a48e32b21,
        mid_getSentenceInstance_be856f4ba1b0c28d,
        mid_getSentenceInstance_0144641a48e32b21,
        mid_getWordInstance_be856f4ba1b0c28d,
        mid_getWordInstance_0144641a48e32b21,
        mid_isBoundary_a8281eb3b9d9672d,
        mid_last_bd89ce15dad49192,
        mid_next_bd89ce15dad49192,
        mid_next_a3904e10f5bb9437,
        mid_preceding_a3904e10f5bb9437,
        mid_previous_bd89ce15dad49192,
        mid_setText_ee46a189998009d6,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit BreakIterator(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      BreakIterator(const BreakIterator& obj) : ::java::lang::Object(obj) {}

      static jint DONE;

      ::java::lang::Object clone() const;
      jint current() const;
      jint first() const;
      jint following(jint) const;
      static JArray< ::java::util::Locale > getAvailableLocales();
      static BreakIterator getCharacterInstance();
      static BreakIterator getCharacterInstance(const ::java::util::Locale &);
      static BreakIterator getLineInstance();
      static BreakIterator getLineInstance(const ::java::util::Locale &);
      static BreakIterator getSentenceInstance();
      static BreakIterator getSentenceInstance(const ::java::util::Locale &);
      static BreakIterator getWordInstance();
      static BreakIterator getWordInstance(const ::java::util::Locale &);
      jboolean isBoundary(jint) const;
      jint last() const;
      jint next() const;
      jint next(jint) const;
      jint preceding(jint) const;
      jint previous() const;
      void setText(const ::java::lang::String &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace text {
    extern PyType_Def PY_TYPE_DEF(BreakIterator);
    extern PyTypeObject *PY_TYPE(BreakIterator);

    class t_BreakIterator {
    public:
      PyObject_HEAD
      BreakIterator object;
      static PyObject *wrap_Object(const BreakIterator&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
