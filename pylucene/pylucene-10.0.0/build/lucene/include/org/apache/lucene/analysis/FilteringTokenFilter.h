#ifndef org_apache_lucene_analysis_FilteringTokenFilter_H
#define org_apache_lucene_analysis_FilteringTokenFilter_H

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

        class FilteringTokenFilter : public ::org::apache::lucene::analysis::TokenFilter {
         public:
          enum {
            mid_init$_7d17c8514b99ffc6,
            mid_end_3720c61b0679eb3e,
            mid_incrementToken_947277eca0748c4e,
            mid_reset_3720c61b0679eb3e,
            mid_accept_947277eca0748c4e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilteringTokenFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilteringTokenFilter(const FilteringTokenFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

          FilteringTokenFilter(const ::org::apache::lucene::analysis::TokenStream &);

          void end() const;
          jboolean incrementToken() const;
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
        extern PyType_Def PY_TYPE_DEF(FilteringTokenFilter);
        extern PyTypeObject *PY_TYPE(FilteringTokenFilter);

        class t_FilteringTokenFilter {
        public:
          PyObject_HEAD
          FilteringTokenFilter object;
          static PyObject *wrap_Object(const FilteringTokenFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
