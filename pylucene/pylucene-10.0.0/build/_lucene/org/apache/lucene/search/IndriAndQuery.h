#ifndef org_apache_lucene_search_IndriAndQuery_H
#define org_apache_lucene_search_IndriAndQuery_H

#include "org/apache/lucene/search/IndriQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreMode;
        class Weight;
        class BooleanClause;
        class IndexSearcher;
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
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class IndriAndQuery : public ::org::apache::lucene::search::IndriQuery {
         public:
          enum {
            mid_init$_acbb405b60a30822,
            mid_createWeight_dc54d493278607e4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndriAndQuery(jobject obj) : ::org::apache::lucene::search::IndriQuery(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndriAndQuery(const IndriAndQuery& obj) : ::org::apache::lucene::search::IndriQuery(obj) {}

          IndriAndQuery(const ::java::util::List &);

          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
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
        extern PyType_Def PY_TYPE_DEF(IndriAndQuery);
        extern PyTypeObject *PY_TYPE(IndriAndQuery);

        class t_IndriAndQuery {
        public:
          PyObject_HEAD
          IndriAndQuery object;
          static PyObject *wrap_Object(const IndriAndQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
