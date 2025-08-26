#ifndef org_apache_lucene_util_PrintStreamInfoStream_H
#define org_apache_lucene_util_PrintStreamInfoStream_H

#include "org/apache/lucene/util/InfoStream.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
    class PrintStream;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class PrintStreamInfoStream : public ::org::apache::lucene::util::InfoStream {
         public:
          enum {
            mid_init$_922e82480ddcbcc4,
            mid_init$_230b1ac8bdd50516,
            mid_close_e7bdbe105ce1bafb,
            mid_isEnabled_94f7e759d94961b0,
            mid_isSystemStream_9aa4f33e82ea333f,
            mid_message_0dd012a11c3f389b,
            mid_getTimestamp_e7df854526d67fa3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PrintStreamInfoStream(jobject obj) : ::org::apache::lucene::util::InfoStream(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PrintStreamInfoStream(const PrintStreamInfoStream& obj) : ::org::apache::lucene::util::InfoStream(obj) {}

          PrintStreamInfoStream(const ::java::io::PrintStream &);
          PrintStreamInfoStream(const ::java::io::PrintStream &, jint);

          void close() const;
          jboolean isEnabled(const ::java::lang::String &) const;
          jboolean isSystemStream() const;
          void message(const ::java::lang::String &, const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(PrintStreamInfoStream);
        extern PyTypeObject *PY_TYPE(PrintStreamInfoStream);

        class t_PrintStreamInfoStream {
        public:
          PyObject_HEAD
          PrintStreamInfoStream object;
          static PyObject *wrap_Object(const PrintStreamInfoStream&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
