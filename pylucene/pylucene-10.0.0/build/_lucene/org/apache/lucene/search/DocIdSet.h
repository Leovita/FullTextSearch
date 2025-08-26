#ifndef org_apache_lucene_search_DocIdSet_H
#define org_apache_lucene_search_DocIdSet_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
        class Accountable;
      }
      namespace search {
        class DocIdSetIterator;
        class DocIdSet;
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
      namespace search {

        class DocIdSet : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_all_351e1e2ef81cc606,
            mid_bits_92a4f567193c49d1,
            mid_iterator_b78969502cbf4939,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocIdSet(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocIdSet(const DocIdSet& obj) : ::java::lang::Object(obj) {}

          static DocIdSet *EMPTY;

          DocIdSet();

          static DocIdSet all(jint);
          ::org::apache::lucene::util::Bits bits() const;
          ::org::apache::lucene::search::DocIdSetIterator iterator() const;
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
        extern PyType_Def PY_TYPE_DEF(DocIdSet);
        extern PyTypeObject *PY_TYPE(DocIdSet);

        class t_DocIdSet {
        public:
          PyObject_HEAD
          DocIdSet object;
          static PyObject *wrap_Object(const DocIdSet&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
