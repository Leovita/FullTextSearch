#ifndef org_apache_lucene_util_OfflineSorter$ByteSequencesWriter_H
#define org_apache_lucene_util_OfflineSorter$ByteSequencesWriter_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Closeable;
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexOutput;
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class OfflineSorter$ByteSequencesWriter : public ::java::lang::Object {
         public:
          enum {
            mid_init$_9713fe0a5c49ff9f,
            mid_close_e7bdbe105ce1bafb,
            mid_write_a4d4f283481182e8,
            mid_write_920ce0cdf4259cc9,
            mid_write_116f7fcb5bff0f39,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OfflineSorter$ByteSequencesWriter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          OfflineSorter$ByteSequencesWriter(const OfflineSorter$ByteSequencesWriter& obj) : ::java::lang::Object(obj) {}

          OfflineSorter$ByteSequencesWriter(const ::org::apache::lucene::store::IndexOutput &);

          void close() const;
          void write(const JArray< jbyte > &) const;
          void write(const ::org::apache::lucene::util::BytesRef &) const;
          void write(const JArray< jbyte > &, jint, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(OfflineSorter$ByteSequencesWriter);
        extern PyTypeObject *PY_TYPE(OfflineSorter$ByteSequencesWriter);

        class t_OfflineSorter$ByteSequencesWriter {
        public:
          PyObject_HEAD
          OfflineSorter$ByteSequencesWriter object;
          static PyObject *wrap_Object(const OfflineSorter$ByteSequencesWriter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
