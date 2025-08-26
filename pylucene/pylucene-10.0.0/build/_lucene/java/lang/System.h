#ifndef java_lang_System_H
#define java_lang_System_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class InputStream;
    class PrintStream;
    class Console;
  }
  namespace util {
    class ResourceBundle;
    class Map;
    class Properties;
  }
  namespace lang {
    class Class;
    class SecurityManager;
    class String;
    class System$Logger;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class System : public ::java::lang::Object {
     public:
      enum {
        mid_arraycopy_42b07476f2db0165,
        mid_clearProperty_fef9c036acf290a9,
        mid_console_68185726df5282e2,
        mid_currentTimeMillis_0f176418e3e16541,
        mid_exit_8226bd0b0fc13dba,
        mid_gc_e7bdbe105ce1bafb,
        mid_getLogger_91600a08bedc67be,
        mid_getLogger_52eaafc0edff089d,
        mid_getProperties_8ffb53f2ce19c064,
        mid_getProperty_fef9c036acf290a9,
        mid_getProperty_3bdb499546f6bd60,
        mid_getSecurityManager_5e7361883c48a407,
        mid_getenv_5004bdf19ed33453,
        mid_getenv_fef9c036acf290a9,
        mid_identityHashCode_3b738b91667a06c2,
        mid_lineSeparator_e7df854526d67fa3,
        mid_load_ee46a189998009d6,
        mid_loadLibrary_ee46a189998009d6,
        mid_mapLibraryName_fef9c036acf290a9,
        mid_nanoTime_0f176418e3e16541,
        mid_runFinalization_e7bdbe105ce1bafb,
        mid_setErr_922e82480ddcbcc4,
        mid_setIn_da97eaa7d893a93a,
        mid_setOut_922e82480ddcbcc4,
        mid_setProperties_54107f629447169c,
        mid_setProperty_3bdb499546f6bd60,
        mid_setSecurityManager_766fb1b4ab285303,
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
