#ifndef org_apache_lucene_queryparser_flexible_core_config_QueryConfigHandler_H
#define org_apache_lucene_queryparser_flexible_core_config_QueryConfigHandler_H

#include "org/apache/lucene/queryparser/flexible/core/config/AbstractQueryConfig.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace config {
              class FieldConfig;
              class FieldConfigListener;
            }
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
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
            namespace config {

              class QueryConfigHandler : public ::org::apache::lucene::queryparser::flexible::core::config::AbstractQueryConfig {
               public:
                enum {
                  mid_init$_e7bdbe105ce1bafb,
                  mid_addFieldConfigListener_66fbbdc698f3bc03,
                  mid_getFieldConfig_32847344cc9335fd,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit QueryConfigHandler(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::config::AbstractQueryConfig(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                QueryConfigHandler(const QueryConfigHandler& obj) : ::org::apache::lucene::queryparser::flexible::core::config::AbstractQueryConfig(obj) {}

                QueryConfigHandler();

                void addFieldConfigListener(const ::org::apache::lucene::queryparser::flexible::core::config::FieldConfigListener &) const;
                ::org::apache::lucene::queryparser::flexible::core::config::FieldConfig getFieldConfig(const ::java::lang::String &) const;
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
            namespace config {
              extern PyType_Def PY_TYPE_DEF(QueryConfigHandler);
              extern PyTypeObject *PY_TYPE(QueryConfigHandler);

              class t_QueryConfigHandler {
              public:
                PyObject_HEAD
                QueryConfigHandler object;
                static PyObject *wrap_Object(const QueryConfigHandler&);
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
