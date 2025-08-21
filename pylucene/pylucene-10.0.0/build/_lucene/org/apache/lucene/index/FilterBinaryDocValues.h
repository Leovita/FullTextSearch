#ifndef org_apache_lucene_index_FilterBinaryDocValues_H
#define org_apache_lucene_index_FilterBinaryDocValues_H

#include "org/apache/lucene/index/BinaryDocValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
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
      namespace index {

        class FilterBinaryDocValues : public ::org::apache::lucene::index::BinaryDocValues {
         public:
          enum {
            mid_advance_3c9bba330f083871,
            mid_advanceExact_ae22d3a856ad56f1,
            mid_binaryValue_9740fddd1c7df148,
            mid_cost_16939d9d0a9a9721,
            mid_docID_20fbf7565993c3d7,
            mid_nextDoc_20fbf7565993c3d7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterBinaryDocValues(jobject obj) : ::org::apache::lucene::index::BinaryDocValues(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterBinaryDocValues(const FilterBinaryDocValues& obj) : ::org::apache::lucene::index::BinaryDocValues(obj) {}

          jint advance(jint) const;
          jboolean advanceExact(jint) const;
          ::org::apache::lucene::util::BytesRef binaryValue() const;
          jlong cost() const;
          jint docID() const;
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
      namespace index {
        extern PyType_Def PY_TYPE_DEF(FilterBinaryDocValues);
        extern PyTypeObject *PY_TYPE(FilterBinaryDocValues);

        class t_FilterBinaryDocValues {
        public:
          PyObject_HEAD
          FilterBinaryDocValues object;
          static PyObject *wrap_Object(const FilterBinaryDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
