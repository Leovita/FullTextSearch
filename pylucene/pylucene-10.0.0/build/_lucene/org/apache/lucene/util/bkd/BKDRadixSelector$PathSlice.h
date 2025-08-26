#ifndef org_apache_lucene_util_bkd_BKDRadixSelector$PathSlice_H
#define org_apache_lucene_util_bkd_BKDRadixSelector$PathSlice_H

#include "java/lang/Record.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace bkd {
          class PointWriter;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace bkd {

          class BKDRadixSelector$PathSlice : public ::java::lang::Record {
           public:
            enum {
              mid_init$_d6fff94b91db5c34,
              mid_count_0f176418e3e16541,
              mid_equals_00d17418847797d4,
              mid_hashCode_bd89ce15dad49192,
              mid_start_0f176418e3e16541,
              mid_toString_e7df854526d67fa3,
              mid_writer_668fbcc85520c4ef,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BKDRadixSelector$PathSlice(jobject obj) : ::java::lang::Record(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BKDRadixSelector$PathSlice(const BKDRadixSelector$PathSlice& obj) : ::java::lang::Record(obj) {}

            BKDRadixSelector$PathSlice(const ::org::apache::lucene::util::bkd::PointWriter &, jlong, jlong);

            jlong count() const;
            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            jlong start() const;
            ::java::lang::String toString() const;
            ::org::apache::lucene::util::bkd::PointWriter writer() const;
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
          extern PyType_Def PY_TYPE_DEF(BKDRadixSelector$PathSlice);
          extern PyTypeObject *PY_TYPE(BKDRadixSelector$PathSlice);

          class t_BKDRadixSelector$PathSlice {
          public:
            PyObject_HEAD
            BKDRadixSelector$PathSlice object;
            static PyObject *wrap_Object(const BKDRadixSelector$PathSlice&);
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
