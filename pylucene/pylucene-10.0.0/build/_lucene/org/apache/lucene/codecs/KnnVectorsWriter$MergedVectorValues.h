#ifndef org_apache_lucene_codecs_KnnVectorsWriter$MergedVectorValues_H
#define org_apache_lucene_codecs_KnnVectorsWriter$MergedVectorValues_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergeState;
        class ByteVectorValues;
        class FieldInfo;
        class FloatVectorValues;
        class FieldInfos;
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
      namespace codecs {

        class KnnVectorsWriter$MergedVectorValues : public ::java::lang::Object {
         public:
          enum {
            mid_hasVectorValues_c3795e3831891a4c,
            mid_mergeByteVectorValues_0cdc3974185be8a0,
            mid_mergeFloatVectorValues_10d6c6a29d7c0691,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KnnVectorsWriter$MergedVectorValues(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KnnVectorsWriter$MergedVectorValues(const KnnVectorsWriter$MergedVectorValues& obj) : ::java::lang::Object(obj) {}

          static jboolean hasVectorValues(const ::org::apache::lucene::index::FieldInfos &, const ::java::lang::String &);
          static ::org::apache::lucene::index::ByteVectorValues mergeByteVectorValues(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::index::MergeState &);
          static ::org::apache::lucene::index::FloatVectorValues mergeFloatVectorValues(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::index::MergeState &);
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
        extern PyType_Def PY_TYPE_DEF(KnnVectorsWriter$MergedVectorValues);
        extern PyTypeObject *PY_TYPE(KnnVectorsWriter$MergedVectorValues);

        class t_KnnVectorsWriter$MergedVectorValues {
        public:
          PyObject_HEAD
          KnnVectorsWriter$MergedVectorValues object;
          static PyObject *wrap_Object(const KnnVectorsWriter$MergedVectorValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
