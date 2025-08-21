#ifndef org_apache_lucene_search_ImpactsDISI_H
#define org_apache_lucene_search_ImpactsDISI_H

#include "org/apache/lucene/search/DocIdSetIterator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class MaxScoreCache;
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

        class ImpactsDISI : public ::org::apache::lucene::search::DocIdSetIterator {
         public:
          enum {
            mid_init$_6213a425ac9b3d2d,
            mid_advance_3c9bba330f083871,
            mid_cost_16939d9d0a9a9721,
            mid_docID_20fbf7565993c3d7,
            mid_getMaxScoreCache_8564543d38bfb6d8,
            mid_nextDoc_20fbf7565993c3d7,
            mid_setMinCompetitiveScore_c771a95b0227fb6a,
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
