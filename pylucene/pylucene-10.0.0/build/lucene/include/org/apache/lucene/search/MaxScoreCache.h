#ifndef org_apache_lucene_search_MaxScoreCache_H
#define org_apache_lucene_search_MaxScoreCache_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class ImpactsSource;
      }
      namespace search {
        namespace similarities {
          class Similarity$SimScorer;
        }
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
      namespace search {

        class MaxScoreCache : public ::java::lang::Object {
         public:
          enum {
            mid_init$_bfa369ad4d2edf28,
            mid_advanceShallow_a3904e10f5bb9437,
            mid_getMaxScore_5873a23b935a9d49,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MaxScoreCache(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MaxScoreCache(const MaxScoreCache& obj) : ::java::lang::Object(obj) {}

          MaxScoreCache(const ::org::apache::lucene::index::ImpactsSource &, const ::org::apache::lucene::search::similarities::Similarity$SimScorer &);

          jint advanceShallow(jint) const;
          jfloat getMaxScore(jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(MaxScoreCache);
        extern PyTypeObject *PY_TYPE(MaxScoreCache);

        class t_MaxScoreCache {
        public:
          PyObject_HEAD
          MaxScoreCache object;
          static PyObject *wrap_Object(const MaxScoreCache&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
