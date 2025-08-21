#ifndef org_apache_lucene_facet_taxonomy_TaxonomyReader_H
#define org_apache_lucene_facet_taxonomy_TaxonomyReader_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class Closeable;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Map;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {
          class FacetLabel;
          class TaxonomyReader;
          class TaxonomyReader$ChildrenIterator;
          class ParallelTaxonomyArrays;
        }
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

          class TaxonomyReader : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_close_3720c61b0679eb3e,
              mid_decRef_3720c61b0679eb3e,
              mid_getBulkOrdinals_7d0bc717fafc6e60,
              mid_getBulkPath_b0d0c4216ac45539,
              mid_getChildren_45ad5705f78f69d0,
              mid_getCommitUserData_f125f26c07a7bec8,
              mid_getOrdinal_b886af148d2e9c5a,
              mid_getOrdinal_f5d0d3372a4bf2ce,
              mid_getParallelTaxonomyArrays_2a1c0e1b6b11270b,
              mid_getPath_c21e0250a0465b0f,
              mid_getRefCount_20fbf7565993c3d7,
              mid_getSize_20fbf7565993c3d7,
              mid_incRef_3720c61b0679eb3e,
              mid_openIfChanged_cfaa388445998035,
              mid_tryIncRef_947277eca0748c4e,
              mid_doClose_3720c61b0679eb3e,
              mid_doOpenIfChanged_0572dc1c93078a81,
              mid_ensureOpen_3720c61b0679eb3e,
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
