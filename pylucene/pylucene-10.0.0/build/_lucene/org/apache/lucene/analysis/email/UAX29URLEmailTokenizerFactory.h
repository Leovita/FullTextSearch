#ifndef org_apache_lucene_analysis_email_UAX29URLEmailTokenizerFactory_H
#define org_apache_lucene_analysis_email_UAX29URLEmailTokenizerFactory_H

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
        namespace email {
          class UAX29URLEmailTokenizer;
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
        namespace email {

          class UAX29URLEmailTokenizerFactory : public ::org::apache::lucene::analysis::TokenizerFactory {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_6a7e23584beb7c0f,
              mid_create_297145a6e41f76f4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit UAX29URLEmailTokenizerFactory(jobject obj) : ::org::apache::lucene::analysis::TokenizerFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            UAX29URLEmailTokenizerFactory(const UAX29URLEmailTokenizerFactory& obj) : ::org::apache::lucene::analysis::TokenizerFactory(obj) {}

            static ::java::lang::String *NAME;

            UAX29URLEmailTokenizerFactory();
            UAX29URLEmailTokenizerFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::email::UAX29URLEmailTokenizer create(const ::org::apache::lucene::util::AttributeFactory &) const;
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
        namespace email {
          extern PyType_Def PY_TYPE_DEF(UAX29URLEmailTokenizerFactory);
          extern PyTypeObject *PY_TYPE(UAX29URLEmailTokenizerFactory);

          class t_UAX29URLEmailTokenizerFactory {
          public:
            PyObject_HEAD
            UAX29URLEmailTokenizerFactory object;
            static PyObject *wrap_Object(const UAX29URLEmailTokenizerFactory&);
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
