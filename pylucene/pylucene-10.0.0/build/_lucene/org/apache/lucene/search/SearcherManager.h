#ifndef org_apache_lucene_search_SearcherManager_H
#define org_apache_lucene_search_SearcherManager_H

#include "org/apache/lucene/search/ReferenceManager.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
      }
      namespace index {
        class IndexReader;
        class IndexWriter;
        class DirectoryReader;
      }
      namespace search {
        class SearcherFactory;
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class SearcherManager : public ::org::apache::lucene::search::ReferenceManager {
         public:
          enum {
            mid_init$_e6c4e6c27aabee06,
            mid_init$_e8dd957f3e103c5c,
            mid_init$_0b76d356c15ba8c3,
            mid_init$_1151bcbc24bc7c82,
            mid_getSearcher_b3a7bfd8853bc8d2,
            mid_isSearcherCurrent_9aa4f33e82ea333f,
            mid_decRef_ca121b0bc447f41f,
            mid_getRefCount_b78cab58a7654f93,
            mid_refreshIfNeeded_23519a62df157602,
            mid_tryIncRef_bbbaf9f2f4d0b272,
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
