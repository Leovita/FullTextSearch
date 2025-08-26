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
          namespace standard {
            namespace processors {

              class BooleanQuery2ModifierNodeProcessor : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_e7bdbe105ce1bafb,
                  mid_getQueryConfigHandler_2a2d77f833f4beaf,
                  mid_process_4b838b17650067cf,
                  mid_setQueryConfigHandler_f8d3957fd2e3377b,
                  mid_processChildren_7bd9517de8cc5b9b,
                  mid_fillChildrenBufferAndApplyModifiery_7bd9517de8cc5b9b,
                  mid_isDefaultBooleanQueryNode_b0c5db36676361a4,
                  mid_tagModifierButDoNotOverride_eb9185bb27e26863,
                  mid_preProcessNode_4b838b17650067cf,
                  mid_postProcessNode_4b838b17650067cf,
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
