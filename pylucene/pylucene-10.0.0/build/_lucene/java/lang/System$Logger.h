#ifndef java_lang_System$Logger_H
#define java_lang_System$Logger_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class ResourceBundle;
    namespace function {
      class Supplier;
    }
  }
  namespace lang {
    class Class;
    class Throwable;
    class System$Logger$Level;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class System$Logger : public ::java::lang::Object {
     public:
      enum {
        mid_getName_e7df854526d67fa3,
        mid_isLoggable_31f3c3bf1de912fd,
        mid_log_84a658d7c94490b6,
        mid_log_5c3f166d4a66fe6e,
        mid_log_a6ca503818a9ba3f,
        mid_log_212e383ae4f7cc58,
        mid_log_1da39ff37c6fced9,
        mid_log_2055de2e5c075f21,
        mid_log_6b7a4e20b899cc1d,
        mid_log_9bf00a1d4ba906e2,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit System$Logger(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      System$Logger(const System$Logger& obj) : ::java::lang::Object(obj) {}

      ::java::lang::String getName() const;
      jboolean isLoggable(const ::java::lang::System$Logger$Level &) const;
      void log(const ::java::lang::System$Logger$Level &, const ::java::lang::String &) const;
      void log(const ::java::lang::System$Logger$Level &, const ::java::lang::Object &) const;
      void log(const ::java::lang::System$Logger$Level &, const ::java::util::function::Supplier &) const;
      void log(const ::java::lang::System$Logger$Level &, const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      void log(const ::java::lang::System$Logger$Level &, const ::java::lang::String &, const ::java::lang::Throwable &) const;
      void log(const ::java::lang::System$Logger$Level &, const ::java::util::function::Supplier &, const ::java::lang::Throwable &) const;
      void log(const ::java::lang::System$Logger$Level &, const ::java::util::ResourceBundle &, const ::java::lang::String &, const JArray< ::java::lang::Object > &) const;
      void log(const ::java::lang::System$Logger$Level &, const ::java::util::ResourceBundle &, const ::java::lang::String &, const ::java::lang::Throwable &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(System$Logger);
    extern PyTypeObject *PY_TYPE(System$Logger);

    class t_System$Logger {
    public:
      PyObject_HEAD
      System$Logger object;
      static PyObject *wrap_Object(const System$Logger&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
