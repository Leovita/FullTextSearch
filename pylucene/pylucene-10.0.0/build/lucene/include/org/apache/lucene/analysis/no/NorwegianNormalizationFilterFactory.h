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
              mid_init$_3720c61b0679eb3e,
              mid_init$_79ba0f5a7d05e623,
              mid_create_f1fdc147f3956e96,
              mid_normalize_2ec4d1726b35d478,
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
