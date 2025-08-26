#ifndef org_apache_lucene_index_KnnVectorValues_H
#define org_apache_lucene_index_KnnVectorValues_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
      }
      namespace index {
        class VectorEncoding;
        class KnnVectorValues;
        class KnnVectorValues$DocIndexIterator;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class KnnVectorValues : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_copy_ec254f51c043e927,
            mid_dimension_bd89ce15dad49192,
            mid_getAcceptOrds_952ad757d5b0c3b2,
            mid_getEncoding_667892793043e3ed,
            mid_getVectorByteLength_bd89ce15dad49192,
            mid_iterator_95916eac162e9a1d,
            mid_ordToDoc_a3904e10f5bb9437,
            mid_size_bd89ce15dad49192,
            mid_createDenseIterator_95916eac162e9a1d,
            mid_fromDISI_377b95e0515cc316,
            mid_createSparseIterator_95916eac162e9a1d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KnnVectorValues(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KnnVectorValues(const KnnVectorValues& obj) : ::java::lang::Object(obj) {}

          KnnVectorValues();

          KnnVectorValues copy() const;
          jint dimension() const;
          ::org::apache::lucene::util::Bits getAcceptOrds(const ::org::apache::lucene::util::Bits &) const;
          ::org::apache::lucene::index::VectorEncoding getEncoding() const;
          jint getVectorByteLength() const;
          ::org::apache::lucene::index::KnnVectorValues$DocIndexIterator iterator() const;
          jint ordToDoc(jint) const;
          jint size() const;
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
        extern PyType_Def PY_TYPE_DEF(KnnVectorValues);
        extern PyTypeObject *PY_TYPE(KnnVectorValues);

        class t_KnnVectorValues {
        public:
          PyObject_HEAD
          KnnVectorValues object;
          static PyObject *wrap_Object(const KnnVectorValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
