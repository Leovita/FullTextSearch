#ifndef org_apache_lucene_codecs_KnnVectorsReader_H
#define org_apache_lucene_codecs_KnnVectorsReader_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
      }
      namespace index {
        class ByteVectorValues;
        class FloatVectorValues;
      }
      namespace search {
        class KnnCollector;
      }
      namespace codecs {
        class KnnVectorsReader;
      }
    }
  }
}
namespace java {
  namespace io {
    class Closeable;
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
      namespace codecs {

        class KnnVectorsReader : public ::java::lang::Object {
         public:
          enum {
            mid_checkIntegrity_e7bdbe105ce1bafb,
            mid_getByteVectorValues_7ab2f26af1d93897,
            mid_getFloatVectorValues_0c0ae22a56670782,
            mid_getMergeInstance_9001a1821793c4d1,
            mid_search_41e6931fdbdb5ba0,
            mid_search_61a952903eb61416,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KnnVectorsReader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KnnVectorsReader(const KnnVectorsReader& obj) : ::java::lang::Object(obj) {}

          void checkIntegrity() const;
          ::org::apache::lucene::index::ByteVectorValues getByteVectorValues(const ::java::lang::String &) const;
          ::org::apache::lucene::index::FloatVectorValues getFloatVectorValues(const ::java::lang::String &) const;
          KnnVectorsReader getMergeInstance() const;
          void search(const ::java::lang::String &, const JArray< jbyte > &, const ::org::apache::lucene::search::KnnCollector &, const ::org::apache::lucene::util::Bits &) const;
          void search(const ::java::lang::String &, const JArray< jfloat > &, const ::org::apache::lucene::search::KnnCollector &, const ::org::apache::lucene::util::Bits &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyType_Def PY_TYPE_DEF(KnnVectorsReader);
        extern PyTypeObject *PY_TYPE(KnnVectorsReader);

        class t_KnnVectorsReader {
        public:
          PyObject_HEAD
          KnnVectorsReader object;
          static PyObject *wrap_Object(const KnnVectorsReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
