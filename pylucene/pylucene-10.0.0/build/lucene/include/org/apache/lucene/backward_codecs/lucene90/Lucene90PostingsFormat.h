#ifndef org_apache_lucene_backward_codecs_lucene90_Lucene90PostingsFormat_H
#define org_apache_lucene_backward_codecs_lucene90_Lucene90PostingsFormat_H

#include "org/apache/lucene/codecs/PostingsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentReadState;
        class SegmentWriteState;
      }
      namespace codecs {
        class FieldsProducer;
        class FieldsConsumer;
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
      namespace backward_codecs {
        namespace lucene90 {

          class Lucene90PostingsFormat : public ::org::apache::lucene::codecs::PostingsFormat {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_fieldsConsumer_53e79f306f41e536,
              mid_fieldsProducer_5a3bb464060de23c,
              mid_toString_e7df854526d67fa3,
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
