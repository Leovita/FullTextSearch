#ifndef org_apache_lucene_backward_codecs_packed_LegacyDirectMonotonicReader$Meta_H
#define org_apache_lucene_backward_codecs_packed_LegacyDirectMonotonicReader$Meta_H

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
      namespace backward_codecs {
        namespace packed {

          class LegacyDirectMonotonicReader$Meta : public ::java::lang::Object {
           public:
            enum {
              mid_ramBytesUsed_16939d9d0a9a9721,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LegacyDirectMonotonicReader$Meta(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LegacyDirectMonotonicReader$Meta(const LegacyDirectMonotonicReader$Meta& obj) : ::java::lang::Object(obj) {}

            jlong ramBytesUsed() const;
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
      namespace backward_codecs {
        namespace packed {
          extern PyType_Def PY_TYPE_DEF(LegacyDirectMonotonicReader$Meta);
          extern PyTypeObject *PY_TYPE(LegacyDirectMonotonicReader$Meta);

          class t_LegacyDirectMonotonicReader$Meta {
          public:
            PyObject_HEAD
            LegacyDirectMonotonicReader$Meta object;
            static PyObject *wrap_Object(const LegacyDirectMonotonicReader$Meta&);
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
