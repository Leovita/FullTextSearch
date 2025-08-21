#ifndef org_apache_lucene_util_NamedSPILoader_H
#define org_apache_lucene_util_NamedSPILoader_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    class Set;
  }
  namespace lang {
    class Class;
    class String;
    class Iterable;
    class ClassLoader;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class NamedSPILoader$NamedSPI;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class NamedSPILoader : public ::java::lang::Object {
         public:
          enum {
            mid_init$_880cf094c8c20ccb,
            mid_init$_098cf6324232ea4b,
            mid_availableServices_4df174295554d7bd,
            mid_checkServiceName_0d82408c6e55bc30,
            mid_iterator_0db4c76ff7ee995b,
            mid_lookup_636df325f364a7e4,
            mid_reload_7e882e12061eaf38,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NamedSPILoader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NamedSPILoader(const NamedSPILoader& obj) : ::java::lang::Object(obj) {}

          NamedSPILoader(const ::java::lang::Class &);
          NamedSPILoader(const ::java::lang::Class &, const ::java::lang::ClassLoader &);

          ::java::util::Set availableServices() const;
          static void checkServiceName(const ::java::lang::String &);
          ::java::util::Iterator iterator() const;
          ::org::apache::lucene::util::NamedSPILoader$NamedSPI lookup(const ::java::lang::String &) const;
          void reload(const ::java::lang::ClassLoader &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(NamedSPILoader);
        extern PyTypeObject *PY_TYPE(NamedSPILoader);

        class t_NamedSPILoader {
        public:
          PyObject_HEAD
          NamedSPILoader object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_NamedSPILoader *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const NamedSPILoader&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const NamedSPILoader&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
