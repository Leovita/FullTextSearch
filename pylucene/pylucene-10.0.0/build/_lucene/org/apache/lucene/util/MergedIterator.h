#ifndef org_apache_lucene_util_MergedIterator_H
#define org_apache_lucene_util_MergedIterator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
    class Comparable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class MergedIterator : public ::java::lang::Object {
         public:
          enum {
            mid_init$_10bdfd2779a9ab18,
            mid_init$_53b2570b073c92f9,
            mid_hasNext_947277eca0748c4e,
            mid_next_68874aa6427ef5ac,
            mid_remove_3720c61b0679eb3e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MergedIterator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MergedIterator(const MergedIterator& obj) : ::java::lang::Object(obj) {}

          MergedIterator(const JArray< ::java::util::Iterator > &);
          MergedIterator(jboolean, const JArray< ::java::util::Iterator > &);

          jboolean hasNext() const;
          ::java::lang::Comparable next() const;
          void remove() const;
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
        extern PyType_Def PY_TYPE_DEF(MergedIterator);
        extern PyTypeObject *PY_TYPE(MergedIterator);

        class t_MergedIterator {
        public:
          PyObject_HEAD
          MergedIterator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_MergedIterator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const MergedIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const MergedIterator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
