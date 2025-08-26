#ifndef org_apache_lucene_index_SortingCodecReader$SortingValuesIterator_H
#define org_apache_lucene_index_SortingCodecReader$SortingValuesIterator_H

#include "org/apache/lucene/index/KnnVectorValues$DocIndexIterator.h"

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
      namespace index {

        class SortingCodecReader$SortingValuesIterator : public ::org::apache::lucene::index::KnnVectorValues$DocIndexIterator {
         public:
          enum {
            mid_advance_a3904e10f5bb9437,
            mid_cost_0f176418e3e16541,
            mid_docID_bd89ce15dad49192,
            mid_index_bd89ce15dad49192,
            mid_nextDoc_bd89ce15dad49192,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SortingCodecReader$SortingValuesIterator(jobject obj) : ::org::apache::lucene::index::KnnVectorValues$DocIndexIterator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SortingCodecReader$SortingValuesIterator(const SortingCodecReader$SortingValuesIterator& obj) : ::org::apache::lucene::index::KnnVectorValues$DocIndexIterator(obj) {}

          jint advance(jint) const;
          jlong cost() const;
          jint docID() const;
          jint index() const;
          jint nextDoc() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(SortingCodecReader$SortingValuesIterator);
        extern PyTypeObject *PY_TYPE(SortingCodecReader$SortingValuesIterator);

        class t_SortingCodecReader$SortingValuesIterator {
        public:
          PyObject_HEAD
          SortingCodecReader$SortingValuesIterator object;
          static PyObject *wrap_Object(const SortingCodecReader$SortingValuesIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
