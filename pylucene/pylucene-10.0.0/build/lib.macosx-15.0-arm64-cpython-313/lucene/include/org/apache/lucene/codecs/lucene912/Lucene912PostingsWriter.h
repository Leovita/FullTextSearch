#ifndef org_apache_lucene_codecs_lucene912_Lucene912PostingsWriter_H
#define org_apache_lucene_codecs_lucene912_Lucene912PostingsWriter_H

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
      namespace codecs {
        namespace lucene912 {
          class Lucene912PostingsFormat$IntBlockTermState;
        }
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
        namespace lucene912 {

          class Lucene912PostingsWriter : public ::org::apache::lucene::codecs::PushPostingsWriterBase {
           public:
            enum {
              mid_init$_45b2848804214eb5,
              mid_addPosition_c03eaff4c27deef8,
              mid_close_3720c61b0679eb3e,
              mid_encodeTerm_43ee849e8e0e2ced,
              mid_finishDoc_3720c61b0679eb3e,
              mid_finishTerm_bb894f5bc802a30a,
              mid_init_030f9650172b0ef5,
              mid_newTermState_e90eb0368f66e41e,
              mid_setField_571a63af52300367,
              mid_startDoc_e13cff512ebda969,
              mid_startTerm_7bc4e3d8c59294ae,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene912PostingsWriter(jobject obj) : ::org::apache::lucene::codecs::PushPostingsWriterBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene912PostingsWriter(const Lucene912PostingsWriter& obj) : ::org::apache::lucene::codecs::PushPostingsWriterBase(obj) {}

            Lucene912PostingsWriter(const ::org::apache::lucene::index::SegmentWriteState &);

            void addPosition(jint, const ::org::apache::lucene::util::BytesRef &, jint, jint) const;
            void close() const;
            void encodeTerm(const ::org::apache::lucene::store::DataOutput &, const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::BlockTermState &, jboolean) const;
            void finishDoc() const;
            void finishTerm(const ::org::apache::lucene::codecs::BlockTermState &) const;
            void init(const ::org::apache::lucene::store::IndexOutput &, const ::org::apache::lucene::index::SegmentWriteState &) const;
            ::org::apache::lucene::codecs::lucene912::Lucene912PostingsFormat$IntBlockTermState newTermState() const;
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
      namespace codecs {
        namespace lucene912 {
          extern PyType_Def PY_TYPE_DEF(Lucene912PostingsWriter);
          extern PyTypeObject *PY_TYPE(Lucene912PostingsWriter);

          class t_Lucene912PostingsWriter {
          public:
            PyObject_HEAD
            Lucene912PostingsWriter object;
            static PyObject *wrap_Object(const Lucene912PostingsWriter&);
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
