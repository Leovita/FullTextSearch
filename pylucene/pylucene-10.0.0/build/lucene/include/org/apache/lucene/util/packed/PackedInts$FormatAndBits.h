#ifndef org_apache_lucene_util_packed_PackedInts$FormatAndBits_H
#define org_apache_lucene_util_packed_PackedInts$FormatAndBits_H

#include "java/lang/Record.h"

namespace java {
  namespace lang {
    class Object;
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {
          class PackedInts$Format;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {

          class PackedInts$FormatAndBits : public ::java::lang::Record {
           public:
            enum {
              mid_init$_a821b6ea7fae7b9d,
              mid_bitsPerValue_bd89ce15dad49192,
              mid_equals_00d17418847797d4,
              mid_format_ab5e842417ef5ecc,
              mid_hashCode_bd89ce15dad49192,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PackedInts$FormatAndBits(jobject obj) : ::java::lang::Record(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PackedInts$FormatAndBits(const PackedInts$FormatAndBits& obj) : ::java::lang::Record(obj) {}

            PackedInts$FormatAndBits(const ::org::apache::lucene::util::packed::PackedInts$Format &, jint);

            jint bitsPerValue() const;
            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::util::packed::PackedInts$Format format() const;
            jint hashCode() const;
            ::java::lang::String toString() const;
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
        namespace packed {
          extern PyType_Def PY_TYPE_DEF(PackedInts$FormatAndBits);
          extern PyTypeObject *PY_TYPE(PackedInts$FormatAndBits);

          class t_PackedInts$FormatAndBits {
          public:
            PyObject_HEAD
            PackedInts$FormatAndBits object;
            static PyObject *wrap_Object(const PackedInts$FormatAndBits&);
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
