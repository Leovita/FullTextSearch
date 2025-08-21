#ifndef org_apache_lucene_index_IndexReader_H
#define org_apache_lucene_index_IndexReader_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReaderContext;
        class Term;
        class TermVectors;
        class IndexReader;
        class StoredFields;
        class IndexReader$CacheHelper;
        class LeafReaderContext;
      }
    }
  }
}
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
            mid_close_3720c61b0679eb3e,
            mid_decRef_3720c61b0679eb3e,
            mid_docFreq_a72eb531d55acb0c,
            mid_equals_570b5248a6da3ef6,
            mid_getContext_e36732b57bae0675,
            mid_getDocCount_3f230d713d7fd2b0,
            mid_getReaderCacheHelper_3117e2e82cc46163,
            mid_getRefCount_20fbf7565993c3d7,
            mid_getSumDocFreq_e942a6f864c95ca0,
            mid_getSumTotalTermFreq_e942a6f864c95ca0,
            mid_hasDeletions_947277eca0748c4e,
            mid_hashCode_20fbf7565993c3d7,
            mid_incRef_3720c61b0679eb3e,
            mid_leaves_36830460e10839eb,
            mid_maxDoc_20fbf7565993c3d7,
            mid_numDeletedDocs_20fbf7565993c3d7,
            mid_numDocs_20fbf7565993c3d7,
            mid_registerParentReader_1980becffa418484,
            mid_storedFields_71d351a09c9e3356,
            mid_termVectors_dfcb317601b52c60,
            mid_totalTermFreq_e7e426c2707b0b8a,
            mid_tryIncRef_947277eca0748c4e,
            mid_doClose_3720c61b0679eb3e,
            mid_notifyReaderClosedListeners_3720c61b0679eb3e,
            mid_ensureOpen_3720c61b0679eb3e,
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
