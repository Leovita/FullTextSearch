#ifndef org_apache_lucene_codecs_StoredFieldsReader_H
#define org_apache_lucene_codecs_StoredFieldsReader_H

#include "org/apache/lucene/index/StoredFields.h"

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
        class StoredFieldsReader;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class StoredFieldsReader : public ::org::apache::lucene::index::StoredFields {
         public:
          enum {
            mid_checkIntegrity_e7bdbe105ce1bafb,
            mid_clone_a7e1c9cc255e1e90,
            mid_getMergeInstance_a7e1c9cc255e1e90,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StoredFieldsReader(jobject obj) : ::org::apache::lucene::index::StoredFields(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StoredFieldsReader(const StoredFieldsReader& obj) : ::org::apache::lucene::index::StoredFields(obj) {}

          void checkIntegrity() const;
          StoredFieldsReader clone() const;
          StoredFieldsReader getMergeInstance() const;
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
        extern PyType_Def PY_TYPE_DEF(StoredFieldsReader);
        extern PyTypeObject *PY_TYPE(StoredFieldsReader);

        class t_StoredFieldsReader {
        public:
          PyObject_HEAD
          StoredFieldsReader object;
          static PyObject *wrap_Object(const StoredFieldsReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
