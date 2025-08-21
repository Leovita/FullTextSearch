#ifndef org_egothor_stemmer_Row_H
#define org_egothor_stemmer_Row_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class DataInput;
    class DataOutput;
    class PrintStream;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace egothor {
    namespace stemmer {

      class Row : public ::java::lang::Object {
       public:
        enum {
          mid_init$_3720c61b0679eb3e,
          mid_init$_8ffc0b64a085f7b2,
          mid_getCells_20fbf7565993c3d7,
          mid_getCellsPnt_20fbf7565993c3d7,
          mid_getCellsVal_20fbf7565993c3d7,
          mid_getCmd_99c33562a336f6e9,
          mid_getCnt_99c33562a336f6e9,
          mid_getRef_99c33562a336f6e9,
          mid_print_f19a9aaf837ad692,
          mid_setCmd_4888b010066312ee,
          mid_setRef_4888b010066312ee,
          mid_store_fe9bf8370403deab,
          mid_uniformCmd_42933a2c511fc642,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Row(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Row(const Row& obj) : ::java::lang::Object(obj) {}

        Row();
        Row(const ::java::io::DataInput &);

        jint getCells() const;
        jint getCellsPnt() const;
        jint getCellsVal() const;
        jint getCmd(jchar) const;
        jint getCnt(jchar) const;
        jint getRef(jchar) const;
        void print(const ::java::io::PrintStream &) const;
        void setCmd(jchar, jint) const;
        void setRef(jchar, jint) const;
        void store(const ::java::io::DataOutput &) const;
        jint uniformCmd(jboolean) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace egothor {
    namespace stemmer {
      extern PyType_Def PY_TYPE_DEF(Row);
      extern PyTypeObject *PY_TYPE(Row);

      class t_Row {
      public:
        PyObject_HEAD
        Row object;
        static PyObject *wrap_Object(const Row&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
