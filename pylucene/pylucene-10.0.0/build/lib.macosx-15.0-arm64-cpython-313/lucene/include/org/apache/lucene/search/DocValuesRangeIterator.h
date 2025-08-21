#ifndef org_apache_lucene_search_DocValuesRangeIterator_H
#define org_apache_lucene_search_DocValuesRangeIterator_H

#include "org/apache/lucene/search/TwoPhaseIterator.h"

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
      namespace index {
        class DocValuesSkipper;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class DocValuesRangeIterator : public ::org::apache::lucene::search::TwoPhaseIterator {
         public:
          enum {
            mid_init$_040c781e13f1487f,
            mid_matchCost_9b6c3480dac00edf,
            mid_matches_947277eca0748c4e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocValuesRangeIterator(jobject obj) : ::org::apache::lucene::search::TwoPhaseIterator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocValuesRangeIterator(const DocValuesRangeIterator& obj) : ::org::apache::lucene::search::TwoPhaseIterator(obj) {}

          DocValuesRangeIterator(const ::org::apache::lucene::search::TwoPhaseIterator &, const ::org::apache::lucene::index::DocValuesSkipper &, jlong, jlong, jboolean);

          jfloat matchCost() const;
          jboolean matches() const;
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
        extern PyType_Def PY_TYPE_DEF(DocValuesRangeIterator);
        extern PyTypeObject *PY_TYPE(DocValuesRangeIterator);

        class t_DocValuesRangeIterator {
        public:
          PyObject_HEAD
          DocValuesRangeIterator object;
          static PyObject *wrap_Object(const DocValuesRangeIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
