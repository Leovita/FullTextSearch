#ifndef org_apache_lucene_analysis_miscellaneous_ScandinavianNormalizationFilterFactory_H
#define org_apache_lucene_analysis_miscellaneous_ScandinavianNormalizationFilterFactory_H

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
        namespace miscellaneous {
          class ScandinavianNormalizationFilter;
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
        namespace miscellaneous {

          class ScandinavianNormalizationFilterFactory : public ::org::apache::lucene::analysis::TokenFilterFactory {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_79ba0f5a7d05e623,
              mid_create_e9e2925aa16b349c,
              mid_normalize_2ec4d1726b35d478,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ScandinavianNormalizationFilterFactory(jobject obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ScandinavianNormalizationFilterFactory(const ScandinavianNormalizationFilterFactory& obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            ScandinavianNormalizationFilterFactory();
            ScandinavianNormalizationFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::miscellaneous::ScandinavianNormalizationFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
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
        namespace miscellaneous {
          extern PyType_Def PY_TYPE_DEF(ScandinavianNormalizationFilterFactory);
          extern PyTypeObject *PY_TYPE(ScandinavianNormalizationFilterFactory);

          class t_ScandinavianNormalizationFilterFactory {
          public:
            PyObject_HEAD
            ScandinavianNormalizationFilterFactory object;
            static PyObject *wrap_Object(const ScandinavianNormalizationFilterFactory&);
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
