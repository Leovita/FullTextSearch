#ifndef org_apache_lucene_util_packed_AbstractBlockPackedWriter_H
#define org_apache_lucene_util_packed_AbstractBlockPackedWriter_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
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
        class DataOutput;
      }
    }
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
              mid_add_1d3149fac12f2af3,
              mid_finish_e7bdbe105ce1bafb,
              mid_ord_0f176418e3e16541,
              mid_reset_949eccaa2018a6dc,
              mid_writeValues_8226bd0b0fc13dba,
              mid_flush_e7bdbe105ce1bafb,
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
