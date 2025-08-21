#ifndef java_util_ResourceBundle$Control_H
#define java_util_ResourceBundle$Control_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class IllegalAccessException;
    class Class;
    class String;
    class InstantiationException;
    class ClassLoader;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class List;
    class ResourceBundle$Control;
    class Locale;
    class ResourceBundle;
  }
}
template<class T> class JArray;

namespace java {
  namespace util {

    class ResourceBundle$Control : public ::java::lang::Object {
     public:
      enum {
        mid_getCandidateLocales_3bfc7e711589f6f5,
        mid_getControl_2639f823eb4ad9ec,
        mid_getFallbackLocale_9fc01d8af49e6065,
        mid_getFormats_8eaa545bb5a79de3,
        mid_getNoFallbackControl_2639f823eb4ad9ec,
        mid_getTimeToLive_cabadfc02bc0aa81,
        mid_needsReload_d8cb60ac8cdbe44b,
        mid_newBundle_44677567879aab6b,
        mid_toBundleName_af1e5f9b8f6d70b7,
        mid_toResourceName_6829292399b85216,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit ResourceBundle$Control(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      ResourceBundle$Control(const ResourceBundle$Control& obj) : ::java::lang::Object(obj) {}

      static ::java::util::List *FORMAT_CLASS;
      static ::java::util::List *FORMAT_DEFAULT;
      static ::java::util::List *FORMAT_PROPERTIES;
      static jlong TTL_DONT_CACHE;
      static jlong TTL_NO_EXPIRATION_CONTROL;

      ::java::util::List getCandidateLocales(const ::java::lang::String &, const ::java::util::Locale &) const;
      static ResourceBundle$Control getControl(const ::java::util::List &);
      ::java::util::Locale getFallbackLocale(const ::java::lang::String &, const ::java::util::Locale &) const;
      ::java::util::List getFormats(const ::java::lang::String &) const;
      static ResourceBundle$Control getNoFallbackControl(const ::java::util::List &);
      jlong getTimeToLive(const ::java::lang::String &, const ::java::util::Locale &) const;
      jboolean needsReload(const ::java::lang::String &, const ::java::util::Locale &, const ::java::lang::String &, const ::java::lang::ClassLoader &, const ::java::util::ResourceBundle &, jlong) const;
      ::java::util::ResourceBundle newBundle(const ::java::lang::String &, const ::java::util::Locale &, const ::java::lang::String &, const ::java::lang::ClassLoader &, jboolean) const;
      ::java::lang::String toBundleName(const ::java::lang::String &, const ::java::util::Locale &) const;
      ::java::lang::String toResourceName(const ::java::lang::String &, const ::java::lang::String &) const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace util {
    extern PyType_Def PY_TYPE_DEF(ResourceBundle$Control);
    extern PyTypeObject *PY_TYPE(ResourceBundle$Control);

    class t_ResourceBundle$Control {
    public:
      PyObject_HEAD
      ResourceBundle$Control object;
      static PyObject *wrap_Object(const ResourceBundle$Control&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
