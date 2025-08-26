#ifndef org_apache_lucene_analysis_CharArrayMap$EntrySet_H
#define org_apache_lucene_analysis_CharArrayMap$EntrySet_H

#include "java/util/AbstractSet.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class CharArrayMap$EntryIterator;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class CharArrayMap$EntrySet : public ::java::util::AbstractSet {
         public:
          enum {
            mid_clear_e7bdbe105ce1bafb,
            mid_contains_00d17418847797d4,
            mid_iterator_450b37aa6a474edc,
            mid_remove_00d17418847797d4,
            mid_size_bd89ce15dad49192,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CharArrayMap$EntrySet(jobject obj) : ::java::util::AbstractSet(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CharArrayMap$EntrySet(const CharArrayMap$EntrySet& obj) : ::java::util::AbstractSet(obj) {}

          void clear() const;
          jboolean contains(const ::java::lang::Object &) const;
          ::org::apache::lucene::analysis::CharArrayMap$EntryIterator iterator() const;
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
      namespace analysis {
        extern PyType_Def PY_TYPE_DEF(CharArrayMap$EntrySet);
        extern PyTypeObject *PY_TYPE(CharArrayMap$EntrySet);

        class t_CharArrayMap$EntrySet {
        public:
          PyObject_HEAD
          CharArrayMap$EntrySet object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_CharArrayMap$EntrySet *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const CharArrayMap$EntrySet&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const CharArrayMap$EntrySet&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
