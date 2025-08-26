#ifndef org_apache_lucene_util_fst_Util$Result_H
#define org_apache_lucene_util_fst_Util$Result_H

#include "java/lang/Record.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class IntsRef;
      }
    }
  }
}
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
      namespace util {
        namespace fst {

          class Util$Result : public ::java::lang::Record {
           public:
            enum {
              mid_init$_b27e2647f98cd7bb,
              mid_equals_00d17418847797d4,
              mid_hashCode_bd89ce15dad49192,
              mid_input_467dd1d064587a13,
              mid_output_4819806f62f1360a,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Util$Result(jobject obj) : ::java::lang::Record(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Util$Result(const Util$Result& obj) : ::java::lang::Record(obj) {}

            Util$Result(const ::org::apache::lucene::util::IntsRef &, const ::java::lang::Object &);

            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            ::org::apache::lucene::util::IntsRef input() const;
            ::java::lang::Object output() const;
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
      namespace util {
        namespace fst {
          extern PyType_Def PY_TYPE_DEF(Util$Result);
          extern PyTypeObject *PY_TYPE(Util$Result);

          class t_Util$Result {
          public:
            PyObject_HEAD
            Util$Result object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Util$Result *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Util$Result&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Util$Result&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
