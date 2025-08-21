#ifndef org_apache_lucene_queryparser_flexible_core_config_AbstractQueryConfig_H
#define org_apache_lucene_queryparser_flexible_core_config_AbstractQueryConfig_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace config {
              class ConfigurationKey;
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
            namespace config {

              class AbstractQueryConfig : public ::java::lang::Object {
               public:
                enum {
                  mid_get_88382dc4809594cb,
                  mid_has_7d06be39be315060,
                  mid_set_838abd6a4261802d,
                  mid_unset_7d06be39be315060,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AbstractQueryConfig(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AbstractQueryConfig(const AbstractQueryConfig& obj) : ::java::lang::Object(obj) {}

                ::java::lang::Object get(const ::org::apache::lucene::queryparser::flexible::core::config::ConfigurationKey &) const;
                jboolean has(const ::org::apache::lucene::queryparser::flexible::core::config::ConfigurationKey &) const;
                void set(const ::org::apache::lucene::queryparser::flexible::core::config::ConfigurationKey &, const ::java::lang::Object &) const;
                jboolean unset(const ::org::apache::lucene::queryparser::flexible::core::config::ConfigurationKey &) const;
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
              extern PyType_Def PY_TYPE_DEF(AbstractQueryConfig);
              extern PyTypeObject *PY_TYPE(AbstractQueryConfig);

              class t_AbstractQueryConfig {
              public:
                PyObject_HEAD
                AbstractQueryConfig object;
                static PyObject *wrap_Object(const AbstractQueryConfig&);
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
