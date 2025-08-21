#ifndef org_apache_lucene_queries_spans_SpanCollector_H
#define org_apache_lucene_queries_spans_SpanCollector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class PostingsEnum;
        class Term;
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace spans {

          class SpanCollector : public ::java::lang::Object {
           public:
            enum {
              mid_collectLeaf_3aa52d8f240f6edc,
              mid_reset_3720c61b0679eb3e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SpanCollector(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SpanCollector(const SpanCollector& obj) : ::java::lang::Object(obj) {}

            void collectLeaf(const ::org::apache::lucene::index::PostingsEnum &, jint, const ::org::apache::lucene::index::Term &) const;
            void reset() const;
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
          extern PyType_Def PY_TYPE_DEF(SpanCollector);
          extern PyTypeObject *PY_TYPE(SpanCollector);

          class t_SpanCollector {
          public:
            PyObject_HEAD
            SpanCollector object;
            static PyObject *wrap_Object(const SpanCollector&);
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
