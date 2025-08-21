#ifndef org_apache_lucene_analysis_ja_dict_ConnectionCosts_H
#define org_apache_lucene_analysis_ja_dict_ConnectionCosts_H

#include "org/apache/lucene/analysis/morph/ConnectionCosts.h"

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
                mid_init$_8a3244428bfc77b8,
                mid_getInstance_ff63f8fa6f5f6d4d,
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
