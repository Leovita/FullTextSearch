#ifndef org_apache_lucene_index_CodecReader_H
#define org_apache_lucene_index_CodecReader_H

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
        class SortedSetDocValues;
        class Terms;
      }
      namespace util {
        class Bits;
      }
      namespace search {
        class KnnCollector;
      }
      namespace codecs {
        class NormsProducer;
        class StoredFieldsReader;
        class FieldsProducer;
        class TermVectorsReader;
        class PointsReader;
        class DocValuesProducer;
        class KnnVectorsReader;
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

        class CodecReader : public ::org::apache::lucene::index::LeafReader {
         public:
          enum {
            mid_checkIntegrity_e7bdbe105ce1bafb,
            mid_getBinaryDocValues_7dcd5a29ca65e591,
            mid_getByteVectorValues_7ab2f26af1d93897,
            mid_getDocValuesReader_c522cf75f2048ee9,
            mid_getDocValuesSkipper_8b019ebe020b6965,
            mid_getFieldsReader_a7e1c9cc255e1e90,
            mid_getFloatVectorValues_0c0ae22a56670782,
            mid_getNormValues_c8230d99abf988ec,
            mid_getNormsReader_bcb16c0940285072,
            mid_getNumericDocValues_c8230d99abf988ec,
            mid_getPointValues_db6b2fb22b12e7e1,
            mid_getPointsReader_01e0d9afb4f515b4,
            mid_getPostingsReader_181d74dce6e339fd,
            mid_getSortedDocValues_946c886dd7165459,
            mid_getSortedNumericDocValues_d833735942a4e997,
            mid_getSortedSetDocValues_a25ba477f918d8fc,
            mid_getTermVectorsReader_7a10ef35062ba8d1,
            mid_getVectorReader_9001a1821793c4d1,
            mid_searchNearestVectors_41e6931fdbdb5ba0,
            mid_searchNearestVectors_61a952903eb61416,
            mid_storedFields_1a4fab20a75bd3d4,
            mid_termVectors_6473260da883e913,
            mid_terms_b30320f056ffba8d,
            mid_doClose_e7bdbe105ce1bafb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CodecReader(jobject obj) : ::org::apache::lucene::index::LeafReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CodecReader(const CodecReader& obj) : ::org::apache::lucene::index::LeafReader(obj) {}

          void checkIntegrity() const;
          ::org::apache::lucene::index::BinaryDocValues getBinaryDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::ByteVectorValues getByteVectorValues(const ::java::lang::String &) const;
          ::org::apache::lucene::codecs::DocValuesProducer getDocValuesReader() const;
          ::org::apache::lucene::index::DocValuesSkipper getDocValuesSkipper(const ::java::lang::String &) const;
          ::org::apache::lucene::codecs::StoredFieldsReader getFieldsReader() const;
          ::org::apache::lucene::index::FloatVectorValues getFloatVectorValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::NumericDocValues getNormValues(const ::java::lang::String &) const;
          ::org::apache::lucene::codecs::NormsProducer getNormsReader() const;
          ::org::apache::lucene::index::NumericDocValues getNumericDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::PointValues getPointValues(const ::java::lang::String &) const;
          ::org::apache::lucene::codecs::PointsReader getPointsReader() const;
          ::org::apache::lucene::codecs::FieldsProducer getPostingsReader() const;
          ::org::apache::lucene::index::SortedDocValues getSortedDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::SortedNumericDocValues getSortedNumericDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::SortedSetDocValues getSortedSetDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::codecs::TermVectorsReader getTermVectorsReader() const;
          ::org::apache::lucene::codecs::KnnVectorsReader getVectorReader() const;
          void searchNearestVectors(const ::java::lang::String &, const JArray< jbyte > &, const ::org::apache::lucene::search::KnnCollector &, const ::org::apache::lucene::util::Bits &) const;
          void searchNearestVectors(const ::java::lang::String &, const JArray< jfloat > &, const ::org::apache::lucene::search::KnnCollector &, const ::org::apache::lucene::util::Bits &) const;
          ::org::apache::lucene::index::StoredFields storedFields() const;
          ::org::apache::lucene::index::TermVectors termVectors() const;
          ::org::apache::lucene::index::Terms terms(const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(CodecReader);
        extern PyTypeObject *PY_TYPE(CodecReader);

        class t_CodecReader {
        public:
          PyObject_HEAD
          CodecReader object;
          static PyObject *wrap_Object(const CodecReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
