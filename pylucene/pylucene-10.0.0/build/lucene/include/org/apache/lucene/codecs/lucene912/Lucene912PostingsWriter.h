#ifndef org_apache_lucene_codecs_lucene912_Lucene912PostingsWriter_H
#define org_apache_lucene_codecs_lucene912_Lucene912PostingsWriter_H

#include "org/apache/lucene/codecs/PushPostingsWriterBase.h"

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
        class SegmentWriteState;
        class FieldInfo;
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
      namespace util {
        class BytesRef;
      }
    }
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
              mid_init$_5f1496262e5a9f7c,
              mid_addPosition_9a21dbec535f79a8,
              mid_close_e7bdbe105ce1bafb,
              mid_encodeTerm_38368490f1fcfc98,
              mid_finishDoc_e7bdbe105ce1bafb,
              mid_finishTerm_1164e37ee4555dea,
              mid_init_893a09f6528ec65d,
              mid_newTermState_82e5aa6e6cbe7e3e,
              mid_setField_4d7193cb5c8dc4a1,
              mid_startDoc_645c25455f5b9b1c,
              mid_startTerm_19acd403ee73f663,
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
