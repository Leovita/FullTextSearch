#ifndef org_apache_lucene_analysis_payloads_NumericPayloadTokenFilterFactory_H
#define org_apache_lucene_analysis_payloads_NumericPayloadTokenFilterFactory_H

#include "org/apache/lucene/analysis/TokenFilterFactory.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Map;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace payloads {
          class NumericPayloadTokenFilter;
        }
        class TokenStream;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace payloads {

          class NumericPayloadTokenFilterFactory : public ::org::apache::lucene::analysis::TokenFilterFactory {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_79ba0f5a7d05e623,
              mid_create_70ab7f21fc39d0e1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NumericPayloadTokenFilterFactory(jobject obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NumericPayloadTokenFilterFactory(const NumericPayloadTokenFilterFactory& obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            NumericPayloadTokenFilterFactory();
            NumericPayloadTokenFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::payloads::NumericPayloadTokenFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace payloads {
          extern PyType_Def PY_TYPE_DEF(NumericPayloadTokenFilterFactory);
          extern PyTypeObject *PY_TYPE(NumericPayloadTokenFilterFactory);

          class t_NumericPayloadTokenFilterFactory {
          public:
            PyObject_HEAD
            NumericPayloadTokenFilterFactory object;
            static PyObject *wrap_Object(const NumericPayloadTokenFilterFactory&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
