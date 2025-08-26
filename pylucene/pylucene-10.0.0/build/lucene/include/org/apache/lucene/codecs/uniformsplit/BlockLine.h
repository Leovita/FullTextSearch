#ifndef org_apache_lucene_codecs_uniformsplit_BlockLine_H
#define org_apache_lucene_codecs_uniformsplit_BlockLine_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
      }
      namespace codecs {
        namespace uniformsplit {
          class TermBytes;
        }
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
      namespace codecs {
        namespace uniformsplit {

          class BlockLine : public ::java::lang::Object {
           public:
            enum {
              mid_getTermBytes_e9a90c7f33f55230,
              mid_getTermStateRelativeOffset_bd89ce15dad49192,
              mid_ramBytesUsed_0f176418e3e16541,
              mid_reset_a65a8a91e8437b05,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BlockLine(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BlockLine(const BlockLine& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::codecs::uniformsplit::TermBytes getTermBytes() const;
            jint getTermStateRelativeOffset() const;
            jlong ramBytesUsed() const;
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
        namespace uniformsplit {
          extern PyType_Def PY_TYPE_DEF(BlockLine);
          extern PyTypeObject *PY_TYPE(BlockLine);

          class t_BlockLine {
          public:
            PyObject_HEAD
            BlockLine object;
            static PyObject *wrap_Object(const BlockLine&);
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
