#ifndef org_apache_lucene_analysis_ja_dict_ConnectionCosts_H
#define org_apache_lucene_analysis_ja_dict_ConnectionCosts_H

#include "org/apache/lucene/analysis/morph/ConnectionCosts.h"

namespace java {
  namespace nio {
    namespace file {
      class Path;
    }
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          namespace dict {
            class ConnectionCosts;
          }
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
        namespace ja {
          namespace dict {

            class ConnectionCosts : public ::org::apache::lucene::analysis::morph::ConnectionCosts {
             public:
              enum {
                mid_init$_e7b3ede3efacc86d,
                mid_getInstance_837cde0c7d910d9b,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ConnectionCosts(jobject obj) : ::org::apache::lucene::analysis::morph::ConnectionCosts(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ConnectionCosts(const ConnectionCosts& obj) : ::org::apache::lucene::analysis::morph::ConnectionCosts(obj) {}

              ConnectionCosts(const ::java::nio::file::Path &);

              static ConnectionCosts getInstance();
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
        namespace ja {
          namespace dict {
            extern PyType_Def PY_TYPE_DEF(ConnectionCosts);
            extern PyTypeObject *PY_TYPE(ConnectionCosts);

            class t_ConnectionCosts {
            public:
              PyObject_HEAD
              ConnectionCosts object;
              static PyObject *wrap_Object(const ConnectionCosts&);
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
