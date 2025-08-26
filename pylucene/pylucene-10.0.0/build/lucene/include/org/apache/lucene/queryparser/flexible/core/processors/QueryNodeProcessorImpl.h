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
            namespace processors {
              class QueryNodeProcessor;
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
                  mid_init$_e7bdbe105ce1bafb,
                  mid_init$_f8d3957fd2e3377b,
                  mid_getQueryConfigHandler_2a2d77f833f4beaf,
                  mid_process_4b838b17650067cf,
                  mid_setQueryConfigHandler_f8d3957fd2e3377b,
                  mid_processChildren_7bd9517de8cc5b9b,
                  mid_preProcessNode_4b838b17650067cf,
                  mid_postProcessNode_4b838b17650067cf,
                  mid_setChildrenOrder_be19c667f3dea389,
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
