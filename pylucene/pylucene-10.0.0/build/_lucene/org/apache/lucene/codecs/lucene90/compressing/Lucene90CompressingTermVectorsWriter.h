#ifndef org_apache_lucene_codecs_lucene90_compressing_Lucene90CompressingTermVectorsWriter_H
#define org_apache_lucene_codecs_lucene90_compressing_Lucene90CompressingTermVectorsWriter_H

#include "org/apache/lucene/codecs/TermVectorsWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergeState;
        class FieldInfo;
      }
      namespace store {
        class DataInput;
      }
      namespace util {
        class Accountable;
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Collection;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene90 {
          namespace compressing {

            class Lucene90CompressingTermVectorsWriter : public ::org::apache::lucene::codecs::TermVectorsWriter {
             public:
              enum {
                mid_addPosition_e467e9221c0680cd,
                mid_addProx_2cde14b7c27ff05b,
                mid_close_e7bdbe105ce1bafb,
                mid_finish_8226bd0b0fc13dba,
                mid_finishDocument_e7bdbe105ce1bafb,
                mid_finishField_e7bdbe105ce1bafb,
                mid_getChildResources_4a269b968b3a511f,
                mid_merge_0730403f334ab9cc,
                mid_ramBytesUsed_0f176418e3e16541,
                mid_startDocument_8226bd0b0fc13dba,
                mid_startField_fa294ef516f109e2,
                mid_startTerm_86aec93bf51df65e,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit Lucene90CompressingTermVectorsWriter(jobject obj) : ::org::apache::lucene::codecs::TermVectorsWriter(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              Lucene90CompressingTermVectorsWriter(const Lucene90CompressingTermVectorsWriter& obj) : ::org::apache::lucene::codecs::TermVectorsWriter(obj) {}

              void addPosition(jint, jint, jint, const ::org::apache::lucene::util::BytesRef &) const;
              void addProx(jint, const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::store::DataInput &) const;
              void close() const;
              void finish(jint) const;
              void finishDocument() const;
              void finishField() const;
              ::java::util::Collection getChildResources() const;
              jint merge(const ::org::apache::lucene::index::MergeState &) const;
              jlong ramBytesUsed() const;
              void startDocument(jint) const;
              void startField(const ::org::apache::lucene::index::FieldInfo &, jint, jboolean, jboolean, jboolean) const;
              void startTerm(const ::org::apache::lucene::util::BytesRef &, jint) const;
            };
          }
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
        namespace lucene90 {
          namespace compressing {
            extern PyType_Def PY_TYPE_DEF(Lucene90CompressingTermVectorsWriter);
            extern PyTypeObject *PY_TYPE(Lucene90CompressingTermVectorsWriter);

            class t_Lucene90CompressingTermVectorsWriter {
            public:
              PyObject_HEAD
              Lucene90CompressingTermVectorsWriter object;
              static PyObject *wrap_Object(const Lucene90CompressingTermVectorsWriter&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
