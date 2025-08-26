#ifndef org_apache_lucene_queries_function_valuesource_TermFreqValueSource_H
#define org_apache_lucene_queries_function_valuesource_TermFreqValueSource_H

#include "org/apache/lucene/queries/function/valuesource/DocFreqValueSource.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
  }
  namespace io {
    class IOException;
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
      namespace util {
        class BytesRef;
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

            class TermFreqValueSource : public ::org::apache::lucene::queries::function::valuesource::DocFreqValueSource {
             public:
              enum {
                mid_init$_74d6ef28c7b92fe2,
                mid_getValues_9f85153ef1e32cca,
                mid_name_e7df854526d67fa3,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit TermFreqValueSource(jobject obj) : ::org::apache::lucene::queries::function::valuesource::DocFreqValueSource(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              TermFreqValueSource(const TermFreqValueSource& obj) : ::org::apache::lucene::queries::function::valuesource::DocFreqValueSource(obj) {}

              TermFreqValueSource(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &);

              ::org::apache::lucene::queries::function::FunctionValues getValues(const ::java::util::Map &, const ::org::apache::lucene::index::LeafReaderContext &) const;
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
            extern PyType_Def PY_TYPE_DEF(TermFreqValueSource);
            extern PyTypeObject *PY_TYPE(TermFreqValueSource);

            class t_TermFreqValueSource {
            public:
              PyObject_HEAD
              TermFreqValueSource object;
              static PyObject *wrap_Object(const TermFreqValueSource&);
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
