#ifndef org_apache_lucene_analysis_minhash_MinHashFilter_H
#define org_apache_lucene_analysis_minhash_MinHashFilter_H

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
        namespace minhash {

          class MinHashFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_6c6778c401efa3cc,
              mid_end_e7bdbe105ce1bafb,
              mid_incrementToken_9aa4f33e82ea333f,
              mid_reset_e7bdbe105ce1bafb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MinHashFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MinHashFilter(const MinHashFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            static jint DEFAULT_BUCKET_COUNT;
            static jint DEFAULT_HASH_COUNT;
            static jint DEFAULT_HASH_SET_SIZE;

            MinHashFilter(const ::org::apache::lucene::analysis::TokenStream &, jint, jint, jint, jboolean);

            void end() const;
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
        namespace minhash {
          extern PyType_Def PY_TYPE_DEF(MinHashFilter);
          extern PyTypeObject *PY_TYPE(MinHashFilter);

          class t_MinHashFilter {
          public:
            PyObject_HEAD
            MinHashFilter object;
            static PyObject *wrap_Object(const MinHashFilter&);
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
