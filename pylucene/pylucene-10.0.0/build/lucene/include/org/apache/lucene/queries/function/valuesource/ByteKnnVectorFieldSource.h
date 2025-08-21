#ifndef org_apache_lucene_queries_function_valuesource_ByteKnnVectorFieldSource_H
#define org_apache_lucene_queries_function_valuesource_ByteKnnVectorFieldSource_H

#include "org/apache/lucene/queries/function/ValueSource.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
    class Object;
  }
  namespace util {
    class Map;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          class FunctionValues;
        }
      }
      namespace index {
        class LeafReaderContext;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          namespace valuesource {

            class ByteKnnVectorFieldSource : public ::org::apache::lucene::queries::function::ValueSource {
             public:
              enum {
                mid_init$_0d82408c6e55bc30,
                mid_description_09a7afff1868fc5e,
                mid_equals_570b5248a6da3ef6,
                mid_getValues_a7d46b98c691aeac,
                mid_hashCode_20fbf7565993c3d7,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ByteKnnVectorFieldSource(jobject obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ByteKnnVectorFieldSource(const ByteKnnVectorFieldSource& obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {}

              ByteKnnVectorFieldSource(const ::java::lang::String &);

              ::java::lang::String description() const;
              jboolean equals(const ::java::lang::Object &) const;
              ::org::apache::lucene::queries::function::FunctionValues getValues(const ::java::util::Map &, const ::org::apache::lucene::index::LeafReaderContext &) const;
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
            extern PyType_Def PY_TYPE_DEF(ByteKnnVectorFieldSource);
            extern PyTypeObject *PY_TYPE(ByteKnnVectorFieldSource);

            class t_ByteKnnVectorFieldSource {
            public:
              PyObject_HEAD
              ByteKnnVectorFieldSource object;
              static PyObject *wrap_Object(const ByteKnnVectorFieldSource&);
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
