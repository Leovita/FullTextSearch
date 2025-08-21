#ifndef org_apache_lucene_backward_codecs_lucene90_Lucene90PostingsFormat_H
#define org_apache_lucene_backward_codecs_lucene90_Lucene90PostingsFormat_H

#include "org/apache/lucene/codecs/PostingsFormat.h"

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
        class FieldsProducer;
        class FieldsConsumer;
      }
      namespace index {
        class SegmentReadState;
        class SegmentWriteState;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene90 {

          class Lucene90PostingsFormat : public ::org::apache::lucene::codecs::PostingsFormat {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_fieldsConsumer_19c1d7ed57faee5d,
              mid_fieldsProducer_1c13fe60e408387e,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene90PostingsFormat(jobject obj) : ::org::apache::lucene::codecs::PostingsFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene90PostingsFormat(const Lucene90PostingsFormat& obj) : ::org::apache::lucene::codecs::PostingsFormat(obj) {}

            static jint BLOCK_SIZE;
            static ::java::lang::String *DOC_EXTENSION;
            static ::java::lang::String *PAY_EXTENSION;
            static ::java::lang::String *POS_EXTENSION;

            Lucene90PostingsFormat();

            ::org::apache::lucene::codecs::FieldsConsumer fieldsConsumer(const ::org::apache::lucene::index::SegmentWriteState &) const;
            ::org::apache::lucene::codecs::FieldsProducer fieldsProducer(const ::org::apache::lucene::index::SegmentReadState &) const;
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
      namespace backward_codecs {
        namespace lucene90 {
          extern PyType_Def PY_TYPE_DEF(Lucene90PostingsFormat);
          extern PyTypeObject *PY_TYPE(Lucene90PostingsFormat);

          class t_Lucene90PostingsFormat {
          public:
            PyObject_HEAD
            Lucene90PostingsFormat object;
            static PyObject *wrap_Object(const Lucene90PostingsFormat&);
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
