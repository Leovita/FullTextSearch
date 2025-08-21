#ifndef org_apache_lucene_internal_tests_SegmentReaderAccess_H
#define org_apache_lucene_internal_tests_SegmentReaderAccess_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentReader;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace internal {
        namespace tests {

          class SegmentReaderAccess : public ::java::lang::Object {
           public:
            enum {
              mid_getCore_709cabd921054cc4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SegmentReaderAccess(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SegmentReaderAccess(const SegmentReaderAccess& obj) : ::java::lang::Object(obj) {}

            ::java::lang::Object getCore(const ::org::apache::lucene::index::SegmentReader &) const;
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
      namespace internal {
        namespace tests {
          extern PyType_Def PY_TYPE_DEF(SegmentReaderAccess);
          extern PyTypeObject *PY_TYPE(SegmentReaderAccess);

          class t_SegmentReaderAccess {
          public:
            PyObject_HEAD
            SegmentReaderAccess object;
            static PyObject *wrap_Object(const SegmentReaderAccess&);
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
