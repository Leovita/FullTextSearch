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
            mid_init$_3720c61b0679eb3e,
            mid_advance_540b2b23d51b1efd,
            mid_advance_c3501637982a28bc,
            mid_docCount_20fbf7565993c3d7,
            mid_docCount_3c9bba330f083871,
            mid_maxDocID_3c9bba330f083871,
            mid_maxValue_16939d9d0a9a9721,
            mid_maxValue_7b22650fccb5d574,
            mid_minDocID_3c9bba330f083871,
            mid_minValue_16939d9d0a9a9721,
            mid_minValue_7b22650fccb5d574,
            mid_numLevels_20fbf7565993c3d7,
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
