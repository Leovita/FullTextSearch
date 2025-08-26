#ifndef org_apache_lucene_backward_codecs_packed_LegacyPackedInts_H
#define org_apache_lucene_backward_codecs_packed_LegacyPackedInts_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataInput;
      }
      namespace util {
        namespace packed {
          class PackedInts$Format;
          class PackedInts$Reader;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace packed {

          class LegacyPackedInts : public ::java::lang::Object {
           public:
            enum {
              mid_getReaderNoHeader_1212135d538e0798,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LegacyPackedInts(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LegacyPackedInts(const LegacyPackedInts& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::util::packed::PackedInts$Reader getReaderNoHeader(const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::util::packed::PackedInts$Format &, jint, jint, jint);
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
          extern PyType_Def PY_TYPE_DEF(LegacyPackedInts);
          extern PyTypeObject *PY_TYPE(LegacyPackedInts);

          class t_LegacyPackedInts {
          public:
            PyObject_HEAD
            LegacyPackedInts object;
            static PyObject *wrap_Object(const LegacyPackedInts&);
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
