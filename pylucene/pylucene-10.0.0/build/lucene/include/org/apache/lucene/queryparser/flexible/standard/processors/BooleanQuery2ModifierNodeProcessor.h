#ifndef org_apache_lucene_queryparser_flexible_standard_processors_BooleanQuery2ModifierNodeProcessor_H
#define org_apache_lucene_queryparser_flexible_standard_processors_BooleanQuery2ModifierNodeProcessor_H

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
          namespace standard {
            namespace processors {

              class BooleanQuery2ModifierNodeProcessor : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_3720c61b0679eb3e,
                  mid_getQueryConfigHandler_30bdf25ce42207ac,
                  mid_process_8ca6e32fcbac6a62,
                  mid_setQueryConfigHandler_0fc7dbcdbf111f0f,
                  mid_fillChildrenBufferAndApplyModifiery_7b62f837facd6562,
                  mid_isDefaultBooleanQueryNode_f14c4264e7c71a39,
                  mid_tagModifierButDoNotOverride_c0191a272d8fbd7b,
                  mid_preProcessNode_8ca6e32fcbac6a62,
                  mid_postProcessNode_8ca6e32fcbac6a62,
                  mid_processChildren_7b62f837facd6562,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit BooleanQuery2ModifierNodeProcessor(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                BooleanQuery2ModifierNodeProcessor(const BooleanQuery2ModifierNodeProcessor& obj) : ::java::lang::Object(obj) {}

                BooleanQuery2ModifierNodeProcessor();

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
          namespace standard {
            namespace processors {
              extern PyType_Def PY_TYPE_DEF(BooleanQuery2ModifierNodeProcessor);
              extern PyTypeObject *PY_TYPE(BooleanQuery2ModifierNodeProcessor);

              class t_BooleanQuery2ModifierNodeProcessor {
              public:
                PyObject_HEAD
                BooleanQuery2ModifierNodeProcessor object;
                static PyObject *wrap_Object(const BooleanQuery2ModifierNodeProcessor&);
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
