#ifndef org_apache_lucene_search_matchhighlight_OffsetsRetrievalStrategySupplier_H
#define org_apache_lucene_search_matchhighlight_OffsetsRetrievalStrategySupplier_H

#include "java/util/function/Function.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace matchhighlight {
          class OffsetsRetrievalStrategy;
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
    namespace lucene {
      namespace search {
        namespace matchhighlight {

          class OffsetsRetrievalStrategySupplier : public ::java::util::function::Function {
           public:

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OffsetsRetrievalStrategySupplier(jobject obj) : ::java::util::function::Function(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OffsetsRetrievalStrategySupplier(const OffsetsRetrievalStrategySupplier& obj) : ::java::util::function::Function(obj) {}
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
      namespace search {
        namespace matchhighlight {
          extern PyType_Def PY_TYPE_DEF(OffsetsRetrievalStrategySupplier);
          extern PyTypeObject *PY_TYPE(OffsetsRetrievalStrategySupplier);

          class t_OffsetsRetrievalStrategySupplier {
          public:
            PyObject_HEAD
            OffsetsRetrievalStrategySupplier object;
            static PyObject *wrap_Object(const OffsetsRetrievalStrategySupplier&);
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
