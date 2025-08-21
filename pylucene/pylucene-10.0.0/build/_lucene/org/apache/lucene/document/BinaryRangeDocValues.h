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
            mid_init$_7e0a3e6965a9d441,
            mid_advance_3c9bba330f083871,
            mid_advanceExact_ae22d3a856ad56f1,
            mid_binaryValue_9740fddd1c7df148,
            mid_cost_16939d9d0a9a9721,
            mid_docID_20fbf7565993c3d7,
            mid_getPackedValue_5560da88fc44aa82,
            mid_nextDoc_20fbf7565993c3d7,
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
