#ifndef org_apache_lucene_index_FilterCodecReader_H
#define org_apache_lucene_index_FilterCodecReader_H

#include "org/apache/lucene/index/CodecReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class KnnVectorsReader;
        class PointsReader;
        class StoredFieldsReader;
        class NormsProducer;
        class TermVectorsReader;
        class FieldsProducer;
        class DocValuesProducer;
      }
      namespace index {
        class LeafMetaData;
        class FieldInfos;
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

        class FilterCodecReader : public ::org::apache::lucene::index::CodecReader {
         public:
          enum {
            mid_init$_f8b95f1936bf51e8,
            mid_checkIntegrity_3720c61b0679eb3e,
            mid_getDelegate_5fac5acc6e64f9ea,
            mid_getDocValuesReader_41ee33e34dc1b4f3,
            mid_getFieldInfos_2d5786d39aaa5f0b,
            mid_getFieldsReader_4e066a6f20734e17,
            mid_getLiveDocs_959b4f7101dd7f4b,
            mid_getMetaData_e29b13e9e9af4206,
            mid_getNormsReader_86a2ee031b1b0d77,
            mid_getPointsReader_7cecd0a8b5d53414,
            mid_getPostingsReader_47d662857d04070e,
            mid_getTermVectorsReader_0b9ae2ecfa80c759,
            mid_getVectorReader_e70fe5e71b23e71f,
            mid_maxDoc_20fbf7565993c3d7,
            mid_numDocs_20fbf7565993c3d7,
            mid_unwrap_1c28c4360592a6f7,
            mid_doClose_3720c61b0679eb3e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterCodecReader(jobject obj) : ::org::apache::lucene::index::CodecReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterCodecReader(const FilterCodecReader& obj) : ::org::apache::lucene::index::CodecReader(obj) {}

          FilterCodecReader(const ::org::apache::lucene::index::CodecReader &);

          void checkIntegrity() const;
          ::org::apache::lucene::index::CodecReader getDelegate() const;
          ::org::apache::lucene::codecs::DocValuesProducer getDocValuesReader() const;
          ::org::apache::lucene::index::FieldInfos getFieldInfos() const;
          ::org::apache::lucene::codecs::StoredFieldsReader getFieldsReader() const;
          ::org::apache::lucene::util::Bits getLiveDocs() const;
          ::org::apache::lucene::index::LeafMetaData getMetaData() const;
          ::org::apache::lucene::codecs::NormsProducer getNormsReader() const;
          ::org::apache::lucene::codecs::PointsReader getPointsReader() const;
          ::org::apache::lucene::codecs::FieldsProducer getPostingsReader() const;
          ::org::apache::lucene::codecs::TermVectorsReader getTermVectorsReader() const;
          ::org::apache::lucene::codecs::KnnVectorsReader getVectorReader() const;
          jint maxDoc() const;
          jint numDocs() const;
          static ::org::apache::lucene::index::CodecReader unwrap(const ::org::apache::lucene::index::CodecReader &);
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
        extern PyType_Def PY_TYPE_DEF(FilterCodecReader);
        extern PyTypeObject *PY_TYPE(FilterCodecReader);

        class t_FilterCodecReader {
        public:
          PyObject_HEAD
          FilterCodecReader object;
          static PyObject *wrap_Object(const FilterCodecReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
