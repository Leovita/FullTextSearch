#ifndef org_apache_lucene_facet_taxonomy_directory_DirectoryTaxonomyWriter_H
#define org_apache_lucene_facet_taxonomy_directory_DirectoryTaxonomyWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
      }
      namespace index {
        class IndexWriterConfig$OpenMode;
      }
      namespace facet {
        namespace taxonomy {
          class TaxonomyWriter;
          namespace writercache {
            class TaxonomyWriterCache;
          }
          namespace directory {
            class DirectoryTaxonomyWriter$OrdinalMap;
          }
          class FacetLabel;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class Iterable;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Map$Entry;
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
                mid_init$_0bf39a7351552ef4,
                mid_init$_9c204906620b09b1,
                mid_init$_854e72c4c9df4c0b,
                mid_addCategory_36dd33e0173c4244,
                mid_addTaxonomy_3131de7c4fb3f9e7,
                mid_close_e7bdbe105ce1bafb,
                mid_commit_0f176418e3e16541,
                mid_defaultTaxonomyWriterCache_7e7bbc4efba1fe46,
                mid_getCache_7e7bbc4efba1fe46,
                mid_getDirectory_0b8988a9a36f43ec,
                mid_getLiveCommitData_85e1732aaf0b83f3,
                mid_getParent_a3904e10f5bb9437,
                mid_getSize_bd89ce15dad49192,
                mid_getTaxonomyEpoch_0f176418e3e16541,
                mid_prepareCommit_0f176418e3e16541,
                mid_replaceTaxonomy_0bf39a7351552ef4,
                mid_rollback_e7bdbe105ce1bafb,
                mid_setCacheMissesUntilFill_8226bd0b0fc13dba,
                mid_setLiveCommitData_e14ca79f217d88d0,
                mid_createIndexWriterConfig_67fa0619a4e531cd,
                mid_openIndexWriter_e979525bd023eee0,
                mid_closeResources_e7bdbe105ce1bafb,
                mid_findCategory_36dd33e0173c4244,
                mid_enrichOrdinalDocument_f1e258f855995777,
                mid_ensureOpen_e7bdbe105ce1bafb,
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
