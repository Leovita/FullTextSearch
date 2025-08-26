#ifndef org_apache_lucene_search_SearcherFactory_H
#define org_apache_lucene_search_SearcherFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace search {
        class IndexSearcher;
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

        class SearcherFactory : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_newSearcher_fa76d6841706e86b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SearcherFactory(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SearcherFactory(const SearcherFactory& obj) : ::java::lang::Object(obj) {}

          SearcherFactory();

          ::org::apache::lucene::search::IndexSearcher newSearcher(const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::index::IndexReader &) const;
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
        extern PyType_Def PY_TYPE_DEF(SearcherFactory);
        extern PyTypeObject *PY_TYPE(SearcherFactory);

        class t_SearcherFactory {
        public:
          PyObject_HEAD
          SearcherFactory object;
          static PyObject *wrap_Object(const SearcherFactory&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
