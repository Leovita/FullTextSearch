#ifndef org_apache_lucene_index_FloatVectorValues_H
#define org_apache_lucene_index_FloatVectorValues_H

#include "org/apache/lucene/index/KnnVectorValues.h"

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
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class VectorScorer;
      }
      namespace index {
        class VectorEncoding;
        class LeafReader;
        class FloatVectorValues;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class FloatVectorValues : public ::org::apache::lucene::index::KnnVectorValues {
         public:
          enum {
            mid_checkField_7b24c4e074e0f103,
            mid_copy_f06cbfc19b53100d,
            mid_fromFloats_609e7210a674fa9f,
            mid_getEncoding_89ee194538cd6149,
            mid_scorer_a8fe418e8b9bfd3a,
            mid_vectorValue_837967dda86e7ad8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FloatVectorValues(jobject obj) : ::org::apache::lucene::index::KnnVectorValues(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FloatVectorValues(const FloatVectorValues& obj) : ::org::apache::lucene::index::KnnVectorValues(obj) {}

          static void checkField(const ::org::apache::lucene::index::LeafReader &, const ::java::lang::String &);
          FloatVectorValues copy() const;
          static FloatVectorValues fromFloats(const ::java::util::List &, jint);
          ::org::apache::lucene::index::VectorEncoding getEncoding() const;
          ::org::apache::lucene::search::VectorScorer scorer(const JArray< jfloat > &) const;
          JArray< jfloat > vectorValue(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(FloatVectorValues);
        extern PyTypeObject *PY_TYPE(FloatVectorValues);

        class t_FloatVectorValues {
        public:
          PyObject_HEAD
          FloatVectorValues object;
          static PyObject *wrap_Object(const FloatVectorValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
