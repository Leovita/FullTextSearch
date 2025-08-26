#ifndef org_apache_lucene_analysis_ro_RomanianNormalizationFilterFactory_H
#define org_apache_lucene_analysis_ro_RomanianNormalizationFilterFactory_H

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
        class TokenStream;
        namespace ro {
          class RomanianNormalizationFilter;
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
        namespace ro {

          class RomanianNormalizationFilterFactory : public ::org::apache::lucene::analysis::TokenFilterFactory {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_6a7e23584beb7c0f,
              mid_create_06b6d5965a8cb6b6,
              mid_normalize_f3e050e998938273,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RomanianNormalizationFilterFactory(jobject obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RomanianNormalizationFilterFactory(const RomanianNormalizationFilterFactory& obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            RomanianNormalizationFilterFactory();
            RomanianNormalizationFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::ro::RomanianNormalizationFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
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
        namespace ro {
          extern PyType_Def PY_TYPE_DEF(RomanianNormalizationFilterFactory);
          extern PyTypeObject *PY_TYPE(RomanianNormalizationFilterFactory);

          class t_RomanianNormalizationFilterFactory {
          public:
            PyObject_HEAD
            RomanianNormalizationFilterFactory object;
            static PyObject *wrap_Object(const RomanianNormalizationFilterFactory&);
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
