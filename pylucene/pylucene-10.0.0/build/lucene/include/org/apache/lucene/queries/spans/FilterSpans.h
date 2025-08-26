#ifndef org_apache_lucene_queries_spans_FilterSpans_H
#define org_apache_lucene_queries_spans_FilterSpans_H

#include "org/apache/lucene/queries/spans/Spans.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class TwoPhaseIterator;
      }
      namespace queries {
        namespace spans {
          class SpanCollector;
        }
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {

          class FilterSpans : public ::org::apache::lucene::queries::spans::Spans {
           public:
            enum {
              mid_advance_a3904e10f5bb9437,
              mid_asTwoPhaseIterator_c827d3ab11221e86,
              mid_collect_6a7e0ba175326672,
              mid_cost_0f176418e3e16541,
              mid_docID_bd89ce15dad49192,
              mid_endPosition_bd89ce15dad49192,
              mid_nextDoc_bd89ce15dad49192,
              mid_nextStartPosition_bd89ce15dad49192,
              mid_positionsCost_8b62236f0e4d0dbc,
              mid_startPosition_bd89ce15dad49192,
              mid_toString_e7df854526d67fa3,
              mid_width_bd89ce15dad49192,
              mid_accept_ded8f9d8e47cc29a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FilterSpans(jobject obj) : ::org::apache::lucene::queries::spans::Spans(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FilterSpans(const FilterSpans& obj) : ::org::apache::lucene::queries::spans::Spans(obj) {}

            jint advance(jint) const;
            ::org::apache::lucene::search::TwoPhaseIterator asTwoPhaseIterator() const;
            void collect(const ::org::apache::lucene::queries::spans::SpanCollector &) const;
            jlong cost() const;
            jint docID() const;
            jint endPosition() const;
            jint nextDoc() const;
            jint nextStartPosition() const;
            jfloat positionsCost() const;
            jint startPosition() const;
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
        namespace spans {
          extern PyType_Def PY_TYPE_DEF(FilterSpans);
          extern PyTypeObject *PY_TYPE(FilterSpans);

          class t_FilterSpans {
          public:
            PyObject_HEAD
            FilterSpans object;
            static PyObject *wrap_Object(const FilterSpans&);
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
