#ifndef org_apache_lucene_search_Multiset_H
#define org_apache_lucene_search_Multiset_H

#include "java/util/AbstractCollection.h"

namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class Multiset : public ::java::util::AbstractCollection {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_add_570b5248a6da3ef6,
            mid_clear_3720c61b0679eb3e,
            mid_contains_570b5248a6da3ef6,
            mid_equals_570b5248a6da3ef6,
            mid_hashCode_20fbf7565993c3d7,
            mid_iterator_0db4c76ff7ee995b,
            mid_remove_570b5248a6da3ef6,
            mid_size_20fbf7565993c3d7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Multiset(jobject obj) : ::java::util::AbstractCollection(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Multiset(const Multiset& obj) : ::java::util::AbstractCollection(obj) {}

          Multiset();

          jboolean add(const ::java::lang::Object &) const;
          void clear() const;
          jboolean contains(const ::java::lang::Object &) const;
          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          ::java::util::Iterator iterator() const;
          jboolean remove(const ::java::lang::Object &) const;
          jint size() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(Multiset);
        extern PyTypeObject *PY_TYPE(Multiset);

        class t_Multiset {
        public:
          PyObject_HEAD
          Multiset object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_Multiset *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const Multiset&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const Multiset&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
