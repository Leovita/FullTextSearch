#ifndef org_apache_lucene_queryparser_flexible_core_processors_QueryNodeProcessorImpl_H
#define org_apache_lucene_queryparser_flexible_core_processors_QueryNodeProcessorImpl_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace config {
              class QueryConfigHandler;
            }
            namespace nodes {
              class QueryNode;
            }
            class QueryNodeException;
            namespace processors {
              class QueryNodeProcessor;
            }
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
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace processors {

              class QueryNodeProcessorImpl : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_3720c61b0679eb3e,
                  mid_init$_0fc7dbcdbf111f0f,
                  mid_getQueryConfigHandler_30bdf25ce42207ac,
                  mid_process_8ca6e32fcbac6a62,
                  mid_setQueryConfigHandler_0fc7dbcdbf111f0f,
                  mid_preProcessNode_8ca6e32fcbac6a62,
                  mid_postProcessNode_8ca6e32fcbac6a62,
                  mid_setChildrenOrder_52060c8532319091,
                  mid_processChildren_7b62f837facd6562,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit QueryNodeProcessorImpl(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                QueryNodeProcessorImpl(const QueryNodeProcessorImpl& obj) : ::java::lang::Object(obj) {}

                QueryNodeProcessorImpl();
                QueryNodeProcessorImpl(const ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler &);

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
              extern PyType_Def PY_TYPE_DEF(QueryNodeProcessorImpl);
              extern PyTypeObject *PY_TYPE(QueryNodeProcessorImpl);

              class t_QueryNodeProcessorImpl {
              public:
                PyObject_HEAD
                QueryNodeProcessorImpl object;
                static PyObject *wrap_Object(const QueryNodeProcessorImpl&);
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
