#ifndef org_apache_lucene_codecs_simpletext_SimpleTextNormsFormat$SimpleTextNormsProducer_H
#define org_apache_lucene_codecs_simpletext_SimpleTextNormsFormat$SimpleTextNormsProducer_H

#include "org/apache/lucene/codecs/NormsProducer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentReadState;
        class NumericDocValues;
        class FieldInfo;
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
        namespace simpletext {

          class SimpleTextNormsFormat$SimpleTextNormsProducer : public ::org::apache::lucene::codecs::NormsProducer {
           public:
            enum {
              mid_init$_7865ebfeefbeb536,
              mid_checkIntegrity_e7bdbe105ce1bafb,
              mid_close_e7bdbe105ce1bafb,
              mid_getNorms_cbb872df2173ef24,
              mid_toString_e7df854526d67fa3,
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
