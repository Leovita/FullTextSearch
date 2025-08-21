#ifndef org_apache_lucene_facet_taxonomy_directory_ReindexingEnrichedDirectoryTaxonomyWriter_H
#define org_apache_lucene_facet_taxonomy_directory_ReindexingEnrichedDirectoryTaxonomyWriter_H

#include "org/apache/lucene/facet/taxonomy/directory/DirectoryTaxonomyWriter.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
  namespace util {
    namespace function {
      class BiConsumer;
    }
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          class FacetLabel;
        }
      }
      namespace document {
        class Document;
      }
      namespace store {
        class Directory;
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
          namespace directory {

            class ReindexingEnrichedDirectoryTaxonomyWriter : public ::org::apache::lucene::facet::taxonomy::directory::DirectoryTaxonomyWriter {
             public:
              enum {
                mid_init$_a6326fe1fbf1b206,
                mid_reindexWithNewOrdinalData_b72e978f1e58c9c6,
                mid_enrichOrdinalDocument_33e704356989236f,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ReindexingEnrichedDirectoryTaxonomyWriter(jobject obj) : ::org::apache::lucene::facet::taxonomy::directory::DirectoryTaxonomyWriter(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ReindexingEnrichedDirectoryTaxonomyWriter(const ReindexingEnrichedDirectoryTaxonomyWriter& obj) : ::org::apache::lucene::facet::taxonomy::directory::DirectoryTaxonomyWriter(obj) {}

              ReindexingEnrichedDirectoryTaxonomyWriter(const ::org::apache::lucene::store::Directory &, const ::java::util::function::BiConsumer &);

              void reindexWithNewOrdinalData(const ::java::util::function::BiConsumer &) const;
            };
          }
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
          namespace directory {
            extern PyType_Def PY_TYPE_DEF(ReindexingEnrichedDirectoryTaxonomyWriter);
            extern PyTypeObject *PY_TYPE(ReindexingEnrichedDirectoryTaxonomyWriter);

            class t_ReindexingEnrichedDirectoryTaxonomyWriter {
            public:
              PyObject_HEAD
              ReindexingEnrichedDirectoryTaxonomyWriter object;
              static PyObject *wrap_Object(const ReindexingEnrichedDirectoryTaxonomyWriter&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
