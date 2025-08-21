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
    class Object;
    class String;
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
              mid_init$_919de9d944d7e37b,
              mid_count_16939d9d0a9a9721,
              mid_equals_570b5248a6da3ef6,
              mid_hashCode_20fbf7565993c3d7,
              mid_start_16939d9d0a9a9721,
              mid_toString_09a7afff1868fc5e,
              mid_writer_90fde64c95bbc690,
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
