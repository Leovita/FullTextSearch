#ifndef org_apache_lucene_queries_spans_NearSpansUnordered_H
#define org_apache_lucene_queries_spans_NearSpansUnordered_H

#include "org/apache/lucene/queries/spans/ConjunctionSpans.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {
          class SpanCollector;
          class Spans;
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

          class NearSpansUnordered : public ::org::apache::lucene::queries::spans::ConjunctionSpans {
           public:
            enum {
              mid_init$_1cdaeeb63d3a981a,
              mid_collect_f57fa7214a0e10bb,
              mid_endPosition_20fbf7565993c3d7,
              mid_nextStartPosition_20fbf7565993c3d7,
              mid_startPosition_20fbf7565993c3d7,
              mid_width_20fbf7565993c3d7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NearSpansUnordered(jobject obj) : ::org::apache::lucene::queries::spans::ConjunctionSpans(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NearSpansUnordered(const NearSpansUnordered& obj) : ::org::apache::lucene::queries::spans::ConjunctionSpans(obj) {}

            NearSpansUnordered(jint, const ::java::util::List &);

            void collect(const ::org::apache::lucene::queries::spans::SpanCollector &) const;
            jint endPosition() const;
            jint nextStartPosition() const;
            jint startPosition() const;
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
          extern PyType_Def PY_TYPE_DEF(NearSpansUnordered);
          extern PyTypeObject *PY_TYPE(NearSpansUnordered);

          class t_NearSpansUnordered {
          public:
            PyObject_HEAD
            NearSpansUnordered object;
            static PyObject *wrap_Object(const NearSpansUnordered&);
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
