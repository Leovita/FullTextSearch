#ifndef org_apache_lucene_queries_spans_TermSpans_H
#define org_apache_lucene_queries_spans_TermSpans_H

#include "org/apache/lucene/queries/spans/Spans.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
        class PostingsEnum;
      }
      namespace queries {
        namespace spans {
          class SpanCollector;
        }
      }
      namespace search {
        class LeafSimScorer;
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

          class TermSpans : public ::org::apache::lucene::queries::spans::Spans {
           public:
            enum {
              mid_init$_6e2d266a8d9ac2c5,
              mid_advance_3c9bba330f083871,
              mid_collect_f57fa7214a0e10bb,
              mid_cost_16939d9d0a9a9721,
              mid_docID_20fbf7565993c3d7,
              mid_endPosition_20fbf7565993c3d7,
              mid_getPostings_4e8e845e02728bdc,
              mid_nextDoc_20fbf7565993c3d7,
              mid_nextStartPosition_20fbf7565993c3d7,
              mid_positionsCost_9b6c3480dac00edf,
              mid_startPosition_20fbf7565993c3d7,
              mid_toString_09a7afff1868fc5e,
              mid_width_20fbf7565993c3d7,
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
