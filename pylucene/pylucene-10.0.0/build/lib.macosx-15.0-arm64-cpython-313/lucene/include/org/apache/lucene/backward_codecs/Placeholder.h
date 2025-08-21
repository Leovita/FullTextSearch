#ifndef org_apache_lucene_backward_codecs_Placeholder_H
#define org_apache_lucene_backward_codecs_Placeholder_H

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
      namespace backward_codecs {

        class Placeholder : public ::java::lang::Object {
         public:

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Placeholder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Placeholder(const Placeholder& obj) : ::java::lang::Object(obj) {}
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        extern PyType_Def PY_TYPE_DEF(Placeholder);
        extern PyTypeObject *PY_TYPE(Placeholder);

        class t_Placeholder {
        public:
          PyObject_HEAD
          Placeholder object;
          static PyObject *wrap_Object(const Placeholder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
