#ifndef org_apache_lucene_codecs_lucene90_IndexedDISI_H
#define org_apache_lucene_codecs_lucene90_IndexedDISI_H

#include "org/apache/lucene/search/DocIdSetIterator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene90 {
          class IndexedDISI;
        }
      }
      namespace store {
        class RandomAccessInput;
        class IndexOutput;
        class IndexInput;
      }
      namespace index {
        class KnnVectorValues$DocIndexIterator;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
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
              mid_init$_655f0ea261c9b3e9,
              mid_advance_a3904e10f5bb9437,
              mid_advanceExact_a8281eb3b9d9672d,
              mid_asDocIndexIterator_191b65bb793ea697,
              mid_cost_0f176418e3e16541,
              mid_createBlockSlice_a6809c12e5909c69,
              mid_createJumpTable_a81d87c18335332c,
              mid_docID_bd89ce15dad49192,
              mid_index_bd89ce15dad49192,
              mid_nextDoc_bd89ce15dad49192,
              mid_writeBitSet_cf51df7da1205ea9,
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
