#ifndef org_apache_lucene_index_ByteVectorValues_H
#define org_apache_lucene_index_ByteVectorValues_H

#include "org/apache/lucene/index/KnnVectorValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class ByteVectorValues;
        class VectorEncoding;
        class LeafReader;
      }
      namespace search {
        class VectorScorer;
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
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class ByteVectorValues : public ::org::apache::lucene::index::KnnVectorValues {
         public:
          enum {
            mid_checkField_7b24c4e074e0f103,
            mid_copy_e1e5831571912aae,
            mid_fromBytes_6260afd6b7f9a43a,
            mid_getEncoding_89ee194538cd6149,
            mid_scorer_8c20e5d380e84ab5,
            mid_vectorValue_81e4ab9dd381561f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ByteVectorValues(jobject obj) : ::org::apache::lucene::index::KnnVectorValues(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ByteVectorValues(const ByteVectorValues& obj) : ::org::apache::lucene::index::KnnVectorValues(obj) {}

          static void checkField(const ::org::apache::lucene::index::LeafReader &, const ::java::lang::String &);
          ByteVectorValues copy() const;
          static ByteVectorValues fromBytes(const ::java::util::List &, jint);
          ::org::apache::lucene::index::VectorEncoding getEncoding() const;
          ::org::apache::lucene::search::VectorScorer scorer(const JArray< jbyte > &) const;
          JArray< jbyte > vectorValue(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(ByteVectorValues);
        extern PyTypeObject *PY_TYPE(ByteVectorValues);

        class t_ByteVectorValues {
        public:
          PyObject_HEAD
          ByteVectorValues object;
          static PyObject *wrap_Object(const ByteVectorValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
