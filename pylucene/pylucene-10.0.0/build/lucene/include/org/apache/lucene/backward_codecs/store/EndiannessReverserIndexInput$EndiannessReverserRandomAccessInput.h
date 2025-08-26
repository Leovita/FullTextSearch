#ifndef org_apache_lucene_backward_codecs_store_EndiannessReverserIndexInput$EndiannessReverserRandomAccessInput_H
#define org_apache_lucene_backward_codecs_store_EndiannessReverserIndexInput$EndiannessReverserRandomAccessInput_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class RandomAccessInput;
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
        namespace store {

          class EndiannessReverserIndexInput$EndiannessReverserRandomAccessInput : public ::java::lang::Object {
           public:
            enum {
              mid_init$_6a8cc79932840ace,
              mid_length_0f176418e3e16541,
              mid_readByte_cb04f80b25dc941d,
              mid_readInt_7af44747c1921bd4,
              mid_readLong_3dc1c6e3a5a0baf0,
              mid_readShort_d0da64abd2ba9d05,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit EndiannessReverserIndexInput$EndiannessReverserRandomAccessInput(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            EndiannessReverserIndexInput$EndiannessReverserRandomAccessInput(const EndiannessReverserIndexInput$EndiannessReverserRandomAccessInput& obj) : ::java::lang::Object(obj) {}

            EndiannessReverserIndexInput$EndiannessReverserRandomAccessInput(const ::org::apache::lucene::store::RandomAccessInput &);

            jlong length() const;
            jbyte readByte(jlong) const;
            jint readInt(jlong) const;
            jlong readLong(jlong) const;
            jshort readShort(jlong) const;
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
        namespace store {
          extern PyType_Def PY_TYPE_DEF(EndiannessReverserIndexInput$EndiannessReverserRandomAccessInput);
          extern PyTypeObject *PY_TYPE(EndiannessReverserIndexInput$EndiannessReverserRandomAccessInput);

          class t_EndiannessReverserIndexInput$EndiannessReverserRandomAccessInput {
          public:
            PyObject_HEAD
            EndiannessReverserIndexInput$EndiannessReverserRandomAccessInput object;
            static PyObject *wrap_Object(const EndiannessReverserIndexInput$EndiannessReverserRandomAccessInput&);
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
