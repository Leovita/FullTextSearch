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
            mid_init$_4fe096967a533954,
            mid_accept_9aa4f33e82ea333f,
            mid_pythonExtension_0f176418e3e16541,
            mid_pythonExtension_1d3149fac12f2af3,
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
