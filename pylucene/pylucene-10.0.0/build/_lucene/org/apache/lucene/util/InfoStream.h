#ifndef org_apache_lucene_util_InfoStream_H
#define org_apache_lucene_util_InfoStream_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class Closeable;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class InfoStream;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class InfoStream : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_getDefault_d67a60a40c235833,
            mid_isEnabled_4a13a663b5c11133,
            mid_message_3d104da0b5c75e64,
            mid_setDefault_3b3e574f321bdf38,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit InfoStream(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          InfoStream(const InfoStream& obj) : ::java::lang::Object(obj) {}

          static InfoStream *NO_OUTPUT;

          InfoStream();

          static InfoStream getDefault();
          jboolean isEnabled(const ::java::lang::String &) const;
          void message(const ::java::lang::String &, const ::java::lang::String &) const;
          static void setDefault(const InfoStream &);
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
        extern PyType_Def PY_TYPE_DEF(InfoStream);
        extern PyTypeObject *PY_TYPE(InfoStream);

        class t_InfoStream {
        public:
          PyObject_HEAD
          InfoStream object;
          static PyObject *wrap_Object(const InfoStream&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
