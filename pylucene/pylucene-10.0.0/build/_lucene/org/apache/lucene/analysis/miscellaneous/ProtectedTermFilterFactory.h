#ifndef org_apache_lucene_analysis_miscellaneous_ProtectedTermFilterFactory_H
#define org_apache_lucene_analysis_miscellaneous_ProtectedTermFilterFactory_H

#include "org/apache/lucene/analysis/miscellaneous/ConditionalTokenFilterFactory.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Map;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class CharArraySet;
      }
      namespace util {
        class ResourceLoader;
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

          class ProtectedTermFilterFactory : public ::org::apache::lucene::analysis::miscellaneous::ConditionalTokenFilterFactory {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_6a7e23584beb7c0f,
              mid_doInform_4ba602df53b96765,
              mid_getProtectedTerms_0a8f3a685855aa4f,
              mid_isIgnoreCase_9aa4f33e82ea333f,
              mid_create_2c651391adf9fd6e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ProtectedTermFilterFactory(jobject obj) : ::org::apache::lucene::analysis::miscellaneous::ConditionalTokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ProtectedTermFilterFactory(const ProtectedTermFilterFactory& obj) : ::org::apache::lucene::analysis::miscellaneous::ConditionalTokenFilterFactory(obj) {}

            static jchar FILTER_ARG_SEPARATOR;
            static jchar FILTER_NAME_ID_SEPARATOR;
            static ::java::lang::String *NAME;
            static ::java::lang::String *PROTECTED_TERMS;

            ProtectedTermFilterFactory();
            ProtectedTermFilterFactory(const ::java::util::Map &);

            void doInform(const ::org::apache::lucene::util::ResourceLoader &) const;
            ::org::apache::lucene::analysis::CharArraySet getProtectedTerms() const;
            jboolean isIgnoreCase() const;
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
          extern PyType_Def PY_TYPE_DEF(ProtectedTermFilterFactory);
          extern PyTypeObject *PY_TYPE(ProtectedTermFilterFactory);

          class t_ProtectedTermFilterFactory {
          public:
            PyObject_HEAD
            ProtectedTermFilterFactory object;
            static PyObject *wrap_Object(const ProtectedTermFilterFactory&);
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
