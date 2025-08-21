#ifndef org_apache_lucene_codecs_uniformsplit_DeltaBaseTermStateSerializer_H
#define org_apache_lucene_codecs_uniformsplit_DeltaBaseTermStateSerializer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
      namespace index {
        class TermState;
        class FieldInfo;
      }
      namespace store {
        class DataInput;
        class DataOutput;
      }
      namespace codecs {
        class BlockTermState;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
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
              mid_init$_3720c61b0679eb3e,
              mid_getBaseDocStartFP_16939d9d0a9a9721,
              mid_getBasePayStartFP_16939d9d0a9a9721,
              mid_getBasePosStartFP_16939d9d0a9a9721,
              mid_ramBytesUsed_16939d9d0a9a9721,
              mid_ramBytesUsed_89b2407edf6c4fd8,
              mid_readTermState_dbe608aa9c50c48f,
              mid_resetBaseStartFP_3720c61b0679eb3e,
              mid_writeTermState_b9c977a1912a404c,
              mid_reset_9b728fb628220bb9,
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
