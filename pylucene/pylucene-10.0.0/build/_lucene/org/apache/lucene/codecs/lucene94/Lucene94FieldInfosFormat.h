#ifndef org_apache_lucene_codecs_lucene94_Lucene94FieldInfosFormat_H
#define org_apache_lucene_codecs_lucene94_Lucene94FieldInfosFormat_H

#include "org/apache/lucene/codecs/FieldInfosFormat.h"

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
        namespace lucene94 {

          class Lucene94FieldInfosFormat : public ::org::apache::lucene::codecs::FieldInfosFormat {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_read_c653153ad3f09a4d,
              mid_write_1a554da1e48bfb17,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene94FieldInfosFormat(jobject obj) : ::org::apache::lucene::codecs::FieldInfosFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene94FieldInfosFormat(const Lucene94FieldInfosFormat& obj) : ::org::apache::lucene::codecs::FieldInfosFormat(obj) {}

            Lucene94FieldInfosFormat();

            ::org::apache::lucene::index::FieldInfos read(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::java::lang::String &, const ::org::apache::lucene::store::IOContext &) const;
            void write(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::java::lang::String &, const ::org::apache::lucene::index::FieldInfos &, const ::org::apache::lucene::store::IOContext &) const;
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
      namespace codecs {
        namespace lucene94 {
          extern PyType_Def PY_TYPE_DEF(Lucene94FieldInfosFormat);
          extern PyTypeObject *PY_TYPE(Lucene94FieldInfosFormat);

          class t_Lucene94FieldInfosFormat {
          public:
            PyObject_HEAD
            Lucene94FieldInfosFormat object;
            static PyObject *wrap_Object(const Lucene94FieldInfosFormat&);
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
