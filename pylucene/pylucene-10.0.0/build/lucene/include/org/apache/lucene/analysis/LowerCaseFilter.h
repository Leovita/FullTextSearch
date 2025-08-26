#ifndef org_apache_lucene_analysis_LowerCaseFilter_H
#define org_apache_lucene_analysis_LowerCaseFilter_H

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

        class LowerCaseFilter : public ::org::apache::lucene::analysis::TokenFilter {
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

          explicit LowerCaseFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LowerCaseFilter(const LowerCaseFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

          LowerCaseFilter(const ::org::apache::lucene::analysis::TokenStream &);

          jboolean incrementToken() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        extern PyType_Def PY_TYPE_DEF(LowerCaseFilter);
        extern PyTypeObject *PY_TYPE(LowerCaseFilter);

        class t_LowerCaseFilter {
        public:
          PyObject_HEAD
          LowerCaseFilter object;
          static PyObject *wrap_Object(const LowerCaseFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
