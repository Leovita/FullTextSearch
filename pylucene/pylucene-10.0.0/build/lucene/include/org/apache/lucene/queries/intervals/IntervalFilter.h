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
              mid_init$_e20f469d727f28f3,
              mid_advance_3c9bba330f083871,
              mid_cost_16939d9d0a9a9721,
              mid_docID_20fbf7565993c3d7,
              mid_end_20fbf7565993c3d7,
              mid_gaps_20fbf7565993c3d7,
              mid_matchCost_9b6c3480dac00edf,
              mid_nextDoc_20fbf7565993c3d7,
              mid_nextInterval_20fbf7565993c3d7,
              mid_start_20fbf7565993c3d7,
              mid_accept_947277eca0748c4e,
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
