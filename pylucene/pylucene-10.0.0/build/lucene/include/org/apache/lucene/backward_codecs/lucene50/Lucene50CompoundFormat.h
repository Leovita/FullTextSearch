#ifndef org_apache_lucene_backward_codecs_lucene50_Lucene50CompoundFormat_H
#define org_apache_lucene_backward_codecs_lucene50_Lucene50CompoundFormat_H

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
      namespace backward_codecs {
        namespace lucene50 {

          class Lucene50CompoundFormat : public ::org::apache::lucene::codecs::CompoundFormat {
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

            explicit Lucene50CompoundFormat(jobject obj) : ::org::apache::lucene::codecs::CompoundFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene50CompoundFormat(const Lucene50CompoundFormat& obj) : ::org::apache::lucene::codecs::CompoundFormat(obj) {}

            Lucene50CompoundFormat();

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
      namespace backward_codecs {
        namespace lucene50 {
          extern PyType_Def PY_TYPE_DEF(Lucene50CompoundFormat);
          extern PyTypeObject *PY_TYPE(Lucene50CompoundFormat);

          class t_Lucene50CompoundFormat {
          public:
            PyObject_HEAD
            Lucene50CompoundFormat object;
            static PyObject *wrap_Object(const Lucene50CompoundFormat&);
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
