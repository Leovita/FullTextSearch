#ifndef org_apache_lucene_codecs_blockterms_VariableGapTermsIndexWriter_H
#define org_apache_lucene_codecs_blockterms_VariableGapTermsIndexWriter_H

#include "org/apache/lucene/codecs/blockterms/TermsIndexWriterBase.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace blockterms {
          class VariableGapTermsIndexWriter$IndexTermSelector;
          class TermsIndexWriterBase$FieldWriter;
        }
      }
      namespace index {
        class FieldInfo;
        class SegmentWriteState;
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

          class VariableGapTermsIndexWriter : public ::org::apache::lucene::codecs::blockterms::TermsIndexWriterBase {
           public:
            enum {
              mid_init$_e7d5ca149a2038e7,
              mid_addField_efa906cc1416a50c,
              mid_close_3720c61b0679eb3e,
              mid_indexedTermPrefixLength_c605ddf1ef691f34,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit VariableGapTermsIndexWriter(jobject obj) : ::org::apache::lucene::codecs::blockterms::TermsIndexWriterBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            VariableGapTermsIndexWriter(const VariableGapTermsIndexWriter& obj) : ::org::apache::lucene::codecs::blockterms::TermsIndexWriterBase(obj) {}

            VariableGapTermsIndexWriter(const ::org::apache::lucene::index::SegmentWriteState &, const ::org::apache::lucene::codecs::blockterms::VariableGapTermsIndexWriter$IndexTermSelector &);

            ::org::apache::lucene::codecs::blockterms::TermsIndexWriterBase$FieldWriter addField(const ::org::apache::lucene::index::FieldInfo &, jlong) const;
            void close() const;
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
          extern PyType_Def PY_TYPE_DEF(VariableGapTermsIndexWriter);
          extern PyTypeObject *PY_TYPE(VariableGapTermsIndexWriter);

          class t_VariableGapTermsIndexWriter {
          public:
            PyObject_HEAD
            VariableGapTermsIndexWriter object;
            static PyObject *wrap_Object(const VariableGapTermsIndexWriter&);
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
