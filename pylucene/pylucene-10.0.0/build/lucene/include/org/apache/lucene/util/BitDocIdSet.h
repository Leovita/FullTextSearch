#ifndef org_apache_lucene_util_BitDocIdSet_H
#define org_apache_lucene_util_BitDocIdSet_H

#include "org/apache/lucene/search/DocIdSet.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class DocIdSetIterator;
      }
      namespace util {
        class BitSet;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class BitDocIdSet : public ::org::apache::lucene::search::DocIdSet {
         public:
          enum {
            mid_init$_c623abf28d0d41be,
            mid_init$_cae33b2b11961e3c,
            mid_bits_929151ffbbc0eb5d,
            mid_iterator_fc644a826c65d236,
            mid_ramBytesUsed_16939d9d0a9a9721,
            mid_toString_09a7afff1868fc5e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BitDocIdSet(jobject obj) : ::org::apache::lucene::search::DocIdSet(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BitDocIdSet(const BitDocIdSet& obj) : ::org::apache::lucene::search::DocIdSet(obj) {}

          BitDocIdSet(const ::org::apache::lucene::util::BitSet &);
          BitDocIdSet(const ::org::apache::lucene::util::BitSet &, jlong);

          ::org::apache::lucene::util::BitSet bits() const;
          ::org::apache::lucene::search::DocIdSetIterator iterator() const;
          jlong ramBytesUsed() const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(BitDocIdSet);
        extern PyTypeObject *PY_TYPE(BitDocIdSet);

        class t_BitDocIdSet {
        public:
          PyObject_HEAD
          BitDocIdSet object;
          static PyObject *wrap_Object(const BitDocIdSet&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
