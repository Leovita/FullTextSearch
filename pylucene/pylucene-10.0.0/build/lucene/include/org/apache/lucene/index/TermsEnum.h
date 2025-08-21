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
        class TermsEnum;
        class TermsEnum$SeekStatus;
        class TermState;
        class ImpactsEnum;
        class PostingsEnum;
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
            mid_attributes_ee6fc324885c7c07,
            mid_docFreq_20fbf7565993c3d7,
            mid_impacts_060f17b3b6523f29,
            mid_ord_16939d9d0a9a9721,
            mid_postings_783db2f5660a5a75,
            mid_postings_99afe58b6211434f,
            mid_prepareSeekExact_a6006c0d7e0ec315,
            mid_seekCeil_69261b500ab5d3e8,
            mid_seekExact_f460ee421aade2fd,
            mid_seekExact_8b3d46852b435a94,
            mid_seekExact_5c001dd449c905b9,
            mid_term_9740fddd1c7df148,
            mid_termState_0f33111124ab1b09,
            mid_totalTermFreq_16939d9d0a9a9721,
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
