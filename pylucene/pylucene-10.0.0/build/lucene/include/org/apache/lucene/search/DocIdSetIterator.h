#ifndef org_apache_lucene_search_DocIdSetIterator_H
#define org_apache_lucene_search_DocIdSetIterator_H

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
    }
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
            mid_init$_e7bdbe105ce1bafb,
            mid_advance_a3904e10f5bb9437,
            mid_all_fb0dbed973801393,
            mid_cost_0f176418e3e16541,
            mid_docID_bd89ce15dad49192,
            mid_empty_b78969502cbf4939,
            mid_nextDoc_bd89ce15dad49192,
            mid_range_3ca9a74c97b33e04,
            mid_slowAdvance_a3904e10f5bb9437,
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
