#ifndef org_apache_lucene_misc_store_ByteWritesTrackingDirectoryWrapper_H
#define org_apache_lucene_misc_store_ByteWritesTrackingDirectoryWrapper_H

#include "org/apache/lucene/store/FilterDirectory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
        class IndexOutput;
        class IOContext;
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
      namespace misc {
        namespace store {

          class ByteWritesTrackingDirectoryWrapper : public ::org::apache::lucene::store::FilterDirectory {
           public:
            enum {
              mid_init$_0bf39a7351552ef4,
              mid_init$_7a7a47c2d7770928,
              mid_createOutput_5ee859a77f556d05,
              mid_createTempOutput_c416e7b8f77d8569,
              mid_getFlushedBytes_0f176418e3e16541,
              mid_getMergedBytes_0f176418e3e16541,
              max_mid
            };

            enum {
              fid_trackTempOutput,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ByteWritesTrackingDirectoryWrapper(jobject obj) : ::org::apache::lucene::store::FilterDirectory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ByteWritesTrackingDirectoryWrapper(const ByteWritesTrackingDirectoryWrapper& obj) : ::org::apache::lucene::store::FilterDirectory(obj) {}

            jboolean _get_trackTempOutput() const;

            ByteWritesTrackingDirectoryWrapper(const ::org::apache::lucene::store::Directory &);
            ByteWritesTrackingDirectoryWrapper(const ::org::apache::lucene::store::Directory &, jboolean);

            ::org::apache::lucene::store::IndexOutput createOutput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
            ::org::apache::lucene::store::IndexOutput createTempOutput(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
            jlong getFlushedBytes() const;
            jlong getMergedBytes() const;
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
      namespace misc {
        namespace store {
          extern PyType_Def PY_TYPE_DEF(ByteWritesTrackingDirectoryWrapper);
          extern PyTypeObject *PY_TYPE(ByteWritesTrackingDirectoryWrapper);

          class t_ByteWritesTrackingDirectoryWrapper {
          public:
            PyObject_HEAD
            ByteWritesTrackingDirectoryWrapper object;
            static PyObject *wrap_Object(const ByteWritesTrackingDirectoryWrapper&);
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
