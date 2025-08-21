#ifndef org_apache_lucene_analysis_shingle_FixedShingleFilter_H
#define org_apache_lucene_analysis_shingle_FixedShingleFilter_H

#include "org/apache/lucene/analysis/GraphTokenFilter.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
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
        namespace shingle {

          class FixedShingleFilter : public ::org::apache::lucene::analysis::GraphTokenFilter {
           public:
            enum {
              mid_init$_040618eef88cc819,
              mid_init$_97715fb393838f11,
              mid_incrementToken_947277eca0748c4e,
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
