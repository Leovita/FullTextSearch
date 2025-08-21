#ifndef org_apache_lucene_analysis_ro_RomanianNormalizationFilter_H
#define org_apache_lucene_analysis_ro_RomanianNormalizationFilter_H

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
        namespace ro {

          class RomanianNormalizationFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_7d17c8514b99ffc6,
              mid_incrementToken_947277eca0748c4e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RomanianNormalizationFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RomanianNormalizationFilter(const RomanianNormalizationFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            RomanianNormalizationFilter(const ::org::apache::lucene::analysis::TokenStream &);

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
        namespace ro {
          extern PyType_Def PY_TYPE_DEF(RomanianNormalizationFilter);
          extern PyTypeObject *PY_TYPE(RomanianNormalizationFilter);

          class t_RomanianNormalizationFilter {
          public:
            PyObject_HEAD
            RomanianNormalizationFilter object;
            static PyObject *wrap_Object(const RomanianNormalizationFilter&);
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
