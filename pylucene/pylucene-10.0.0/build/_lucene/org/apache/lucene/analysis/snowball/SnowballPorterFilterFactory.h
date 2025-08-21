#ifndef org_apache_lucene_analysis_snowball_SnowballPorterFilterFactory_H
#define org_apache_lucene_analysis_snowball_SnowballPorterFilterFactory_H

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
    class Map;
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
        class TokenFilter;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace snowball {

          class SnowballPorterFilterFactory : public ::org::apache::lucene::analysis::TokenFilterFactory {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_79ba0f5a7d05e623,
              mid_create_1a59f0bb49337b2d,
              mid_inform_6addbf380886844e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SnowballPorterFilterFactory(jobject obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SnowballPorterFilterFactory(const SnowballPorterFilterFactory& obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {}

            static ::java::lang::String *NAME;
            static ::java::lang::String *PROTECTED_TOKENS;

            SnowballPorterFilterFactory();
            SnowballPorterFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::TokenFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
            void inform(const ::org::apache::lucene::util::ResourceLoader &) const;
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
        namespace snowball {
          extern PyType_Def PY_TYPE_DEF(SnowballPorterFilterFactory);
          extern PyTypeObject *PY_TYPE(SnowballPorterFilterFactory);

          class t_SnowballPorterFilterFactory {
          public:
            PyObject_HEAD
            SnowballPorterFilterFactory object;
            static PyObject *wrap_Object(const SnowballPorterFilterFactory&);
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
