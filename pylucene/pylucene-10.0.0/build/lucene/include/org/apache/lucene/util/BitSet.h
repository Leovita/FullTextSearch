#ifndef org_apache_lucene_util_BitSet_H
#define org_apache_lucene_util_BitSet_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        class Bits;
        class BitSet;
      }
      namespace search {
        class DocIdSetIterator;
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
      namespace util {

        class BitSet : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_approximateCardinality_20fbf7565993c3d7,
            mid_cardinality_20fbf7565993c3d7,
            mid_clear_3720c61b0679eb3e,
            mid_clear_540b2b23d51b1efd,
            mid_clear_e13cff512ebda969,
            mid_getAndSet_ae22d3a856ad56f1,
            mid_nextSetBit_3c9bba330f083871,
            mid_nextSetBit_7f733b5d08bb5ec4,
            mid_of_4eba484482b8b875,
            mid_or_ed30298d46fa551b,
            mid_prevSetBit_3c9bba330f083871,
            mid_set_540b2b23d51b1efd,
            mid_checkUnpositioned_ed30298d46fa551b,
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
