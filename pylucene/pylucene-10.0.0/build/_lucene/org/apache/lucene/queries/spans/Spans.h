#ifndef org_apache_lucene_queries_spans_Spans_H
#define org_apache_lucene_queries_spans_Spans_H

#include "org/apache/lucene/search/DocIdSetIterator.h"

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

          class Spans : public ::org::apache::lucene::search::DocIdSetIterator {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_asTwoPhaseIterator_28c4f2cd9e5f8da7,
              mid_collect_f57fa7214a0e10bb,
              mid_endPosition_20fbf7565993c3d7,
              mid_nextStartPosition_20fbf7565993c3d7,
              mid_positionsCost_9b6c3480dac00edf,
              mid_startPosition_20fbf7565993c3d7,
              mid_toString_09a7afff1868fc5e,
              mid_width_20fbf7565993c3d7,
              mid_doStartCurrentDoc_3720c61b0679eb3e,
              mid_doCurrentSpans_3720c61b0679eb3e,
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
