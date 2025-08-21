#ifndef org_apache_lucene_util_packed_AbstractBlockPackedWriter_H
#define org_apache_lucene_util_packed_AbstractBlockPackedWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataOutput;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
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
        namespace packed {

          class AbstractBlockPackedWriter : public ::java::lang::Object {
           public:
            enum {
              mid_add_8b3d46852b435a94,
              mid_finish_3720c61b0679eb3e,
              mid_ord_16939d9d0a9a9721,
              mid_reset_3a071e25ad99bd99,
              mid_writeValues_540b2b23d51b1efd,
              mid_flush_3720c61b0679eb3e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractBlockPackedWriter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AbstractBlockPackedWriter(const AbstractBlockPackedWriter& obj) : ::java::lang::Object(obj) {}

            void add(jlong) const;
            void finish() const;
            jlong ord() const;
            void reset(const ::org::apache::lucene::store::DataOutput &) const;
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
      namespace util {
        namespace packed {
          extern PyType_Def PY_TYPE_DEF(AbstractBlockPackedWriter);
          extern PyTypeObject *PY_TYPE(AbstractBlockPackedWriter);

          class t_AbstractBlockPackedWriter {
          public:
            PyObject_HEAD
            AbstractBlockPackedWriter object;
            static PyObject *wrap_Object(const AbstractBlockPackedWriter&);
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
