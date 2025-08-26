#ifndef org_apache_lucene_queryparser_flexible_standard_config_PointsConfig_H
#define org_apache_lucene_queryparser_flexible_standard_config_PointsConfig_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Number;
    class Class;
  }
  namespace text {
    class NumberFormat;
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

              class PointsConfig : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_3746fec28fbfeac6,
                  mid_equals_00d17418847797d4,
                  mid_getNumberFormat_cae2d46e75202e5c,
                  mid_getType_99e3ace59a9dfdb9,
                  mid_hashCode_bd89ce15dad49192,
                  mid_setNumberFormat_72e1e9475236c1c8,
                  mid_setType_fbe53aa5d2a68b3e,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit PointsConfig(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                PointsConfig(const PointsConfig& obj) : ::java::lang::Object(obj) {}

                PointsConfig(const ::java::text::NumberFormat &, const ::java::lang::Class &);

                jboolean equals(const ::java::lang::Object &) const;
                ::java::text::NumberFormat getNumberFormat() const;
                ::java::lang::Class getType() const;
                jint hashCode() const;
                void setNumberFormat(const ::java::text::NumberFormat &) const;
                void setType(const ::java::lang::Class &) const;
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
              extern PyType_Def PY_TYPE_DEF(PointsConfig);
              extern PyTypeObject *PY_TYPE(PointsConfig);

              class t_PointsConfig {
              public:
                PyObject_HEAD
                PointsConfig object;
                static PyObject *wrap_Object(const PointsConfig&);
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
