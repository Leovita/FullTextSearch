#ifndef org_apache_lucene_codecs_PushPostingsWriterBase_H
#define org_apache_lucene_codecs_PushPostingsWriterBase_H

#include "org/apache/lucene/codecs/PostingsWriterBase.h"

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
      namespace index {
        class NumericDocValues;
        class FieldInfo;
        class TermsEnum;
      }
      namespace util {
        class BytesRef;
        class FixedBitSet;
      }
      namespace codecs {
        class NormsProducer;
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

        class PushPostingsWriterBase : public ::org::apache::lucene::codecs::PostingsWriterBase {
         public:
          enum {
            mid_addPosition_9a21dbec535f79a8,
            mid_finishDoc_e7bdbe105ce1bafb,
            mid_finishTerm_1164e37ee4555dea,
            mid_newTermState_90e39a1aad9f7074,
            mid_setField_4d7193cb5c8dc4a1,
            mid_startDoc_645c25455f5b9b1c,
            mid_startTerm_19acd403ee73f663,
            mid_writeTerm_4326cc6a8fd7ad05,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PushPostingsWriterBase(jobject obj) : ::org::apache::lucene::codecs::PostingsWriterBase(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PushPostingsWriterBase(const PushPostingsWriterBase& obj) : ::org::apache::lucene::codecs::PostingsWriterBase(obj) {}

          void addPosition(jint, const ::org::apache::lucene::util::BytesRef &, jint, jint) const;
          void finishDoc() const;
          void finishTerm(const ::org::apache::lucene::codecs::BlockTermState &) const;
          ::org::apache::lucene::codecs::BlockTermState newTermState() const;
          void setField(const ::org::apache::lucene::index::FieldInfo &) const;
          void startDoc(jint, jint) const;
          void startTerm(const ::org::apache::lucene::index::NumericDocValues &) const;
          ::org::apache::lucene::codecs::BlockTermState writeTerm(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::index::TermsEnum &, const ::org::apache::lucene::util::FixedBitSet &, const ::org::apache::lucene::codecs::NormsProducer &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyType_Def PY_TYPE_DEF(PushPostingsWriterBase);
        extern PyTypeObject *PY_TYPE(PushPostingsWriterBase);

        class t_PushPostingsWriterBase {
        public:
          PyObject_HEAD
          PushPostingsWriterBase object;
          static PyObject *wrap_Object(const PushPostingsWriterBase&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
