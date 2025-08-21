#ifndef org_apache_pylucene_search_similarities_PythonPerFieldSimilarityWrapper_H
#define org_apache_pylucene_search_similarities_PythonPerFieldSimilarityWrapper_H

#include "org/apache/lucene/search/similarities/PerFieldSimilarityWrapper.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace search {
        namespace similarities {

          class PythonPerFieldSimilarityWrapper : public ::org::apache::lucene::search::similarities::PerFieldSimilarityWrapper {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_get_03561bffe6d54ad3,
              mid_pythonExtension_16939d9d0a9a9721,
              mid_pythonExtension_8b3d46852b435a94,
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
