#ifndef org_apache_lucene_backward_codecs_lucene90_Lucene90PostingsWriter_H
#define org_apache_lucene_backward_codecs_lucene90_Lucene90PostingsWriter_H

#include "org/apache/lucene/codecs/PushPostingsWriterBase.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class FieldInfo;
        class NumericDocValues;
        class SegmentWriteState;
      }
      namespace store {
        class IndexOutput;
        class DataOutput;
      }
      namespace backward_codecs {
        namespace lucene90 {
          class Lucene90PostingsFormat$IntBlockTermState;
        }
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
      namespace backward_codecs {
        namespace lucene90 {

          class Lucene90PostingsWriter : public ::org::apache::lucene::codecs::PushPostingsWriterBase {
           public:
            enum {
              mid_init$_45b2848804214eb5,
              mid_addPosition_c03eaff4c27deef8,
              mid_close_3720c61b0679eb3e,
              mid_encodeTerm_43ee849e8e0e2ced,
              mid_finishDoc_3720c61b0679eb3e,
              mid_finishTerm_bb894f5bc802a30a,
              mid_init_030f9650172b0ef5,
              mid_newTermState_cfdcae65d9e52cf4,
              mid_setField_571a63af52300367,
              mid_startDoc_e13cff512ebda969,
              mid_startTerm_7bc4e3d8c59294ae,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene90PostingsWriter(jobject obj) : ::org::apache::lucene::codecs::PushPostingsWriterBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene90PostingsWriter(const Lucene90PostingsWriter& obj) : ::org::apache::lucene::codecs::PushPostingsWriterBase(obj) {}

            Lucene90PostingsWriter(const ::org::apache::lucene::index::SegmentWriteState &);

            void addPosition(jint, const ::org::apache::lucene::util::BytesRef &, jint, jint) const;
            void close() const;
            void encodeTerm(const ::org::apache::lucene::store::DataOutput &, const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::BlockTermState &, jboolean) const;
            void finishDoc() const;
            void finishTerm(const ::org::apache::lucene::codecs::BlockTermState &) const;
            void init(const ::org::apache::lucene::store::IndexOutput &, const ::org::apache::lucene::index::SegmentWriteState &) const;
            ::org::apache::lucene::backward_codecs::lucene90::Lucene90PostingsFormat$IntBlockTermState newTermState() const;
            void setField(const ::org::apache::lucene::index::FieldInfo &) const;
            void startDoc(jint, jint) const;
            void startTerm(const ::org::apache::lucene::index::NumericDocValues &) const;
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
        namespace lucene90 {
          extern PyType_Def PY_TYPE_DEF(Lucene90PostingsWriter);
          extern PyTypeObject *PY_TYPE(Lucene90PostingsWriter);

          class t_Lucene90PostingsWriter {
          public:
            PyObject_HEAD
            Lucene90PostingsWriter object;
            static PyObject *wrap_Object(const Lucene90PostingsWriter&);
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
