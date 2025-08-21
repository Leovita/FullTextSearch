#ifndef org_apache_lucene_util_TermAndVector_H
#define org_apache_lucene_util_TermAndVector_H

#include "java/lang/Record.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class TermAndVector;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class Object;
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
            mid_init$_1e52a3bd34207bb8,
            mid_equals_570b5248a6da3ef6,
            mid_hashCode_20fbf7565993c3d7,
            mid_normalizeVector_e4adbcdf45bf3a19,
            mid_size_20fbf7565993c3d7,
            mid_term_9740fddd1c7df148,
            mid_toString_09a7afff1868fc5e,
            mid_vector_808165844ea67079,
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
