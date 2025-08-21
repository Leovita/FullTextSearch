#ifndef org_apache_lucene_analysis_GraphTokenFilter_H
#define org_apache_lucene_analysis_GraphTokenFilter_H

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

        class GraphTokenFilter : public ::org::apache::lucene::analysis::TokenFilter {
         public:
          enum {
            mid_init$_7d17c8514b99ffc6,
            mid_end_3720c61b0679eb3e,
            mid_getTrailingPositions_20fbf7565993c3d7,
            mid_reset_3720c61b0679eb3e,
            mid_incrementGraph_947277eca0748c4e,
            mid_incrementBaseToken_947277eca0748c4e,
            mid_incrementGraphToken_947277eca0748c4e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GraphTokenFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GraphTokenFilter(const GraphTokenFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

          static jint MAX_GRAPH_STACK_SIZE;
          static jint MAX_TOKEN_CACHE_SIZE;

          GraphTokenFilter(const ::org::apache::lucene::analysis::TokenStream &);

          void end() const;
          jint getTrailingPositions() const;
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
        extern PyType_Def PY_TYPE_DEF(GraphTokenFilter);
        extern PyTypeObject *PY_TYPE(GraphTokenFilter);

        class t_GraphTokenFilter {
        public:
          PyObject_HEAD
          GraphTokenFilter object;
          static PyObject *wrap_Object(const GraphTokenFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
