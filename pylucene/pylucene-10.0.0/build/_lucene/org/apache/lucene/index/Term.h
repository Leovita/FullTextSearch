#ifndef org_apache_lucene_index_Term_H
#define org_apache_lucene_index_Term_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        class BytesRef;
        class BytesRefBuilder;
      }
      namespace index {
        class Term;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class Term : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0d82408c6e55bc30,
            mid_init$_3d104da0b5c75e64,
            mid_init$_45ab94acb6ed83e4,
            mid_init$_cf7f0e3e4b9b15a5,
            mid_bytes_9740fddd1c7df148,
            mid_compareTo_a72eb531d55acb0c,
            mid_equals_570b5248a6da3ef6,
            mid_field_09a7afff1868fc5e,
            mid_hashCode_20fbf7565993c3d7,
            mid_ramBytesUsed_16939d9d0a9a9721,
            mid_text_09a7afff1868fc5e,
            mid_toString_09a7afff1868fc5e,
            mid_toString_3f93dbca6227d6f8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Term(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Term(const Term& obj) : ::java::lang::Object(obj) {}

          Term(const ::java::lang::String &);
          Term(const ::java::lang::String &, const ::java::lang::String &);
          Term(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &);
          Term(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRefBuilder &);

          ::org::apache::lucene::util::BytesRef bytes() const;
          jint compareTo(const Term &) const;
          jboolean equals(const ::java::lang::Object &) const;
          ::java::lang::String field() const;
          jint hashCode() const;
          jlong ramBytesUsed() const;
          ::java::lang::String text() const;
          ::java::lang::String toString() const;
          static ::java::lang::String toString(const ::org::apache::lucene::util::BytesRef &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(Term);
        extern PyTypeObject *PY_TYPE(Term);

        class t_Term {
        public:
          PyObject_HEAD
          Term object;
          static PyObject *wrap_Object(const Term&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
