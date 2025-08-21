#ifndef org_apache_lucene_facet_taxonomy_SearcherTaxonomyManager$SearcherAndTaxonomy_H
#define org_apache_lucene_facet_taxonomy_SearcherTaxonomyManager$SearcherAndTaxonomy_H

#include "java/lang/Record.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class Object;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          class SearcherTaxonomyManager$SearcherAndTaxonomy;
          namespace directory {
            class DirectoryTaxonomyReader;
          }
        }
      }
      namespace search {
        class IndexSearcher;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {

          class SearcherTaxonomyManager$SearcherAndTaxonomy : public ::java::lang::Record {
           public:
            enum {
              mid_init$_c1c88e6f134f68eb,
              mid_equals_570b5248a6da3ef6,
              mid_hashCode_20fbf7565993c3d7,
              mid_searcher_8c9a1e527c2e5a94,
              mid_taxonomyReader_f3596a1d5eba38c2,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SearcherTaxonomyManager$SearcherAndTaxonomy(jobject obj) : ::java::lang::Record(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SearcherTaxonomyManager$SearcherAndTaxonomy(const SearcherTaxonomyManager$SearcherAndTaxonomy& obj) : ::java::lang::Record(obj) {}

            SearcherTaxonomyManager$SearcherAndTaxonomy(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::facet::taxonomy::directory::DirectoryTaxonomyReader &);

            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            ::org::apache::lucene::search::IndexSearcher searcher() const;
            ::org::apache::lucene::facet::taxonomy::directory::DirectoryTaxonomyReader taxonomyReader() const;
            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(SearcherTaxonomyManager$SearcherAndTaxonomy);
          extern PyTypeObject *PY_TYPE(SearcherTaxonomyManager$SearcherAndTaxonomy);

          class t_SearcherTaxonomyManager$SearcherAndTaxonomy {
          public:
            PyObject_HEAD
            SearcherTaxonomyManager$SearcherAndTaxonomy object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_SearcherTaxonomyManager$SearcherAndTaxonomy *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const SearcherTaxonomyManager$SearcherAndTaxonomy&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const SearcherTaxonomyManager$SearcherAndTaxonomy&, PyTypeObject *);
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
