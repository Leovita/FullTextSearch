#ifndef org_apache_lucene_codecs_blockterms_VariableGapTermsIndexReader_H
#define org_apache_lucene_codecs_blockterms_VariableGapTermsIndexReader_H

#include "org/apache/lucene/codecs/blockterms/TermsIndexReaderBase.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentReadState;
        class FieldInfo;
      }
      namespace codecs {
        namespace blockterms {
          class TermsIndexReaderBase$FieldIndexEnum;
        }
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
        namespace blockterms {

          class VariableGapTermsIndexReader : public ::org::apache::lucene::codecs::blockterms::TermsIndexReaderBase {
           public:
            enum {
              mid_init$_7865ebfeefbeb536,
              mid_close_e7bdbe105ce1bafb,
              mid_getFieldEnum_1d6ba9fa54e64153,
              mid_supportsOrd_9aa4f33e82ea333f,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit VariableGapTermsIndexReader(jobject obj) : ::org::apache::lucene::codecs::blockterms::TermsIndexReaderBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            VariableGapTermsIndexReader(const VariableGapTermsIndexReader& obj) : ::org::apache::lucene::codecs::blockterms::TermsIndexReaderBase(obj) {}

            VariableGapTermsIndexReader(const ::org::apache::lucene::index::SegmentReadState &);

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
          extern PyType_Def PY_TYPE_DEF(VariableGapTermsIndexReader);
          extern PyTypeObject *PY_TYPE(VariableGapTermsIndexReader);

          class t_VariableGapTermsIndexReader {
          public:
            PyObject_HEAD
            VariableGapTermsIndexReader object;
            static PyObject *wrap_Object(const VariableGapTermsIndexReader&);
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
