#ifndef org_apache_lucene_facet_taxonomy_directory_DirectoryTaxonomyReader_H
#define org_apache_lucene_facet_taxonomy_directory_DirectoryTaxonomyReader_H

#include "org/apache/lucene/facet/taxonomy/TaxonomyReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
      }
      namespace facet {
        namespace taxonomy {
          class ParallelTaxonomyArrays;
          namespace directory {
            class DirectoryTaxonomyWriter;
          }
          class FacetLabel;
        }
      }
      namespace index {
        class DirectoryReader;
      }
      namespace util {
        class Accountable;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Collection;
    class Map;
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
                mid_init$_f5bbf852e881e7ba,
                mid_init$_0bf39a7351552ef4,
                mid_getBulkOrdinals_a339b1a8e9820a7b,
                mid_getBulkPath_08f83a8c8bc64590,
                mid_getChildResources_4a269b968b3a511f,
                mid_getCommitUserData_5004bdf19ed33453,
                mid_getInternalIndexReader_a8b6bb613ad0bc66,
                mid_getOrdinal_36dd33e0173c4244,
                mid_getParallelTaxonomyArrays_ae30cad85926a26f,
                mid_getPath_6c732e2e2e10e82a,
                mid_getSize_bd89ce15dad49192,
                mid_ramBytesUsed_0f176418e3e16541,
                mid_setCacheSize_8226bd0b0fc13dba,
                mid_toString_0da8f0b89b1e9a22,
                mid_doOpenIfChanged_d37a89f8c60186b4,
                mid_doClose_e7bdbe105ce1bafb,
                mid_openIndexReader_ca7780014fe99b2c,
                mid_openIndexReader_aa7d631f758a2283,
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
