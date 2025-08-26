#ifndef org_apache_lucene_search_IndexSearcher$TooManyNestedClauses_H
#define org_apache_lucene_search_IndexSearcher$TooManyNestedClauses_H

#include "org/apache/lucene/search/IndexSearcher$TooManyClauses.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class IndexSearcher$TooManyNestedClauses : public ::org::apache::lucene::search::IndexSearcher$TooManyClauses {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexSearcher$TooManyNestedClauses(jobject obj) : ::org::apache::lucene::search::IndexSearcher$TooManyClauses(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexSearcher$TooManyNestedClauses(const IndexSearcher$TooManyNestedClauses& obj) : ::org::apache::lucene::search::IndexSearcher$TooManyClauses(obj) {}

          IndexSearcher$TooManyNestedClauses();
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
        extern PyType_Def PY_TYPE_DEF(IndexSearcher$TooManyNestedClauses);
        extern PyTypeObject *PY_TYPE(IndexSearcher$TooManyNestedClauses);

        class t_IndexSearcher$TooManyNestedClauses {
        public:
          PyObject_HEAD
          IndexSearcher$TooManyNestedClauses object;
          static PyObject *wrap_Object(const IndexSearcher$TooManyNestedClauses&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
