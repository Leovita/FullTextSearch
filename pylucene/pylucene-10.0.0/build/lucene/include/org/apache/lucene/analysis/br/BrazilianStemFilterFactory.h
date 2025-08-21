#ifndef org_apache_lucene_analysis_br_BrazilianStemFilterFactory_H
#define org_apache_lucene_analysis_br_BrazilianStemFilterFactory_H

#include "org/apache/lucene/analysis/TokenFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
        namespace br {
          class BrazilianStemFilter;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Map;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace br {

          class BrazilianStemFilterFactory : public ::org::apache::lucene::analysis::TokenFilterFactory {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_79ba0f5a7d05e623,
              mid_create_6d08587b20c9655e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BrazilianStemFilterFactory(jobject obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BrazilianStemFilterFactory(const BrazilianStemFilterFactory& obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            BrazilianStemFilterFactory();
            BrazilianStemFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::br::BrazilianStemFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
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
        namespace br {
          extern PyType_Def PY_TYPE_DEF(BrazilianStemFilterFactory);
          extern PyTypeObject *PY_TYPE(BrazilianStemFilterFactory);

          class t_BrazilianStemFilterFactory {
          public:
            PyObject_HEAD
            BrazilianStemFilterFactory object;
            static PyObject *wrap_Object(const BrazilianStemFilterFactory&);
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
