#ifndef org_apache_lucene_search_uhighlight_CustomSeparatorBreakIterator_H
#define org_apache_lucene_search_uhighlight_CustomSeparatorBreakIterator_H

#include "java/text/BreakIterator.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {

          class CustomSeparatorBreakIterator : public ::java::text::BreakIterator {
           public:
            enum {
              mid_init$_97f8668422006638,
              mid_current_20fbf7565993c3d7,
              mid_first_20fbf7565993c3d7,
              mid_following_3c9bba330f083871,
              mid_last_20fbf7565993c3d7,
              mid_next_20fbf7565993c3d7,
              mid_next_3c9bba330f083871,
              mid_preceding_3c9bba330f083871,
              mid_previous_20fbf7565993c3d7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CustomSeparatorBreakIterator(jobject obj) : ::java::text::BreakIterator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CustomSeparatorBreakIterator(const CustomSeparatorBreakIterator& obj) : ::java::text::BreakIterator(obj) {}

            CustomSeparatorBreakIterator(jchar);

            jint current() const;
            jint first() const;
            jint following(jint) const;
            jint last() const;
            jint next() const;
            jint next(jint) const;
            jint preceding(jint) const;
            jint previous() const;
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
          extern PyType_Def PY_TYPE_DEF(CustomSeparatorBreakIterator);
          extern PyTypeObject *PY_TYPE(CustomSeparatorBreakIterator);

          class t_CustomSeparatorBreakIterator {
          public:
            PyObject_HEAD
            CustomSeparatorBreakIterator object;
            static PyObject *wrap_Object(const CustomSeparatorBreakIterator&);
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
