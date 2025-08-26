#ifndef org_apache_lucene_queries_spans_TermSpans_H
#define org_apache_lucene_queries_spans_TermSpans_H

#include "org/apache/lucene/queries/spans/Spans.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class PostingsEnum;
        class Term;
      }
      namespace search {
        class LeafSimScorer;
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

          class TermSpans : public ::org::apache::lucene::queries::spans::Spans {
           public:
            enum {
              mid_init$_9e48627fe2b4faa7,
              mid_advance_a3904e10f5bb9437,
              mid_collect_6a7e0ba175326672,
              mid_cost_0f176418e3e16541,
              mid_docID_bd89ce15dad49192,
              mid_endPosition_bd89ce15dad49192,
              mid_getPostings_b1e913e16fa764af,
              mid_nextDoc_bd89ce15dad49192,
              mid_nextStartPosition_bd89ce15dad49192,
              mid_positionsCost_8b62236f0e4d0dbc,
              mid_startPosition_bd89ce15dad49192,
              mid_toString_e7df854526d67fa3,
              mid_width_bd89ce15dad49192,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TermSpans(jobject obj) : ::org::apache::lucene::queries::spans::Spans(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TermSpans(const TermSpans& obj) : ::org::apache::lucene::queries::spans::Spans(obj) {}

            TermSpans(const ::org::apache::lucene::search::LeafSimScorer &, const ::org::apache::lucene::index::PostingsEnum &, const ::org::apache::lucene::index::Term &, jfloat);

            jint advance(jint) const;
            void collect(const ::org::apache::lucene::queries::spans::SpanCollector &) const;
            jlong cost() const;
            jint docID() const;
            jint endPosition() const;
            ::org::apache::lucene::index::PostingsEnum getPostings() const;
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
          extern PyType_Def PY_TYPE_DEF(TermSpans);
          extern PyTypeObject *PY_TYPE(TermSpans);

          class t_TermSpans {
          public:
            PyObject_HEAD
            TermSpans object;
            static PyObject *wrap_Object(const TermSpans&);
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
