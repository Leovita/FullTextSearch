#ifndef org_apache_lucene_util_RoaringDocIdSet$Builder_H
#define org_apache_lucene_util_RoaringDocIdSet$Builder_H

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
      namespace search {
        class DocIdSetIterator;
      }
      namespace util {
        class RoaringDocIdSet$Builder;
        class RoaringDocIdSet;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class RoaringDocIdSet$Builder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_8226bd0b0fc13dba,
            mid_add_54288acc518c7bd2,
            mid_add_ac25f7c410dfce33,
            mid_build_b0556275f07fe95d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RoaringDocIdSet$Builder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RoaringDocIdSet$Builder(const RoaringDocIdSet$Builder& obj) : ::java::lang::Object(obj) {}

          RoaringDocIdSet$Builder(jint);

          RoaringDocIdSet$Builder add(const ::org::apache::lucene::search::DocIdSetIterator &) const;
          RoaringDocIdSet$Builder add(jint) const;
          ::org::apache::lucene::util::RoaringDocIdSet build() const;
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
        extern PyType_Def PY_TYPE_DEF(RoaringDocIdSet$Builder);
        extern PyTypeObject *PY_TYPE(RoaringDocIdSet$Builder);

        class t_RoaringDocIdSet$Builder {
        public:
          PyObject_HEAD
          RoaringDocIdSet$Builder object;
          static PyObject *wrap_Object(const RoaringDocIdSet$Builder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
