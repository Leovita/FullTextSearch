#ifndef org_apache_lucene_analysis_synonym_SynonymGraphFilter_H
#define org_apache_lucene_analysis_synonym_SynonymGraphFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace synonym {
          class SynonymMap;
        }
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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace synonym {

          class SynonymGraphFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_271f3b2169769aec,
              mid_incrementToken_947277eca0748c4e,
              mid_reset_3720c61b0679eb3e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SynonymGraphFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SynonymGraphFilter(const SynonymGraphFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            static ::java::lang::String *TYPE_SYNONYM;

            SynonymGraphFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::synonym::SynonymMap &, jboolean);

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
          extern PyType_Def PY_TYPE_DEF(SynonymGraphFilter);
          extern PyTypeObject *PY_TYPE(SynonymGraphFilter);

          class t_SynonymGraphFilter {
          public:
            PyObject_HEAD
            SynonymGraphFilter object;
            static PyObject *wrap_Object(const SynonymGraphFilter&);
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
