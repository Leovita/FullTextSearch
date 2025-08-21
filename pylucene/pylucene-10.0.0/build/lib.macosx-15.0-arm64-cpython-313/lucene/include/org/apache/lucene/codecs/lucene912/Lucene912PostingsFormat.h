#ifndef org_apache_lucene_codecs_lucene912_Lucene912PostingsFormat_H
#define org_apache_lucene_codecs_lucene912_Lucene912PostingsFormat_H

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
      namespace codecs {
        namespace lucene912 {

          class Lucene912PostingsFormat : public ::org::apache::lucene::codecs::PostingsFormat {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_e13cff512ebda969,
              mid_fieldsConsumer_19c1d7ed57faee5d,
              mid_fieldsProducer_1c13fe60e408387e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene912PostingsFormat(jobject obj) : ::org::apache::lucene::codecs::PostingsFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene912PostingsFormat(const Lucene912PostingsFormat& obj) : ::org::apache::lucene::codecs::PostingsFormat(obj) {}

            static jint BLOCK_MASK;
            static jint BLOCK_SIZE;
            static ::java::lang::String *DOC_EXTENSION;
            static jint LEVEL1_FACTOR;
            static jint LEVEL1_MASK;
            static jint LEVEL1_NUM_DOCS;
            static ::java::lang::String *META_EXTENSION;
            static ::java::lang::String *PAY_EXTENSION;
            static ::java::lang::String *POS_EXTENSION;

            Lucene912PostingsFormat();
            Lucene912PostingsFormat(jint, jint);

            ::org::apache::lucene::codecs::FieldsConsumer fieldsConsumer(const ::org::apache::lucene::index::SegmentWriteState &) const;
            ::org::apache::lucene::codecs::FieldsProducer fieldsProducer(const ::org::apache::lucene::index::SegmentReadState &) const;
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
        namespace lucene912 {
          extern PyType_Def PY_TYPE_DEF(Lucene912PostingsFormat);
          extern PyTypeObject *PY_TYPE(Lucene912PostingsFormat);

          class t_Lucene912PostingsFormat {
          public:
            PyObject_HEAD
            Lucene912PostingsFormat object;
            static PyObject *wrap_Object(const Lucene912PostingsFormat&);
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
