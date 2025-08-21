#ifndef org_apache_lucene_analysis_miscellaneous_KeepWordFilterFactory_H
#define org_apache_lucene_analysis_miscellaneous_KeepWordFilterFactory_H

#include "org/apache/lucene/analysis/en/AbstractWordsFileFilterFactory.h"

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
        namespace miscellaneous {

          class KeepWordFilterFactory : public ::org::apache::lucene::analysis::en::AbstractWordsFileFilterFactory {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_79ba0f5a7d05e623,
              mid_create_2ec4d1726b35d478,
              mid_createDefaultWords_7a52625961f2f88e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit KeepWordFilterFactory(jobject obj) : ::org::apache::lucene::analysis::en::AbstractWordsFileFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            KeepWordFilterFactory(const KeepWordFilterFactory& obj) : ::org::apache::lucene::analysis::en::AbstractWordsFileFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            KeepWordFilterFactory();
            KeepWordFilterFactory(const ::java::util::Map &);

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
        namespace miscellaneous {
          extern PyType_Def PY_TYPE_DEF(KeepWordFilterFactory);
          extern PyTypeObject *PY_TYPE(KeepWordFilterFactory);

          class t_KeepWordFilterFactory {
          public:
            PyObject_HEAD
            KeepWordFilterFactory object;
            static PyObject *wrap_Object(const KeepWordFilterFactory&);
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
