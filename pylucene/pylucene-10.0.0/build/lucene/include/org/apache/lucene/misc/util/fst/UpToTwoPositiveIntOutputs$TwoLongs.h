#ifndef org_apache_lucene_misc_util_fst_UpToTwoPositiveIntOutputs$TwoLongs_H
#define org_apache_lucene_misc_util_fst_UpToTwoPositiveIntOutputs$TwoLongs_H

#include "java/lang/Record.h"

namespace java {
  namespace lang {
    class String;
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        namespace util {
          namespace fst {

            class UpToTwoPositiveIntOutputs$TwoLongs : public ::java::lang::Record {
             public:
              enum {
                mid_init$_c3501637982a28bc,
                mid_equals_570b5248a6da3ef6,
                mid_first_16939d9d0a9a9721,
                mid_hashCode_20fbf7565993c3d7,
                mid_second_16939d9d0a9a9721,
                mid_toString_09a7afff1868fc5e,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit UpToTwoPositiveIntOutputs$TwoLongs(jobject obj) : ::java::lang::Record(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              UpToTwoPositiveIntOutputs$TwoLongs(const UpToTwoPositiveIntOutputs$TwoLongs& obj) : ::java::lang::Record(obj) {}

              UpToTwoPositiveIntOutputs$TwoLongs(jlong, jlong);

              jboolean equals(const ::java::lang::Object &) const;
              jlong first() const;
              jint hashCode() const;
              jlong second() const;
              ::java::lang::String toString() const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        namespace util {
          namespace fst {
            extern PyType_Def PY_TYPE_DEF(UpToTwoPositiveIntOutputs$TwoLongs);
            extern PyTypeObject *PY_TYPE(UpToTwoPositiveIntOutputs$TwoLongs);

            class t_UpToTwoPositiveIntOutputs$TwoLongs {
            public:
              PyObject_HEAD
              UpToTwoPositiveIntOutputs$TwoLongs object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_UpToTwoPositiveIntOutputs$TwoLongs *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const UpToTwoPositiveIntOutputs$TwoLongs&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const UpToTwoPositiveIntOutputs$TwoLongs&, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
