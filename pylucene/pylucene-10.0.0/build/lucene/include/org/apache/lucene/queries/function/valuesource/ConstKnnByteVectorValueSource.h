#ifndef org_apache_lucene_queries_function_valuesource_ConstKnnByteVectorValueSource_H
#define org_apache_lucene_queries_function_valuesource_ConstKnnByteVectorValueSource_H

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

            class ConstKnnByteVectorValueSource : public ::org::apache::lucene::queries::function::ValueSource {
             public:
              enum {
                mid_init$_3ce1e597fb62ac79,
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

              explicit ConstKnnByteVectorValueSource(jobject obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ConstKnnByteVectorValueSource(const ConstKnnByteVectorValueSource& obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {}

              ConstKnnByteVectorValueSource(const JArray< jbyte > &);

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
            extern PyType_Def PY_TYPE_DEF(ConstKnnByteVectorValueSource);
            extern PyTypeObject *PY_TYPE(ConstKnnByteVectorValueSource);

            class t_ConstKnnByteVectorValueSource {
            public:
              PyObject_HEAD
              ConstKnnByteVectorValueSource object;
              static PyObject *wrap_Object(const ConstKnnByteVectorValueSource&);
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
