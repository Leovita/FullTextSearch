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
                  mid_init$_3720c61b0679eb3e,
                  mid_getMinSimilarity_9b6c3480dac00edf,
                  mid_getPrefixLength_20fbf7565993c3d7,
                  mid_setMinSimilarity_c771a95b0227fb6a,
                  mid_setPrefixLength_540b2b23d51b1efd,
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
