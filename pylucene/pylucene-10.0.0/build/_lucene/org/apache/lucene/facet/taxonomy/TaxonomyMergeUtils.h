#ifndef org_apache_lucene_facet_taxonomy_TaxonomyMergeUtils_H
#define org_apache_lucene_facet_taxonomy_TaxonomyMergeUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
      }
      namespace index {
        class IndexWriter;
      }
      namespace facet {
        namespace taxonomy {
          namespace directory {
            class DirectoryTaxonomyWriter;
            class DirectoryTaxonomyWriter$OrdinalMap;
          }
        }
        class FacetsConfig;
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

          class TaxonomyMergeUtils : public ::java::lang::Object {
           public:
            enum {
              mid_merge_68c2e343fe865272,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TaxonomyMergeUtils(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TaxonomyMergeUtils(const TaxonomyMergeUtils& obj) : ::java::lang::Object(obj) {}

            static void merge(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::facet::taxonomy::directory::DirectoryTaxonomyWriter$OrdinalMap &, const ::org::apache::lucene::index::IndexWriter &, const ::org::apache::lucene::facet::taxonomy::directory::DirectoryTaxonomyWriter &, const ::org::apache::lucene::facet::FacetsConfig &);
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
          extern PyType_Def PY_TYPE_DEF(TaxonomyMergeUtils);
          extern PyTypeObject *PY_TYPE(TaxonomyMergeUtils);

          class t_TaxonomyMergeUtils {
          public:
            PyObject_HEAD
            TaxonomyMergeUtils object;
            static PyObject *wrap_Object(const TaxonomyMergeUtils&);
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
