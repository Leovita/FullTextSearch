#ifndef org_apache_lucene_queries_spans_ConjunctionSpans_H
#define org_apache_lucene_queries_spans_ConjunctionSpans_H

#include "org/apache/lucene/queries/spans/Spans.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class TwoPhaseIterator;
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

          class ConjunctionSpans : public ::org::apache::lucene::queries::spans::Spans {
           public:
            enum {
              mid_advance_3c9bba330f083871,
              mid_asTwoPhaseIterator_28c4f2cd9e5f8da7,
              mid_cost_16939d9d0a9a9721,
              mid_docID_20fbf7565993c3d7,
              mid_getSubSpans_b1277192ed8fbc0e,
              mid_nextDoc_20fbf7565993c3d7,
              mid_positionsCost_9b6c3480dac00edf,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ConjunctionSpans(jobject obj) : ::org::apache::lucene::queries::spans::Spans(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ConjunctionSpans(const ConjunctionSpans& obj) : ::org::apache::lucene::queries::spans::Spans(obj) {}

            jint advance(jint) const;
            ::org::apache::lucene::search::TwoPhaseIterator asTwoPhaseIterator() const;
            jlong cost() const;
            jint docID() const;
            JArray< ::org::apache::lucene::queries::spans::Spans > getSubSpans() const;
            jint nextDoc() const;
            jfloat positionsCost() const;
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
          extern PyType_Def PY_TYPE_DEF(ConjunctionSpans);
          extern PyTypeObject *PY_TYPE(ConjunctionSpans);

          class t_ConjunctionSpans {
          public:
            PyObject_HEAD
            ConjunctionSpans object;
            static PyObject *wrap_Object(const ConjunctionSpans&);
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
