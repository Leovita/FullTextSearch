#ifndef org_apache_lucene_index_DocValues_H
#define org_apache_lucene_index_DocValues_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SortedSetDocValues;
        class LeafReaderContext;
        class SortedNumericDocValues;
        class SortedDocValues;
        class NumericDocValues;
        class LeafReader;
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

        class DocValues : public ::java::lang::Object {
         public:
          enum {
            mid_emptyBinary_5f1b40567ba3820f,
            mid_emptyNumeric_31591006b22d16cf,
            mid_emptySorted_ca7d9e5e9fd8d26b,
            mid_emptySortedNumeric_ea589b51a70cb6ef,
            mid_emptySortedSet_348af2e8d793dd96,
            mid_getBinary_fbdfdbdc97497f93,
            mid_getNumeric_96eedf29c7ddf28d,
            mid_getSorted_8debfb65e460d086,
            mid_getSortedNumeric_28dd8cb648c37f95,
            mid_getSortedSet_72a0461797e0f897,
            mid_isCacheable_6564089db2d0245d,
            mid_singleton_b3d7ca937d8f7c1f,
            mid_singleton_2181c0923e97fba9,
            mid_unwrapSingleton_df724d16530643ca,
            mid_unwrapSingleton_f285acfc70dedee8,
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
