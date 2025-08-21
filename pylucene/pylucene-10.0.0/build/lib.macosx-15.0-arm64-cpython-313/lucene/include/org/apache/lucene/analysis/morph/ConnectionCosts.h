#ifndef org_apache_lucene_analysis_morph_ConnectionCosts_H
#define org_apache_lucene_analysis_morph_ConnectionCosts_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace morph {

          class ConnectionCosts : public ::java::lang::Object {
           public:
            enum {
              mid_get_7f733b5d08bb5ec4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ConnectionCosts(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ConnectionCosts(const ConnectionCosts& obj) : ::java::lang::Object(obj) {}

            static ::java::lang::String *FILENAME_SUFFIX;

            jint get(jint, jint) const;
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
      namespace analysis {
        namespace morph {
          extern PyType_Def PY_TYPE_DEF(ConnectionCosts);
          extern PyTypeObject *PY_TYPE(ConnectionCosts);

          class t_ConnectionCosts {
          public:
            PyObject_HEAD
            ConnectionCosts object;
            static PyObject *wrap_Object(const ConnectionCosts&);
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
