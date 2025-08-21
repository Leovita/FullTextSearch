#ifndef org_apache_lucene_codecs_lucene90_IndexedDISI_H
#define org_apache_lucene_codecs_lucene90_IndexedDISI_H

#include "org/apache/lucene/search/DocIdSetIterator.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene90 {
          class IndexedDISI;
        }
      }
      namespace store {
        class IndexOutput;
        class IndexInput;
        class RandomAccessInput;
      }
      namespace index {
        class KnnVectorValues$DocIndexIterator;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene90 {

          class IndexedDISI : public ::org::apache::lucene::search::DocIdSetIterator {
           public:
            enum {
              mid_init$_6f513dfcefde089b,
              mid_advance_3c9bba330f083871,
              mid_advanceExact_ae22d3a856ad56f1,
              mid_asDocIndexIterator_7df016af1e4f7aaa,
              mid_cost_16939d9d0a9a9721,
              mid_createBlockSlice_c3e18adeeefea4f5,
              mid_createJumpTable_db330c1bc6dc4ce9,
              mid_docID_20fbf7565993c3d7,
              mid_index_20fbf7565993c3d7,
              mid_nextDoc_20fbf7565993c3d7,
              mid_writeBitSet_0dfac87d7ee7976a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IndexedDISI(jobject obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IndexedDISI(const IndexedDISI& obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {}

            static jbyte DEFAULT_DENSE_RANK_POWER;

            IndexedDISI(const ::org::apache::lucene::store::IndexInput &, jlong, jlong, jint, jbyte, jlong);

            jint advance(jint) const;
            jboolean advanceExact(jint) const;
            static ::org::apache::lucene::index::KnnVectorValues$DocIndexIterator asDocIndexIterator(const IndexedDISI &);
            jlong cost() const;
            static ::org::apache::lucene::store::IndexInput createBlockSlice(const ::org::apache::lucene::store::IndexInput &, const ::java::lang::String &, jlong, jlong, jint);
            static ::org::apache::lucene::store::RandomAccessInput createJumpTable(const ::org::apache::lucene::store::IndexInput &, jlong, jlong, jint);
            jint docID() const;
            jint index() const;
            jint nextDoc() const;
            static jshort writeBitSet(const ::org::apache::lucene::search::DocIdSetIterator &, const ::org::apache::lucene::store::IndexOutput &, jbyte);
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
      namespace codecs {
        namespace lucene90 {
          extern PyType_Def PY_TYPE_DEF(IndexedDISI);
          extern PyTypeObject *PY_TYPE(IndexedDISI);

          class t_IndexedDISI {
          public:
            PyObject_HEAD
            IndexedDISI object;
            static PyObject *wrap_Object(const IndexedDISI&);
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
