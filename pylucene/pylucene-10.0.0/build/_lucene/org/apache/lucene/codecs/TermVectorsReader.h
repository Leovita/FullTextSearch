#ifndef org_apache_lucene_codecs_TermVectorsReader_H
#define org_apache_lucene_codecs_TermVectorsReader_H

#include "org/apache/lucene/index/TermVectors.h"

namespace java {
  namespace lang {
    class Cloneable;
    class Class;
  }
  namespace io {
    class Closeable;
    class IOException;
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
            mid_checkIntegrity_e7bdbe105ce1bafb,
            mid_clone_7a10ef35062ba8d1,
            mid_getMergeInstance_7a10ef35062ba8d1,
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
