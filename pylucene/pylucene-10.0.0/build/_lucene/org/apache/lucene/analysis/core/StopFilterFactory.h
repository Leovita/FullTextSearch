#ifndef org_apache_lucene_analysis_core_StopFilterFactory_H
#define org_apache_lucene_analysis_core_StopFilterFactory_H

#include "org/apache/lucene/analysis/en/AbstractWordsFileFilterFactory.h"

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
        class CharArraySet;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace core {

          class StopFilterFactory : public ::org::apache::lucene::analysis::en::AbstractWordsFileFilterFactory {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_6a7e23584beb7c0f,
              mid_create_f3e050e998938273,
              mid_getStopWords_0a8f3a685855aa4f,
              mid_createDefaultWords_0a8f3a685855aa4f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit StopFilterFactory(jobject obj) : ::org::apache::lucene::analysis::en::AbstractWordsFileFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            StopFilterFactory(const StopFilterFactory& obj) : ::org::apache::lucene::analysis::en::AbstractWordsFileFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            StopFilterFactory();
            StopFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::TokenStream create(const ::org::apache::lucene::analysis::TokenStream &) const;
            ::org::apache::lucene::analysis::CharArraySet getStopWords() const;
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
        namespace core {
          extern PyType_Def PY_TYPE_DEF(StopFilterFactory);
          extern PyTypeObject *PY_TYPE(StopFilterFactory);

          class t_StopFilterFactory {
          public:
            PyObject_HEAD
            StopFilterFactory object;
            static PyObject *wrap_Object(const StopFilterFactory&);
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
