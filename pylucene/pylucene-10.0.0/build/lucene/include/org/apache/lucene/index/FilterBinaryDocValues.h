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
            mid_advance_a3904e10f5bb9437,
            mid_advanceExact_a8281eb3b9d9672d,
            mid_binaryValue_adbedbc1fa61c358,
            mid_cost_0f176418e3e16541,
            mid_docID_bd89ce15dad49192,
            mid_nextDoc_bd89ce15dad49192,
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
