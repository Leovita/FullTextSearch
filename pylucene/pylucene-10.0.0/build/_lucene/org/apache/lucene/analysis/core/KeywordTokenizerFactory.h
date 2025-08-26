#ifndef org_apache_lucene_analysis_core_KeywordTokenizerFactory_H
#define org_apache_lucene_analysis_core_KeywordTokenizerFactory_H

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
      namespace util {
        class AttributeFactory;
      }
      namespace analysis {
        namespace core {
          class KeywordTokenizer;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace core {

          class KeywordTokenizerFactory : public ::org::apache::lucene::analysis::TokenizerFactory {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_6a7e23584beb7c0f,
              mid_create_3f93d39afe0904bf,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit KeywordTokenizerFactory(jobject obj) : ::org::apache::lucene::analysis::TokenizerFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            KeywordTokenizerFactory(const KeywordTokenizerFactory& obj) : ::org::apache::lucene::analysis::TokenizerFactory(obj) {}

            static ::java::lang::String *NAME;

            KeywordTokenizerFactory();
            KeywordTokenizerFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::core::KeywordTokenizer create(const ::org::apache::lucene::util::AttributeFactory &) const;
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
        namespace core {
          extern PyType_Def PY_TYPE_DEF(KeywordTokenizerFactory);
          extern PyTypeObject *PY_TYPE(KeywordTokenizerFactory);

          class t_KeywordTokenizerFactory {
          public:
            PyObject_HEAD
            KeywordTokenizerFactory object;
            static PyObject *wrap_Object(const KeywordTokenizerFactory&);
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
