#ifndef org_apache_lucene_queryparser_ext_Extensions$Pair_H
#define org_apache_lucene_queryparser_ext_Extensions$Pair_H

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
      namespace queryparser {
        namespace ext {

          class Extensions$Pair : public ::java::lang::Record {
           public:
            enum {
              mid_init$_e415f5158314b6c2,
              mid_cud_4819806f62f1360a,
              mid_cur_4819806f62f1360a,
              mid_equals_00d17418847797d4,
              mid_hashCode_bd89ce15dad49192,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Extensions$Pair(jobject obj) : ::java::lang::Record(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Extensions$Pair(const Extensions$Pair& obj) : ::java::lang::Record(obj) {}

            Extensions$Pair(const ::java::lang::Object &, const ::java::lang::Object &);

            ::java::lang::Object cud() const;
            ::java::lang::Object cur() const;
            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            ::java::lang::String toString() const;
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
      namespace queryparser {
        namespace ext {
          extern PyType_Def PY_TYPE_DEF(Extensions$Pair);
          extern PyTypeObject *PY_TYPE(Extensions$Pair);

          class t_Extensions$Pair {
          public:
            PyObject_HEAD
            Extensions$Pair object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_Extensions$Pair *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Extensions$Pair&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Extensions$Pair&, PyTypeObject *, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
