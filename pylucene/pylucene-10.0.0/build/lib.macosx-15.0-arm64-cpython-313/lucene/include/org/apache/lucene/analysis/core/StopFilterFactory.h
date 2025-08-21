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
        class CharArraySet;
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
        namespace core {

          class StopFilterFactory : public ::org::apache::lucene::analysis::en::AbstractWordsFileFilterFactory {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_79ba0f5a7d05e623,
              mid_create_2ec4d1726b35d478,
              mid_getStopWords_7a52625961f2f88e,
              mid_createDefaultWords_7a52625961f2f88e,
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
