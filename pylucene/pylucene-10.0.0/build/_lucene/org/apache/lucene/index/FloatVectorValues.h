#ifndef org_apache_lucene_index_FloatVectorValues_H
#define org_apache_lucene_index_FloatVectorValues_H

#include "org/apache/lucene/index/KnnVectorValues.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class VectorEncoding;
        class FloatVectorValues;
        class LeafReader;
      }
      namespace search {
        class VectorScorer;
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
  namespace util {
    class List;
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
            mid_checkField_2153b78f8e8344e7,
            mid_copy_04d6751cd1004caf,
            mid_fromFloats_75e2caac2dd6a7b1,
            mid_getEncoding_667892793043e3ed,
            mid_scorer_08ba7b0e97b17679,
            mid_vectorValue_4392f4b0f19a3288,
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
