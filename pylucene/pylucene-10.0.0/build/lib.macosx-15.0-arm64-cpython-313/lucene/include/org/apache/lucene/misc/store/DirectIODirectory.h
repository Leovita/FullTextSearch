#ifndef org_apache_lucene_misc_store_DirectIODirectory_H
#define org_apache_lucene_misc_store_DirectIODirectory_H

#include "org/apache/lucene/store/FilterDirectory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class FSDirectory;
        class IndexOutput;
        class IndexInput;
        class IOContext;
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
  namespace nio {
    namespace file {
      class Path;
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
              mid_init$_6c5fbd978679df2b,
              mid_init$_224aa31bc62bc34a,
              mid_close_3720c61b0679eb3e,
              mid_createOutput_08efc12d1beeafa9,
              mid_getDirectory_d21fdf719406f66d,
              mid_openInput_f1f6511a018f52d0,
              mid_useDirectIO_e9586dc254576374,
              mid_ensureOpen_3720c61b0679eb3e,
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
