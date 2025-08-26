#ifndef org_apache_lucene_index_FilterCodecReader_H
#define org_apache_lucene_index_FilterCodecReader_H

#include "org/apache/lucene/index/CodecReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
      }
      namespace index {
        class LeafMetaData;
        class FieldInfos;
      }
      namespace codecs {
        class PointsReader;
        class StoredFieldsReader;
        class FieldsProducer;
        class NormsProducer;
        class DocValuesProducer;
        class KnnVectorsReader;
        class TermVectorsReader;
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
            mid_init$_cf96b26dfb3dca38,
            mid_checkIntegrity_e7bdbe105ce1bafb,
            mid_getDelegate_c23783bb0326bc6a,
            mid_getDocValuesReader_c522cf75f2048ee9,
            mid_getFieldInfos_09577c1068fdaec4,
            mid_getFieldsReader_a7e1c9cc255e1e90,
            mid_getLiveDocs_92a4f567193c49d1,
            mid_getMetaData_983410cc4aac3ed3,
            mid_getNormsReader_bcb16c0940285072,
            mid_getPointsReader_01e0d9afb4f515b4,
            mid_getPostingsReader_181d74dce6e339fd,
            mid_getTermVectorsReader_7a10ef35062ba8d1,
            mid_getVectorReader_9001a1821793c4d1,
            mid_maxDoc_bd89ce15dad49192,
            mid_numDocs_bd89ce15dad49192,
            mid_unwrap_97a04697f4a63d52,
            mid_doClose_e7bdbe105ce1bafb,
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
