#ifndef org_apache_lucene_search_DocIdSetIterator_H
#define org_apache_lucene_search_DocIdSetIterator_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
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
      namespace search {

        class DocIdSetIterator : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_advance_3c9bba330f083871,
            mid_all_4f54e07ba226fe4e,
            mid_cost_16939d9d0a9a9721,
            mid_docID_20fbf7565993c3d7,
            mid_empty_fc644a826c65d236,
            mid_nextDoc_20fbf7565993c3d7,
            mid_range_59f04b0b519ccaa0,
            mid_slowAdvance_3c9bba330f083871,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocIdSetIterator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocIdSetIterator(const DocIdSetIterator& obj) : ::java::lang::Object(obj) {}

          static jint NO_MORE_DOCS;

          DocIdSetIterator();

          jint advance(jint) const;
          static DocIdSetIterator all(jint);
          jlong cost() const;
          jint docID() const;
          static DocIdSetIterator empty();
          jint nextDoc() const;
          static DocIdSetIterator range(jint, jint);
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
        extern PyType_Def PY_TYPE_DEF(DocIdSetIterator);
        extern PyTypeObject *PY_TYPE(DocIdSetIterator);

        class t_DocIdSetIterator {
        public:
          PyObject_HEAD
          DocIdSetIterator object;
          static PyObject *wrap_Object(const DocIdSetIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
