#ifndef org_apache_lucene_index_MultiPostingsEnum_H
#define org_apache_lucene_index_MultiPostingsEnum_H

#include "org/apache/lucene/index/PostingsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MultiTermsEnum;
        class MultiPostingsEnum$EnumWithSlice;
        class MultiPostingsEnum;
      }
      namespace util {
        class BytesRef;
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

        class MultiPostingsEnum : public ::org::apache::lucene::index::PostingsEnum {
         public:
          enum {
            mid_init$_7dd1cb9fe36eb973,
            mid_advance_3c9bba330f083871,
            mid_canReuse_f670b7f040a6e970,
            mid_cost_16939d9d0a9a9721,
            mid_docID_20fbf7565993c3d7,
            mid_endOffset_20fbf7565993c3d7,
            mid_freq_20fbf7565993c3d7,
            mid_getNumSubs_20fbf7565993c3d7,
            mid_getPayload_9740fddd1c7df148,
            mid_getSubs_25cc5882f9c63ae9,
            mid_nextDoc_20fbf7565993c3d7,
            mid_nextPosition_20fbf7565993c3d7,
            mid_reset_c29c788a0983cd3c,
            mid_startOffset_20fbf7565993c3d7,
            mid_toString_09a7afff1868fc5e,
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
