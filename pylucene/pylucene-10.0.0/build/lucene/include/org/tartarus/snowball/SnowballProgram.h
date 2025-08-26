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
          mid_getCurrent_e7df854526d67fa3,
          mid_getCurrentBuffer_e5926045e1917c62,
          mid_getCurrentBufferLength_bd89ce15dad49192,
          mid_setCurrent_ee46a189998009d6,
          mid_setCurrent_495b1505e3aef671,
          mid_slice_check_e7bdbe105ce1bafb,
          mid_replace_s_7d697cec0b0c401f,
          mid_copy_from_1c4b13e04f761b87,
          mid_in_grouping_b_355feee9125d4fb1,
          mid_out_grouping_b_355feee9125d4fb1,
          mid_slice_to_5dd6a2d608961d5f,
          mid_assign_to_5dd6a2d608961d5f,
          mid_find_among_b_52254d4e51db6d8f,
          mid_slice_del_e7bdbe105ce1bafb,
          mid_eq_s_b_966cbeda474fd26b,
          mid_in_grouping_355feee9125d4fb1,
          mid_out_grouping_355feee9125d4fb1,
          mid_eq_s_966cbeda474fd26b,
          mid_find_among_52254d4e51db6d8f,
          mid_slice_from_fe2ab7d27aa3fe1a,
          mid_insert_76846fc2b346a219,
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
