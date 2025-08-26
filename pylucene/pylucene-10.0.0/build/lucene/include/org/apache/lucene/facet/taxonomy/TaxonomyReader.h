#ifndef org_apache_lucene_facet_taxonomy_TaxonomyReader_H
#define org_apache_lucene_facet_taxonomy_TaxonomyReader_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          class ParallelTaxonomyArrays;
          class TaxonomyReader$ChildrenIterator;
          class FacetLabel;
          class TaxonomyReader;
        }
      }
    }
  }
}
namespace java {
  namespace io {
    class Closeable;
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Map;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {

          class TaxonomyReader : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_close_e7bdbe105ce1bafb,
              mid_decRef_e7bdbe105ce1bafb,
              mid_getBulkOrdinals_a339b1a8e9820a7b,
              mid_getBulkPath_08f83a8c8bc64590,
              mid_getChildren_cd04cb8b7b0a9c6a,
              mid_getCommitUserData_5004bdf19ed33453,
              mid_getOrdinal_36dd33e0173c4244,
              mid_getOrdinal_88d7ba4d0f25ac7e,
              mid_getParallelTaxonomyArrays_ae30cad85926a26f,
              mid_getPath_6c732e2e2e10e82a,
              mid_getRefCount_bd89ce15dad49192,
              mid_getSize_bd89ce15dad49192,
              mid_incRef_e7bdbe105ce1bafb,
              mid_openIfChanged_13430f3bfc69e411,
              mid_tryIncRef_9aa4f33e82ea333f,
              mid_doOpenIfChanged_fab4d9e24fa5d222,
              mid_doClose_e7bdbe105ce1bafb,
              mid_ensureOpen_e7bdbe105ce1bafb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TaxonomyReader(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TaxonomyReader(const TaxonomyReader& obj) : ::java::lang::Object(obj) {}

            static jint INVALID_ORDINAL;
            static jint ROOT_ORDINAL;

            TaxonomyReader();

            void close() const;
            void decRef() const;
            JArray< jint > getBulkOrdinals(const JArray< ::org::apache::lucene::facet::taxonomy::FacetLabel > &) const;
            JArray< ::org::apache::lucene::facet::taxonomy::FacetLabel > getBulkPath(const JArray< jint > &) const;
            ::org::apache::lucene::facet::taxonomy::TaxonomyReader$ChildrenIterator getChildren(jint) const;
            ::java::util::Map getCommitUserData() const;
            jint getOrdinal(const ::org::apache::lucene::facet::taxonomy::FacetLabel &) const;
            jint getOrdinal(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
            ::org::apache::lucene::facet::taxonomy::ParallelTaxonomyArrays getParallelTaxonomyArrays() const;
            ::org::apache::lucene::facet::taxonomy::FacetLabel getPath(jint) const;
            jint getRefCount() const;
            jint getSize() const;
            void incRef() const;
            static TaxonomyReader openIfChanged(const TaxonomyReader &);
            jboolean tryIncRef() const;
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
          extern PyType_Def PY_TYPE_DEF(TaxonomyReader);
          extern PyTypeObject *PY_TYPE(TaxonomyReader);

          class t_TaxonomyReader {
          public:
            PyObject_HEAD
            TaxonomyReader object;
            static PyObject *wrap_Object(const TaxonomyReader&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
