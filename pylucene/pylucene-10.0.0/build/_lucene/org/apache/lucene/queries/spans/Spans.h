#ifndef org_apache_lucene_queries_spans_Spans_H
#define org_apache_lucene_queries_spans_Spans_H

#include "org/apache/lucene/search/DocIdSetIterator.h"

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

          class Spans : public ::org::apache::lucene::search::DocIdSetIterator {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_asTwoPhaseIterator_c827d3ab11221e86,
              mid_collect_6a7e0ba175326672,
              mid_endPosition_bd89ce15dad49192,
              mid_nextStartPosition_bd89ce15dad49192,
              mid_positionsCost_8b62236f0e4d0dbc,
              mid_startPosition_bd89ce15dad49192,
              mid_toString_e7df854526d67fa3,
              mid_width_bd89ce15dad49192,
              mid_doStartCurrentDoc_e7bdbe105ce1bafb,
              mid_doCurrentSpans_e7bdbe105ce1bafb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Spans(jobject obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Spans(const Spans& obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {}

            static jint NO_MORE_POSITIONS;

            Spans();

            ::org::apache::lucene::search::TwoPhaseIterator asTwoPhaseIterator() const;
            void collect(const ::org::apache::lucene::queries::spans::SpanCollector &) const;
            jint endPosition() const;
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
          extern PyType_Def PY_TYPE_DEF(Spans);
          extern PyTypeObject *PY_TYPE(Spans);

          class t_Spans {
          public:
            PyObject_HEAD
            Spans object;
            static PyObject *wrap_Object(const Spans&);
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
