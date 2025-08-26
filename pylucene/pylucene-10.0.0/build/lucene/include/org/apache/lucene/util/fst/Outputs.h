#ifndef org_apache_lucene_util_fst_Outputs_H
#define org_apache_lucene_util_fst_Outputs_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataInput;
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
        namespace fst {

          class Outputs : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_add_b3b175dfe26d2c44,
              mid_common_b3b175dfe26d2c44,
              mid_getNoOutput_4819806f62f1360a,
              mid_merge_b3b175dfe26d2c44,
              mid_outputToString_5f92096499c6603e,
              mid_ramBytesUsed_5dbd30c7e10c20e0,
              mid_read_6c9264745f696649,
              mid_readFinalOutput_6c9264745f696649,
              mid_skipFinalOutput_b57ffc017de24fe4,
              mid_skipOutput_b57ffc017de24fe4,
              mid_subtract_b3b175dfe26d2c44,
              mid_write_dd080dec4470e08d,
              mid_writeFinalOutput_dd080dec4470e08d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Outputs(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Outputs(const Outputs& obj) : ::java::lang::Object(obj) {}

            Outputs();

            ::java::lang::Object add(const ::java::lang::Object &, const ::java::lang::Object &) const;
            ::java::lang::Object common(const ::java::lang::Object &, const ::java::lang::Object &) const;
            ::java::lang::Object getNoOutput() const;
            ::java::lang::Object merge(const ::java::lang::Object &, const ::java::lang::Object &) const;
            ::java::lang::String outputToString(const ::java::lang::Object &) const;
            jlong ramBytesUsed(const ::java::lang::Object &) const;
            ::java::lang::Object read(const ::org::apache::lucene::store::DataInput &) const;
            ::java::lang::Object readFinalOutput(const ::org::apache::lucene::store::DataInput &) const;
            void skipFinalOutput(const ::org::apache::lucene::store::DataInput &) const;
            void skipOutput(const ::org::apache::lucene::store::DataInput &) const;
            ::java::lang::Object subtract(const ::java::lang::Object &, const ::java::lang::Object &) const;
            void write(const ::java::lang::Object &, const ::org::apache::lucene::store::DataOutput &) const;
            void writeFinalOutput(const ::java::lang::Object &, const ::org::apache::lucene::store::DataOutput &) const;
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
        namespace fst {
          extern PyType_Def PY_TYPE_DEF(Outputs);
          extern PyTypeObject *PY_TYPE(Outputs);

          class t_Outputs {
          public:
            PyObject_HEAD
            Outputs object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Outputs *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Outputs&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Outputs&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
