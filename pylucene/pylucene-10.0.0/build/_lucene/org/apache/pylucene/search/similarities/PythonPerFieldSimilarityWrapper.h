#ifndef org_apache_pylucene_search_similarities_PythonPerFieldSimilarityWrapper_H
#define org_apache_pylucene_search_similarities_PythonPerFieldSimilarityWrapper_H

#include "org/apache/lucene/search/similarities/PerFieldSimilarityWrapper.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {
          class Similarity;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace search {
        namespace similarities {

          class PythonPerFieldSimilarityWrapper : public ::org::apache::lucene::search::similarities::PerFieldSimilarityWrapper {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_get_98a9e8cb8b47131c,
              mid_pythonExtension_0f176418e3e16541,
              mid_pythonExtension_1d3149fac12f2af3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonPerFieldSimilarityWrapper(jobject obj) : ::org::apache::lucene::search::similarities::PerFieldSimilarityWrapper(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonPerFieldSimilarityWrapper(const PythonPerFieldSimilarityWrapper& obj) : ::org::apache::lucene::search::similarities::PerFieldSimilarityWrapper(obj) {}

            PythonPerFieldSimilarityWrapper();

            ::org::apache::lucene::search::similarities::Similarity get(const ::java::lang::String &) const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
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
      namespace search {
        namespace similarities {
          extern PyType_Def PY_TYPE_DEF(PythonPerFieldSimilarityWrapper);
          extern PyTypeObject *PY_TYPE(PythonPerFieldSimilarityWrapper);

          class t_PythonPerFieldSimilarityWrapper {
          public:
            PyObject_HEAD
            PythonPerFieldSimilarityWrapper object;
            static PyObject *wrap_Object(const PythonPerFieldSimilarityWrapper&);
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
