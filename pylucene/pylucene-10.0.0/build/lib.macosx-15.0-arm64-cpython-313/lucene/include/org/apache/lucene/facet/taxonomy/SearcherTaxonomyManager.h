#ifndef org_apache_lucene_facet_taxonomy_SearcherTaxonomyManager_H
#define org_apache_lucene_facet_taxonomy_SearcherTaxonomyManager_H

#include "org/apache/lucene/search/ReferenceManager.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class SearcherFactory;
      }
      namespace facet {
        namespace taxonomy {
          namespace directory {
            class DirectoryTaxonomyWriter;
            class DirectoryTaxonomyReader;
          }
          class SearcherTaxonomyManager$SearcherAndTaxonomy;
        }
      }
      namespace index {
        class IndexReader;
        class IndexWriter;
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
      namespace facet {
        namespace taxonomy {

          class SearcherTaxonomyManager : public ::org::apache::lucene::search::ReferenceManager {
           public:
            enum {
              mid_init$_722e1abe365b9755,
              mid_init$_a8d7f320e95810a2,
              mid_init$_c942bc03612af819,
              mid_init$_4f187f56d42fe8de,
              mid_decRef_878cc3480eea901e,
              mid_tryIncRef_36b1475935357cae,
              mid_getRefCount_b916bf9ea4278f9b,
              mid_refreshIfNeeded_858a53acbad70429,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SearcherTaxonomyManager(jobject obj) : ::org::apache::lucene::search::ReferenceManager(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SearcherTaxonomyManager(const SearcherTaxonomyManager& obj) : ::org::apache::lucene::search::ReferenceManager(obj) {}

            SearcherTaxonomyManager(const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::facet::taxonomy::directory::DirectoryTaxonomyReader &, const ::org::apache::lucene::search::SearcherFactory &);
            SearcherTaxonomyManager(const ::org::apache::lucene::index::IndexWriter &, const ::org::apache::lucene::search::SearcherFactory &, const ::org::apache::lucene::facet::taxonomy::directory::DirectoryTaxonomyWriter &);
            SearcherTaxonomyManager(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::search::SearcherFactory &);
            SearcherTaxonomyManager(const ::org::apache::lucene::index::IndexWriter &, jboolean, const ::org::apache::lucene::search::SearcherFactory &, const ::org::apache::lucene::facet::taxonomy::directory::DirectoryTaxonomyWriter &);
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          extern PyType_Def PY_TYPE_DEF(SearcherTaxonomyManager);
          extern PyTypeObject *PY_TYPE(SearcherTaxonomyManager);

          class t_SearcherTaxonomyManager {
          public:
            PyObject_HEAD
            SearcherTaxonomyManager object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_SearcherTaxonomyManager *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const SearcherTaxonomyManager&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const SearcherTaxonomyManager&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
