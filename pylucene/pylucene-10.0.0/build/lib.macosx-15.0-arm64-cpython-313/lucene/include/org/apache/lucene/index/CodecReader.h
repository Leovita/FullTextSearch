#ifndef org_apache_lucene_index_CodecReader_H
#define org_apache_lucene_index_CodecReader_H

#include "org/apache/lucene/index/LeafReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SortedNumericDocValues;
        class FloatVectorValues;
        class BinaryDocValues;
        class SortedSetDocValues;
        class ByteVectorValues;
        class SortedDocValues;
        class NumericDocValues;
        class PointValues;
        class TermVectors;
        class Terms;
        class StoredFields;
        class DocValuesSkipper;
      }
      namespace codecs {
        class PointsReader;
        class NormsProducer;
        class TermVectorsReader;
        class FieldsProducer;
        class DocValuesProducer;
        class KnnVectorsReader;
        class StoredFieldsReader;
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

        class CodecReader : public ::org::apache::lucene::index::LeafReader {
         public:
          enum {
            mid_checkIntegrity_3720c61b0679eb3e,
            mid_getBinaryDocValues_930cc2268218a3e3,
            mid_getByteVectorValues_b6d55ee35cf0a7cd,
            mid_getDocValuesReader_41ee33e34dc1b4f3,
            mid_getDocValuesSkipper_6385669244954201,
            mid_getFieldsReader_4e066a6f20734e17,
            mid_getFloatVectorValues_d99d2b92faec6895,
            mid_getNormValues_0c282caddf2d7938,
            mid_getNormsReader_86a2ee031b1b0d77,
            mid_getNumericDocValues_0c282caddf2d7938,
            mid_getPointValues_9d784340b5464260,
            mid_getPointsReader_7cecd0a8b5d53414,
            mid_getPostingsReader_47d662857d04070e,
            mid_getSortedDocValues_e1c83af81f671c5d,
            mid_getSortedNumericDocValues_5b5cc59b31747b26,
            mid_getSortedSetDocValues_9473e7f34fd540a9,
            mid_getTermVectorsReader_0b9ae2ecfa80c759,
            mid_getVectorReader_e70fe5e71b23e71f,
            mid_searchNearestVectors_e7c7b5d865f31eb3,
            mid_searchNearestVectors_210bbfb50a2f4ef9,
            mid_storedFields_71d351a09c9e3356,
            mid_termVectors_dfcb317601b52c60,
            mid_terms_734b49c46dc30275,
            mid_doClose_3720c61b0679eb3e,
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
