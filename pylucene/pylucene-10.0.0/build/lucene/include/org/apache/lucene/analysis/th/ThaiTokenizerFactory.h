#ifndef org_apache_lucene_analysis_th_ThaiTokenizerFactory_H
#define org_apache_lucene_analysis_th_ThaiTokenizerFactory_H

#include "org/apache/lucene/analysis/TokenizerFactory.h"

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
        class Tokenizer;
      }
      namespace util {
        class AttributeFactory;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace th {

          class ThaiTokenizerFactory : public ::org::apache::lucene::analysis::TokenizerFactory {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_6a7e23584beb7c0f,
              mid_create_734505517ea78b04,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ThaiTokenizerFactory(jobject obj) : ::org::apache::lucene::analysis::TokenizerFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ThaiTokenizerFactory(const ThaiTokenizerFactory& obj) : ::org::apache::lucene::analysis::TokenizerFactory(obj) {}

            static ::java::lang::String *NAME;

            ThaiTokenizerFactory();
            ThaiTokenizerFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::Tokenizer create(const ::org::apache::lucene::util::AttributeFactory &) const;
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
        namespace th {
          extern PyType_Def PY_TYPE_DEF(ThaiTokenizerFactory);
          extern PyTypeObject *PY_TYPE(ThaiTokenizerFactory);

          class t_ThaiTokenizerFactory {
          public:
            PyObject_HEAD
            ThaiTokenizerFactory object;
            static PyObject *wrap_Object(const ThaiTokenizerFactory&);
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
