#ifndef org_apache_lucene_facet_taxonomy_directory_DirectoryTaxonomyReader_H
#define org_apache_lucene_facet_taxonomy_directory_DirectoryTaxonomyReader_H

#include "org/apache/lucene/facet/taxonomy/TaxonomyReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
      namespace index {
        class DirectoryReader;
      }
      namespace facet {
        namespace taxonomy {
          class FacetLabel;
          namespace directory {
            class DirectoryTaxonomyWriter;
          }
          class ParallelTaxonomyArrays;
        }
      }
      namespace store {
        class Directory;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
    class Map;
  }
  namespace lang {
    class Class;
    class String;
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

            class DirectoryTaxonomyReader : public ::org::apache::lucene::facet::taxonomy::TaxonomyReader {
             public:
              enum {
                mid_init$_bfb8ac4557dfef8c,
                mid_init$_3c151c130d7f3176,
                mid_getBulkOrdinals_7d0bc717fafc6e60,
                mid_getBulkPath_b0d0c4216ac45539,
                mid_getChildResources_aa58b3beec16cbbd,
                mid_getCommitUserData_f125f26c07a7bec8,
                mid_getInternalIndexReader_f7fded1703ce6ca1,
                mid_getOrdinal_b886af148d2e9c5a,
                mid_getParallelTaxonomyArrays_2a1c0e1b6b11270b,
                mid_getPath_c21e0250a0465b0f,
                mid_getSize_20fbf7565993c3d7,
                mid_ramBytesUsed_16939d9d0a9a9721,
                mid_setCacheSize_540b2b23d51b1efd,
                mid_toString_cd8436557ab831f9,
                mid_doClose_3720c61b0679eb3e,
                mid_doOpenIfChanged_f3596a1d5eba38c2,
                mid_openIndexReader_c84aecaf0e3ee77f,
                mid_openIndexReader_305366f7010e8381,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit DirectoryTaxonomyReader(jobject obj) : ::org::apache::lucene::facet::taxonomy::TaxonomyReader(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              DirectoryTaxonomyReader(const DirectoryTaxonomyReader& obj) : ::org::apache::lucene::facet::taxonomy::TaxonomyReader(obj) {}

              DirectoryTaxonomyReader(const ::org::apache::lucene::facet::taxonomy::directory::DirectoryTaxonomyWriter &);
              DirectoryTaxonomyReader(const ::org::apache::lucene::store::Directory &);

              JArray< jint > getBulkOrdinals(const JArray< ::org::apache::lucene::facet::taxonomy::FacetLabel > &) const;
              JArray< ::org::apache::lucene::facet::taxonomy::FacetLabel > getBulkPath(const JArray< jint > &) const;
              ::java::util::Collection getChildResources() const;
              ::java::util::Map getCommitUserData() const;
              ::org::apache::lucene::index::DirectoryReader getInternalIndexReader() const;
              jint getOrdinal(const ::org::apache::lucene::facet::taxonomy::FacetLabel &) const;
              ::org::apache::lucene::facet::taxonomy::ParallelTaxonomyArrays getParallelTaxonomyArrays() const;
              ::org::apache::lucene::facet::taxonomy::FacetLabel getPath(jint) const;
              jint getSize() const;
              jlong ramBytesUsed() const;
              void setCacheSize(jint) const;
              ::java::lang::String toString(jint) const;
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
            extern PyType_Def PY_TYPE_DEF(DirectoryTaxonomyReader);
            extern PyTypeObject *PY_TYPE(DirectoryTaxonomyReader);

            class t_DirectoryTaxonomyReader {
            public:
              PyObject_HEAD
              DirectoryTaxonomyReader object;
              static PyObject *wrap_Object(const DirectoryTaxonomyReader&);
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
