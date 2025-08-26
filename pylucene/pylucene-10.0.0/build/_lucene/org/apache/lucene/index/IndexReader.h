#ifndef org_apache_lucene_index_IndexReader_H
#define org_apache_lucene_index_IndexReader_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermVectors;
        class IndexReader;
        class StoredFields;
        class IndexReaderContext;
        class Term;
        class IndexReader$CacheHelper;
        class LeafReaderContext;
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
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class IndexReader : public ::java::lang::Object {
         public:
          enum {
            mid_close_e7bdbe105ce1bafb,
            mid_decRef_e7bdbe105ce1bafb,
            mid_docFreq_c8503de727553d83,
            mid_equals_00d17418847797d4,
            mid_getContext_bc90d2aea66a0888,
            mid_getDocCount_fa2a6f298bd618ab,
            mid_getReaderCacheHelper_bcf8e7a3b3f2dbe2,
            mid_getRefCount_bd89ce15dad49192,
            mid_getSumDocFreq_490f1686ea1cfda6,
            mid_getSumTotalTermFreq_490f1686ea1cfda6,
            mid_hasDeletions_9aa4f33e82ea333f,
            mid_hashCode_bd89ce15dad49192,
            mid_incRef_e7bdbe105ce1bafb,
            mid_leaves_1387e1e2702ac173,
            mid_maxDoc_bd89ce15dad49192,
            mid_numDeletedDocs_bd89ce15dad49192,
            mid_numDocs_bd89ce15dad49192,
            mid_registerParentReader_d988f6cfce8380fb,
            mid_storedFields_1a4fab20a75bd3d4,
            mid_termVectors_6473260da883e913,
            mid_totalTermFreq_3566c61061b446e6,
            mid_tryIncRef_9aa4f33e82ea333f,
            mid_doClose_e7bdbe105ce1bafb,
            mid_notifyReaderClosedListeners_e7bdbe105ce1bafb,
            mid_ensureOpen_e7bdbe105ce1bafb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexReader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexReader(const IndexReader& obj) : ::java::lang::Object(obj) {}

          void close() const;
          void decRef() const;
          jint docFreq(const ::org::apache::lucene::index::Term &) const;
          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::index::IndexReaderContext getContext() const;
          jint getDocCount(const ::java::lang::String &) const;
          ::org::apache::lucene::index::IndexReader$CacheHelper getReaderCacheHelper() const;
          jint getRefCount() const;
          jlong getSumDocFreq(const ::java::lang::String &) const;
          jlong getSumTotalTermFreq(const ::java::lang::String &) const;
          jboolean hasDeletions() const;
          jint hashCode() const;
          void incRef() const;
          ::java::util::List leaves() const;
          jint maxDoc() const;
          jint numDeletedDocs() const;
          jint numDocs() const;
          void registerParentReader(const IndexReader &) const;
          ::org::apache::lucene::index::StoredFields storedFields() const;
          ::org::apache::lucene::index::TermVectors termVectors() const;
          jlong totalTermFreq(const ::org::apache::lucene::index::Term &) const;
          jboolean tryIncRef() const;
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
        extern PyType_Def PY_TYPE_DEF(IndexReader);
        extern PyTypeObject *PY_TYPE(IndexReader);

        class t_IndexReader {
        public:
          PyObject_HEAD
          IndexReader object;
          static PyObject *wrap_Object(const IndexReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
