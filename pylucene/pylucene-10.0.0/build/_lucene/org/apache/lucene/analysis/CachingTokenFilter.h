#ifndef org_apache_lucene_analysis_CachingTokenFilter_H
#define org_apache_lucene_analysis_CachingTokenFilter_H

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

        class CachingTokenFilter : public ::org::apache::lucene::analysis::TokenFilter {
         public:
          enum {
            mid_init$_4fe096967a533954,
            mid_end_e7bdbe105ce1bafb,
            mid_incrementToken_9aa4f33e82ea333f,
            mid_isCached_9aa4f33e82ea333f,
            mid_reset_e7bdbe105ce1bafb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CachingTokenFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CachingTokenFilter(const CachingTokenFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

          CachingTokenFilter(const ::org::apache::lucene::analysis::TokenStream &);

          void end() const;
          jboolean incrementToken() const;
          jboolean isCached() const;
          void reset() const;
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
        extern PyType_Def PY_TYPE_DEF(CachingTokenFilter);
        extern PyTypeObject *PY_TYPE(CachingTokenFilter);

        class t_CachingTokenFilter {
        public:
          PyObject_HEAD
          CachingTokenFilter object;
          static PyObject *wrap_Object(const CachingTokenFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
