#ifndef org_apache_lucene_search_ImpactsDISI_H
#define org_apache_lucene_search_ImpactsDISI_H

#include "org/apache/lucene/search/DocIdSetIterator.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class MaxScoreCache;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class ImpactsDISI : public ::org::apache::lucene::search::DocIdSetIterator {
         public:
          enum {
            mid_init$_6e6c460a01524077,
            mid_advance_a3904e10f5bb9437,
            mid_cost_0f176418e3e16541,
            mid_docID_bd89ce15dad49192,
            mid_getMaxScoreCache_bff537f492157e12,
            mid_nextDoc_bd89ce15dad49192,
            mid_setMinCompetitiveScore_675f4cb9a2529ee0,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ImpactsDISI(jobject obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ImpactsDISI(const ImpactsDISI& obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {}

          ImpactsDISI(const ::org::apache::lucene::search::DocIdSetIterator &, const ::org::apache::lucene::search::MaxScoreCache &);

          jint advance(jint) const;
          jlong cost() const;
          jint docID() const;
          ::org::apache::lucene::search::MaxScoreCache getMaxScoreCache() const;
          jint nextDoc() const;
          void setMinCompetitiveScore(jfloat) const;
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
        extern PyType_Def PY_TYPE_DEF(ImpactsDISI);
        extern PyTypeObject *PY_TYPE(ImpactsDISI);

        class t_ImpactsDISI {
        public:
          PyObject_HEAD
          ImpactsDISI object;
          static PyObject *wrap_Object(const ImpactsDISI&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
