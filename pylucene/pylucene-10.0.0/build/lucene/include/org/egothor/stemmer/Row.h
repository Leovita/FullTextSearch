#ifndef org_egothor_stemmer_Row_H
#define org_egothor_stemmer_Row_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class DataInput;
    class IOException;
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
          mid_init$_e7bdbe105ce1bafb,
          mid_init$_97ec23eaea7e6222,
          mid_getCells_bd89ce15dad49192,
          mid_getCellsPnt_bd89ce15dad49192,
          mid_getCellsVal_bd89ce15dad49192,
          mid_getCmd_71dc1db9b5187263,
          mid_getCnt_71dc1db9b5187263,
          mid_getRef_71dc1db9b5187263,
          mid_print_922e82480ddcbcc4,
          mid_setCmd_3d99d4ca27105ade,
          mid_setRef_3d99d4ca27105ade,
          mid_store_5ebb39b7772e6a1c,
          mid_uniformCmd_34394399396c7e21,
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
