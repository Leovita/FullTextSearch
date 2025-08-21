#ifndef org_apache_lucene_codecs_blockterms_FixedGapTermsIndexReader_H
#define org_apache_lucene_codecs_blockterms_FixedGapTermsIndexReader_H

#include "org/apache/lucene/codecs/blockterms/TermsIndexReaderBase.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace blockterms {
          class TermsIndexReaderBase$FieldIndexEnum;
        }
      }
      namespace index {
        class FieldInfo;
        class SegmentReadState;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace blockterms {

          class FixedGapTermsIndexReader : public ::org::apache::lucene::codecs::blockterms::TermsIndexReaderBase {
           public:
            enum {
              mid_init$_3a0f0d76cb59d83b,
              mid_close_3720c61b0679eb3e,
              mid_getFieldEnum_f69c33209e4e27f2,
              mid_supportsOrd_947277eca0748c4e,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FixedGapTermsIndexReader(jobject obj) : ::org::apache::lucene::codecs::blockterms::TermsIndexReaderBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FixedGapTermsIndexReader(const FixedGapTermsIndexReader& obj) : ::org::apache::lucene::codecs::blockterms::TermsIndexReaderBase(obj) {}

            FixedGapTermsIndexReader(const ::org::apache::lucene::index::SegmentReadState &);

            void close() const;
            ::org::apache::lucene::codecs::blockterms::TermsIndexReaderBase$FieldIndexEnum getFieldEnum(const ::org::apache::lucene::index::FieldInfo &) const;
            jboolean supportsOrd() const;
            ::java::lang::String toString() const;
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
        namespace blockterms {
          extern PyType_Def PY_TYPE_DEF(FixedGapTermsIndexReader);
          extern PyTypeObject *PY_TYPE(FixedGapTermsIndexReader);

          class t_FixedGapTermsIndexReader {
          public:
            PyObject_HEAD
            FixedGapTermsIndexReader object;
            static PyObject *wrap_Object(const FixedGapTermsIndexReader&);
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
