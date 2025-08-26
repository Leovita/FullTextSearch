#ifndef org_apache_lucene_backward_codecs_store_EndiannessReverserUtil_H
#define org_apache_lucene_backward_codecs_store_EndiannessReverserUtil_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
        class IndexOutput;
        class DataInput;
        class IndexInput;
        class ChecksumIndexInput;
        class IOContext;
        class DataOutput;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace store {

          class EndiannessReverserUtil : public ::java::lang::Object {
           public:
            enum {
              mid_createOutput_19eb0a7cb9aa2e24,
              mid_createTempOutput_a7d50b2d289e6dd7,
              mid_openChecksumInput_945de9735a5f3fe2,
              mid_openInput_0375e31cd6ff8370,
              mid_wrapDataInput_2fdb7520ebc4a398,
              mid_wrapDataOutput_36fee542b46eca25,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit EndiannessReverserUtil(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            EndiannessReverserUtil(const EndiannessReverserUtil& obj) : ::java::lang::Object(obj) {}

            static ::org::apache::lucene::store::IndexOutput createOutput(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &);
            static ::org::apache::lucene::store::IndexOutput createTempOutput(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &);
            static ::org::apache::lucene::store::ChecksumIndexInput openChecksumInput(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &);
            static ::org::apache::lucene::store::IndexInput openInput(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &);
            static ::org::apache::lucene::store::DataInput wrapDataInput(const ::org::apache::lucene::store::DataInput &);
            static ::org::apache::lucene::store::DataOutput wrapDataOutput(const ::org::apache::lucene::store::DataOutput &);
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
          extern PyType_Def PY_TYPE_DEF(EndiannessReverserUtil);
          extern PyTypeObject *PY_TYPE(EndiannessReverserUtil);

          class t_EndiannessReverserUtil {
          public:
            PyObject_HEAD
            EndiannessReverserUtil object;
            static PyObject *wrap_Object(const EndiannessReverserUtil&);
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
