#ifndef org_apache_lucene_queries_intervals_IntervalFilter_H
#define org_apache_lucene_queries_intervals_IntervalFilter_H

#include "org/apache/lucene/queries/intervals/IntervalIterator.h"

namespace java {
  namespace io {
    class IOException;
  }
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

          class IntervalFilter : public ::org::apache::lucene::queries::intervals::IntervalIterator {
           public:
            enum {
              mid_init$_47762719cd9438bb,
              mid_advance_a3904e10f5bb9437,
              mid_cost_0f176418e3e16541,
              mid_docID_bd89ce15dad49192,
              mid_end_bd89ce15dad49192,
              mid_gaps_bd89ce15dad49192,
              mid_matchCost_8b62236f0e4d0dbc,
              mid_nextDoc_bd89ce15dad49192,
              mid_nextInterval_bd89ce15dad49192,
              mid_start_bd89ce15dad49192,
              mid_accept_9aa4f33e82ea333f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntervalFilter(jobject obj) : ::org::apache::lucene::queries::intervals::IntervalIterator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntervalFilter(const IntervalFilter& obj) : ::org::apache::lucene::queries::intervals::IntervalIterator(obj) {}

            IntervalFilter(const ::org::apache::lucene::queries::intervals::IntervalIterator &);

            jint advance(jint) const;
            jlong cost() const;
            jint docID() const;
            jint end() const;
            jint gaps() const;
            jfloat matchCost() const;
            jint nextDoc() const;
            jint nextInterval() const;
            jint start() const;
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
          extern PyType_Def PY_TYPE_DEF(IntervalFilter);
          extern PyTypeObject *PY_TYPE(IntervalFilter);

          class t_IntervalFilter {
          public:
            PyObject_HEAD
            IntervalFilter object;
            static PyObject *wrap_Object(const IntervalFilter&);
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
