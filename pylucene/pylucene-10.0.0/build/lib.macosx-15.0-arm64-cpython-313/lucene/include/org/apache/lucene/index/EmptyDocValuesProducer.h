#ifndef org_apache_lucene_index_EmptyDocValuesProducer_H
#define org_apache_lucene_index_EmptyDocValuesProducer_H

#include "org/apache/lucene/codecs/DocValuesProducer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SortedSetDocValues;
        class SortedNumericDocValues;
        class SortedDocValues;
        class FieldInfo;
        class NumericDocValues;
        class DocValuesSkipper;
        class BinaryDocValues;
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class EmptyDocValuesProducer : public ::org::apache::lucene::codecs::DocValuesProducer {
         public:
          enum {
            mid_checkIntegrity_3720c61b0679eb3e,
            mid_close_3720c61b0679eb3e,
            mid_getBinary_18dc76e0d490ad24,
            mid_getNumeric_e5ef0d0afbac0df8,
            mid_getSkipper_fef5906801c756da,
            mid_getSorted_6da69a2b4f5ee234,
            mid_getSortedNumeric_0d29deeacfb1da8e,
            mid_getSortedSet_526df70ba4985d60,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit EmptyDocValuesProducer(jobject obj) : ::org::apache::lucene::codecs::DocValuesProducer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          EmptyDocValuesProducer(const EmptyDocValuesProducer& obj) : ::org::apache::lucene::codecs::DocValuesProducer(obj) {}

          void checkIntegrity() const;
          void close() const;
          ::org::apache::lucene::index::BinaryDocValues getBinary(const ::org::apache::lucene::index::FieldInfo &) const;
          ::org::apache::lucene::index::NumericDocValues getNumeric(const ::org::apache::lucene::index::FieldInfo &) const;
          ::org::apache::lucene::index::DocValuesSkipper getSkipper(const ::org::apache::lucene::index::FieldInfo &) const;
          ::org::apache::lucene::index::SortedDocValues getSorted(const ::org::apache::lucene::index::FieldInfo &) const;
          ::org::apache::lucene::index::SortedNumericDocValues getSortedNumeric(const ::org::apache::lucene::index::FieldInfo &) const;
          ::org::apache::lucene::index::SortedSetDocValues getSortedSet(const ::org::apache::lucene::index::FieldInfo &) const;
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
        extern PyType_Def PY_TYPE_DEF(EmptyDocValuesProducer);
        extern PyTypeObject *PY_TYPE(EmptyDocValuesProducer);

        class t_EmptyDocValuesProducer {
        public:
          PyObject_HEAD
          EmptyDocValuesProducer object;
          static PyObject *wrap_Object(const EmptyDocValuesProducer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
