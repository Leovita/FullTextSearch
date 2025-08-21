#ifndef org_apache_lucene_codecs_lucene90_Lucene90CompoundFormat_H
#define org_apache_lucene_codecs_lucene90_Lucene90CompoundFormat_H

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
        namespace lucene90 {

          class Lucene90CompoundFormat : public ::org::apache::lucene::codecs::CompoundFormat {
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

            explicit Lucene90CompoundFormat(jobject obj) : ::org::apache::lucene::codecs::CompoundFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene90CompoundFormat(const Lucene90CompoundFormat& obj) : ::org::apache::lucene::codecs::CompoundFormat(obj) {}

            Lucene90CompoundFormat();

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
        namespace lucene90 {
          extern PyType_Def PY_TYPE_DEF(Lucene90CompoundFormat);
          extern PyTypeObject *PY_TYPE(Lucene90CompoundFormat);

          class t_Lucene90CompoundFormat {
          public:
            PyObject_HEAD
            Lucene90CompoundFormat object;
            static PyObject *wrap_Object(const Lucene90CompoundFormat&);
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
