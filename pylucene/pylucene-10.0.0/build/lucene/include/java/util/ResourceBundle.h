#ifndef java_util_ResourceBundle_H
#define java_util_ResourceBundle_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class ResourceBundle;
    class ResourceBundle$Control;
    class Enumeration;
    class Set;
    class Locale;
  }
  namespace lang {
    class Class;
    class Module;
    class String;
    class ClassLoader;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class ResourceBundle : public ::java::lang::Object {
     public:
      enum {
        mid_init$_e7bdbe105ce1bafb,
        mid_clearCache_e7bdbe105ce1bafb,
        mid_clearCache_d603563f542d31ba,
        mid_containsKey_94f7e759d94961b0,
        mid_getBaseBundleName_e7df854526d67fa3,
        mid_getBundle_fc9141321cfdd888,
        mid_getBundle_61067b8dd1fdf14c,
        mid_getBundle_c29200991f927630,
        mid_getBundle_5898673b079c9315,
        mid_getBundle_a23d3035116ff4dc,
        mid_getBundle_1f69a8c585d20d33,
        mid_getBundle_1af27d11ebdd4df4,
        mid_getBundle_2dbe105dc714de60,
        mid_getKeys_c0dcea0e1246b77b,
        mid_getLocale_d50f7bd45bffb467,
        mid_getObject_a78a91e32cc37c7c,
        mid_getString_fef9c036acf290a9,
        mid_getStringArray_7b34cb521ce5d8ff,
        mid_keySet_79131c6bbcf08916,
        mid_handleGetObject_a78a91e32cc37c7c,
        mid_handleKeySet_79131c6bbcf08916,
        mid_setParent_aaf5ae3d93bf8670,
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
