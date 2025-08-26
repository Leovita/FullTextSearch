#ifndef org_apache_lucene_analysis_it_ItalianLightStemFilter_H
#define org_apache_lucene_analysis_it_ItalianLightStemFilter_H

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
        namespace it {

          class ItalianLightStemFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_4fe096967a533954,
              mid_incrementToken_9aa4f33e82ea333f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ItalianLightStemFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ItalianLightStemFilter(const ItalianLightStemFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            ItalianLightStemFilter(const ::org::apache::lucene::analysis::TokenStream &);

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
        namespace it {
          extern PyType_Def PY_TYPE_DEF(ItalianLightStemFilter);
          extern PyTypeObject *PY_TYPE(ItalianLightStemFilter);

          class t_ItalianLightStemFilter {
          public:
            PyObject_HEAD
            ItalianLightStemFilter object;
            static PyObject *wrap_Object(const ItalianLightStemFilter&);
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
