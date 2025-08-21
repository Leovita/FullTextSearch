#ifndef org_apache_lucene_util_RollingBuffer_H
#define org_apache_lucene_util_RollingBuffer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class RollingBuffer$Resettable;
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
      namespace util {

        class RollingBuffer : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_freeBefore_540b2b23d51b1efd,
            mid_get_24c4e6cded21a534,
            mid_getBufferSize_20fbf7565993c3d7,
            mid_getMaxPos_20fbf7565993c3d7,
            mid_reset_3720c61b0679eb3e,
            mid_newInstance_3eb6551c1179ba7a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RollingBuffer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RollingBuffer(const RollingBuffer& obj) : ::java::lang::Object(obj) {}

          RollingBuffer();

          void freeBefore(jint) const;
          ::org::apache::lucene::util::RollingBuffer$Resettable get(jint) const;
          jint getBufferSize() const;
          jint getMaxPos() const;
          void reset() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(RollingBuffer);
        extern PyTypeObject *PY_TYPE(RollingBuffer);

        class t_RollingBuffer {
        public:
          PyObject_HEAD
          RollingBuffer object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_RollingBuffer *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const RollingBuffer&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const RollingBuffer&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
