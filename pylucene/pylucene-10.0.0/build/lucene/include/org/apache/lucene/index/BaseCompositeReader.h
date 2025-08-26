#ifndef org_apache_lucene_index_BaseCompositeReader_H
#define org_apache_lucene_index_BaseCompositeReader_H

#include "org/apache/lucene/index/CompositeReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermVectors;
        class StoredFields;
        class Term;
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class BaseCompositeReader : public ::org::apache::lucene::index::CompositeReader {
         public:
          enum {
            mid_docFreq_c8503de727553d83,
            mid_getDocCount_fa2a6f298bd618ab,
            mid_getSumDocFreq_490f1686ea1cfda6,
            mid_getSumTotalTermFreq_490f1686ea1cfda6,
            mid_maxDoc_bd89ce15dad49192,
            mid_numDocs_bd89ce15dad49192,
            mid_storedFields_1a4fab20a75bd3d4,
            mid_termVectors_6473260da883e913,
            mid_totalTermFreq_3566c61061b446e6,
            mid_readerIndex_a3904e10f5bb9437,
            mid_readerBase_a3904e10f5bb9437,
            mid_getSequentialSubReaders_1387e1e2702ac173,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BaseCompositeReader(jobject obj) : ::org::apache::lucene::index::CompositeReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BaseCompositeReader(const BaseCompositeReader& obj) : ::org::apache::lucene::index::CompositeReader(obj) {}

          jint docFreq(const ::org::apache::lucene::index::Term &) const;
          jint getDocCount(const ::java::lang::String &) const;
          jlong getSumDocFreq(const ::java::lang::String &) const;
          jlong getSumTotalTermFreq(const ::java::lang::String &) const;
          jint maxDoc() const;
          jint numDocs() const;
          ::org::apache::lucene::index::StoredFields storedFields() const;
          ::org::apache::lucene::index::TermVectors termVectors() const;
          jlong totalTermFreq(const ::org::apache::lucene::index::Term &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(BaseCompositeReader);
        extern PyTypeObject *PY_TYPE(BaseCompositeReader);

        class t_BaseCompositeReader {
        public:
          PyObject_HEAD
          BaseCompositeReader object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_BaseCompositeReader *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const BaseCompositeReader&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const BaseCompositeReader&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
