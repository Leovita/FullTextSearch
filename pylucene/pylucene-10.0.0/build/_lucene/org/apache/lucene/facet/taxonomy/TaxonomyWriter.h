#ifndef org_apache_lucene_facet_taxonomy_TaxonomyWriter_H
#define org_apache_lucene_facet_taxonomy_TaxonomyWriter_H

#include "java/io/Closeable.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class Iterable;
    class String;
  }
  namespace util {
    class Map$Entry;
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
      namespace index {
        class TwoPhaseCommit;
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

          class TaxonomyWriter : public ::java::io::Closeable {
           public:
            enum {
              mid_addCategory_b886af148d2e9c5a,
              mid_getLiveCommitData_11d5156a64e3246d,
              mid_getParent_3c9bba330f083871,
              mid_getSize_20fbf7565993c3d7,
              mid_setLiveCommitData_eb4b05d4345caaf0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TaxonomyWriter(jobject obj) : ::java::io::Closeable(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TaxonomyWriter(const TaxonomyWriter& obj) : ::java::io::Closeable(obj) {}

            jint addCategory(const ::org::apache::lucene::facet::taxonomy::FacetLabel &) const;
            ::java::lang::Iterable getLiveCommitData() const;
            jint getParent(jint) const;
            jint getSize() const;
            void setLiveCommitData(const ::java::lang::Iterable &) const;
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
          extern PyType_Def PY_TYPE_DEF(TaxonomyWriter);
          extern PyTypeObject *PY_TYPE(TaxonomyWriter);

          class t_TaxonomyWriter {
          public:
            PyObject_HEAD
            TaxonomyWriter object;
            static PyObject *wrap_Object(const TaxonomyWriter&);
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
