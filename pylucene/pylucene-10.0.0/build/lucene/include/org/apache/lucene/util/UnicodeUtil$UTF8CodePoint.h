#ifndef org_apache_lucene_util_UnicodeUtil$UTF8CodePoint_H
#define org_apache_lucene_util_UnicodeUtil$UTF8CodePoint_H

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

        class UnicodeUtil$UTF8CodePoint : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            max_mid
          };

          enum {
            fid_codePoint,
            fid_numBytes,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit UnicodeUtil$UTF8CodePoint(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          UnicodeUtil$UTF8CodePoint(const UnicodeUtil$UTF8CodePoint& obj) : ::java::lang::Object(obj) {}

          jint _get_codePoint() const;
          void _set_codePoint(jint) const;
          jint _get_numBytes() const;
          void _set_numBytes(jint) const;

          UnicodeUtil$UTF8CodePoint();
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
        extern PyType_Def PY_TYPE_DEF(UnicodeUtil$UTF8CodePoint);
        extern PyTypeObject *PY_TYPE(UnicodeUtil$UTF8CodePoint);

        class t_UnicodeUtil$UTF8CodePoint {
        public:
          PyObject_HEAD
          UnicodeUtil$UTF8CodePoint object;
          static PyObject *wrap_Object(const UnicodeUtil$UTF8CodePoint&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
