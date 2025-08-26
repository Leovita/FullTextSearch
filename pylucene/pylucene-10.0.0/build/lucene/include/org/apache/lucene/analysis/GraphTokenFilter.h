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
            mid_init$_4fe096967a533954,
            mid_end_e7bdbe105ce1bafb,
            mid_getTrailingPositions_bd89ce15dad49192,
            mid_reset_e7bdbe105ce1bafb,
            mid_incrementBaseToken_9aa4f33e82ea333f,
            mid_incrementGraph_9aa4f33e82ea333f,
            mid_incrementGraphToken_9aa4f33e82ea333f,
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
