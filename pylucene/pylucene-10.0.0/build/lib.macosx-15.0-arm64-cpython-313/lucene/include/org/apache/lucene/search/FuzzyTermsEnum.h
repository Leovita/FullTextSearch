#ifndef org_apache_lucene_search_FuzzyTermsEnum_H
#define org_apache_lucene_search_FuzzyTermsEnum_H

#include "org/apache/lucene/index/BaseTermsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeSource;
        class BytesRef;
        class IOBooleanSupplier;
      }
      namespace index {
        class Term;
        class TermsEnum$SeekStatus;
        class Terms;
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
      namespace search {

        class FuzzyTermsEnum : public ::org::apache::lucene::index::BaseTermsEnum {
         public:
          enum {
            mid_init$_1ca3d8f839d69a37,
            mid_attributes_ee6fc324885c7c07,
            mid_docFreq_20fbf7565993c3d7,
            mid_getBoost_9b6c3480dac00edf,
            mid_impacts_060f17b3b6523f29,
            mid_next_9740fddd1c7df148,
            mid_ord_16939d9d0a9a9721,
            mid_postings_99afe58b6211434f,
            mid_prepareSeekExact_a6006c0d7e0ec315,
            mid_seekCeil_69261b500ab5d3e8,
            mid_seekExact_f460ee421aade2fd,
            mid_seekExact_8b3d46852b435a94,
            mid_seekExact_5c001dd449c905b9,
            mid_setMaxNonCompetitiveBoost_c771a95b0227fb6a,
            mid_term_9740fddd1c7df148,
            mid_termState_0f33111124ab1b09,
            mid_totalTermFreq_16939d9d0a9a9721,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FuzzyTermsEnum(jobject obj) : ::org::apache::lucene::index::BaseTermsEnum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FuzzyTermsEnum(const FuzzyTermsEnum& obj) : ::org::apache::lucene::index::BaseTermsEnum(obj) {}

          FuzzyTermsEnum(const ::org::apache::lucene::index::Terms &, const ::org::apache::lucene::index::Term &, jint, jint, jboolean);

          ::org::apache::lucene::util::AttributeSource attributes() const;
          jint docFreq() const;
          jfloat getBoost() const;
          ::org::apache::lucene::index::ImpactsEnum impacts(jint) const;
          ::org::apache::lucene::util::BytesRef next() const;
          jlong ord() const;
          ::org::apache::lucene::index::PostingsEnum postings(const ::org::apache::lucene::index::PostingsEnum &, jint) const;
          ::org::apache::lucene::util::IOBooleanSupplier prepareSeekExact(const ::org::apache::lucene::util::BytesRef &) const;
          ::org::apache::lucene::index::TermsEnum$SeekStatus seekCeil(const ::org::apache::lucene::util::BytesRef &) const;
          jboolean seekExact(const ::org::apache::lucene::util::BytesRef &) const;
          void seekExact(jlong) const;
          void seekExact(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::index::TermState &) const;
          void setMaxNonCompetitiveBoost(jfloat) const;
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
      namespace search {
        extern PyType_Def PY_TYPE_DEF(FuzzyTermsEnum);
        extern PyTypeObject *PY_TYPE(FuzzyTermsEnum);

        class t_FuzzyTermsEnum {
        public:
          PyObject_HEAD
          FuzzyTermsEnum object;
          static PyObject *wrap_Object(const FuzzyTermsEnum&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
