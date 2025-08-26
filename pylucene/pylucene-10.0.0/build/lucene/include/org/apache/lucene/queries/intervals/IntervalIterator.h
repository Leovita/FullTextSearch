#ifndef org_apache_lucene_queries_intervals_IntervalIterator_H
#define org_apache_lucene_queries_intervals_IntervalIterator_H

#include "org/apache/lucene/search/DocIdSetIterator.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace intervals {

          class IntervalIterator : public ::org::apache::lucene::search::DocIdSetIterator {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_end_bd89ce15dad49192,
              mid_gaps_bd89ce15dad49192,
              mid_matchCost_8b62236f0e4d0dbc,
              mid_nextInterval_bd89ce15dad49192,
              mid_start_bd89ce15dad49192,
              mid_toString_e7df854526d67fa3,
              mid_width_bd89ce15dad49192,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntervalIterator(jobject obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntervalIterator(const IntervalIterator& obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {}

            static jint NO_MORE_INTERVALS;

            IntervalIterator();

            jint end() const;
            jint gaps() const;
            jfloat matchCost() const;
            jint nextInterval() const;
            jint start() const;
            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(IntervalIterator);
          extern PyTypeObject *PY_TYPE(IntervalIterator);

          class t_IntervalIterator {
          public:
            PyObject_HEAD
            IntervalIterator object;
            static PyObject *wrap_Object(const IntervalIterator&);
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
