#ifndef org_apache_lucene_search_uhighlight_LengthGoalBreakIterator_H
#define org_apache_lucene_search_uhighlight_LengthGoalBreakIterator_H

#include "java/text/BreakIterator.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {
          class LengthGoalBreakIterator;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {

          class LengthGoalBreakIterator : public ::java::text::BreakIterator {
           public:
            enum {
              mid_clone_4819806f62f1360a,
              mid_createClosestToLength_d5f12a855adfb844,
              mid_createMinLength_d5f12a855adfb844,
              mid_current_bd89ce15dad49192,
              mid_first_bd89ce15dad49192,
              mid_following_a3904e10f5bb9437,
              mid_isBoundary_a8281eb3b9d9672d,
              mid_last_bd89ce15dad49192,
              mid_next_bd89ce15dad49192,
              mid_next_a3904e10f5bb9437,
              mid_preceding_a3904e10f5bb9437,
              mid_previous_bd89ce15dad49192,
              mid_setText_ee46a189998009d6,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LengthGoalBreakIterator(jobject obj) : ::java::text::BreakIterator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LengthGoalBreakIterator(const LengthGoalBreakIterator& obj) : ::java::text::BreakIterator(obj) {}

            ::java::lang::Object clone() const;
            static LengthGoalBreakIterator createClosestToLength(const ::java::text::BreakIterator &, jint, jfloat);
            static LengthGoalBreakIterator createMinLength(const ::java::text::BreakIterator &, jint, jfloat);
            jint current() const;
            jint first() const;
            jint following(jint) const;
            jboolean isBoundary(jint) const;
            jint last() const;
            jint next() const;
            jint next(jint) const;
            jint preceding(jint) const;
            jint previous() const;
            void setText(const ::java::lang::String &) const;
            ::java::lang::String toString() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {
          extern PyType_Def PY_TYPE_DEF(LengthGoalBreakIterator);
          extern PyTypeObject *PY_TYPE(LengthGoalBreakIterator);

          class t_LengthGoalBreakIterator {
          public:
            PyObject_HEAD
            LengthGoalBreakIterator object;
            static PyObject *wrap_Object(const LengthGoalBreakIterator&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
