#ifndef org_apache_lucene_codecs_KnnVectorsWriter_H
#define org_apache_lucene_codecs_KnnVectorsWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergeState;
        class Sorter$DocMap;
        class DocsWithFieldSet;
        class FieldInfo;
      }
      namespace util {
        class Accountable;
      }
      namespace codecs {
        class KnnFieldVectorsWriter;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class KnnVectorsWriter : public ::java::lang::Object {
         public:
          enum {
            mid_addField_745312302c5f11e8,
            mid_finish_e7bdbe105ce1bafb,
            mid_flush_fc9730fbac8271d5,
            mid_mapOldOrdToNewOrd_f8b2d9d190ea8fef,
            mid_merge_b7f5b82c43646887,
            mid_mergeOneField_6efd9d341cba2a34,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KnnVectorsWriter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KnnVectorsWriter(const KnnVectorsWriter& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::codecs::KnnFieldVectorsWriter addField(const ::org::apache::lucene::index::FieldInfo &) const;
          void finish() const;
          void flush(jint, const ::org::apache::lucene::index::Sorter$DocMap &) const;
          static void mapOldOrdToNewOrd(const ::org::apache::lucene::index::DocsWithFieldSet &, const ::org::apache::lucene::index::Sorter$DocMap &, const JArray< jint > &, const JArray< jint > &, const ::org::apache::lucene::index::DocsWithFieldSet &);
          void merge(const ::org::apache::lucene::index::MergeState &) const;
          void mergeOneField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::index::MergeState &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyType_Def PY_TYPE_DEF(KnnVectorsWriter);
        extern PyTypeObject *PY_TYPE(KnnVectorsWriter);

        class t_KnnVectorsWriter {
        public:
          PyObject_HEAD
          KnnVectorsWriter object;
          static PyObject *wrap_Object(const KnnVectorsWriter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
