#ifndef org_apache_lucene_codecs_uniformsplit_DeltaBaseTermStateSerializer_H
#define org_apache_lucene_codecs_uniformsplit_DeltaBaseTermStateSerializer_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataInput;
        class DataOutput;
      }
      namespace util {
        class Accountable;
      }
      namespace index {
        class FieldInfo;
        class TermState;
      }
      namespace codecs {
        class BlockTermState;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {

          class DeltaBaseTermStateSerializer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_getBaseDocStartFP_0f176418e3e16541,
              mid_getBasePayStartFP_0f176418e3e16541,
              mid_getBasePosStartFP_0f176418e3e16541,
              mid_ramBytesUsed_0f176418e3e16541,
              mid_ramBytesUsed_066d3aa6477974b9,
              mid_readTermState_7bf3ff41a062be7d,
              mid_resetBaseStartFP_e7bdbe105ce1bafb,
              mid_writeTermState_25adc0c8ca555fb7,
              mid_reset_b032a835b852af14,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DeltaBaseTermStateSerializer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DeltaBaseTermStateSerializer(const DeltaBaseTermStateSerializer& obj) : ::java::lang::Object(obj) {}

            DeltaBaseTermStateSerializer();

            jlong getBaseDocStartFP() const;
            jlong getBasePayStartFP() const;
            jlong getBasePosStartFP() const;
            jlong ramBytesUsed() const;
            static jlong ramBytesUsed(const ::org::apache::lucene::index::TermState &);
            ::org::apache::lucene::codecs::BlockTermState readTermState(jlong, jlong, jlong, const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::BlockTermState &) const;
            void resetBaseStartFP() const;
            void writeTermState(const ::org::apache::lucene::store::DataOutput &, const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::BlockTermState &) const;
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
        namespace uniformsplit {
          extern PyType_Def PY_TYPE_DEF(DeltaBaseTermStateSerializer);
          extern PyTypeObject *PY_TYPE(DeltaBaseTermStateSerializer);

          class t_DeltaBaseTermStateSerializer {
          public:
            PyObject_HEAD
            DeltaBaseTermStateSerializer object;
            static PyObject *wrap_Object(const DeltaBaseTermStateSerializer&);
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
