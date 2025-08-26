#ifndef org_apache_lucene_util_NotDocIdSet_H
#define org_apache_lucene_util_NotDocIdSet_H

#include "org/apache/lucene/search/DocIdSet.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
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

        class NotDocIdSet : public ::org::apache::lucene::search::DocIdSet {
         public:
          enum {
            mid_init$_3c23448b9785a6e8,
            mid_bits_92a4f567193c49d1,
            mid_iterator_b78969502cbf4939,
            mid_ramBytesUsed_0f176418e3e16541,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NotDocIdSet(jobject obj) : ::org::apache::lucene::search::DocIdSet(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NotDocIdSet(const NotDocIdSet& obj) : ::org::apache::lucene::search::DocIdSet(obj) {}

          NotDocIdSet(jint, const ::org::apache::lucene::search::DocIdSet &);

          ::org::apache::lucene::util::Bits bits() const;
          ::org::apache::lucene::search::DocIdSetIterator iterator() const;
          jlong ramBytesUsed() const;
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
        extern PyType_Def PY_TYPE_DEF(NotDocIdSet);
        extern PyTypeObject *PY_TYPE(NotDocIdSet);

        class t_NotDocIdSet {
        public:
          PyObject_HEAD
          NotDocIdSet object;
          static PyObject *wrap_Object(const NotDocIdSet&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
