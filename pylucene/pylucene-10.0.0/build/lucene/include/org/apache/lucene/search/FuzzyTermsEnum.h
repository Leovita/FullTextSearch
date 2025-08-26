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
        class TermsEnum$SeekStatus;
        class Terms;
        class PostingsEnum;
        class Term;
        class TermState;
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
      namespace search {

        class FuzzyTermsEnum : public ::org::apache::lucene::index::BaseTermsEnum {
         public:
          enum {
            mid_init$_f4e0b05ac1ee467c,
            mid_attributes_cdef0e51a2510793,
            mid_docFreq_bd89ce15dad49192,
            mid_getBoost_8b62236f0e4d0dbc,
            mid_impacts_690aa98c917b43c2,
            mid_next_adbedbc1fa61c358,
            mid_ord_0f176418e3e16541,
            mid_postings_1e5de27ebc464616,
            mid_prepareSeekExact_0a02c02826151691,
            mid_seekCeil_3c5e68bf2fc0b5b1,
            mid_seekExact_08ac7a49de309824,
            mid_seekExact_1d3149fac12f2af3,
            mid_seekExact_68ebcc8117fd12a5,
            mid_setMaxNonCompetitiveBoost_675f4cb9a2529ee0,
            mid_term_adbedbc1fa61c358,
            mid_termState_7f3f2ee4b8db95a4,
            mid_totalTermFreq_0f176418e3e16541,
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
