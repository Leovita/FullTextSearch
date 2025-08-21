#ifndef org_apache_lucene_codecs_KnnVectorsReader_H
#define org_apache_lucene_codecs_KnnVectorsReader_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class KnnCollector;
      }
      namespace codecs {
        class KnnVectorsReader;
      }
      namespace index {
        class ByteVectorValues;
        class FloatVectorValues;
      }
      namespace util {
        class Bits;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
    class Closeable;
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
            mid_checkIntegrity_3720c61b0679eb3e,
            mid_getByteVectorValues_b6d55ee35cf0a7cd,
            mid_getFloatVectorValues_d99d2b92faec6895,
            mid_getMergeInstance_e70fe5e71b23e71f,
            mid_search_e7c7b5d865f31eb3,
            mid_search_210bbfb50a2f4ef9,
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
