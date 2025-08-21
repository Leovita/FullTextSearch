#ifndef org_apache_lucene_queries_spans_FilterSpans_H
#define org_apache_lucene_queries_spans_FilterSpans_H

#include "org/apache/lucene/queries/spans/Spans.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {

          class FilterSpans : public ::org::apache::lucene::queries::spans::Spans {
           public:
            enum {
              mid_advance_3c9bba330f083871,
              mid_asTwoPhaseIterator_28c4f2cd9e5f8da7,
              mid_collect_f57fa7214a0e10bb,
              mid_cost_16939d9d0a9a9721,
              mid_docID_20fbf7565993c3d7,
              mid_endPosition_20fbf7565993c3d7,
              mid_nextDoc_20fbf7565993c3d7,
              mid_nextStartPosition_20fbf7565993c3d7,
              mid_positionsCost_9b6c3480dac00edf,
              mid_startPosition_20fbf7565993c3d7,
              mid_toString_09a7afff1868fc5e,
              mid_width_20fbf7565993c3d7,
              mid_accept_b59c8c4cfb25644b,
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
