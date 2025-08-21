#ifndef org_apache_lucene_codecs_simpletext_SimpleTextCompoundFormat_H
#define org_apache_lucene_codecs_simpletext_SimpleTextCompoundFormat_H

#include "org/apache/lucene/codecs/CompoundFormat.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class CompoundDirectory;
      }
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

          class SimpleTextCompoundFormat : public ::org::apache::lucene::codecs::CompoundFormat {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_getCompoundReader_dccd880d35d42711,
              mid_write_a9ba310ae9ac5967,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleTextCompoundFormat(jobject obj) : ::org::apache::lucene::codecs::CompoundFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleTextCompoundFormat(const SimpleTextCompoundFormat& obj) : ::org::apache::lucene::codecs::CompoundFormat(obj) {}

            SimpleTextCompoundFormat();

            ::org::apache::lucene::codecs::CompoundDirectory getCompoundReader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::store::IOContext &) const;
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
          extern PyType_Def PY_TYPE_DEF(SimpleTextCompoundFormat);
          extern PyTypeObject *PY_TYPE(SimpleTextCompoundFormat);

          class t_SimpleTextCompoundFormat {
          public:
            PyObject_HEAD
            SimpleTextCompoundFormat object;
            static PyObject *wrap_Object(const SimpleTextCompoundFormat&);
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
