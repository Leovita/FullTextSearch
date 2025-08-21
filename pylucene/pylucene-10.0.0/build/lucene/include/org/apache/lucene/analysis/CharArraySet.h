#ifndef org_apache_lucene_analysis_CharArraySet_H
#define org_apache_lucene_analysis_CharArraySet_H

#include "java/util/AbstractSet.h"

namespace java {
  namespace util {
    class Iterator;
    class Collection;
    class Set;
  }
  namespace lang {
    class Class;
    class String;
    class CharSequence;
    class Object;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class CharArraySet;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class CharArraySet : public ::java::util::AbstractSet {
         public:
          enum {
            mid_init$_2936d2706a18a684,
            mid_init$_39f7975599271fd9,
            mid_add_2d31a52ab195fbb7,
            mid_add_4a13a663b5c11133,
            mid_add_7fa88c8af67956ed,
            mid_add_570b5248a6da3ef6,
            mid_clear_3720c61b0679eb3e,
            mid_contains_7fa88c8af67956ed,
            mid_contains_570b5248a6da3ef6,
            mid_contains_bab09355a5cf0732,
            mid_copy_29b95cb9b6f50821,
            mid_iterator_0db4c76ff7ee995b,
            mid_size_20fbf7565993c3d7,
            mid_toString_09a7afff1868fc5e,
            mid_unmodifiableSet_612aed46db7ddf0e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CharArraySet(jobject obj) : ::java::util::AbstractSet(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CharArraySet(const CharArraySet& obj) : ::java::util::AbstractSet(obj) {}

          static CharArraySet *EMPTY_SET;

          CharArraySet(jint, jboolean);
          CharArraySet(const ::java::util::Collection &, jboolean);

          jboolean add(const JArray< jchar > &) const;
          jboolean add(const ::java::lang::String &) const;
          jboolean add(const ::java::lang::CharSequence &) const;
          jboolean add(const ::java::lang::Object &) const;
          void clear() const;
          jboolean contains(const ::java::lang::CharSequence &) const;
          jboolean contains(const ::java::lang::Object &) const;
          jboolean contains(const JArray< jchar > &, jint, jint) const;
          static CharArraySet copy(const ::java::util::Set &);
          ::java::util::Iterator iterator() const;
          jint size() const;
          ::java::lang::String toString() const;
          static CharArraySet unmodifiableSet(const CharArraySet &);
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
        extern PyType_Def PY_TYPE_DEF(CharArraySet);
        extern PyTypeObject *PY_TYPE(CharArraySet);

        class t_CharArraySet {
        public:
          PyObject_HEAD
          CharArraySet object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_CharArraySet *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const CharArraySet&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const CharArraySet&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
