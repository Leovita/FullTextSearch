#ifndef org_apache_lucene_search_similarities_DistributionSPL_H
#define org_apache_lucene_search_similarities_DistributionSPL_H

#include "org/apache/lucene/search/similarities/Distribution.h"

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
          class BasicStats;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {

          class DistributionSPL : public ::org::apache::lucene::search::similarities::Distribution {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_score_4520853cec1acecd,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DistributionSPL(jobject obj) : ::org::apache::lucene::search::similarities::Distribution(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DistributionSPL(const DistributionSPL& obj) : ::org::apache::lucene::search::similarities::Distribution(obj) {}

            DistributionSPL();

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
          extern PyType_Def PY_TYPE_DEF(DistributionSPL);
          extern PyTypeObject *PY_TYPE(DistributionSPL);

          class t_DistributionSPL {
          public:
            PyObject_HEAD
            DistributionSPL object;
            static PyObject *wrap_Object(const DistributionSPL&);
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
