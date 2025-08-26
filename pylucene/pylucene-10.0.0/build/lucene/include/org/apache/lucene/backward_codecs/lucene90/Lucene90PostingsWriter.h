#ifndef org_apache_lucene_backward_codecs_lucene90_Lucene90PostingsWriter_H
#define org_apache_lucene_backward_codecs_lucene90_Lucene90PostingsWriter_H

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
      namespace backward_codecs {
        namespace lucene90 {
          class Lucene90PostingsFormat$IntBlockTermState;
        }
      }
      namespace util {
        class BytesRef;
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
      namespace backward_codecs {
        namespace lucene90 {

          class Lucene90PostingsWriter : public ::org::apache::lucene::codecs::PushPostingsWriterBase {
           public:
            enum {
              mid_init$_5f1496262e5a9f7c,
              mid_addPosition_9a21dbec535f79a8,
              mid_close_e7bdbe105ce1bafb,
              mid_encodeTerm_38368490f1fcfc98,
              mid_finishDoc_e7bdbe105ce1bafb,
              mid_finishTerm_1164e37ee4555dea,
              mid_init_893a09f6528ec65d,
              mid_newTermState_aaf123a224d945c4,
              mid_setField_4d7193cb5c8dc4a1,
              mid_startDoc_645c25455f5b9b1c,
              mid_startTerm_19acd403ee73f663,
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
