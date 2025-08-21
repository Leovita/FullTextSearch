#ifndef org_apache_lucene_util_MapOfSets_H
#define org_apache_lucene_util_MapOfSets_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
    class Set;
    class Map;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class MapOfSets : public ::java::lang::Object {
         public:
          enum {
            mid_init$_79ba0f5a7d05e623,
            mid_getMap_f125f26c07a7bec8,
            mid_put_40855b2159b37f04,
            mid_putAll_8629ff5a87421f07,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MapOfSets(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MapOfSets(const MapOfSets& obj) : ::java::lang::Object(obj) {}

          MapOfSets(const ::java::util::Map &);

          ::java::util::Map getMap() const;
          jint put(const ::java::lang::Object &, const ::java::lang::Object &) const;
          jint putAll(const ::java::lang::Object &, const ::java::util::Collection &) const;
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
        extern PyType_Def PY_TYPE_DEF(MapOfSets);
        extern PyTypeObject *PY_TYPE(MapOfSets);

        class t_MapOfSets {
        public:
          PyObject_HEAD
          MapOfSets object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_MapOfSets *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const MapOfSets&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const MapOfSets&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
