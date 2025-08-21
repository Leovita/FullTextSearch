#ifndef org_apache_lucene_codecs_lucene912_ForUtil_H
#define org_apache_lucene_codecs_lucene912_ForUtil_H

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
      namespace codecs {
        namespace lucene912 {

          class ForUtil : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ForUtil(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ForUtil(const ForUtil& obj) : ::java::lang::Object(obj) {}

            static jint BLOCK_SIZE;

            ForUtil();
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene912 {
          extern PyType_Def PY_TYPE_DEF(ForUtil);
          extern PyTypeObject *PY_TYPE(ForUtil);

          class t_ForUtil {
          public:
            PyObject_HEAD
            ForUtil object;
            static PyObject *wrap_Object(const ForUtil&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
