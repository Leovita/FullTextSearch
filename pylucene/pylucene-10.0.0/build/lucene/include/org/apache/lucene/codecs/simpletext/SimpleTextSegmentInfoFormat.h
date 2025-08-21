#ifndef org_apache_lucene_codecs_simpletext_SimpleTextSegmentInfoFormat_H
#define org_apache_lucene_codecs_simpletext_SimpleTextSegmentInfoFormat_H

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
      namespace codecs {
        namespace simpletext {

          class SimpleTextSegmentInfoFormat : public ::org::apache::lucene::codecs::SegmentInfoFormat {
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

            explicit SimpleTextSegmentInfoFormat(jobject obj) : ::org::apache::lucene::codecs::SegmentInfoFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleTextSegmentInfoFormat(const SimpleTextSegmentInfoFormat& obj) : ::org::apache::lucene::codecs::SegmentInfoFormat(obj) {}

            static ::java::lang::String *SI_EXTENSION;

            SimpleTextSegmentInfoFormat();

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
      namespace codecs {
        namespace simpletext {
          extern PyType_Def PY_TYPE_DEF(SimpleTextSegmentInfoFormat);
          extern PyTypeObject *PY_TYPE(SimpleTextSegmentInfoFormat);

          class t_SimpleTextSegmentInfoFormat {
          public:
            PyObject_HEAD
            SimpleTextSegmentInfoFormat object;
            static PyObject *wrap_Object(const SimpleTextSegmentInfoFormat&);
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
