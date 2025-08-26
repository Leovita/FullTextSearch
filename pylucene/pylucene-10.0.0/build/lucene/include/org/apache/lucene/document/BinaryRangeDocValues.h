#ifndef org_apache_lucene_document_BinaryRangeDocValues_H
#define org_apache_lucene_document_BinaryRangeDocValues_H

#include "org/apache/lucene/index/BinaryDocValues.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
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
      namespace document {

        class BinaryRangeDocValues : public ::org::apache::lucene::index::BinaryDocValues {
         public:
          enum {
            mid_init$_06cee3041b073192,
            mid_advance_a3904e10f5bb9437,
            mid_advanceExact_a8281eb3b9d9672d,
            mid_binaryValue_adbedbc1fa61c358,
            mid_cost_0f176418e3e16541,
            mid_docID_bd89ce15dad49192,
            mid_getPackedValue_44e916dc40fc04cb,
            mid_nextDoc_bd89ce15dad49192,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BinaryRangeDocValues(jobject obj) : ::org::apache::lucene::index::BinaryDocValues(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BinaryRangeDocValues(const BinaryRangeDocValues& obj) : ::org::apache::lucene::index::BinaryDocValues(obj) {}

          BinaryRangeDocValues(const ::org::apache::lucene::index::BinaryDocValues &, jint, jint);

          jint advance(jint) const;
          jboolean advanceExact(jint) const;
          ::org::apache::lucene::util::BytesRef binaryValue() const;
          jlong cost() const;
          jint docID() const;
          JArray< jbyte > getPackedValue() const;
          jint nextDoc() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        extern PyType_Def PY_TYPE_DEF(BinaryRangeDocValues);
        extern PyTypeObject *PY_TYPE(BinaryRangeDocValues);

        class t_BinaryRangeDocValues {
        public:
          PyObject_HEAD
          BinaryRangeDocValues object;
          static PyObject *wrap_Object(const BinaryRangeDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
