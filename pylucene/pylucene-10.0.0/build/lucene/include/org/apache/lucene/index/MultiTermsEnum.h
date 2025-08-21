#ifndef org_apache_lucene_index_MultiTermsEnum_H
#define org_apache_lucene_index_MultiTermsEnum_H

#include "org/apache/lucene/index/BaseTermsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermsEnum;
        class TermsEnum$SeekStatus;
        class ImpactsEnum;
        class ReaderSlice;
        class PostingsEnum;
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

        class MultiTermsEnum : public ::org::apache::lucene::index::BaseTermsEnum {
         public:
          enum {
            mid_init$_4ce65aa62b690a77,
            mid_docFreq_20fbf7565993c3d7,
            mid_getMatchCount_20fbf7565993c3d7,
            mid_impacts_060f17b3b6523f29,
            mid_next_9740fddd1c7df148,
            mid_ord_16939d9d0a9a9721,
            mid_postings_99afe58b6211434f,
            mid_seekCeil_69261b500ab5d3e8,
            mid_seekExact_f460ee421aade2fd,
            mid_seekExact_8b3d46852b435a94,
            mid_term_9740fddd1c7df148,
            mid_toString_09a7afff1868fc5e,
            mid_totalTermFreq_16939d9d0a9a9721,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiTermsEnum(jobject obj) : ::org::apache::lucene::index::BaseTermsEnum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiTermsEnum(const MultiTermsEnum& obj) : ::org::apache::lucene::index::BaseTermsEnum(obj) {}

          MultiTermsEnum(const JArray< ::org::apache::lucene::index::ReaderSlice > &);

          jint docFreq() const;
          jint getMatchCount() const;
          ::org::apache::lucene::index::ImpactsEnum impacts(jint) const;
          ::org::apache::lucene::util::BytesRef next() const;
          jlong ord() const;
          ::org::apache::lucene::index::PostingsEnum postings(const ::org::apache::lucene::index::PostingsEnum &, jint) const;
          ::org::apache::lucene::index::TermsEnum$SeekStatus seekCeil(const ::org::apache::lucene::util::BytesRef &) const;
          jboolean seekExact(const ::org::apache::lucene::util::BytesRef &) const;
          void seekExact(jlong) const;
          ::org::apache::lucene::util::BytesRef term() const;
          ::java::lang::String toString() const;
          jlong totalTermFreq() const;
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
        extern PyType_Def PY_TYPE_DEF(MultiTermsEnum);
        extern PyTypeObject *PY_TYPE(MultiTermsEnum);

        class t_MultiTermsEnum {
        public:
          PyObject_HEAD
          MultiTermsEnum object;
          static PyObject *wrap_Object(const MultiTermsEnum&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
