#ifndef org_apache_lucene_search_IndexSearcher$TooManyClauses_H
#define org_apache_lucene_search_IndexSearcher$TooManyClauses_H

#include "java/lang/RuntimeException.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class IndexSearcher$TooManyClauses : public ::java::lang::RuntimeException {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_init$_ee46a189998009d6,
            mid_getMaxClauseCount_bd89ce15dad49192,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexSearcher$TooManyClauses(jobject obj) : ::java::lang::RuntimeException(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexSearcher$TooManyClauses(const IndexSearcher$TooManyClauses& obj) : ::java::lang::RuntimeException(obj) {}

          IndexSearcher$TooManyClauses();
          IndexSearcher$TooManyClauses(const ::java::lang::String &);

          jint getMaxClauseCount() const;
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
        extern PyType_Def PY_TYPE_DEF(IndexSearcher$TooManyClauses);
        extern PyTypeObject *PY_TYPE(IndexSearcher$TooManyClauses);

        class t_IndexSearcher$TooManyClauses {
        public:
          PyObject_HEAD
          IndexSearcher$TooManyClauses object;
          static PyObject *wrap_Object(const IndexSearcher$TooManyClauses&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
