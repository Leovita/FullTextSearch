#ifndef org_apache_lucene_analysis_it_ItalianLightStemFilterFactory_H
#define org_apache_lucene_analysis_it_ItalianLightStemFilterFactory_H

#include "org/apache/lucene/analysis/TokenFilterFactory.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
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
        namespace it {

          class ItalianLightStemFilterFactory : public ::org::apache::lucene::analysis::TokenFilterFactory {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_79ba0f5a7d05e623,
              mid_create_2ec4d1726b35d478,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ItalianLightStemFilterFactory(jobject obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ItalianLightStemFilterFactory(const ItalianLightStemFilterFactory& obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            ItalianLightStemFilterFactory();
            ItalianLightStemFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::TokenStream create(const ::org::apache::lucene::analysis::TokenStream &) const;
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
        namespace it {
          extern PyType_Def PY_TYPE_DEF(ItalianLightStemFilterFactory);
          extern PyTypeObject *PY_TYPE(ItalianLightStemFilterFactory);

          class t_ItalianLightStemFilterFactory {
          public:
            PyObject_HEAD
            ItalianLightStemFilterFactory object;
            static PyObject *wrap_Object(const ItalianLightStemFilterFactory&);
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
