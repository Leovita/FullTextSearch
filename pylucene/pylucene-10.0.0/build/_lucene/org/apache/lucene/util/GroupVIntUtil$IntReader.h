#ifndef org_apache_lucene_util_GroupVIntUtil$IntReader_H
#define org_apache_lucene_util_GroupVIntUtil$IntReader_H

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

        class GroupVIntUtil$IntReader : public ::java::lang::Object {
         public:
          enum {
            mid_read_35c872f03f347c10,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GroupVIntUtil$IntReader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GroupVIntUtil$IntReader(const GroupVIntUtil$IntReader& obj) : ::java::lang::Object(obj) {}

          jint read(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(GroupVIntUtil$IntReader);
        extern PyTypeObject *PY_TYPE(GroupVIntUtil$IntReader);

        class t_GroupVIntUtil$IntReader {
        public:
          PyObject_HEAD
          GroupVIntUtil$IntReader object;
          static PyObject *wrap_Object(const GroupVIntUtil$IntReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
