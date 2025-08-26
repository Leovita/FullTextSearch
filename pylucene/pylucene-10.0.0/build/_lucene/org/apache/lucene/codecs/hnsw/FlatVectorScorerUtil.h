#ifndef org_apache_lucene_codecs_hnsw_FlatVectorScorerUtil_H
#define org_apache_lucene_codecs_hnsw_FlatVectorScorerUtil_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace hnsw {
          class FlatVectorsScorer;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace hnsw {

          class FlatVectorScorerUtil : public ::java::lang::Object {
           public:
            enum {
              mid_getLucene99FlatVectorsScorer_0a520ed2ec7fc582,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FlatVectorScorerUtil(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FlatVectorScorerUtil(const FlatVectorScorerUtil& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::codecs::hnsw::FlatVectorsScorer getLucene99FlatVectorsScorer();
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
      namespace codecs {
        namespace hnsw {
          extern PyType_Def PY_TYPE_DEF(FlatVectorScorerUtil);
          extern PyTypeObject *PY_TYPE(FlatVectorScorerUtil);

          class t_FlatVectorScorerUtil {
          public:
            PyObject_HEAD
            FlatVectorScorerUtil object;
            static PyObject *wrap_Object(const FlatVectorScorerUtil&);
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
