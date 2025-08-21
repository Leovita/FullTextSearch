#ifndef org_apache_lucene_backward_codecs_lucene86_Lucene86SegmentInfoFormat_H
#define org_apache_lucene_backward_codecs_lucene86_Lucene86SegmentInfoFormat_H

#include "org/apache/lucene/codecs/SegmentInfoFormat.h"

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
      namespace index {
        class SegmentInfo;
      }
      namespace store {
        class IOContext;
        class Directory;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene86 {

          class Lucene86SegmentInfoFormat : public ::org::apache::lucene::codecs::SegmentInfoFormat {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_read_dbeaadcd3794a0db,
              mid_write_a9ba310ae9ac5967,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene86SegmentInfoFormat(jobject obj) : ::org::apache::lucene::codecs::SegmentInfoFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene86SegmentInfoFormat(const Lucene86SegmentInfoFormat& obj) : ::org::apache::lucene::codecs::SegmentInfoFormat(obj) {}

            static ::java::lang::String *SI_EXTENSION;

            Lucene86SegmentInfoFormat();

            ::org::apache::lucene::index::SegmentInfo read(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const JArray< jbyte > &, const ::org::apache::lucene::store::IOContext &) const;
            void write(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::store::IOContext &) const;
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
        namespace lucene86 {
          extern PyType_Def PY_TYPE_DEF(Lucene86SegmentInfoFormat);
          extern PyTypeObject *PY_TYPE(Lucene86SegmentInfoFormat);

          class t_Lucene86SegmentInfoFormat {
          public:
            PyObject_HEAD
            Lucene86SegmentInfoFormat object;
            static PyObject *wrap_Object(const Lucene86SegmentInfoFormat&);
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
