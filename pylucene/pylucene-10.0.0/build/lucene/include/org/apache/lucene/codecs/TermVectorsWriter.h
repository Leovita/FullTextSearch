#ifndef org_apache_lucene_codecs_TermVectorsWriter_H
#define org_apache_lucene_codecs_TermVectorsWriter_H

#include "java/lang/Object.h"

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
  namespace io {
    class Closeable;
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

        class TermVectorsWriter : public ::java::lang::Object {
         public:
          enum {
            mid_addPosition_e467e9221c0680cd,
            mid_addProx_2cde14b7c27ff05b,
            mid_close_e7bdbe105ce1bafb,
            mid_finish_8226bd0b0fc13dba,
            mid_finishDocument_e7bdbe105ce1bafb,
            mid_finishField_e7bdbe105ce1bafb,
            mid_finishTerm_e7bdbe105ce1bafb,
            mid_merge_0730403f334ab9cc,
            mid_startDocument_8226bd0b0fc13dba,
            mid_startField_fa294ef516f109e2,
            mid_startTerm_86aec93bf51df65e,
            mid_addAllDocVectors_adbeda870ab9970c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermVectorsWriter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TermVectorsWriter(const TermVectorsWriter& obj) : ::java::lang::Object(obj) {}

          void addPosition(jint, jint, jint, const ::org::apache::lucene::util::BytesRef &) const;
          void addProx(jint, const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::store::DataInput &) const;
          void close() const;
          void finish(jint) const;
          void finishDocument() const;
          void finishField() const;
          void finishTerm() const;
          jint merge(const ::org::apache::lucene::index::MergeState &) const;
          void startDocument(jint) const;
          void startField(const ::org::apache::lucene::index::FieldInfo &, jint, jboolean, jboolean, jboolean) const;
          void startTerm(const ::org::apache::lucene::util::BytesRef &, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(TermVectorsWriter);
        extern PyTypeObject *PY_TYPE(TermVectorsWriter);

        class t_TermVectorsWriter {
        public:
          PyObject_HEAD
          TermVectorsWriter object;
          static PyObject *wrap_Object(const TermVectorsWriter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
