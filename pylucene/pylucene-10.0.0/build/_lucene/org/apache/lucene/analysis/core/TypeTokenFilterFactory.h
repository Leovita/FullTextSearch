#ifndef org_apache_lucene_analysis_core_TypeTokenFilterFactory_H
#define org_apache_lucene_analysis_core_TypeTokenFilterFactory_H

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
    class Set;
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

          class TypeTokenFilterFactory : public ::org::apache::lucene::analysis::TokenFilterFactory {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_79ba0f5a7d05e623,
              mid_create_2ec4d1726b35d478,
              mid_getStopTypes_4df174295554d7bd,
              mid_inform_6addbf380886844e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TypeTokenFilterFactory(jobject obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TypeTokenFilterFactory(const TypeTokenFilterFactory& obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            TypeTokenFilterFactory();
            TypeTokenFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::TokenStream create(const ::org::apache::lucene::analysis::TokenStream &) const;
            ::java::util::Set getStopTypes() const;
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
        namespace core {
          extern PyType_Def PY_TYPE_DEF(TypeTokenFilterFactory);
          extern PyTypeObject *PY_TYPE(TypeTokenFilterFactory);

          class t_TypeTokenFilterFactory {
          public:
            PyObject_HEAD
            TypeTokenFilterFactory object;
            static PyObject *wrap_Object(const TypeTokenFilterFactory&);
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
