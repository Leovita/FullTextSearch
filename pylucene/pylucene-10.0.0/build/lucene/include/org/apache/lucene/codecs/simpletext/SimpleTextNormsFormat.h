#ifndef org_apache_lucene_codecs_simpletext_SimpleTextNormsFormat_H
#define org_apache_lucene_codecs_simpletext_SimpleTextNormsFormat_H

#include "org/apache/lucene/codecs/NormsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentReadState;
        class SegmentWriteState;
      }
      namespace codecs {
        class NormsConsumer;
        class NormsProducer;
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
        namespace simpletext {

          class SimpleTextNormsFormat : public ::org::apache::lucene::codecs::NormsFormat {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_normsConsumer_b17eca5cc2c59a55,
              mid_normsProducer_00f9cd25e5b2229a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleTextNormsFormat(jobject obj) : ::org::apache::lucene::codecs::NormsFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleTextNormsFormat(const SimpleTextNormsFormat& obj) : ::org::apache::lucene::codecs::NormsFormat(obj) {}

            SimpleTextNormsFormat();

            ::org::apache::lucene::codecs::NormsConsumer normsConsumer(const ::org::apache::lucene::index::SegmentWriteState &) const;
            ::org::apache::lucene::codecs::NormsProducer normsProducer(const ::org::apache::lucene::index::SegmentReadState &) const;
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
        namespace simpletext {
          extern PyType_Def PY_TYPE_DEF(SimpleTextNormsFormat);
          extern PyTypeObject *PY_TYPE(SimpleTextNormsFormat);

          class t_SimpleTextNormsFormat {
          public:
            PyObject_HEAD
            SimpleTextNormsFormat object;
            static PyObject *wrap_Object(const SimpleTextNormsFormat&);
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
