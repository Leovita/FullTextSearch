#ifndef org_apache_lucene_codecs_memory_FSTTermsWriter_H
#define org_apache_lucene_codecs_memory_FSTTermsWriter_H

#include "org/apache/lucene/codecs/FieldsConsumer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class PostingsWriterBase;
        class NormsProducer;
      }
      namespace index {
        class SegmentWriteState;
        class Fields;
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
      namespace codecs {
        namespace memory {

          class FSTTermsWriter : public ::org::apache::lucene::codecs::FieldsConsumer {
           public:
            enum {
              mid_init$_14b3e51c248d0fd2,
              mid_close_e7bdbe105ce1bafb,
              mid_write_77e46eb449cb8d9e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FSTTermsWriter(jobject obj) : ::org::apache::lucene::codecs::FieldsConsumer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FSTTermsWriter(const FSTTermsWriter& obj) : ::org::apache::lucene::codecs::FieldsConsumer(obj) {}

            static jint TERMS_VERSION_CURRENT;
            static jint TERMS_VERSION_START;

            FSTTermsWriter(const ::org::apache::lucene::index::SegmentWriteState &, const ::org::apache::lucene::codecs::PostingsWriterBase &);

            void close() const;
            void write(const ::org::apache::lucene::index::Fields &, const ::org::apache::lucene::codecs::NormsProducer &) const;
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
        namespace memory {
          extern PyType_Def PY_TYPE_DEF(FSTTermsWriter);
          extern PyTypeObject *PY_TYPE(FSTTermsWriter);

          class t_FSTTermsWriter {
          public:
            PyObject_HEAD
            FSTTermsWriter object;
            static PyObject *wrap_Object(const FSTTermsWriter&);
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
