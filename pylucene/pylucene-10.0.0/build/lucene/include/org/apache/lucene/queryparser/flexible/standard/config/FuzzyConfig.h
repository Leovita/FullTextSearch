#ifndef org_apache_lucene_queryparser_flexible_standard_config_FuzzyConfig_H
#define org_apache_lucene_queryparser_flexible_standard_config_FuzzyConfig_H

#include "java/lang/Object.h"

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

              class FuzzyConfig : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_e7bdbe105ce1bafb,
                  mid_getMinSimilarity_8b62236f0e4d0dbc,
                  mid_getPrefixLength_bd89ce15dad49192,
                  mid_setMinSimilarity_675f4cb9a2529ee0,
                  mid_setPrefixLength_8226bd0b0fc13dba,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit FuzzyConfig(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                FuzzyConfig(const FuzzyConfig& obj) : ::java::lang::Object(obj) {}

                FuzzyConfig();

                jfloat getMinSimilarity() const;
                jint getPrefixLength() const;
                void setMinSimilarity(jfloat) const;
                void setPrefixLength(jint) const;
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
              extern PyType_Def PY_TYPE_DEF(FuzzyConfig);
              extern PyTypeObject *PY_TYPE(FuzzyConfig);

              class t_FuzzyConfig {
              public:
                PyObject_HEAD
                FuzzyConfig object;
                static PyObject *wrap_Object(const FuzzyConfig&);
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
