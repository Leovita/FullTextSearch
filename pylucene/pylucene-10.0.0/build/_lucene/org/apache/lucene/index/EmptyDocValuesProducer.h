#ifndef org_apache_lucene_index_EmptyDocValuesProducer_H
#define org_apache_lucene_index_EmptyDocValuesProducer_H

#include "org/apache/lucene/codecs/DocValuesProducer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SortedSetDocValues;
        class SortedDocValues;
        class DocValuesSkipper;
        class NumericDocValues;
        class SortedNumericDocValues;
        class FieldInfo;
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
            mid_checkIntegrity_e7bdbe105ce1bafb,
            mid_close_e7bdbe105ce1bafb,
            mid_getBinary_6bbbc154bef1aaa9,
            mid_getNumeric_cbb872df2173ef24,
            mid_getSkipper_da77f261cb8459c5,
            mid_getSorted_c81b35e97f0d7c3a,
            mid_getSortedNumeric_cbd3d799be63253d,
            mid_getSortedSet_0a93b127d1085e39,
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
