#ifndef org_apache_lucene_backward_codecs_store_EndiannessReverserUtil_H
#define org_apache_lucene_backward_codecs_store_EndiannessReverserUtil_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataInput;
        class IndexOutput;
        class IndexInput;
        class DataOutput;
        class IOContext;
        class Directory;
        class ChecksumIndexInput;
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
    class String;
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
              mid_createOutput_a3a39b9c39e18754,
              mid_createTempOutput_20371629c8d34928,
              mid_openChecksumInput_3c80e844d1c629df,
              mid_openInput_b6428d1fdfc8d1b2,
              mid_wrapDataInput_31d49302ee9a8dbf,
              mid_wrapDataOutput_cdd29163c84f4078,
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
