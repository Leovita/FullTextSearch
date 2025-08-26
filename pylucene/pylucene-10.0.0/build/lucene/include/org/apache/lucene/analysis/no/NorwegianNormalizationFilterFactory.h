#ifndef org_apache_lucene_analysis_no_NorwegianNormalizationFilterFactory_H
#define org_apache_lucene_analysis_no_NorwegianNormalizationFilterFactory_H

#include "org/apache/lucene/analysis/TokenFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace no {
          class NorwegianNormalizationFilter;
        }
        class TokenStream;
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
        namespace no {

          class NorwegianNormalizationFilterFactory : public ::org::apache::lucene::analysis::TokenFilterFactory {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_6a7e23584beb7c0f,
              mid_create_7cb2b2f31aa6afee,
              mid_normalize_f3e050e998938273,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NorwegianNormalizationFilterFactory(jobject obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NorwegianNormalizationFilterFactory(const NorwegianNormalizationFilterFactory& obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            NorwegianNormalizationFilterFactory();
            NorwegianNormalizationFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::no::NorwegianNormalizationFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
            ::org::apache::lucene::analysis::TokenStream normalize(const ::org::apache::lucene::analysis::TokenStream &) const;
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
        namespace no {
          extern PyType_Def PY_TYPE_DEF(NorwegianNormalizationFilterFactory);
          extern PyTypeObject *PY_TYPE(NorwegianNormalizationFilterFactory);

          class t_NorwegianNormalizationFilterFactory {
          public:
            PyObject_HEAD
            NorwegianNormalizationFilterFactory object;
            static PyObject *wrap_Object(const NorwegianNormalizationFilterFactory&);
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
