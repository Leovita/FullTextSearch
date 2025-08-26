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
    class Object;
    class Class;
    class String;
    class CharSequence;
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
            mid_init$_a0fed0a2cd38e7b1,
            mid_init$_ee52fd0fe2d8050e,
            mid_add_a09cbc69488c768e,
            mid_add_94f7e759d94961b0,
            mid_add_966cbeda474fd26b,
            mid_add_00d17418847797d4,
            mid_clear_e7bdbe105ce1bafb,
            mid_contains_966cbeda474fd26b,
            mid_contains_00d17418847797d4,
            mid_contains_355feee9125d4fb1,
            mid_copy_c06f67df5abea58a,
            mid_iterator_c7985fafdcf40e83,
            mid_size_bd89ce15dad49192,
            mid_toString_e7df854526d67fa3,
            mid_unmodifiableSet_c15d20d1555020d0,
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
