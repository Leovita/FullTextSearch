#ifndef org_apache_lucene_util_packed_PackedInts$Reader_H
#define org_apache_lucene_util_packed_PackedInts$Reader_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
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
        namespace packed {

          class PackedInts$Reader : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_get_7b22650fccb5d574,
              mid_get_be281815fcc98213,
              mid_size_20fbf7565993c3d7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PackedInts$Reader(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PackedInts$Reader(const PackedInts$Reader& obj) : ::java::lang::Object(obj) {}

            PackedInts$Reader();

            jlong get(jint) const;
            jint get(jint, const JArray< jlong > &, jint, jint) const;
            jint size() const;
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
          extern PyType_Def PY_TYPE_DEF(PackedInts$Reader);
          extern PyTypeObject *PY_TYPE(PackedInts$Reader);

          class t_PackedInts$Reader {
          public:
            PyObject_HEAD
            PackedInts$Reader object;
            static PyObject *wrap_Object(const PackedInts$Reader&);
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
