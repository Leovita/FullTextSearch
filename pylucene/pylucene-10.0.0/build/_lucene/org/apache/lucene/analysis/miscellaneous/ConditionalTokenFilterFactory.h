#ifndef org_apache_lucene_analysis_miscellaneous_ConditionalTokenFilterFactory_H
#define org_apache_lucene_analysis_miscellaneous_ConditionalTokenFilterFactory_H

#include "org/apache/lucene/analysis/TokenFilterFactory.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class ResourceLoader;
        class ResourceLoaderAware;
      }
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
        namespace miscellaneous {

          class ConditionalTokenFilterFactory : public ::org::apache::lucene::analysis::TokenFilterFactory {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_create_2ec4d1726b35d478,
              mid_inform_6addbf380886844e,
              mid_setInnerFilters_9425cd4f62c94bce,
              mid_doInform_6addbf380886844e,
              mid_create_f398725843466ada,
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
