#ifndef java_text_BreakIterator_H
#define java_text_BreakIterator_H

#include "java/lang/Object.h"

namespace java {
  namespace text {
    class BreakIterator;
  }
  namespace lang {
    class Class;
    class String;
    class Cloneable;
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
        mid_clone_5655ed8670534604,
        mid_current_20fbf7565993c3d7,
        mid_first_20fbf7565993c3d7,
        mid_following_3c9bba330f083871,
        mid_getAvailableLocales_3d06acbf6689fb6c,
        mid_getCharacterInstance_400eb320c957b561,
        mid_getCharacterInstance_787660464240461f,
        mid_getLineInstance_400eb320c957b561,
        mid_getLineInstance_787660464240461f,
        mid_getSentenceInstance_400eb320c957b561,
        mid_getSentenceInstance_787660464240461f,
        mid_getWordInstance_400eb320c957b561,
        mid_getWordInstance_787660464240461f,
        mid_isBoundary_ae22d3a856ad56f1,
        mid_last_20fbf7565993c3d7,
        mid_next_20fbf7565993c3d7,
        mid_next_3c9bba330f083871,
        mid_preceding_3c9bba330f083871,
        mid_previous_20fbf7565993c3d7,
        mid_setText_0d82408c6e55bc30,
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
