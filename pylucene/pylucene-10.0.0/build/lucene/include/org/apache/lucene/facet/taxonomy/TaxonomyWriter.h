#ifndef org_apache_lucene_facet_taxonomy_TaxonomyWriter_H
#define org_apache_lucene_facet_taxonomy_TaxonomyWriter_H

#include "java/io/Closeable.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TwoPhaseCommit;
      }
      namespace facet {
        namespace taxonomy {
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

          class TaxonomyWriter : public ::java::io::Closeable {
           public:
            enum {
              mid_addCategory_36dd33e0173c4244,
              mid_getLiveCommitData_85e1732aaf0b83f3,
              mid_getParent_a3904e10f5bb9437,
              mid_getSize_bd89ce15dad49192,
              mid_setLiveCommitData_e14ca79f217d88d0,
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
