#ifndef org_apache_lucene_queryparser_flexible_standard_processors_RemoveEmptyNonLeafQueryNodeProcessor_H
#define org_apache_lucene_queryparser_flexible_standard_processors_RemoveEmptyNonLeafQueryNodeProcessor_H

#include "org/apache/lucene/queryparser/flexible/core/processors/QueryNodeProcessorImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace nodes {
              class QueryNode;
            }
            class QueryNodeException;
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
          namespace standard {
            namespace processors {

              class RemoveEmptyNonLeafQueryNodeProcessor : public ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessorImpl {
               public:
                enum {
                  mid_init$_e7bdbe105ce1bafb,
                  mid_process_4b838b17650067cf,
                  mid_preProcessNode_4b838b17650067cf,
                  mid_postProcessNode_4b838b17650067cf,
                  mid_setChildrenOrder_be19c667f3dea389,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit RemoveEmptyNonLeafQueryNodeProcessor(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessorImpl(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                RemoveEmptyNonLeafQueryNodeProcessor(const RemoveEmptyNonLeafQueryNodeProcessor& obj) : ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessorImpl(obj) {}

                RemoveEmptyNonLeafQueryNodeProcessor();

                ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode process(const ::org::apache::lucene::queryparser::flexible::core::nodes::QueryNode &) const;
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
              extern PyType_Def PY_TYPE_DEF(RemoveEmptyNonLeafQueryNodeProcessor);
              extern PyTypeObject *PY_TYPE(RemoveEmptyNonLeafQueryNodeProcessor);

              class t_RemoveEmptyNonLeafQueryNodeProcessor {
              public:
                PyObject_HEAD
                RemoveEmptyNonLeafQueryNodeProcessor object;
                static PyObject *wrap_Object(const RemoveEmptyNonLeafQueryNodeProcessor&);
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
