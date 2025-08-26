#ifndef org_apache_lucene_index_Term_H
#define org_apache_lucene_index_Term_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class Comparable;
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
            mid_init$_ee46a189998009d6,
            mid_init$_0dd012a11c3f389b,
            mid_init$_a9a308f8485c52c9,
            mid_init$_14bc43f7e946f93c,
            mid_bytes_adbedbc1fa61c358,
            mid_compareTo_c8503de727553d83,
            mid_equals_00d17418847797d4,
            mid_field_e7df854526d67fa3,
            mid_hashCode_bd89ce15dad49192,
            mid_ramBytesUsed_0f176418e3e16541,
            mid_text_e7df854526d67fa3,
            mid_toString_e7df854526d67fa3,
            mid_toString_0f852bf1d5588bee,
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
