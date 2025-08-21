#ifndef java_util_ResourceBundle_H
#define java_util_ResourceBundle_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class Module;
    class ClassLoader;
  }
  namespace util {
    class Set;
    class ResourceBundle$Control;
    class Locale;
    class ResourceBundle;
    class Enumeration;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class ResourceBundle : public ::java::lang::Object {
     public:
      enum {
        mid_init$_3720c61b0679eb3e,
        mid_clearCache_3720c61b0679eb3e,
        mid_clearCache_7e882e12061eaf38,
        mid_containsKey_4a13a663b5c11133,
        mid_getBaseBundleName_09a7afff1868fc5e,
        mid_getBundle_ca7d2e895557fd77,
        mid_getBundle_bf5d2701dc50dc18,
        mid_getBundle_2b6b5c29aeafc789,
        mid_getBundle_868c658fb9db3af3,
        mid_getBundle_d173b083d88f5e2f,
        mid_getBundle_ca332eeec8697c98,
        mid_getBundle_6d4a7f38198157a2,
        mid_getBundle_3c5525de36a69bc3,
        mid_getKeys_a2a5e131c5f66817,
        mid_getLocale_319fd40ee3061260,
        mid_getObject_e5cf973b773e2999,
        mid_getString_cb0eb1432185fc94,
        mid_getStringArray_a06e92f371939b0b,
        mid_keySet_4df174295554d7bd,
        mid_handleGetObject_e5cf973b773e2999,
        mid_handleKeySet_4df174295554d7bd,
        mid_setParent_396479f582461047,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ResourceBundle(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ResourceBundle(const ResourceBundle& obj) : ::java::lang::Object(obj) {}

      ResourceBundle();

      static void clearCache();
      static void clearCache(const ::java::lang::ClassLoader &);
      jboolean containsKey(const ::java::lang::String &) const;
      ::java::lang::String getBaseBundleName() const;
      static ResourceBundle getBundle(const ::java::lang::String &);
      static ResourceBundle getBundle(const ::java::lang::String &, const ::java::lang::Module &);
      static ResourceBundle getBundle(const ::java::lang::String &, const ::java::util::Locale &);
      static ResourceBundle getBundle(const ::java::lang::String &, const ::java::util::ResourceBundle$Control &);
      static ResourceBundle getBundle(const ::java::lang::String &, const ::java::util::Locale &, const ::java::lang::ClassLoader &);
      static ResourceBundle getBundle(const ::java::lang::String &, const ::java::util::Locale &, const ::java::lang::Module &);
      static ResourceBundle getBundle(const ::java::lang::String &, const ::java::util::Locale &, const ::java::util::ResourceBundle$Control &);
      static ResourceBundle getBundle(const ::java::lang::String &, const ::java::util::Locale &, const ::java::lang::ClassLoader &, const ::java::util::ResourceBundle$Control &);
      ::java::util::Enumeration getKeys() const;
      ::java::util::Locale getLocale() const;
      ::java::lang::Object getObject(const ::java::lang::String &) const;
      ::java::lang::String getString(const ::java::lang::String &) const;
      JArray< ::java::lang::String > getStringArray(const ::java::lang::String &) const;
      ::java::util::Set keySet() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(ResourceBundle);
    extern PyTypeObject *PY_TYPE(ResourceBundle);

    class t_ResourceBundle {
    public:
      PyObject_HEAD
      ResourceBundle object;
      static PyObject *wrap_Object(const ResourceBundle&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
