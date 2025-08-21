#ifndef org_apache_lucene_codecs_TermVectorsReader_H
#define org_apache_lucene_codecs_TermVectorsReader_H

#include "org/apache/lucene/index/TermVectors.h"

namespace java {
  namespace io {
    class IOException;
    class Closeable;
  }
  namespace lang {
    class Class;
    class Cloneable;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class TermVectorsReader;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class TermVectorsReader : public ::org::apache::lucene::index::TermVectors {
         public:
          enum {
            mid_checkIntegrity_3720c61b0679eb3e,
            mid_clone_0b9ae2ecfa80c759,
            mid_getMergeInstance_0b9ae2ecfa80c759,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermVectorsReader(jobject obj) : ::org::apache::lucene::index::TermVectors(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TermVectorsReader(const TermVectorsReader& obj) : ::org::apache::lucene::index::TermVectors(obj) {}

          void checkIntegrity() const;
          TermVectorsReader clone() const;
          TermVectorsReader getMergeInstance() const;
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
        extern PyType_Def PY_TYPE_DEF(TermVectorsReader);
        extern PyTypeObject *PY_TYPE(TermVectorsReader);

        class t_TermVectorsReader {
        public:
          PyObject_HEAD
          TermVectorsReader object;
          static PyObject *wrap_Object(const TermVectorsReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
