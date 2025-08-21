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
      namespace util {
        class Accountable;
        class BytesRef;
      }
      namespace store {
        class DataInput;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
    class Closeable;
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
            mid_addPosition_54dd3593ad2b559e,
            mid_addProx_f7a100bced2e63eb,
            mid_close_3720c61b0679eb3e,
            mid_finish_540b2b23d51b1efd,
            mid_finishDocument_3720c61b0679eb3e,
            mid_finishField_3720c61b0679eb3e,
            mid_finishTerm_3720c61b0679eb3e,
            mid_merge_1b76b11a0c4e302d,
            mid_startDocument_540b2b23d51b1efd,
            mid_startField_109b6acc549dbc3d,
            mid_startTerm_be93bdc4fbbb5027,
            mid_addAllDocVectors_3c67cdd5eaf01991,
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
