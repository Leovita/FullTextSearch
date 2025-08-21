#ifndef org_apache_lucene_index_BaseCompositeReader_H
#define org_apache_lucene_index_BaseCompositeReader_H

#include "org/apache/lucene/index/CompositeReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
        class TermVectors;
        class StoredFields;
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
      namespace index {

        class BaseCompositeReader : public ::org::apache::lucene::index::CompositeReader {
         public:
          enum {
            mid_docFreq_a72eb531d55acb0c,
            mid_getDocCount_3f230d713d7fd2b0,
            mid_getSumDocFreq_e942a6f864c95ca0,
            mid_getSumTotalTermFreq_e942a6f864c95ca0,
            mid_maxDoc_20fbf7565993c3d7,
            mid_numDocs_20fbf7565993c3d7,
            mid_storedFields_71d351a09c9e3356,
            mid_termVectors_dfcb317601b52c60,
            mid_totalTermFreq_e7e426c2707b0b8a,
            mid_readerBase_3c9bba330f083871,
            mid_getSequentialSubReaders_36830460e10839eb,
            mid_readerIndex_3c9bba330f083871,
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
