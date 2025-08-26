#ifndef org_apache_lucene_queryparser_flexible_core_util_StringUtils_H
#define org_apache_lucene_queryparser_flexible_core_util_StringUtils_H

#include "java/lang/Object.h"

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
            namespace util {

              class StringUtils : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_e7bdbe105ce1bafb,
                  mid_toString_5f92096499c6603e,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit StringUtils(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                StringUtils(const StringUtils& obj) : ::java::lang::Object(obj) {}

                StringUtils();

                static ::java::lang::String toString(const ::java::lang::Object &);
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
            namespace util {
              extern PyType_Def PY_TYPE_DEF(StringUtils);
              extern PyTypeObject *PY_TYPE(StringUtils);

              class t_StringUtils {
              public:
                PyObject_HEAD
                StringUtils object;
                static PyObject *wrap_Object(const StringUtils&);
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
