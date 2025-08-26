#ifndef org_apache_lucene_util_BitSet_H
#define org_apache_lucene_util_BitSet_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BitSet;
        class Bits;
        class Accountable;
      }
      namespace search {
        class DocIdSetIterator;
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
      namespace util {

        class BitSet : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_approximateCardinality_bd89ce15dad49192,
            mid_cardinality_bd89ce15dad49192,
            mid_clear_e7bdbe105ce1bafb,
            mid_clear_8226bd0b0fc13dba,
            mid_clear_645c25455f5b9b1c,
            mid_getAndSet_a8281eb3b9d9672d,
            mid_nextSetBit_a3904e10f5bb9437,
            mid_nextSetBit_7f27cf81a85a97e9,
            mid_of_2f8ad3d64e48a5f1,
            mid_or_3bae9c6463463f0d,
            mid_prevSetBit_a3904e10f5bb9437,
            mid_set_8226bd0b0fc13dba,
            mid_checkUnpositioned_3bae9c6463463f0d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BitSet(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BitSet(const BitSet& obj) : ::java::lang::Object(obj) {}

          BitSet();

          jint approximateCardinality() const;
          jint cardinality() const;
          void clear() const;
          void clear(jint) const;
          void clear(jint, jint) const;
          jboolean getAndSet(jint) const;
          jint nextSetBit(jint) const;
          jint nextSetBit(jint, jint) const;
          static BitSet of(const ::org::apache::lucene::search::DocIdSetIterator &, jint);
          void or$(const ::org::apache::lucene::search::DocIdSetIterator &) const;
          jint prevSetBit(jint) const;
          void set(jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(BitSet);
        extern PyTypeObject *PY_TYPE(BitSet);

        class t_BitSet {
        public:
          PyObject_HEAD
          BitSet object;
          static PyObject *wrap_Object(const BitSet&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
