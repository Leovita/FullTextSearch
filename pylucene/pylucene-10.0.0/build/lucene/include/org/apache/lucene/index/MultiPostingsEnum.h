#ifndef org_apache_lucene_index_MultiPostingsEnum_H
#define org_apache_lucene_index_MultiPostingsEnum_H

#include "org/apache/lucene/index/PostingsEnum.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MultiTermsEnum;
        class MultiPostingsEnum;
        class MultiPostingsEnum$EnumWithSlice;
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class MultiPostingsEnum : public ::org::apache::lucene::index::PostingsEnum {
         public:
          enum {
            mid_init$_b52bad5e89fb0eae,
            mid_advance_a3904e10f5bb9437,
            mid_canReuse_9530f6d12a231acd,
            mid_cost_0f176418e3e16541,
            mid_docID_bd89ce15dad49192,
            mid_endOffset_bd89ce15dad49192,
            mid_freq_bd89ce15dad49192,
            mid_getNumSubs_bd89ce15dad49192,
            mid_getPayload_adbedbc1fa61c358,
            mid_getSubs_501076265e50364b,
            mid_nextDoc_bd89ce15dad49192,
            mid_nextPosition_bd89ce15dad49192,
            mid_reset_1900567f4bf66ecc,
            mid_startOffset_bd89ce15dad49192,
            mid_toString_e7df854526d67fa3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiPostingsEnum(jobject obj) : ::org::apache::lucene::index::PostingsEnum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiPostingsEnum(const MultiPostingsEnum& obj) : ::org::apache::lucene::index::PostingsEnum(obj) {}

          MultiPostingsEnum(const ::org::apache::lucene::index::MultiTermsEnum &, jint);

          jint advance(jint) const;
          jboolean canReuse(const ::org::apache::lucene::index::MultiTermsEnum &) const;
          jlong cost() const;
          jint docID() const;
          jint endOffset() const;
          jint freq() const;
          jint getNumSubs() const;
          ::org::apache::lucene::util::BytesRef getPayload() const;
          JArray< ::org::apache::lucene::index::MultiPostingsEnum$EnumWithSlice > getSubs() const;
          jint nextDoc() const;
          jint nextPosition() const;
          MultiPostingsEnum reset(const JArray< ::org::apache::lucene::index::MultiPostingsEnum$EnumWithSlice > &, jint) const;
          jint startOffset() const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(MultiPostingsEnum);
        extern PyTypeObject *PY_TYPE(MultiPostingsEnum);

        class t_MultiPostingsEnum {
        public:
          PyObject_HEAD
          MultiPostingsEnum object;
          static PyObject *wrap_Object(const MultiPostingsEnum&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
