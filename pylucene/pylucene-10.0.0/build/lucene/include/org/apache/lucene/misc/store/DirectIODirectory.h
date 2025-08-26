#ifndef org_apache_lucene_misc_store_DirectIODirectory_H
#define org_apache_lucene_misc_store_DirectIODirectory_H

#include "org/apache/lucene/store/FilterDirectory.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
  namespace nio {
    namespace file {
      class Path;
    }
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexOutput;
        class IndexInput;
        class FSDirectory;
        class IOContext;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        namespace store {

          class DirectIODirectory : public ::org::apache::lucene::store::FilterDirectory {
           public:
            enum {
              mid_init$_ed1aa5e821596927,
              mid_init$_6bb43f488ec2f23f,
              mid_close_e7bdbe105ce1bafb,
              mid_createOutput_5ee859a77f556d05,
              mid_getDirectory_da490036461fb4f2,
              mid_openInput_fc1a53ef559ae62a,
              mid_useDirectIO_90fe3d14452059b1,
              mid_ensureOpen_e7bdbe105ce1bafb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DirectIODirectory(jobject obj) : ::org::apache::lucene::store::FilterDirectory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DirectIODirectory(const DirectIODirectory& obj) : ::org::apache::lucene::store::FilterDirectory(obj) {}

            static jint DEFAULT_MERGE_BUFFER_SIZE;
            static jlong DEFAULT_MIN_BYTES_DIRECT;

            DirectIODirectory(const ::org::apache::lucene::store::FSDirectory &);
            DirectIODirectory(const ::org::apache::lucene::store::FSDirectory &, jint, jlong);

            void close() const;
            ::org::apache::lucene::store::IndexOutput createOutput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
            ::java::nio::file::Path getDirectory() const;
            ::org::apache::lucene::store::IndexInput openInput(const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
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
          extern PyType_Def PY_TYPE_DEF(DirectIODirectory);
          extern PyTypeObject *PY_TYPE(DirectIODirectory);

          class t_DirectIODirectory {
          public:
            PyObject_HEAD
            DirectIODirectory object;
            static PyObject *wrap_Object(const DirectIODirectory&);
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
