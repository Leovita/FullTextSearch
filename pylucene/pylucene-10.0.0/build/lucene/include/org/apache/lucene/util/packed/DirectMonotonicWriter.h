#ifndef org_apache_lucene_util_packed_DirectMonotonicWriter_H
#define org_apache_lucene_util_packed_DirectMonotonicWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {
          class DirectMonotonicWriter;
        }
      }
      namespace store {
        class IndexOutput;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
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

          class DirectMonotonicWriter : public ::java::lang::Object {
           public:
            enum {
              mid_add_8b3d46852b435a94,
              mid_finish_3720c61b0679eb3e,
              mid_getInstance_c528b0139e197615,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DirectMonotonicWriter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DirectMonotonicWriter(const DirectMonotonicWriter& obj) : ::java::lang::Object(obj) {}

            static jint MAX_BLOCK_SHIFT;
            static jint MIN_BLOCK_SHIFT;

            void add(jlong) const;
            void finish() const;
            static DirectMonotonicWriter getInstance(const ::org::apache::lucene::store::IndexOutput &, const ::org::apache::lucene::store::IndexOutput &, jlong, jint);
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
          extern PyType_Def PY_TYPE_DEF(DirectMonotonicWriter);
          extern PyTypeObject *PY_TYPE(DirectMonotonicWriter);

          class t_DirectMonotonicWriter {
          public:
            PyObject_HEAD
            DirectMonotonicWriter object;
            static PyObject *wrap_Object(const DirectMonotonicWriter&);
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
