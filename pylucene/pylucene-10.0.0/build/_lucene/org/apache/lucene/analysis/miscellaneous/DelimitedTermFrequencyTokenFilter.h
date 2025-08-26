#ifndef org_apache_lucene_analysis_miscellaneous_DelimitedTermFrequencyTokenFilter_H
#define org_apache_lucene_analysis_miscellaneous_DelimitedTermFrequencyTokenFilter_H

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
        namespace miscellaneous {

          class DelimitedTermFrequencyTokenFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_4fe096967a533954,
              mid_init$_6fe8b7cc754126f9,
              mid_incrementToken_9aa4f33e82ea333f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DelimitedTermFrequencyTokenFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DelimitedTermFrequencyTokenFilter(const DelimitedTermFrequencyTokenFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            static jchar DEFAULT_DELIMITER;

            DelimitedTermFrequencyTokenFilter(const ::org::apache::lucene::analysis::TokenStream &);
            DelimitedTermFrequencyTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, jchar);

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
        namespace miscellaneous {
          extern PyType_Def PY_TYPE_DEF(DelimitedTermFrequencyTokenFilter);
          extern PyTypeObject *PY_TYPE(DelimitedTermFrequencyTokenFilter);

          class t_DelimitedTermFrequencyTokenFilter {
          public:
            PyObject_HEAD
            DelimitedTermFrequencyTokenFilter object;
            static PyObject *wrap_Object(const DelimitedTermFrequencyTokenFilter&);
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
