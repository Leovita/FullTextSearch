#ifndef org_apache_lucene_util_fst_Util$Result_H
#define org_apache_lucene_util_fst_Util$Result_H

#include "java/lang/Record.h"

namespace java {
  namespace lang {
    class String;
    class Object;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class IntsRef;
      }
    }
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
              mid_init$_0a44f2cd64b1f893,
              mid_equals_570b5248a6da3ef6,
              mid_hashCode_20fbf7565993c3d7,
              mid_input_11a210fd9b2b21bd,
              mid_output_5655ed8670534604,
              mid_toString_09a7afff1868fc5e,
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
