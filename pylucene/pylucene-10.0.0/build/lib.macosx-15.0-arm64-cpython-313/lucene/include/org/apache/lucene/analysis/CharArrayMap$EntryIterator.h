#ifndef org_apache_lucene_analysis_CharArrayMap$EntryIterator_H
#define org_apache_lucene_analysis_CharArrayMap$EntryIterator_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    class Map$Entry;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class CharArrayMap$EntryIterator : public ::java::lang::Object {
         public:
          enum {
            mid_currentValue_5655ed8670534604,
            mid_hasNext_947277eca0748c4e,
            mid_next_158df3d9a50522a0,
            mid_nextKey_77d52ded526199de,
            mid_nextKeyString_09a7afff1868fc5e,
            mid_remove_3720c61b0679eb3e,
            mid_setValue_5fd81664d2d475e1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CharArrayMap$EntryIterator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CharArrayMap$EntryIterator(const CharArrayMap$EntryIterator& obj) : ::java::lang::Object(obj) {}

          ::java::lang::Object currentValue() const;
          jboolean hasNext() const;
          ::java::util::Map$Entry next() const;
          JArray< jchar > nextKey() const;
          ::java::lang::String nextKeyString() const;
          void remove() const;
          ::java::lang::Object setValue(const ::java::lang::Object &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        extern PyType_Def PY_TYPE_DEF(CharArrayMap$EntryIterator);
        extern PyTypeObject *PY_TYPE(CharArrayMap$EntryIterator);

        class t_CharArrayMap$EntryIterator {
        public:
          PyObject_HEAD
          CharArrayMap$EntryIterator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_CharArrayMap$EntryIterator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const CharArrayMap$EntryIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const CharArrayMap$EntryIterator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
