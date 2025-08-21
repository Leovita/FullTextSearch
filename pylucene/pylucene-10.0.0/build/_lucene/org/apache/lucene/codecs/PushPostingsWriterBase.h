#ifndef org_apache_lucene_codecs_PushPostingsWriterBase_H
#define org_apache_lucene_codecs_PushPostingsWriterBase_H

#include "org/apache/lucene/codecs/PostingsWriterBase.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermsEnum;
        class FieldInfo;
        class NumericDocValues;
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

        class PushPostingsWriterBase : public ::org::apache::lucene::codecs::PostingsWriterBase {
         public:
          enum {
            mid_addPosition_c03eaff4c27deef8,
            mid_finishDoc_3720c61b0679eb3e,
            mid_finishTerm_bb894f5bc802a30a,
            mid_newTermState_3bf66c86f1b277c4,
            mid_setField_571a63af52300367,
            mid_startDoc_e13cff512ebda969,
            mid_startTerm_7bc4e3d8c59294ae,
            mid_writeTerm_d77bd46abaf6d43f,
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
