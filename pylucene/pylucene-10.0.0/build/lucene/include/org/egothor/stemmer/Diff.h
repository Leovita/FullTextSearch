#ifndef org_egothor_stemmer_Diff_H
#define org_egothor_stemmer_Diff_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class CharSequence;
    class String;
    class StringBuilder;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace egothor {
    namespace stemmer {

      class Diff : public ::java::lang::Object {
       public:
        enum {
          mid_init$_3720c61b0679eb3e,
          mid_init$_94688dd632556392,
          mid_apply_231a31bd88a318d0,
          mid_exec_6829292399b85216,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Diff(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Diff(const Diff& obj) : ::java::lang::Object(obj) {}

        Diff();
        Diff(jint, jint, jint, jint);

        static void apply(const ::java::lang::StringBuilder &, const ::java::lang::CharSequence &);
        ::java::lang::String exec(const ::java::lang::String &, const ::java::lang::String &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace egothor {
    namespace stemmer {
      extern PyType_Def PY_TYPE_DEF(Diff);
      extern PyTypeObject *PY_TYPE(Diff);

      class t_Diff {
      public:
        PyObject_HEAD
        Diff object;
        static PyObject *wrap_Object(const Diff&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
