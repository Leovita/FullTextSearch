#ifndef org_apache_lucene_analysis_miscellaneous_ConditionalTokenFilterFactory_H
#define org_apache_lucene_analysis_miscellaneous_ConditionalTokenFilterFactory_H

#include "org/apache/lucene/analysis/TokenFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class ResourceLoaderAware;
        class ResourceLoader;
      }
      namespace analysis {
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
  namespace io {
    class IOException;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace miscellaneous {

          class ConditionalTokenFilterFactory : public ::org::apache::lucene::analysis::TokenFilterFactory {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_create_f3e050e998938273,
              mid_inform_4ba602df53b96765,
              mid_setInnerFilters_acbb405b60a30822,
              mid_doInform_4ba602df53b96765,
              mid_create_2c651391adf9fd6e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ConditionalTokenFilterFactory(jobject obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ConditionalTokenFilterFactory(const ConditionalTokenFilterFactory& obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            ConditionalTokenFilterFactory();

            ::org::apache::lucene::analysis::TokenStream create(const ::org::apache::lucene::analysis::TokenStream &) const;
            void inform(const ::org::apache::lucene::util::ResourceLoader &) const;
            void setInnerFilters(const ::java::util::List &) const;
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
          extern PyType_Def PY_TYPE_DEF(ConditionalTokenFilterFactory);
          extern PyTypeObject *PY_TYPE(ConditionalTokenFilterFactory);

          class t_ConditionalTokenFilterFactory {
          public:
            PyObject_HEAD
            ConditionalTokenFilterFactory object;
            static PyObject *wrap_Object(const ConditionalTokenFilterFactory&);
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
