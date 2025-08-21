#ifndef org_apache_lucene_search_uhighlight_LengthGoalBreakIterator_H
#define org_apache_lucene_search_uhighlight_LengthGoalBreakIterator_H

#include "java/text/BreakIterator.h"

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
namespace java {
  namespace lang {
    class Class;
    class String;
    class Object;
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
              mid_clone_5655ed8670534604,
              mid_createClosestToLength_05ac6cd8e665a22f,
              mid_createMinLength_05ac6cd8e665a22f,
              mid_current_20fbf7565993c3d7,
              mid_first_20fbf7565993c3d7,
              mid_following_3c9bba330f083871,
              mid_isBoundary_ae22d3a856ad56f1,
              mid_last_20fbf7565993c3d7,
              mid_next_20fbf7565993c3d7,
              mid_next_3c9bba330f083871,
              mid_preceding_3c9bba330f083871,
              mid_previous_20fbf7565993c3d7,
              mid_setText_0d82408c6e55bc30,
              mid_toString_09a7afff1868fc5e,
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
