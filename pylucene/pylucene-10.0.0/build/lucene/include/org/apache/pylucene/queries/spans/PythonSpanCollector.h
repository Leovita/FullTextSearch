#ifndef org_apache_pylucene_queries_spans_PythonSpanCollector_H
#define org_apache_pylucene_queries_spans_PythonSpanCollector_H

#include "java/lang/Object.h"

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
    namespace pylucene {
      namespace queries {
        namespace spans {

          class PythonSpanCollector : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_collectLeaf_3aa52d8f240f6edc,
              mid_pythonExtension_16939d9d0a9a9721,
              mid_pythonExtension_8b3d46852b435a94,
              mid_reset_3720c61b0679eb3e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonSpanCollector(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonSpanCollector(const PythonSpanCollector& obj) : ::java::lang::Object(obj) {}

            PythonSpanCollector();

            void collectLeaf(const ::org::apache::lucene::index::PostingsEnum &, jint, const ::org::apache::lucene::index::Term &) const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
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
    namespace pylucene {
      namespace queries {
        namespace spans {
          extern PyType_Def PY_TYPE_DEF(PythonSpanCollector);
          extern PyTypeObject *PY_TYPE(PythonSpanCollector);

          class t_PythonSpanCollector {
          public:
            PyObject_HEAD
            PythonSpanCollector object;
            static PyObject *wrap_Object(const PythonSpanCollector&);
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
