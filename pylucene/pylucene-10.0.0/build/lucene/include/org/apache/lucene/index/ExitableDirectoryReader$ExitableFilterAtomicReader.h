#ifndef org_apache_lucene_index_ExitableDirectoryReader$ExitableFilterAtomicReader_H
#define org_apache_lucene_index_ExitableDirectoryReader$ExitableFilterAtomicReader_H

#include "org/apache/lucene/index/FilterLeafReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SortedSetDocValues;
        class SortedNumericDocValues;
        class PointValues;
        class FloatVectorValues;
        class ByteVectorValues;
        class SortedDocValues;
        class QueryTimeout;
        class NumericDocValues;
        class Terms;
        class LeafReader;
        class IndexReader$CacheHelper;
        class BinaryDocValues;
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

        class ExitableDirectoryReader$ExitableFilterAtomicReader : public ::org::apache::lucene::index::FilterLeafReader {
         public:
          enum {
            mid_init$_4ed7e7310a4752b5,
            mid_getBinaryDocValues_930cc2268218a3e3,
            mid_getByteVectorValues_b6d55ee35cf0a7cd,
            mid_getCoreCacheHelper_3117e2e82cc46163,
            mid_getFloatVectorValues_d99d2b92faec6895,
            mid_getNumericDocValues_0c282caddf2d7938,
            mid_getPointValues_9d784340b5464260,
            mid_getReaderCacheHelper_3117e2e82cc46163,
            mid_getSortedDocValues_e1c83af81f671c5d,
            mid_getSortedNumericDocValues_5b5cc59b31747b26,
            mid_getSortedSetDocValues_9473e7f34fd540a9,
            mid_searchNearestVectors_e7c7b5d865f31eb3,
            mid_searchNearestVectors_210bbfb50a2f4ef9,
            mid_terms_734b49c46dc30275,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ExitableDirectoryReader$ExitableFilterAtomicReader(jobject obj) : ::org::apache::lucene::index::FilterLeafReader(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ExitableDirectoryReader$ExitableFilterAtomicReader(const ExitableDirectoryReader$ExitableFilterAtomicReader& obj) : ::org::apache::lucene::index::FilterLeafReader(obj) {}

          ExitableDirectoryReader$ExitableFilterAtomicReader(const ::org::apache::lucene::index::LeafReader &, const ::org::apache::lucene::index::QueryTimeout &);

          ::org::apache::lucene::index::BinaryDocValues getBinaryDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::ByteVectorValues getByteVectorValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::IndexReader$CacheHelper getCoreCacheHelper() const;
          ::org::apache::lucene::index::FloatVectorValues getFloatVectorValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::NumericDocValues getNumericDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::PointValues getPointValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::IndexReader$CacheHelper getReaderCacheHelper() const;
          ::org::apache::lucene::index::SortedDocValues getSortedDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::SortedNumericDocValues getSortedNumericDocValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::SortedSetDocValues getSortedSetDocValues(const ::java::lang::String &) const;
          void searchNearestVectors(const ::java::lang::String &, const JArray< jbyte > &, const ::org::apache::lucene::search::KnnCollector &, const ::org::apache::lucene::util::Bits &) const;
          void searchNearestVectors(const ::java::lang::String &, const JArray< jfloat > &, const ::org::apache::lucene::search::KnnCollector &, const ::org::apache::lucene::util::Bits &) const;
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
        extern PyType_Def PY_TYPE_DEF(ExitableDirectoryReader$ExitableFilterAtomicReader);
        extern PyTypeObject *PY_TYPE(ExitableDirectoryReader$ExitableFilterAtomicReader);

        class t_ExitableDirectoryReader$ExitableFilterAtomicReader {
        public:
          PyObject_HEAD
          ExitableDirectoryReader$ExitableFilterAtomicReader object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ExitableDirectoryReader$ExitableFilterAtomicReader *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ExitableDirectoryReader$ExitableFilterAtomicReader&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ExitableDirectoryReader$ExitableFilterAtomicReader&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
