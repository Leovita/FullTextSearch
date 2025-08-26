#ifndef org_apache_lucene_util_Bits$MatchAllBits_H
#define org_apache_lucene_util_Bits$MatchAllBits_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class Bits$MatchAllBits : public ::java::lang::Object {
         public:
          enum {
            mid_init$_8226bd0b0fc13dba,
            mid_get_a8281eb3b9d9672d,
            mid_length_bd89ce15dad49192,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Bits$MatchAllBits(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Bits$MatchAllBits(const Bits$MatchAllBits& obj) : ::java::lang::Object(obj) {}

          Bits$MatchAllBits(jint);

          jboolean get(jint) const;
          jint length() const;
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
        extern PyType_Def PY_TYPE_DEF(Bits$MatchAllBits);
        extern PyTypeObject *PY_TYPE(Bits$MatchAllBits);

        class t_Bits$MatchAllBits {
        public:
          PyObject_HEAD
          Bits$MatchAllBits object;
          static PyObject *wrap_Object(const Bits$MatchAllBits&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
