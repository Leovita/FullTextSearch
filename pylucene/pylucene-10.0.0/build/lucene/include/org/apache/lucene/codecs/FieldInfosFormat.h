#ifndef org_apache_lucene_codecs_FieldInfosFormat_H
#define org_apache_lucene_codecs_FieldInfosFormat_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IOContext;
        class Directory;
      }
      namespace index {
        class SegmentInfo;
        class FieldInfos;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class FieldInfosFormat : public ::java::lang::Object {
         public:
          enum {
            mid_read_c653153ad3f09a4d,
            mid_write_1a554da1e48bfb17,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldInfosFormat(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldInfosFormat(const FieldInfosFormat& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::index::FieldInfos read(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
          void write(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::java::lang::String &, const ::org::apache::lucene::index::FieldInfos &, const ::org::apache::lucene::store::IOContext &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyType_Def PY_TYPE_DEF(FieldInfosFormat);
        extern PyTypeObject *PY_TYPE(FieldInfosFormat);

        class t_FieldInfosFormat {
        public:
          PyObject_HEAD
          FieldInfosFormat object;
          static PyObject *wrap_Object(const FieldInfosFormat&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
