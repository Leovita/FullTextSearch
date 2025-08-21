#ifndef org_apache_pylucene_analysis_PythonTokenFilter_H
#define org_apache_pylucene_analysis_PythonTokenFilter_H

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
    namespace pylucene {
      namespace analysis {

        class PythonTokenFilter : public ::org::apache::lucene::analysis::TokenFilter {
         public:
          enum {
            mid_init$_7d17c8514b99ffc6,
            mid_incrementToken_947277eca0748c4e,
            mid_pythonExtension_16939d9d0a9a9721,
            mid_pythonExtension_8b3d46852b435a94,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonTokenFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonTokenFilter(const PythonTokenFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

          PythonTokenFilter(const ::org::apache::lucene::analysis::TokenStream &);

          jboolean incrementToken() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace analysis {
        extern PyType_Def PY_TYPE_DEF(PythonTokenFilter);
        extern PyTypeObject *PY_TYPE(PythonTokenFilter);

        class t_PythonTokenFilter {
        public:
          PyObject_HEAD
          PythonTokenFilter object;
          static PyObject *wrap_Object(const PythonTokenFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
