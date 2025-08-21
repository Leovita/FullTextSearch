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
              mid_init$_3720c61b0679eb3e,
              mid_init$_79ba0f5a7d05e623,
              mid_create_06a27fc7b8c69060,
              mid_normalize_2ec4d1726b35d478,
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
