#ifndef org_apache_lucene_index_DocValuesSkipper_H
#define org_apache_lucene_index_DocValuesSkipper_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class DocValuesSkipper : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_advance_8226bd0b0fc13dba,
            mid_advance_9ebf8c93de5f0fe1,
            mid_docCount_bd89ce15dad49192,
            mid_docCount_a3904e10f5bb9437,
            mid_maxDocID_a3904e10f5bb9437,
            mid_maxValue_0f176418e3e16541,
            mid_maxValue_49af390f180d8ee7,
            mid_minDocID_a3904e10f5bb9437,
            mid_minValue_0f176418e3e16541,
            mid_minValue_49af390f180d8ee7,
            mid_numLevels_bd89ce15dad49192,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocValuesSkipper(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocValuesSkipper(const DocValuesSkipper& obj) : ::java::lang::Object(obj) {}

          DocValuesSkipper();

          void advance(jint) const;
          void advance(jlong, jlong) const;
          jint docCount() const;
          jint docCount(jint) const;
          jint maxDocID(jint) const;
          jlong maxValue() const;
          jlong maxValue(jint) const;
          jint minDocID(jint) const;
          jlong minValue() const;
          jlong minValue(jint) const;
          jint numLevels() const;
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
        extern PyType_Def PY_TYPE_DEF(DocValuesSkipper);
        extern PyTypeObject *PY_TYPE(DocValuesSkipper);

        class t_DocValuesSkipper {
        public:
          PyObject_HEAD
          DocValuesSkipper object;
          static PyObject *wrap_Object(const DocValuesSkipper&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
