#ifndef org_apache_lucene_codecs_blocktreeords_OrdsSegmentTermsEnum_H
#define org_apache_lucene_codecs_blocktreeords_OrdsSegmentTermsEnum_H

#include "org/apache/lucene/index/BaseTermsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermsEnum$SeekStatus;
        class PostingsEnum;
        class TermState;
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
      namespace codecs {
        namespace blocktreeords {

          class OrdsSegmentTermsEnum : public ::org::apache::lucene::index::BaseTermsEnum {
           public:
            enum {
              mid_docFreq_bd89ce15dad49192,
              mid_impacts_690aa98c917b43c2,
              mid_next_adbedbc1fa61c358,
              mid_ord_0f176418e3e16541,
              mid_postings_1e5de27ebc464616,
              mid_seekCeil_3c5e68bf2fc0b5b1,
              mid_seekExact_08ac7a49de309824,
              mid_seekExact_1d3149fac12f2af3,
              mid_seekExact_68ebcc8117fd12a5,
              mid_term_adbedbc1fa61c358,
              mid_termState_7f3f2ee4b8db95a4,
              mid_toString_e7df854526d67fa3,
              mid_totalTermFreq_0f176418e3e16541,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OrdsSegmentTermsEnum(jobject obj) : ::org::apache::lucene::index::BaseTermsEnum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OrdsSegmentTermsEnum(const OrdsSegmentTermsEnum& obj) : ::org::apache::lucene::index::BaseTermsEnum(obj) {}

            jint docFreq() const;
            ::org::apache::lucene::index::ImpactsEnum impacts(jint) const;
            ::org::apache::lucene::util::BytesRef next() const;
            jlong ord() const;
            ::org::apache::lucene::index::PostingsEnum postings(const ::org::apache::lucene::index::PostingsEnum &, jint) const;
            ::org::apache::lucene::index::TermsEnum$SeekStatus seekCeil(const ::org::apache::lucene::util::BytesRef &) const;
            jboolean seekExact(const ::org::apache::lucene::util::BytesRef &) const;
            void seekExact(jlong) const;
            void seekExact(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::index::TermState &) const;
            ::org::apache::lucene::util::BytesRef term() const;
            ::org::apache::lucene::index::TermState termState() const;
            ::java::lang::String toString() const;
            jlong totalTermFreq() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace blocktreeords {
          extern PyType_Def PY_TYPE_DEF(OrdsSegmentTermsEnum);
          extern PyTypeObject *PY_TYPE(OrdsSegmentTermsEnum);

          class t_OrdsSegmentTermsEnum {
          public:
            PyObject_HEAD
            OrdsSegmentTermsEnum object;
            static PyObject *wrap_Object(const OrdsSegmentTermsEnum&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
