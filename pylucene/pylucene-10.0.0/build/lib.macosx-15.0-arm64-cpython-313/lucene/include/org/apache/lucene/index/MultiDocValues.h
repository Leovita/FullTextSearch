#ifndef org_apache_lucene_index_MultiDocValues_H
#define org_apache_lucene_index_MultiDocValues_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SortedSetDocValues;
        class SortedNumericDocValues;
        class SortedDocValues;
        class IndexReader;
        class NumericDocValues;
        class BinaryDocValues;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
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

        class MultiDocValues : public ::java::lang::Object {
         public:
          enum {
            mid_getBinaryValues_4dbf7345d8176895,
            mid_getNormValues_e540b435c19b8aa2,
            mid_getNumericValues_e540b435c19b8aa2,
            mid_getSortedNumericValues_7a60d1c2d2961a84,
            mid_getSortedSetValues_25237c5b54e0c3ac,
            mid_getSortedValues_2b8663911ab7d6fd,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiDocValues(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiDocValues(const MultiDocValues& obj) : ::java::lang::Object(obj) {}

          static ::org::apache::lucene::index::BinaryDocValues getBinaryValues(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
          static ::org::apache::lucene::index::NumericDocValues getNormValues(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
          static ::org::apache::lucene::index::NumericDocValues getNumericValues(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
          static ::org::apache::lucene::index::SortedNumericDocValues getSortedNumericValues(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
          static ::org::apache::lucene::index::SortedSetDocValues getSortedSetValues(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
          static ::org::apache::lucene::index::SortedDocValues getSortedValues(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
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
        extern PyType_Def PY_TYPE_DEF(MultiDocValues);
        extern PyTypeObject *PY_TYPE(MultiDocValues);

        class t_MultiDocValues {
        public:
          PyObject_HEAD
          MultiDocValues object;
          static PyObject *wrap_Object(const MultiDocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
