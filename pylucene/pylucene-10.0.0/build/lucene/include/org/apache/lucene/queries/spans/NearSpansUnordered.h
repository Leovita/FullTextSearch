#ifndef org_apache_lucene_queries_spans_NearSpansUnordered_H
#define org_apache_lucene_queries_spans_NearSpansUnordered_H

#include "org/apache/lucene/queries/spans/ConjunctionSpans.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {
          class Spans;
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
  }
  namespace util {
    class List;
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
              mid_init$_6895c3cd0410b684,
              mid_collect_6a7e0ba175326672,
              mid_endPosition_bd89ce15dad49192,
              mid_nextStartPosition_bd89ce15dad49192,
              mid_startPosition_bd89ce15dad49192,
              mid_width_bd89ce15dad49192,
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
