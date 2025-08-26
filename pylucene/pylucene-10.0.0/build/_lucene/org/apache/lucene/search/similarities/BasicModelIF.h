#ifndef org_apache_lucene_search_similarities_BasicModelIF_H
#define org_apache_lucene_search_similarities_BasicModelIF_H

#include "org/apache/lucene/search/similarities/BasicModel.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Explanation;
        namespace similarities {
          class BasicStats;
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
        namespace similarities {

          class BasicModelIF : public ::org::apache::lucene::search::similarities::BasicModel {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_explain_e4c25e99aedac7d3,
              mid_score_45900529809cd3f1,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BasicModelIF(jobject obj) : ::org::apache::lucene::search::similarities::BasicModel(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BasicModelIF(const BasicModelIF& obj) : ::org::apache::lucene::search::similarities::BasicModel(obj) {}

            BasicModelIF();

            ::org::apache::lucene::search::Explanation explain(const ::org::apache::lucene::search::similarities::BasicStats &, jdouble, jdouble) const;
            jdouble score(const ::org::apache::lucene::search::similarities::BasicStats &, jdouble, jdouble) const;
            ::java::lang::String toString() const;
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
        namespace similarities {
          extern PyType_Def PY_TYPE_DEF(BasicModelIF);
          extern PyTypeObject *PY_TYPE(BasicModelIF);

          class t_BasicModelIF {
          public:
            PyObject_HEAD
            BasicModelIF object;
            static PyObject *wrap_Object(const BasicModelIF&);
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
