#ifndef org_apache_lucene_index_MultiTermsEnum_H
#define org_apache_lucene_index_MultiTermsEnum_H

#include "org/apache/lucene/index/BaseTermsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermsEnum$SeekStatus;
        class PostingsEnum;
        class TermsEnum;
        class ReaderSlice;
        class ImpactsEnum;
      }
      namespace util {
        class BytesRef;
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

        class MultiTermsEnum : public ::org::apache::lucene::index::BaseTermsEnum {
         public:
          enum {
            mid_init$_e37562b88d8fbd7b,
            mid_docFreq_bd89ce15dad49192,
            mid_getMatchCount_bd89ce15dad49192,
            mid_impacts_690aa98c917b43c2,
            mid_next_adbedbc1fa61c358,
            mid_ord_0f176418e3e16541,
            mid_postings_1e5de27ebc464616,
            mid_seekCeil_3c5e68bf2fc0b5b1,
            mid_seekExact_08ac7a49de309824,
            mid_seekExact_1d3149fac12f2af3,
            mid_term_adbedbc1fa61c358,
            mid_toString_e7df854526d67fa3,
            mid_totalTermFreq_0f176418e3e16541,
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
