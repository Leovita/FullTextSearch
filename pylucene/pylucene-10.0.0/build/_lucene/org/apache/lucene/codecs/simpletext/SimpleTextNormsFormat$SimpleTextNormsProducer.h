#ifndef org_apache_lucene_codecs_simpletext_SimpleTextNormsFormat$SimpleTextNormsProducer_H
#define org_apache_lucene_codecs_simpletext_SimpleTextNormsFormat$SimpleTextNormsProducer_H

#include "org/apache/lucene/codecs/NormsProducer.h"

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
      namespace index {
        class FieldInfo;
        class NumericDocValues;
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
        namespace simpletext {

          class SimpleTextNormsFormat$SimpleTextNormsProducer : public ::org::apache::lucene::codecs::NormsProducer {
           public:
            enum {
              mid_init$_3a0f0d76cb59d83b,
              mid_checkIntegrity_3720c61b0679eb3e,
              mid_close_3720c61b0679eb3e,
              mid_getNorms_e5ef0d0afbac0df8,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleTextNormsFormat$SimpleTextNormsProducer(jobject obj) : ::org::apache::lucene::codecs::NormsProducer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleTextNormsFormat$SimpleTextNormsProducer(const SimpleTextNormsFormat$SimpleTextNormsProducer& obj) : ::org::apache::lucene::codecs::NormsProducer(obj) {}

            SimpleTextNormsFormat$SimpleTextNormsProducer(const ::org::apache::lucene::index::SegmentReadState &);

            void checkIntegrity() const;
            void close() const;
            ::org::apache::lucene::index::NumericDocValues getNorms(const ::org::apache::lucene::index::FieldInfo &) const;
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
        namespace simpletext {
          extern PyType_Def PY_TYPE_DEF(SimpleTextNormsFormat$SimpleTextNormsProducer);
          extern PyTypeObject *PY_TYPE(SimpleTextNormsFormat$SimpleTextNormsProducer);

          class t_SimpleTextNormsFormat$SimpleTextNormsProducer {
          public:
            PyObject_HEAD
            SimpleTextNormsFormat$SimpleTextNormsProducer object;
            static PyObject *wrap_Object(const SimpleTextNormsFormat$SimpleTextNormsProducer&);
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
