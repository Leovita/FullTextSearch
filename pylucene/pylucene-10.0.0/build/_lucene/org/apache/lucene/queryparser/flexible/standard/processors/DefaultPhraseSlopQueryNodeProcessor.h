#ifndef org_apache_lucene_queryparser_flexible_standard_processors_DefaultPhraseSlopQueryNodeProcessor_H
#define org_apache_lucene_queryparser_flexible_standard_processors_DefaultPhraseSlopQueryNodeProcessor_H

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

              class DefaultPhraseSlopQueryNodeProcessor : public ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessorImpl {
               public:
                enum {
                  mid_init$_3720c61b0679eb3e,
                  mid_process_8ca6e32fcbac6a62,
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

                explicit DefaultPhraseSlopQueryNodeProcessor(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessorImpl(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                DefaultPhraseSlopQueryNodeProcessor(const DefaultPhraseSlopQueryNodeProcessor& obj) : ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessorImpl(obj) {}

                DefaultPhraseSlopQueryNodeProcessor();

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
              extern PyType_Def PY_TYPE_DEF(DefaultPhraseSlopQueryNodeProcessor);
              extern PyTypeObject *PY_TYPE(DefaultPhraseSlopQueryNodeProcessor);

              class t_DefaultPhraseSlopQueryNodeProcessor {
              public:
                PyObject_HEAD
                DefaultPhraseSlopQueryNodeProcessor object;
                static PyObject *wrap_Object(const DefaultPhraseSlopQueryNodeProcessor&);
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
