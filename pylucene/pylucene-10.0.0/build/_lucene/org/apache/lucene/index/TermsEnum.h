#ifndef org_apache_lucene_index_TermsEnum_H
#define org_apache_lucene_index_TermsEnum_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeSource;
        class BytesRef;
        class IOBooleanSupplier;
        class BytesRefIterator;
      }
      namespace index {
        class TermsEnum$SeekStatus;
        class PostingsEnum;
        class TermState;
        class TermsEnum;
        class ImpactsEnum;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
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

        class TermsEnum : public ::java::lang::Object {
         public:
          enum {
            mid_attributes_cdef0e51a2510793,
            mid_docFreq_bd89ce15dad49192,
            mid_impacts_690aa98c917b43c2,
            mid_ord_0f176418e3e16541,
            mid_postings_5225e36771e88c75,
            mid_postings_1e5de27ebc464616,
            mid_prepareSeekExact_0a02c02826151691,
            mid_seekCeil_3c5e68bf2fc0b5b1,
            mid_seekExact_08ac7a49de309824,
            mid_seekExact_1d3149fac12f2af3,
            mid_seekExact_68ebcc8117fd12a5,
            mid_term_adbedbc1fa61c358,
            mid_termState_7f3f2ee4b8db95a4,
            mid_totalTermFreq_0f176418e3e16541,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermsEnum(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TermsEnum(const TermsEnum& obj) : ::java::lang::Object(obj) {}

          static TermsEnum *EMPTY;

          ::org::apache::lucene::util::AttributeSource attributes() const;
          jint docFreq() const;
          ::org::apache::lucene::index::ImpactsEnum impacts(jint) const;
          jlong ord() const;
          ::org::apache::lucene::index::PostingsEnum postings(const ::org::apache::lucene::index::PostingsEnum &) const;
          ::org::apache::lucene::index::PostingsEnum postings(const ::org::apache::lucene::index::PostingsEnum &, jint) const;
          ::org::apache::lucene::util::IOBooleanSupplier prepareSeekExact(const ::org::apache::lucene::util::BytesRef &) const;
          ::org::apache::lucene::index::TermsEnum$SeekStatus seekCeil(const ::org::apache::lucene::util::BytesRef &) const;
          jboolean seekExact(const ::org::apache::lucene::util::BytesRef &) const;
          void seekExact(jlong) const;
          void seekExact(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::index::TermState &) const;
          ::org::apache::lucene::util::BytesRef term() const;
          ::org::apache::lucene::index::TermState termState() const;
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
        extern PyType_Def PY_TYPE_DEF(TermsEnum);
        extern PyTypeObject *PY_TYPE(TermsEnum);

        class t_TermsEnum {
        public:
          PyObject_HEAD
          TermsEnum object;
          static PyObject *wrap_Object(const TermsEnum&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
