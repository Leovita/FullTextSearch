#ifndef org_tartarus_snowball_SnowballProgram_H
#define org_tartarus_snowball_SnowballProgram_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Serializable;
  }
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace tartarus {
    namespace snowball {

      class SnowballProgram : public ::java::lang::Object {
       public:
        enum {
          mid_getCurrent_09a7afff1868fc5e,
          mid_getCurrentBuffer_77d52ded526199de,
          mid_getCurrentBufferLength_20fbf7565993c3d7,
          mid_setCurrent_0d82408c6e55bc30,
          mid_setCurrent_e06ffef1ed339658,
          mid_in_grouping_bab09355a5cf0732,
          mid_eq_s_7fa88c8af67956ed,
          mid_slice_from_5ed8eb2e3024c663,
          mid_find_among_4637e54e6465b40c,
          mid_out_grouping_bab09355a5cf0732,
          mid_find_among_b_4637e54e6465b40c,
          mid_eq_s_b_7fa88c8af67956ed,
          mid_slice_del_3720c61b0679eb3e,
          mid_in_grouping_b_bab09355a5cf0732,
          mid_slice_check_3720c61b0679eb3e,
          mid_replace_s_528149817cb616d0,
          mid_copy_from_d4d258d0ae1e2c82,
          mid_out_grouping_b_bab09355a5cf0732,
          mid_slice_to_86d6edf9953c2f53,
          mid_assign_to_86d6edf9953c2f53,
          mid_insert_11e6582d7d54fcfb,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit SnowballProgram(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        SnowballProgram(const SnowballProgram& obj) : ::java::lang::Object(obj) {}

        ::java::lang::String getCurrent() const;
        JArray< jchar > getCurrentBuffer() const;
        jint getCurrentBufferLength() const;
        void setCurrent(const ::java::lang::String &) const;
        void setCurrent(const JArray< jchar > &, jint) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace tartarus {
    namespace snowball {
      extern PyType_Def PY_TYPE_DEF(SnowballProgram);
      extern PyTypeObject *PY_TYPE(SnowballProgram);

      class t_SnowballProgram {
      public:
        PyObject_HEAD
        SnowballProgram object;
        static PyObject *wrap_Object(const SnowballProgram&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
