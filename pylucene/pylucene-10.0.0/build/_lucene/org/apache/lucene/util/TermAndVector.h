#ifndef org_apache_lucene_util_TermAndVector_H
#define org_apache_lucene_util_TermAndVector_H

#include "java/lang/Record.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class TermAndVector;
        class BytesRef;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class TermAndVector : public ::java::lang::Record {
         public:
          enum {
            mid_init$_1e0df923f96dba0b,
            mid_equals_00d17418847797d4,
            mid_hashCode_bd89ce15dad49192,
            mid_normalizeVector_523f3026f4dd3cc1,
            mid_size_bd89ce15dad49192,
            mid_term_adbedbc1fa61c358,
            mid_toString_e7df854526d67fa3,
            mid_vector_67d89dc3894661ff,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermAndVector(jobject obj) : ::java::lang::Record(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TermAndVector(const TermAndVector& obj) : ::java::lang::Record(obj) {}

          TermAndVector(const ::org::apache::lucene::util::BytesRef &, const JArray< jfloat > &);

          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          TermAndVector normalizeVector() const;
          jint size() const;
          ::org::apache::lucene::util::BytesRef term() const;
          ::java::lang::String toString() const;
          JArray< jfloat > vector() const;
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
        extern PyType_Def PY_TYPE_DEF(TermAndVector);
        extern PyTypeObject *PY_TYPE(TermAndVector);

        class t_TermAndVector {
        public:
          PyObject_HEAD
          TermAndVector object;
          static PyObject *wrap_Object(const TermAndVector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
