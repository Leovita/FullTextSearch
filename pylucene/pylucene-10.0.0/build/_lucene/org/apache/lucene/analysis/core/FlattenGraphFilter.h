#ifndef org_apache_lucene_analysis_core_FlattenGraphFilter_H
#define org_apache_lucene_analysis_core_FlattenGraphFilter_H

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
        namespace core {

          class FlattenGraphFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_4fe096967a533954,
              mid_end_e7bdbe105ce1bafb,
              mid_getMaxLookaheadUsed_bd89ce15dad49192,
              mid_incrementToken_9aa4f33e82ea333f,
              mid_reset_e7bdbe105ce1bafb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FlattenGraphFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FlattenGraphFilter(const FlattenGraphFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            FlattenGraphFilter(const ::org::apache::lucene::analysis::TokenStream &);

            void end() const;
            jint getMaxLookaheadUsed() const;
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
        namespace core {
          extern PyType_Def PY_TYPE_DEF(FlattenGraphFilter);
          extern PyTypeObject *PY_TYPE(FlattenGraphFilter);

          class t_FlattenGraphFilter {
          public:
            PyObject_HEAD
            FlattenGraphFilter object;
            static PyObject *wrap_Object(const FlattenGraphFilter&);
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
