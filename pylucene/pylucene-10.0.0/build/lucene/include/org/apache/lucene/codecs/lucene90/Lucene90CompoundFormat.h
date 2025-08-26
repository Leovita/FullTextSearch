#ifndef org_apache_lucene_codecs_lucene90_Lucene90CompoundFormat_H
#define org_apache_lucene_codecs_lucene90_Lucene90CompoundFormat_H

#include "org/apache/lucene/codecs/CompoundFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
        class IOContext;
      }
      namespace codecs {
        class CompoundDirectory;
      }
      namespace index {
        class SegmentInfo;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
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
              mid_init$_e7bdbe105ce1bafb,
              mid_getCompoundReader_e773b2ae282587ad,
              mid_write_0915fb04c93214b0,
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
