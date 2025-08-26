#ifndef org_apache_lucene_index_FilterLeafReader_H
#define org_apache_lucene_index_FilterLeafReader_H

#include "org/apache/lucene/index/LeafReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermVectors;
        class FloatVectorValues;
        class DocValuesSkipper;
        class SortedNumericDocValues;
        class BinaryDocValues;
        class ByteVectorValues;
        class SortedDocValues;
        class NumericDocValues;
        class StoredFields;
        class PointValues;
        class FieldInfos;
        class SortedSetDocValues;
        class Terms;
        class LeafMetaData;
      }
      namespace util {
        class Bits;
      }
      namespace search {
        class KnnCollector;
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
    class String;
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
            mid_checkIntegrity_e7bdbe105ce1bafb,
            mid_getBinaryDocValues_7dcd5a29ca65e591,
            mid_getByteVectorValues_7ab2f26af1d93897,
            mid_getDelegate_de30c7b0a9df694f,
            mid_getDocValuesSkipper_8b019ebe020b6965,
            mid_getFieldInfos_09577c1068fdaec4,
            mid_getFloatVectorValues_0c0ae22a56670782,
            mid_getLiveDocs_92a4f567193c49d1,
            mid_getMetaData_983410cc4aac3ed3,
            mid_getNormValues_c8230d99abf988ec,
            mid_getNumericDocValues_c8230d99abf988ec,
            mid_getPointValues_db6b2fb22b12e7e1,
            mid_getSortedDocValues_946c886dd7165459,
            mid_getSortedNumericDocValues_d833735942a4e997,
            mid_getSortedSetDocValues_a25ba477f918d8fc,
            mid_maxDoc_bd89ce15dad49192,
            mid_numDocs_bd89ce15dad49192,
            mid_searchNearestVectors_41e6931fdbdb5ba0,
            mid_searchNearestVectors_61a952903eb61416,
            mid_storedFields_1a4fab20a75bd3d4,
            mid_termVectors_6473260da883e913,
            mid_terms_b30320f056ffba8d,
            mid_toString_e7df854526d67fa3,
            mid_unwrap_427792a09c74b11a,
            mid_doClose_e7bdbe105ce1bafb,
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
