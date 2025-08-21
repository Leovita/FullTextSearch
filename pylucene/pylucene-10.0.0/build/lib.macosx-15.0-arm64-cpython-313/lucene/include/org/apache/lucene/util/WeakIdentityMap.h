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
            mid_clear_3720c61b0679eb3e,
            mid_containsKey_570b5248a6da3ef6,
            mid_get_5fd81664d2d475e1,
            mid_isEmpty_947277eca0748c4e,
            mid_keyIterator_0db4c76ff7ee995b,
            mid_newConcurrentHashMap_cc621e5cb98efe03,
            mid_newConcurrentHashMap_63772f2faa0d8245,
            mid_newHashMap_cc621e5cb98efe03,
            mid_newHashMap_63772f2faa0d8245,
            mid_put_243089e4ee289db6,
            mid_reap_3720c61b0679eb3e,
            mid_remove_5fd81664d2d475e1,
            mid_size_20fbf7565993c3d7,
            mid_valueIterator_0db4c76ff7ee995b,
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
