#ifndef org_apache_lucene_index_DocValues_H
#define org_apache_lucene_index_DocValues_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SortedSetDocValues;
        class SortedDocValues;
        class NumericDocValues;
        class LeafReader;
        class SortedNumericDocValues;
        class BinaryDocValues;
        class LeafReaderContext;
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

        class DocValues : public ::java::lang::Object {
         public:
          enum {
            mid_emptyBinary_1646c8f01f0d4681,
            mid_emptyNumeric_c48ee0701bf1d193,
            mid_emptySorted_3f42fc3b035432e7,
            mid_emptySortedNumeric_d4ae2704ea8ab9fb,
            mid_emptySortedSet_82243807cdadc8f0,
            mid_getBinary_e85e91fa6284049d,
            mid_getNumeric_b19476b0063773b9,
            mid_getSorted_12e1342760895aef,
            mid_getSortedNumeric_19cd2464536d90bc,
            mid_getSortedSet_ef3092c80d651fc6,
            mid_isCacheable_d13c11b24ade01cc,
            mid_singleton_0c357c07f7603501,
            mid_singleton_0ede4343877d091d,
            mid_unwrapSingleton_9ff5104e2ff67532,
            mid_unwrapSingleton_514a9e16e6c43690,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocValues(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocValues(const DocValues& obj) : ::java::lang::Object(obj) {}

          static ::org::apache::lucene::index::BinaryDocValues emptyBinary();
          static ::org::apache::lucene::index::NumericDocValues emptyNumeric();
          static ::org::apache::lucene::index::SortedDocValues emptySorted();
          static ::org::apache::lucene::index::SortedNumericDocValues emptySortedNumeric();
          static ::org::apache::lucene::index::SortedSetDocValues emptySortedSet();
          static ::org::apache::lucene::index::BinaryDocValues getBinary(const ::org::apache::lucene::index::LeafReader &, const ::java::lang::String &);
          static ::org::apache::lucene::index::NumericDocValues getNumeric(const ::org::apache::lucene::index::LeafReader &, const ::java::lang::String &);
          static ::org::apache::lucene::index::SortedDocValues getSorted(const ::org::apache::lucene::index::LeafReader &, const ::java::lang::String &);
          static ::org::apache::lucene::index::SortedNumericDocValues getSortedNumeric(const ::org::apache::lucene::index::LeafReader &, const ::java::lang::String &);
          static ::org::apache::lucene::index::SortedSetDocValues getSortedSet(const ::org::apache::lucene::index::LeafReader &, const ::java::lang::String &);
          static jboolean isCacheable(const ::org::apache::lucene::index::LeafReaderContext &, const JArray< ::java::lang::String > &);
          static ::org::apache::lucene::index::SortedNumericDocValues singleton(const ::org::apache::lucene::index::NumericDocValues &);
          static ::org::apache::lucene::index::SortedSetDocValues singleton(const ::org::apache::lucene::index::SortedDocValues &);
          static ::org::apache::lucene::index::NumericDocValues unwrapSingleton(const ::org::apache::lucene::index::SortedNumericDocValues &);
          static ::org::apache::lucene::index::SortedDocValues unwrapSingleton(const ::org::apache::lucene::index::SortedSetDocValues &);
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
        extern PyType_Def PY_TYPE_DEF(DocValues);
        extern PyTypeObject *PY_TYPE(DocValues);

        class t_DocValues {
        public:
          PyObject_HEAD
          DocValues object;
          static PyObject *wrap_Object(const DocValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
