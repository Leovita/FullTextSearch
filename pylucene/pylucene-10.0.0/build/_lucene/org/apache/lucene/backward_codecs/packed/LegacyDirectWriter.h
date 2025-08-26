#ifndef org_apache_lucene_backward_codecs_packed_LegacyDirectWriter_H
#define org_apache_lucene_backward_codecs_packed_LegacyDirectWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace packed {
          class LegacyDirectWriter;
        }
      }
      namespace store {
        class DataOutput;
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

          class LegacyDirectWriter : public ::java::lang::Object {
           public:
            enum {
              mid_add_1d3149fac12f2af3,
              mid_bitsRequired_7af44747c1921bd4,
              mid_finish_e7bdbe105ce1bafb,
              mid_getInstance_8ece4237b72f4e73,
              mid_unsignedBitsRequired_7af44747c1921bd4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LegacyDirectWriter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LegacyDirectWriter(const LegacyDirectWriter& obj) : ::java::lang::Object(obj) {}

            void add(jlong) const;
            static jint bitsRequired(jlong);
            void finish() const;
            static LegacyDirectWriter getInstance(const ::org::apache::lucene::store::DataOutput &, jlong, jint);
            static jint unsignedBitsRequired(jlong);
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
          extern PyType_Def PY_TYPE_DEF(LegacyDirectWriter);
          extern PyTypeObject *PY_TYPE(LegacyDirectWriter);

          class t_LegacyDirectWriter {
          public:
            PyObject_HEAD
            LegacyDirectWriter object;
            static PyObject *wrap_Object(const LegacyDirectWriter&);
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
