#ifndef org_apache_lucene_util_packed_PackedInts$Mutable_H
#define org_apache_lucene_util_packed_PackedInts$Mutable_H

#include "org/apache/lucene/util/packed/PackedInts$Reader.h"

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
        namespace packed {

          class PackedInts$Mutable : public ::org::apache::lucene::util::packed::PackedInts$Reader {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_clear_3720c61b0679eb3e,
              mid_fill_d02046eceb4997f8,
              mid_getBitsPerValue_20fbf7565993c3d7,
              mid_set_52c53d6e59b40db2,
              mid_set_be281815fcc98213,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PackedInts$Mutable(jobject obj) : ::org::apache::lucene::util::packed::PackedInts$Reader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PackedInts$Mutable(const PackedInts$Mutable& obj) : ::org::apache::lucene::util::packed::PackedInts$Reader(obj) {}

            PackedInts$Mutable();

            void clear() const;
            void fill(jint, jint, jlong) const;
            jint getBitsPerValue() const;
            void set(jint, jlong) const;
            jint set(jint, const JArray< jlong > &, jint, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(PackedInts$Mutable);
          extern PyTypeObject *PY_TYPE(PackedInts$Mutable);

          class t_PackedInts$Mutable {
          public:
            PyObject_HEAD
            PackedInts$Mutable object;
            static PyObject *wrap_Object(const PackedInts$Mutable&);
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
