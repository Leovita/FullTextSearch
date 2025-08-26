#ifndef org_apache_lucene_analysis_core_TypeTokenFilter_H
#define org_apache_lucene_analysis_core_TypeTokenFilter_H

#include "org/apache/lucene/analysis/FilteringTokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace util {
    class Set;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace core {

          class TypeTokenFilter : public ::org::apache::lucene::analysis::FilteringTokenFilter {
           public:
            enum {
              mid_init$_b38188cb310d1c75,
              mid_init$_f675a1058794b479,
              mid_accept_9aa4f33e82ea333f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TypeTokenFilter(jobject obj) : ::org::apache::lucene::analysis::FilteringTokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TypeTokenFilter(const TypeTokenFilter& obj) : ::org::apache::lucene::analysis::FilteringTokenFilter(obj) {}

            TypeTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::java::util::Set &);
            TypeTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::java::util::Set &, jboolean);
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
          extern PyType_Def PY_TYPE_DEF(TypeTokenFilter);
          extern PyTypeObject *PY_TYPE(TypeTokenFilter);

          class t_TypeTokenFilter {
          public:
            PyObject_HEAD
            TypeTokenFilter object;
            static PyObject *wrap_Object(const TypeTokenFilter&);
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
