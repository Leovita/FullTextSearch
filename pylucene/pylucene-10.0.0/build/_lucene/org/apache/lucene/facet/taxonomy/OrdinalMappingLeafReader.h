#ifndef org_apache_lucene_facet_taxonomy_OrdinalMappingLeafReader_H
#define org_apache_lucene_facet_taxonomy_OrdinalMappingLeafReader_H

#include "org/apache/lucene/index/FilterLeafReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SortedNumericDocValues;
        class LeafReader;
        class IndexReader$CacheHelper;
      }
      namespace facet {
        class FacetsConfig;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace taxonomy {

          class OrdinalMappingLeafReader : public ::org::apache::lucene::index::FilterLeafReader {
           public:
            enum {
              mid_init$_70f6e17e40e22749,
              mid_getCoreCacheHelper_3117e2e82cc46163,
              mid_getReaderCacheHelper_3117e2e82cc46163,
              mid_getSortedNumericDocValues_5b5cc59b31747b26,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OrdinalMappingLeafReader(jobject obj) : ::org::apache::lucene::index::FilterLeafReader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OrdinalMappingLeafReader(const OrdinalMappingLeafReader& obj) : ::org::apache::lucene::index::FilterLeafReader(obj) {}

            OrdinalMappingLeafReader(const ::org::apache::lucene::index::LeafReader &, const JArray< jint > &, const ::org::apache::lucene::facet::FacetsConfig &);

            ::org::apache::lucene::index::IndexReader$CacheHelper getCoreCacheHelper() const;
            ::org::apache::lucene::index::IndexReader$CacheHelper getReaderCacheHelper() const;
            ::org::apache::lucene::index::SortedNumericDocValues getSortedNumericDocValues(const ::java::lang::String &) const;
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
          extern PyType_Def PY_TYPE_DEF(OrdinalMappingLeafReader);
          extern PyTypeObject *PY_TYPE(OrdinalMappingLeafReader);

          class t_OrdinalMappingLeafReader {
          public:
            PyObject_HEAD
            OrdinalMappingLeafReader object;
            static PyObject *wrap_Object(const OrdinalMappingLeafReader&);
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
