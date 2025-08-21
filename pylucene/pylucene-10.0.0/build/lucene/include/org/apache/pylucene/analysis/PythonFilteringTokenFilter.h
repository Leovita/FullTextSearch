#ifndef org_apache_pylucene_analysis_PythonFilteringTokenFilter_H
#define org_apache_pylucene_analysis_PythonFilteringTokenFilter_H

#include "org/apache/lucene/analysis/FilteringTokenFilter.h"

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

        class PythonFilteringTokenFilter : public ::org::apache::lucene::analysis::FilteringTokenFilter {
         public:
          enum {
            mid_init$_7d17c8514b99ffc6,
            mid_accept_947277eca0748c4e,
            mid_pythonExtension_16939d9d0a9a9721,
            mid_pythonExtension_8b3d46852b435a94,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonFilteringTokenFilter(jobject obj) : ::org::apache::lucene::analysis::FilteringTokenFilter(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonFilteringTokenFilter(const PythonFilteringTokenFilter& obj) : ::org::apache::lucene::analysis::FilteringTokenFilter(obj) {}

          PythonFilteringTokenFilter(const ::org::apache::lucene::analysis::TokenStream &);

          jboolean accept() const;
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
        extern PyType_Def PY_TYPE_DEF(PythonFilteringTokenFilter);
        extern PyTypeObject *PY_TYPE(PythonFilteringTokenFilter);

        class t_PythonFilteringTokenFilter {
        public:
          PyObject_HEAD
          PythonFilteringTokenFilter object;
          static PyObject *wrap_Object(const PythonFilteringTokenFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
