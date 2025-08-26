#ifndef org_apache_lucene_util_fst_NoOutputs_H
#define org_apache_lucene_util_fst_NoOutputs_H

#include "org/apache/lucene/util/fst/Outputs.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataInput;
        class DataOutput;
      }
      namespace util {
        namespace fst {
          class NoOutputs;
        }
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

          class NoOutputs : public ::org::apache::lucene::util::fst::Outputs {
           public:
            enum {
              mid_add_b3b175dfe26d2c44,
              mid_common_b3b175dfe26d2c44,
              mid_getNoOutput_4819806f62f1360a,
              mid_getSingleton_750ac1b93f19bb8f,
              mid_merge_b3b175dfe26d2c44,
              mid_outputToString_5f92096499c6603e,
              mid_ramBytesUsed_5dbd30c7e10c20e0,
              mid_read_6c9264745f696649,
              mid_subtract_b3b175dfe26d2c44,
              mid_toString_e7df854526d67fa3,
              mid_write_dd080dec4470e08d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit NoOutputs(jobject obj) : ::org::apache::lucene::util::fst::Outputs(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            NoOutputs(const NoOutputs& obj) : ::org::apache::lucene::util::fst::Outputs(obj) {}

            ::java::lang::Object add(const ::java::lang::Object &, const ::java::lang::Object &) const;
            ::java::lang::Object common(const ::java::lang::Object &, const ::java::lang::Object &) const;
            ::java::lang::Object getNoOutput() const;
            static NoOutputs getSingleton();
            ::java::lang::Object merge(const ::java::lang::Object &, const ::java::lang::Object &) const;
            ::java::lang::String outputToString(const ::java::lang::Object &) const;
            jlong ramBytesUsed(const ::java::lang::Object &) const;
            ::java::lang::Object read(const ::org::apache::lucene::store::DataInput &) const;
            ::java::lang::Object subtract(const ::java::lang::Object &, const ::java::lang::Object &) const;
            ::java::lang::String toString() const;
            void write(const ::java::lang::Object &, const ::org::apache::lucene::store::DataOutput &) const;
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
          extern PyType_Def PY_TYPE_DEF(NoOutputs);
          extern PyTypeObject *PY_TYPE(NoOutputs);

          class t_NoOutputs {
          public:
            PyObject_HEAD
            NoOutputs object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_NoOutputs *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const NoOutputs&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const NoOutputs&, PyTypeObject *);
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
