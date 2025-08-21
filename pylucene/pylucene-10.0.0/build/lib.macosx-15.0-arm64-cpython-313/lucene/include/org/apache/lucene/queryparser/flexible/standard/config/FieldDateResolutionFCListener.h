#ifndef org_apache_lucene_queryparser_flexible_standard_config_FieldDateResolutionFCListener_H
#define org_apache_lucene_queryparser_flexible_standard_config_FieldDateResolutionFCListener_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace config {
              class QueryConfigHandler;
              class FieldConfigListener;
              class FieldConfig;
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
          namespace standard {
            namespace config {

              class FieldDateResolutionFCListener : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_0fc7dbcdbf111f0f,
                  mid_buildFieldConfig_d5a7e1b94ac0c20a,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit FieldDateResolutionFCListener(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                FieldDateResolutionFCListener(const FieldDateResolutionFCListener& obj) : ::java::lang::Object(obj) {}

                FieldDateResolutionFCListener(const ::org::apache::lucene::queryparser::flexible::core::config::QueryConfigHandler &);

                void buildFieldConfig(const ::org::apache::lucene::queryparser::flexible::core::config::FieldConfig &) const;
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
            namespace config {
              extern PyType_Def PY_TYPE_DEF(FieldDateResolutionFCListener);
              extern PyTypeObject *PY_TYPE(FieldDateResolutionFCListener);

              class t_FieldDateResolutionFCListener {
              public:
                PyObject_HEAD
                FieldDateResolutionFCListener object;
                static PyObject *wrap_Object(const FieldDateResolutionFCListener&);
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
