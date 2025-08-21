#ifndef org_apache_lucene_backward_codecs_lucene80_Lucene80DocValuesFormat_H
#define org_apache_lucene_backward_codecs_lucene80_Lucene80DocValuesFormat_H

#include "org/apache/lucene/codecs/DocValuesFormat.h"

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
      namespace backward_codecs {
        namespace lucene80 {
          class Lucene80DocValuesFormat$Mode;
        }
      }
      namespace index {
        class SegmentReadState;
        class SegmentWriteState;
      }
      namespace codecs {
        class DocValuesProducer;
        class DocValuesConsumer;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene80 {

          class Lucene80DocValuesFormat : public ::org::apache::lucene::codecs::DocValuesFormat {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_67d7c1da32977417,
              mid_fieldsConsumer_d0fc0c4688b977ff,
              mid_fieldsProducer_4b11e7b79ec4a459,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene80DocValuesFormat(jobject obj) : ::org::apache::lucene::codecs::DocValuesFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene80DocValuesFormat(const Lucene80DocValuesFormat& obj) : ::org::apache::lucene::codecs::DocValuesFormat(obj) {}

            static ::java::lang::String *MODE_KEY;

            Lucene80DocValuesFormat();
            Lucene80DocValuesFormat(const ::org::apache::lucene::backward_codecs::lucene80::Lucene80DocValuesFormat$Mode &);

            ::org::apache::lucene::codecs::DocValuesConsumer fieldsConsumer(const ::org::apache::lucene::index::SegmentWriteState &) const;
            ::org::apache::lucene::codecs::DocValuesProducer fieldsProducer(const ::org::apache::lucene::index::SegmentReadState &) const;
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
        namespace lucene80 {
          extern PyType_Def PY_TYPE_DEF(Lucene80DocValuesFormat);
          extern PyTypeObject *PY_TYPE(Lucene80DocValuesFormat);

          class t_Lucene80DocValuesFormat {
          public:
            PyObject_HEAD
            Lucene80DocValuesFormat object;
            static PyObject *wrap_Object(const Lucene80DocValuesFormat&);
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
