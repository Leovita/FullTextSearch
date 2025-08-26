#ifndef org_apache_lucene_analysis_ko_dict_TokenInfoFST_H
#define org_apache_lucene_analysis_ko_dict_TokenInfoFST_H

#include "org/apache/lucene/analysis/morph/TokenInfoFST.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Long;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class FST;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          namespace dict {

            class TokenInfoFST : public ::org::apache::lucene::analysis::morph::TokenInfoFST {
             public:
              enum {
                mid_init$_f8c761ef13f9ac4a,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TokenInfoFST(jobject obj) : ::org::apache::lucene::analysis::morph::TokenInfoFST(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              TokenInfoFST(const TokenInfoFST& obj) : ::org::apache::lucene::analysis::morph::TokenInfoFST(obj) {}

              TokenInfoFST(const ::org::apache::lucene::util::fst::FST &);
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          namespace dict {
            extern PyType_Def PY_TYPE_DEF(TokenInfoFST);
            extern PyTypeObject *PY_TYPE(TokenInfoFST);

            class t_TokenInfoFST {
            public:
              PyObject_HEAD
              TokenInfoFST object;
              static PyObject *wrap_Object(const TokenInfoFST&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
