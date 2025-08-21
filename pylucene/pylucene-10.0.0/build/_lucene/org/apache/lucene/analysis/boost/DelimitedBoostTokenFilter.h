#ifndef org_apache_lucene_analysis_boost_DelimitedBoostTokenFilter_H
#define org_apache_lucene_analysis_boost_DelimitedBoostTokenFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

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
  namespace io {
    class IOException;
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
        namespace boost {

          class DelimitedBoostTokenFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_1eec4220cdfdd703,
              mid_incrementToken_947277eca0748c4e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DelimitedBoostTokenFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DelimitedBoostTokenFilter(const DelimitedBoostTokenFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            DelimitedBoostTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, jchar);

            jboolean incrementToken() const;
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
        namespace boost {
          extern PyType_Def PY_TYPE_DEF(DelimitedBoostTokenFilter);
          extern PyTypeObject *PY_TYPE(DelimitedBoostTokenFilter);

          class t_DelimitedBoostTokenFilter {
          public:
            PyObject_HEAD
            DelimitedBoostTokenFilter object;
            static PyObject *wrap_Object(const DelimitedBoostTokenFilter&);
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
