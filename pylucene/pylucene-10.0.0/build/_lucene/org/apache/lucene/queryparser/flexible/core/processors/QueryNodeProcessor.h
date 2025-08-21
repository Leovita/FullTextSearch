#ifndef org_apache_lucene_queryparser_flexible_core_processors_QueryNodeProcessor_H
#define org_apache_lucene_queryparser_flexible_core_processors_QueryNodeProcessor_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace config {
              class QueryConfigHandler;
            }
            class QueryNodeException;
            namespace nodes {
              class QueryNode;
            }
          }
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
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace processors {

              class QueryNodeProcessor : public ::java::lang::Object {
               public:
                enum {
                  mid_getQueryConfigHandler_30bdf25ce42207ac,
                  mid_process_8ca6e32fcbac6a62,
                  mid_setQueryConfigHandler_0fc7dbcdbf111f0f,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit QueryNodeProcessor(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                QueryNodeProcessor(const QueryNodeProcessor& obj) : ::java::lang::Object(obj) {}

                ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler getQueryConfigHandler() const;
                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode process(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &) const;
                void setQueryConfigHandler(const ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler &) const;
              };
            }
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
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace processors {
              extern PyType_Def PY_TYPE_DEF(QueryNodeProcessor);
              extern PyTypeObject *PY_TYPE(QueryNodeProcessor);

              class t_QueryNodeProcessor {
              public:
                PyObject_HEAD
                QueryNodeProcessor object;
                static PyObject *wrap_Object(const QueryNodeProcessor&);
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
}

#endif
