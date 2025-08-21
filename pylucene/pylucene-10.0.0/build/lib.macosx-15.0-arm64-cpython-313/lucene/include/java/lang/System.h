#ifndef java_lang_System_H
#define java_lang_System_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class InputStream;
    class Console;
    class PrintStream;
  }
  namespace lang {
    class Class;
    class String;
    class System$Logger;
    class SecurityManager;
  }
  namespace util {
    class ResourceBundle;
    class Map;
    class Properties;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class System : public ::java::lang::Object {
     public:
      enum {
        mid_arraycopy_fec3d89004ce3f29,
        mid_clearProperty_cb0eb1432185fc94,
        mid_console_30e99315ab64f5aa,
        mid_currentTimeMillis_16939d9d0a9a9721,
        mid_exit_540b2b23d51b1efd,
        mid_gc_3720c61b0679eb3e,
        mid_getLogger_5d6914fc5410abb9,
        mid_getLogger_4676d2358e160677,
        mid_getProperties_a7afb126bcbe3937,
        mid_getProperty_cb0eb1432185fc94,
        mid_getProperty_6829292399b85216,
        mid_getSecurityManager_f42bf564dfe37d54,
        mid_getenv_f125f26c07a7bec8,
        mid_getenv_cb0eb1432185fc94,
        mid_identityHashCode_657656e6a597f732,
        mid_lineSeparator_09a7afff1868fc5e,
        mid_load_0d82408c6e55bc30,
        mid_loadLibrary_0d82408c6e55bc30,
        mid_mapLibraryName_cb0eb1432185fc94,
        mid_nanoTime_16939d9d0a9a9721,
        mid_runFinalization_3720c61b0679eb3e,
        mid_setErr_f19a9aaf837ad692,
        mid_setIn_37e23ef4361d4c28,
        mid_setOut_f19a9aaf837ad692,
        mid_setProperties_25cb99b45bd0ae02,
        mid_setProperty_6829292399b85216,
        mid_setSecurityManager_c52ac3e5395650f7,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit System(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      System(const System& obj) : ::java::lang::Object(obj) {}

      static ::java::io::PrintStream *err;
      static ::java::io::InputStream *in;
      static ::java::io::PrintStream *out;

      static void arraycopy(const ::java::lang::Object &, jint, const ::java::lang::Object &, jint, jint);
      static ::java::lang::String clearProperty(const ::java::lang::String &);
      static ::java::io::Console console();
      static jlong currentTimeMillis();
      static void exit(jint);
      static void gc();
      static ::java::lang::System$Logger getLogger(const ::java::lang::String &);
      static ::java::lang::System$Logger getLogger(const ::java::lang::String &, const ::java::util::ResourceBundle &);
      static ::java::util::Properties getProperties();
      static ::java::lang::String getProperty(const ::java::lang::String &);
      static ::java::lang::String getProperty(const ::java::lang::String &, const ::java::lang::String &);
      static ::java::lang::SecurityManager getSecurityManager();
      static ::java::util::Map getenv();
      static ::java::lang::String getenv(const ::java::lang::String &);
      static jint identityHashCode(const ::java::lang::Object &);
      static ::java::lang::String lineSeparator();
      static void load(const ::java::lang::String &);
      static void loadLibrary(const ::java::lang::String &);
      static ::java::lang::String mapLibraryName(const ::java::lang::String &);
      static jlong nanoTime();
      static void runFinalization();
      static void setErr(const ::java::io::PrintStream &);
      static void setIn(const ::java::io::InputStream &);
      static void setOut(const ::java::io::PrintStream &);
      static void setProperties(const ::java::util::Properties &);
      static ::java::lang::String setProperty(const ::java::lang::String &, const ::java::lang::String &);
      static void setSecurityManager(const ::java::lang::SecurityManager &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(System);
    extern PyTypeObject *PY_TYPE(System);

    class t_System {
    public:
      PyObject_HEAD
      System object;
      static PyObject *wrap_Object(const System&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
