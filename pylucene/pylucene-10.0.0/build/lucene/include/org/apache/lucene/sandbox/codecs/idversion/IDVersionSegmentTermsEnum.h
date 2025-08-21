#ifndef org_apache_lucene_sandbox_codecs_idversion_IDVersionSegmentTermsEnum_H
#define org_apache_lucene_sandbox_codecs_idversion_IDVersionSegmentTermsEnum_H

#include "org/apache/lucene/index/BaseTermsEnum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace codecs {
          namespace idversion {

            class IDVersionSegmentTermsEnum : public ::org::apache::lucene::index::BaseTermsEnum {
             public:
              enum {
                mid_docFreq_20fbf7565993c3d7,
                mid_getVersion_16939d9d0a9a9721,
                mid_impacts_060f17b3b6523f29,
                mid_next_9740fddd1c7df148,
                mid_ord_16939d9d0a9a9721,
                mid_postings_99afe58b6211434f,
                mid_seekCeil_69261b500ab5d3e8,
                mid_seekExact_f460ee421aade2fd,
                mid_seekExact_8b3d46852b435a94,
                mid_seekExact_5c001dd449c905b9,
                mid_seekExact_b5635b16bb9884e4,
                mid_term_9740fddd1c7df148,
                mid_termState_0f33111124ab1b09,
                mid_toString_09a7afff1868fc5e,
                mid_totalTermFreq_16939d9d0a9a9721,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit IDVersionSegmentTermsEnum(jobject obj) : ::org::apache::lucene::index::BaseTermsEnum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              IDVersionSegmentTermsEnum(const IDVersionSegmentTermsEnum& obj) : ::org::apache::lucene::index::BaseTermsEnum(obj) {}

              jint docFreq() const;
              jlong getVersion() const;
              ::org::apache::lucene::index::ImpactsEnum impacts(jint) const;
              ::org::apache::lucene::util::BytesRef next() const;
              jlong ord() const;
              ::org::apache::lucene::index::PostingsEnum postings(const ::org::apache::lucene::index::PostingsEnum &, jint) const;
              ::org::apache::lucene::index::TermsEnum$SeekStatus seekCeil(const ::org::apache::lucene::util::BytesRef &) const;
              jboolean seekExact(const ::org::apache::lucene::util::BytesRef &) const;
              void seekExact(jlong) const;
              void seekExact(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::index::TermState &) const;
              jboolean seekExact(const ::org::apache::lucene::util::BytesRef &, jlong) const;
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
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace codecs {
          namespace idversion {
            extern PyType_Def PY_TYPE_DEF(IDVersionSegmentTermsEnum);
            extern PyTypeObject *PY_TYPE(IDVersionSegmentTermsEnum);

            class t_IDVersionSegmentTermsEnum {
            public:
              PyObject_HEAD
              IDVersionSegmentTermsEnum object;
              static PyObject *wrap_Object(const IDVersionSegmentTermsEnum&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
