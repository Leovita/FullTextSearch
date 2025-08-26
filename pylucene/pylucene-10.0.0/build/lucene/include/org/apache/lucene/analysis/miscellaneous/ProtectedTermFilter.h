#ifndef org_apache_lucene_analysis_miscellaneous_ProtectedTermFilter_H
#define org_apache_lucene_analysis_miscellaneous_ProtectedTermFilter_H

#include "org/apache/lucene/analysis/miscellaneous/ConditionalTokenFilter.h"

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
namespace java {
  namespace util {
    namespace function {
      class Function;
    }
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace miscellaneous {

          class ProtectedTermFilter : public ::org::apache::lucene::analysis::miscellaneous::ConditionalTokenFilter {
           public:
            enum {
              mid_init$_f3e52861e74c3aef,
              mid_shouldFilter_9aa4f33e82ea333f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ProtectedTermFilter(jobject obj) : ::org::apache::lucene::analysis::miscellaneous::ConditionalTokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ProtectedTermFilter(const ProtectedTermFilter& obj) : ::org::apache::lucene::analysis::miscellaneous::ConditionalTokenFilter(obj) {}

            ProtectedTermFilter(const ::org::apache::lucene::analysis::CharArraySet &, const ::org::apache::lucene::analysis::TokenStream &, const ::java::util::function::Function &);
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
          extern PyType_Def PY_TYPE_DEF(ProtectedTermFilter);
          extern PyTypeObject *PY_TYPE(ProtectedTermFilter);

          class t_ProtectedTermFilter {
          public:
            PyObject_HEAD
            ProtectedTermFilter object;
            static PyObject *wrap_Object(const ProtectedTermFilter&);
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
