#ifndef org_apache_lucene_analysis_synonym_SynonymFilter_H
#define org_apache_lucene_analysis_synonym_SynonymFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
        namespace synonym {
          class SynonymMap;
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
        namespace synonym {

          class SynonymFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_e922ffdf8bc000bb,
              mid_incrementToken_9aa4f33e82ea333f,
              mid_reset_e7bdbe105ce1bafb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SynonymFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SynonymFilter(const SynonymFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            static ::java::lang::String *TYPE_SYNONYM;

            SynonymFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::synonym::SynonymMap &, jboolean);

            jboolean incrementToken() const;
            void reset() const;
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
        namespace synonym {
          extern PyType_Def PY_TYPE_DEF(SynonymFilter);
          extern PyTypeObject *PY_TYPE(SynonymFilter);

          class t_SynonymFilter {
          public:
            PyObject_HEAD
            SynonymFilter object;
            static PyObject *wrap_Object(const SynonymFilter&);
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
