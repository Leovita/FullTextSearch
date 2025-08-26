#ifndef org_apache_lucene_util_WeakIdentityMap_H
#define org_apache_lucene_util_WeakIdentityMap_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class WeakIdentityMap;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class WeakIdentityMap : public ::java::lang::Object {
         public:
          enum {
            mid_clear_e7bdbe105ce1bafb,
            mid_containsKey_00d17418847797d4,
            mid_get_e2c45b124c12f4ec,
            mid_isEmpty_9aa4f33e82ea333f,
            mid_keyIterator_c7985fafdcf40e83,
            mid_newConcurrentHashMap_9bf4e76d84db9efb,
            mid_newConcurrentHashMap_50029a2e9515a2e0,
            mid_newHashMap_9bf4e76d84db9efb,
            mid_newHashMap_50029a2e9515a2e0,
            mid_put_b3b175dfe26d2c44,
            mid_reap_e7bdbe105ce1bafb,
            mid_remove_e2c45b124c12f4ec,
            mid_size_bd89ce15dad49192,
            mid_valueIterator_c7985fafdcf40e83,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit WeakIdentityMap(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          WeakIdentityMap(const WeakIdentityMap& obj) : ::java::lang::Object(obj) {}

          void clear() const;
          jboolean containsKey(const ::java::lang::Object &) const;
          ::java::lang::Object get(const ::java::lang::Object &) const;
          jboolean isEmpty() const;
          ::java::util::Iterator keyIterator() const;
          static WeakIdentityMap newConcurrentHashMap();
          static WeakIdentityMap newConcurrentHashMap(jboolean);
          static WeakIdentityMap newHashMap();
          static WeakIdentityMap newHashMap(jboolean);
          ::java::lang::Object put(const ::java::lang::Object &, const ::java::lang::Object &) const;
          void reap() const;
          ::java::lang::Object remove(const ::java::lang::Object &) const;
          jint size() const;
          ::java::util::Iterator valueIterator() const;
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
        extern PyType_Def PY_TYPE_DEF(WeakIdentityMap);
        extern PyTypeObject *PY_TYPE(WeakIdentityMap);

        class t_WeakIdentityMap {
        public:
          PyObject_HEAD
          WeakIdentityMap object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_WeakIdentityMap *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const WeakIdentityMap&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const WeakIdentityMap&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
