#ifndef org_apache_lucene_codecs_simpletext_SimpleTextNormsFormat_H
#define org_apache_lucene_codecs_simpletext_SimpleTextNormsFormat_H

#include "org/apache/lucene/codecs/NormsFormat.h"

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
        class NormsProducer;
        class NormsConsumer;
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
        namespace simpletext {

          class SimpleTextNormsFormat : public ::org::apache::lucene::codecs::NormsFormat {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_normsConsumer_f7ca28e9ed5c7ba4,
              mid_normsProducer_62a9a1ab2c081701,
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
