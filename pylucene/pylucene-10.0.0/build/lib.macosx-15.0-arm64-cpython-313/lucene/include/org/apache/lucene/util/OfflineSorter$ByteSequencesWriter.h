#ifndef org_apache_lucene_util_OfflineSorter$ByteSequencesWriter_H
#define org_apache_lucene_util_OfflineSorter$ByteSequencesWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace store {
        class IndexOutput;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
    class Closeable;
  }
  namespace lang {
    class Class;
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
            mid_init$_c39b7a857991d9b7,
            mid_close_3720c61b0679eb3e,
            mid_write_3ce1e597fb62ac79,
            mid_write_ac0de3ee0e03786d,
            mid_write_5fdd5da9426708e6,
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
