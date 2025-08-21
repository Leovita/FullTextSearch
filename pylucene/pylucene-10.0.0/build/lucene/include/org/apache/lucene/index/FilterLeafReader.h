#ifndef org_apache_lucene_index_FilterLeafReader_H
#define org_apache_lucene_index_FilterLeafReader_H

#include "org/apache/lucene/index/LeafReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SortedNumericDocValues;
        class FloatVectorValues;
        class FieldInfos;
        class BinaryDocValues;
        class SortedSetDocValues;
        class ByteVectorValues;
        class SortedDocValues;
        class LeafMetaData;
        class NumericDocValues;
        class PointValues;
        class TermVectors;
        class Terms;
        class StoredFields;
        class DocValuesSkipper;
      }
      namespace search {
        class KnnCollector;
      }
      namespace util {
        class Bits;
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

        class FilterLeafReader : public ::org::apache::lucene::index::LeafReader {
         public:
          enum {
            mid_checkIntegrity_3720c61b0679eb3e,
            mid_getBinaryDocValues_930cc2268218a3e3,
            mid_getByteVectorValues_b6d55ee35cf0a7cd,
            mid_getDelegate_21695b7cef24a344,
            mid_getDocValuesSkipper_6385669244954201,
            mid_getFieldInfos_2d5786d39aaa5f0b,
            mid_getFloatVectorValues_d99d2b92faec6895,
            mid_getLiveDocs_959b4f7101dd7f4b,
            mid_getMetaData_e29b13e9e9af4206,
            mid_getNormValues_0c282caddf2d7938,
            mid_getNumericDocValues_0c282caddf2d7938,
            mid_getPointValues_9d784340b5464260,
            mid_getSortedDocValues_e1c83af81f671c5d,
            mid_getSortedNumericDocValues_5b5cc59b31747b26,
            mid_getSortedSetDocValues_9473e7f34fd540a9,
            mid_maxDoc_20fbf7565993c3d7,
            mid_numDocs_20fbf7565993c3d7,
            mid_searchNearestVectors_e7c7b5d865f31eb3,
            mid_searchNearestVectors_210bbfb50a2f4ef9,
            mid_storedFields_71d351a09c9e3356,
            mid_termVectors_dfcb317601b52c60,
            mid_terms_734b49c46dc30275,
            mid_toString_09a7afff1868fc5e,
            mid_unwrap_5c5d9aed327bf3e1,
            mid_doClose_3720c61b0679eb3e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterLeafReader(jobject obj) : ::org::apache::lucene::index::LeafReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterLeafReader(const FilterLeafReader& obj) : ::org::apache::lucene::index::LeafReader(obj) {}

          void checkIntegrity() const;
          ::org::apache::lucene::index::BinaryDocValues getBinaryDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::ByteVectorValues getByteVectorValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::LeafReader getDelegate() const;
          ::org::apache::lucene::index::DocValuesSkipper getDocValuesSkipper(const ::java::lang::String &) const;
          ::org::apache::lucene::index::FieldInfos getFieldInfos() const;
          ::org::apache::lucene::index::FloatVectorValues getFloatVectorValues(const ::java::lang::String &) const;
          ::org::apache::lucene::util::Bits getLiveDocs() const;
          ::org::apache::lucene::index::LeafMetaData getMetaData() const;
          ::org::apache::lucene::index::NumericDocValues getNormValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::NumericDocValues getNumericDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::PointValues getPointValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::SortedDocValues getSortedDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::SortedNumericDocValues getSortedNumericDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::SortedSetDocValues getSortedSetDocValues(const ::java::lang::String &) const;
          jint maxDoc() const;
          jint numDocs() const;
          void searchNearestVectors(const ::java::lang::String &, const JArray< jbyte > &, const ::org::apache::lucene::search::KnnCollector &, const ::org::apache::lucene::util::Bits &) const;
          void searchNearestVectors(const ::java::lang::String &, const JArray< jfloat > &, const ::org::apache::lucene::search::KnnCollector &, const ::org::apache::lucene::util::Bits &) const;
          ::org::apache::lucene::index::StoredFields storedFields() const;
          ::org::apache::lucene::index::TermVectors termVectors() const;
          ::org::apache::lucene::index::Terms terms(const ::java::lang::String &) const;
          ::java::lang::String toString() const;
          static ::org::apache::lucene::index::LeafReader unwrap(const ::org::apache::lucene::index::LeafReader &);
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
        extern PyType_Def PY_TYPE_DEF(FilterLeafReader);
        extern PyTypeObject *PY_TYPE(FilterLeafReader);

        class t_FilterLeafReader {
        public:
          PyObject_HEAD
          FilterLeafReader object;
          static PyObject *wrap_Object(const FilterLeafReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
