#ifndef org_apache_lucene_facet_taxonomy_directory_DirectoryTaxonomyWriter_H
#define org_apache_lucene_facet_taxonomy_directory_DirectoryTaxonomyWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexWriterConfig$OpenMode;
      }
      namespace facet {
        namespace taxonomy {
          class TaxonomyWriter;
          class FacetLabel;
          namespace directory {
            class DirectoryTaxonomyWriter$OrdinalMap;
          }
          namespace writercache {
            class TaxonomyWriterCache;
          }
        }
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
    class Iterable;
    class String;
  }
  namespace util {
    class Map$Entry;
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
          namespace directory {

            class DirectoryTaxonomyWriter : public ::java::lang::Object {
             public:
              enum {
                mid_init$_3c151c130d7f3176,
                mid_init$_4981915ac617cbab,
                mid_init$_4963211c8a1ae7b6,
                mid_addCategory_b886af148d2e9c5a,
                mid_addTaxonomy_9b940ac8daf723e5,
                mid_close_3720c61b0679eb3e,
                mid_commit_16939d9d0a9a9721,
                mid_defaultTaxonomyWriterCache_709bacafc6de9f0e,
                mid_getCache_709bacafc6de9f0e,
                mid_getDirectory_0d3b52699e153434,
                mid_getLiveCommitData_11d5156a64e3246d,
                mid_getParent_3c9bba330f083871,
                mid_getSize_20fbf7565993c3d7,
                mid_getTaxonomyEpoch_16939d9d0a9a9721,
                mid_prepareCommit_16939d9d0a9a9721,
                mid_replaceTaxonomy_3c151c130d7f3176,
                mid_rollback_3720c61b0679eb3e,
                mid_setCacheMissesUntilFill_540b2b23d51b1efd,
                mid_setLiveCommitData_eb4b05d4345caaf0,
                mid_createIndexWriterConfig_53c6c73834896f5c,
                mid_openIndexWriter_a713e9a127d4d089,
                mid_closeResources_3720c61b0679eb3e,
                mid_findCategory_b886af148d2e9c5a,
                mid_enrichOrdinalDocument_33e704356989236f,
                mid_ensureOpen_3720c61b0679eb3e,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DirectoryTaxonomyWriter(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DirectoryTaxonomyWriter(const DirectoryTaxonomyWriter& obj) : ::java::lang::Object(obj) {}

              static ::java::lang::String *INDEX_EPOCH;

              DirectoryTaxonomyWriter(const ::org::apache::lucene::store::Directory &);
              DirectoryTaxonomyWriter(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::IndexWriterConfig$OpenMode &);
              DirectoryTaxonomyWriter(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::IndexWriterConfig$OpenMode &, const ::org::apache::lucene::facet::taxonomy::writercache::TaxonomyWriterCache &);

              jint addCategory(const ::org::apache::lucene::facet::taxonomy::FacetLabel &) const;
              void addTaxonomy(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::facet::taxonomy::directory::DirectoryTaxonomyWriter$OrdinalMap &) const;
              void close() const;
              jlong commit() const;
              static ::org::apache::lucene::facet::taxonomy::writercache::TaxonomyWriterCache defaultTaxonomyWriterCache();
              ::org::apache::lucene::facet::taxonomy::writercache::TaxonomyWriterCache getCache() const;
              ::org::apache::lucene::store::Directory getDirectory() const;
              ::java::lang::Iterable getLiveCommitData() const;
              jint getParent(jint) const;
              jint getSize() const;
              jlong getTaxonomyEpoch() const;
              jlong prepareCommit() const;
              void replaceTaxonomy(const ::org::apache::lucene::store::Directory &) const;
              void rollback() const;
              void setCacheMissesUntilFill(jint) const;
              void setLiveCommitData(const ::java::lang::Iterable &) const;
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
            extern PyType_Def PY_TYPE_DEF(DirectoryTaxonomyWriter);
            extern PyTypeObject *PY_TYPE(DirectoryTaxonomyWriter);

            class t_DirectoryTaxonomyWriter {
            public:
              PyObject_HEAD
              DirectoryTaxonomyWriter object;
              static PyObject *wrap_Object(const DirectoryTaxonomyWriter&);
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
