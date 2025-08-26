#ifndef org_apache_lucene_codecs_SegmentInfoFormat_H
#define org_apache_lucene_codecs_SegmentInfoFormat_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
        class IOContext;
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
    class String;
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

        class SegmentInfoFormat : public ::java::lang::Object {
         public:
          enum {
            mid_read_8cc58b2bec0a3e10,
            mid_write_0915fb04c93214b0,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SegmentInfoFormat(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SegmentInfoFormat(const SegmentInfoFormat& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::index::SegmentInfo read(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const JArray< jbyte > &, const ::org::apache::lucene::store::IOContext &) const;
          void write(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::store::IOContext &) const;
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
        extern PyType_Def PY_TYPE_DEF(SegmentInfoFormat);
        extern PyTypeObject *PY_TYPE(SegmentInfoFormat);

        class t_SegmentInfoFormat {
        public:
          PyObject_HEAD
          SegmentInfoFormat object;
          static PyObject *wrap_Object(const SegmentInfoFormat&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
