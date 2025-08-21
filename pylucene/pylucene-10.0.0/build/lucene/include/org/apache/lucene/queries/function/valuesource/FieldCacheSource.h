#ifndef org_apache_lucene_queries_function_valuesource_FieldCacheSource_H
#define org_apache_lucene_queries_function_valuesource_FieldCacheSource_H

#include "org/apache/lucene/queries/function/ValueSource.h"

namespace java {
  namespace lang {
    class String;
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          namespace valuesource {

            class FieldCacheSource : public ::org::apache::lucene::queries::function::ValueSource {
             public:
              enum {
                mid_init$_0d82408c6e55bc30,
                mid_description_09a7afff1868fc5e,
                mid_equals_570b5248a6da3ef6,
                mid_getField_09a7afff1868fc5e,
                mid_hashCode_20fbf7565993c3d7,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FieldCacheSource(jobject obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FieldCacheSource(const FieldCacheSource& obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {}

              FieldCacheSource(const ::java::lang::String &);

              ::java::lang::String description() const;
              jboolean equals(const ::java::lang::Object &) const;
              ::java::lang::String getField() const;
              jint hashCode() const;
            };
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
      namespace queries {
        namespace function {
          namespace valuesource {
            extern PyType_Def PY_TYPE_DEF(FieldCacheSource);
            extern PyTypeObject *PY_TYPE(FieldCacheSource);

            class t_FieldCacheSource {
            public:
              PyObject_HEAD
              FieldCacheSource object;
              static PyObject *wrap_Object(const FieldCacheSource&);
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

#endif
