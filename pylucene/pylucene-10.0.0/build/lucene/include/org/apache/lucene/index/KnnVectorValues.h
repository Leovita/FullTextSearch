#ifndef org_apache_lucene_index_KnnVectorValues_H
#define org_apache_lucene_index_KnnVectorValues_H

#include "java/lang/Object.h"

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
        class VectorEncoding;
        class KnnVectorValues;
        class KnnVectorValues$DocIndexIterator;
      }
      namespace util {
        class Bits;
      }
    }
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
            mid_init$_3720c61b0679eb3e,
            mid_copy_b734a515b1b8cb06,
            mid_dimension_20fbf7565993c3d7,
            mid_getAcceptOrds_372c76d90ab3ad4a,
            mid_getEncoding_89ee194538cd6149,
            mid_getVectorByteLength_20fbf7565993c3d7,
            mid_iterator_cd2e842b8d8e9e2b,
            mid_ordToDoc_3c9bba330f083871,
            mid_size_20fbf7565993c3d7,
            mid_createDenseIterator_cd2e842b8d8e9e2b,
            mid_fromDISI_5f3bd9fe00a4fce2,
            mid_createSparseIterator_cd2e842b8d8e9e2b,
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
