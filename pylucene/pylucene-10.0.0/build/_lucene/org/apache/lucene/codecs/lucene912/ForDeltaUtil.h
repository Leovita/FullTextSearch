#ifndef org_apache_lucene_codecs_lucene912_ForDeltaUtil_H
#define org_apache_lucene_codecs_lucene912_ForDeltaUtil_H

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

          class ForDeltaUtil : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ForDeltaUtil(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ForDeltaUtil(const ForDeltaUtil& obj) : ::java::lang::Object(obj) {}

            ForDeltaUtil();
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
          extern PyType_Def PY_TYPE_DEF(ForDeltaUtil);
          extern PyTypeObject *PY_TYPE(ForDeltaUtil);

          class t_ForDeltaUtil {
          public:
            PyObject_HEAD
            ForDeltaUtil object;
            static PyObject *wrap_Object(const ForDeltaUtil&);
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
