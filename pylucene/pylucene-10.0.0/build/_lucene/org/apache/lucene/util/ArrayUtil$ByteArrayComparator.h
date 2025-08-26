#ifndef org_apache_lucene_util_ArrayUtil$ByteArrayComparator_H
#define org_apache_lucene_util_ArrayUtil$ByteArrayComparator_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class ArrayUtil$ByteArrayComparator : public ::java::lang::Object {
         public:
          enum {
            mid_compare_450e09cafec2800d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ArrayUtil$ByteArrayComparator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ArrayUtil$ByteArrayComparator(const ArrayUtil$ByteArrayComparator& obj) : ::java::lang::Object(obj) {}

          jint compare(const JArray< jbyte > &, jint, const JArray< jbyte > &, jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(ArrayUtil$ByteArrayComparator);
        extern PyTypeObject *PY_TYPE(ArrayUtil$ByteArrayComparator);

        class t_ArrayUtil$ByteArrayComparator {
        public:
          PyObject_HEAD
          ArrayUtil$ByteArrayComparator object;
          static PyObject *wrap_Object(const ArrayUtil$ByteArrayComparator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
