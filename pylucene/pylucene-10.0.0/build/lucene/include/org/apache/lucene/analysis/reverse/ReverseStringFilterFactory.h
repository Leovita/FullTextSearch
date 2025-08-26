#ifndef org_apache_lucene_analysis_reverse_ReverseStringFilterFactory_H
#define org_apache_lucene_analysis_reverse_ReverseStringFilterFactory_H

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
        class TokenStream;
        namespace reverse {
          class ReverseStringFilter;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace reverse {

          class ReverseStringFilterFactory : public ::org::apache::lucene::analysis::TokenFilterFactory {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_6a7e23584beb7c0f,
              mid_create_1f488568c1a47560,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ReverseStringFilterFactory(jobject obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ReverseStringFilterFactory(const ReverseStringFilterFactory& obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            ReverseStringFilterFactory();
            ReverseStringFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::reverse::ReverseStringFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
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
        namespace reverse {
          extern PyType_Def PY_TYPE_DEF(ReverseStringFilterFactory);
          extern PyTypeObject *PY_TYPE(ReverseStringFilterFactory);

          class t_ReverseStringFilterFactory {
          public:
            PyObject_HEAD
            ReverseStringFilterFactory object;
            static PyObject *wrap_Object(const ReverseStringFilterFactory&);
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
