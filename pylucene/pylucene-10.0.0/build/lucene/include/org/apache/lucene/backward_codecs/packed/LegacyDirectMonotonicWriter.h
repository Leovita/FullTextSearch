#ifndef org_apache_lucene_backward_codecs_packed_LegacyDirectMonotonicWriter_H
#define org_apache_lucene_backward_codecs_packed_LegacyDirectMonotonicWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace packed {
          class LegacyDirectMonotonicWriter;
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
      namespace backward_codecs {
        namespace packed {

          class LegacyDirectMonotonicWriter : public ::java::lang::Object {
           public:
            enum {
              mid_add_8b3d46852b435a94,
              mid_finish_3720c61b0679eb3e,
              mid_getInstance_ee3f4c3f5f6f974a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LegacyDirectMonotonicWriter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LegacyDirectMonotonicWriter(const LegacyDirectMonotonicWriter& obj) : ::java::lang::Object(obj) {}

            static jint MAX_BLOCK_SHIFT;
            static jint MIN_BLOCK_SHIFT;

            void add(jlong) const;
            void finish() const;
            static LegacyDirectMonotonicWriter getInstance(const ::org::apache::lucene::store::IndexOutput &, const ::org::apache::lucene::store::IndexOutput &, jlong, jint);
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
          extern PyType_Def PY_TYPE_DEF(LegacyDirectMonotonicWriter);
          extern PyTypeObject *PY_TYPE(LegacyDirectMonotonicWriter);

          class t_LegacyDirectMonotonicWriter {
          public:
            PyObject_HEAD
            LegacyDirectMonotonicWriter object;
            static PyObject *wrap_Object(const LegacyDirectMonotonicWriter&);
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
