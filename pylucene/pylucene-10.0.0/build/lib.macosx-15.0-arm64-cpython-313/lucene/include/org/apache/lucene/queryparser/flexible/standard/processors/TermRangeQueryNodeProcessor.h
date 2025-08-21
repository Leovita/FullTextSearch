#ifndef org_apache_lucene_queryparser_flexible_standard_processors_TermRangeQueryNodeProcessor_H
#define org_apache_lucene_queryparser_flexible_standard_processors_TermRangeQueryNodeProcessor_H

#include "org/apache/lucene/queryparser/flexible/core/processors/QueryNodeProcessorImpl.h"

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
            namespace processors {

              class TermRangeQueryNodeProcessor : public ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessorImpl {
               public:
                enum {
                  mid_init$_3720c61b0679eb3e,
                  mid_preProcessNode_8ca6e32fcbac6a62,
                  mid_postProcessNode_8ca6e32fcbac6a62,
                  mid_setChildrenOrder_52060c8532319091,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit TermRangeQueryNodeProcessor(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessorImpl(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                TermRangeQueryNodeProcessor(const TermRangeQueryNodeProcessor& obj) : ::org::apache::lucene::queryparser::flexible::core::processors::QueryNodeProcessorImpl(obj) {}

                TermRangeQueryNodeProcessor();
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
            namespace processors {
              extern PyType_Def PY_TYPE_DEF(TermRangeQueryNodeProcessor);
              extern PyTypeObject *PY_TYPE(TermRangeQueryNodeProcessor);

              class t_TermRangeQueryNodeProcessor {
              public:
                PyObject_HEAD
                TermRangeQueryNodeProcessor object;
                static PyObject *wrap_Object(const TermRangeQueryNodeProcessor&);
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
