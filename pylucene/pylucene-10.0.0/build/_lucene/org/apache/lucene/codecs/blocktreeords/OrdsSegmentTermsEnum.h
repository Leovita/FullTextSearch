#ifndef org_apache_lucene_codecs_blocktreeords_OrdsSegmentTermsEnum_H
#define org_apache_lucene_codecs_blocktreeords_OrdsSegmentTermsEnum_H

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
      namespace codecs {
        namespace blocktreeords {

          class OrdsSegmentTermsEnum : public ::org::apache::lucene::index::BaseTermsEnum {
           public:
            enum {
              mid_docFreq_20fbf7565993c3d7,
              mid_impacts_060f17b3b6523f29,
              mid_next_9740fddd1c7df148,
              mid_ord_16939d9d0a9a9721,
              mid_postings_99afe58b6211434f,
              mid_seekCeil_69261b500ab5d3e8,
              mid_seekExact_f460ee421aade2fd,
              mid_seekExact_8b3d46852b435a94,
              mid_seekExact_5c001dd449c905b9,
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
