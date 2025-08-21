#ifndef org_apache_lucene_queries_intervals_IntervalMatchesIterator_H
#define org_apache_lucene_queries_intervals_IntervalMatchesIterator_H

#include "org/apache/lucene/search/MatchesIterator.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace intervals {

          class IntervalMatchesIterator : public ::org::apache::lucene::search::MatchesIterator {
           public:
            enum {
              mid_gaps_20fbf7565993c3d7,
              mid_width_20fbf7565993c3d7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntervalMatchesIterator(jobject obj) : ::org::apache::lucene::search::MatchesIterator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntervalMatchesIterator(const IntervalMatchesIterator& obj) : ::org::apache::lucene::search::MatchesIterator(obj) {}

            jint gaps() const;
            jint width() const;
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
      namespace queries {
        namespace intervals {
          extern PyType_Def PY_TYPE_DEF(IntervalMatchesIterator);
          extern PyTypeObject *PY_TYPE(IntervalMatchesIterator);

          class t_IntervalMatchesIterator {
          public:
            PyObject_HEAD
            IntervalMatchesIterator object;
            static PyObject *wrap_Object(const IntervalMatchesIterator&);
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
