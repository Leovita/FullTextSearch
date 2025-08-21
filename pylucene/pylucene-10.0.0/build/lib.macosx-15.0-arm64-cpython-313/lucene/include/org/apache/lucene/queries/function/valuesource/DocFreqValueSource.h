#ifndef org_apache_lucene_queries_function_valuesource_DocFreqValueSource_H
#define org_apache_lucene_queries_function_valuesource_DocFreqValueSource_H

#include "org/apache/lucene/queries/function/ValueSource.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace queries {
        namespace function {
          class FunctionValues;
        }
      }
      namespace index {
        class LeafReaderContext;
      }
      namespace search {
        class IndexSearcher;
      }
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace function {
          namespace valuesource {

            class DocFreqValueSource : public ::org::apache::lucene::queries::function::ValueSource {
             public:
              enum {
                mid_init$_c88530b6e1748625,
                mid_createWeight_ed456f113984b95a,
                mid_description_09a7afff1868fc5e,
                mid_equals_570b5248a6da3ef6,
                mid_getValues_a7d46b98c691aeac,
                mid_hashCode_20fbf7565993c3d7,
                mid_name_09a7afff1868fc5e,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DocFreqValueSource(jobject obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DocFreqValueSource(const DocFreqValueSource& obj) : ::org::apache::lucene::queries::function::ValueSource(obj) {}

              DocFreqValueSource(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &);

              void createWeight(const ::java::util::Map &, const ::org::apache::lucene::search::IndexSearcher &) const;
              ::java::lang::String description() const;
              jboolean equals(const ::java::lang::Object &) const;
              ::org::apache::lucene::queries::function::FunctionValues getValues(const ::java::util::Map &, const ::org::apache::lucene::index::LeafReaderContext &) const;
              jint hashCode() const;
              ::java::lang::String name() const;
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
            extern PyType_Def PY_TYPE_DEF(DocFreqValueSource);
            extern PyTypeObject *PY_TYPE(DocFreqValueSource);

            class t_DocFreqValueSource {
            public:
              PyObject_HEAD
              DocFreqValueSource object;
              static PyObject *wrap_Object(const DocFreqValueSource&);
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
