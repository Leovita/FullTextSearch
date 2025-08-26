#ifndef org_apache_lucene_analysis_shingle_FixedShingleFilter_H
#define org_apache_lucene_analysis_shingle_FixedShingleFilter_H

#include "org/apache/lucene/analysis/GraphTokenFilter.h"

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
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace shingle {

          class FixedShingleFilter : public ::org::apache::lucene::analysis::GraphTokenFilter {
           public:
            enum {
              mid_init$_40ae3e19a9468a36,
              mid_init$_dcd358655e1e2c04,
              mid_incrementToken_9aa4f33e82ea333f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FixedShingleFilter(jobject obj) : ::org::apache::lucene::analysis::GraphTokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FixedShingleFilter(const FixedShingleFilter& obj) : ::org::apache::lucene::analysis::GraphTokenFilter(obj) {}

            FixedShingleFilter(const ::org::apache::lucene::analysis::TokenStream &, jint);
            FixedShingleFilter(const ::org::apache::lucene::analysis::TokenStream &, jint, const ::java::lang::String &, const ::java::lang::String &);

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
        namespace shingle {
          extern PyType_Def PY_TYPE_DEF(FixedShingleFilter);
          extern PyTypeObject *PY_TYPE(FixedShingleFilter);

          class t_FixedShingleFilter {
          public:
            PyObject_HEAD
            FixedShingleFilter object;
            static PyObject *wrap_Object(const FixedShingleFilter&);
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
