#ifndef org_apache_lucene_search_SearcherManager_H
#define org_apache_lucene_search_SearcherManager_H

#include "org/apache/lucene/search/ReferenceManager.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class DirectoryReader;
        class IndexReader;
        class IndexWriter;
      }
      namespace search {
        class SearcherFactory;
        class IndexSearcher;
      }
      namespace store {
        class Directory;
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

        class SearcherManager : public ::org::apache::lucene::search::ReferenceManager {
         public:
          enum {
            mid_init$_62926817842f01c9,
            mid_init$_27c33cf692d70365,
            mid_init$_bdcbfd03e282a5aa,
            mid_init$_dc433d95fbc76dad,
            mid_getSearcher_a2da158af80d6be8,
            mid_isSearcherCurrent_947277eca0748c4e,
            mid_decRef_64fdfedb3d23d646,
            mid_tryIncRef_adc2cfa9c80723e1,
            mid_getRefCount_c2bd0870c5672a4e,
            mid_refreshIfNeeded_8e313b89dd23fd2a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SearcherManager(jobject obj) : ::org::apache::lucene::search::ReferenceManager(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SearcherManager(const SearcherManager& obj) : ::org::apache::lucene::search::ReferenceManager(obj) {}

          SearcherManager(const ::org::apache::lucene::index::DirectoryReader &, const ::org::apache::lucene::search::SearcherFactory &);
          SearcherManager(const ::org::apache::lucene::index::IndexWriter &, const ::org::apache::lucene::search::SearcherFactory &);
          SearcherManager(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::search::SearcherFactory &);
          SearcherManager(const ::org::apache::lucene::index::IndexWriter &, jboolean, jboolean, const ::org::apache::lucene::search::SearcherFactory &);

          static ::org::apache::lucene::search::IndexSearcher getSearcher(const ::org::apache::lucene::search::SearcherFactory &, const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::index::IndexReader &);
          jboolean isSearcherCurrent() const;
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
        extern PyType_Def PY_TYPE_DEF(SearcherManager);
        extern PyTypeObject *PY_TYPE(SearcherManager);

        class t_SearcherManager {
        public:
          PyObject_HEAD
          SearcherManager object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_SearcherManager *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const SearcherManager&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const SearcherManager&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
