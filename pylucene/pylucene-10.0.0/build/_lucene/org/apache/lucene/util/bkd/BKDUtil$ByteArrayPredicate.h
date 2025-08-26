#ifndef org_apache_lucene_util_bkd_BKDUtil$ByteArrayPredicate_H
#define org_apache_lucene_util_bkd_BKDUtil$ByteArrayPredicate_H

#include "java/lang/Object.h"

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
        namespace bkd {

          class BKDUtil$ByteArrayPredicate : public ::java::lang::Object {
           public:
            enum {
              mid_test_3a56aac9dfe7a1cf,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BKDUtil$ByteArrayPredicate(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BKDUtil$ByteArrayPredicate(const BKDUtil$ByteArrayPredicate& obj) : ::java::lang::Object(obj) {}

            jboolean test(const JArray< jbyte > &, jint, const JArray< jbyte > &, jint) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace bkd {
          extern PyType_Def PY_TYPE_DEF(BKDUtil$ByteArrayPredicate);
          extern PyTypeObject *PY_TYPE(BKDUtil$ByteArrayPredicate);

          class t_BKDUtil$ByteArrayPredicate {
          public:
            PyObject_HEAD
            BKDUtil$ByteArrayPredicate object;
            static PyObject *wrap_Object(const BKDUtil$ByteArrayPredicate&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
