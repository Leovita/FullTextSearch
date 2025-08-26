#ifndef org_apache_lucene_util_fst_PositiveIntOutputs_H
#define org_apache_lucene_util_fst_PositiveIntOutputs_H

#include "org/apache/lucene/util/fst/Outputs.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class PositiveIntOutputs;
        }
      }
      namespace store {
        class DataInput;
        class DataOutput;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Long;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {

          class PositiveIntOutputs : public ::org::apache::lucene::util::fst::Outputs {
           public:
            enum {
              mid_add_9c1d5e28b0f90eff,
              mid_common_9c1d5e28b0f90eff,
              mid_getNoOutput_c4ac57d488686cc8,
              mid_getSingleton_ff17dcdc64ccf354,
              mid_outputToString_facff0a0a6e3ae2e,
              mid_ramBytesUsed_136b9d53556430e7,
              mid_read_816c9e0ff245e4a0,
              mid_subtract_9c1d5e28b0f90eff,
              mid_toString_e7df854526d67fa3,
              mid_write_0b77770957a7f1bc,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PositiveIntOutputs(jobject obj) : ::org::apache::lucene::util::fst::Outputs(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PositiveIntOutputs(const PositiveIntOutputs& obj) : ::org::apache::lucene::util::fst::Outputs(obj) {}

            ::java::lang::Long add(const ::java::lang::Long &, const ::java::lang::Long &) const;
            ::java::lang::Long common(const ::java::lang::Long &, const ::java::lang::Long &) const;
            ::java::lang::Long getNoOutput() const;
            static PositiveIntOutputs getSingleton();
            ::java::lang::String outputToString(const ::java::lang::Long &) const;
            jlong ramBytesUsed(const ::java::lang::Long &) const;
            ::java::lang::Long read(const ::org::apache::lucene::store::DataInput &) const;
            ::java::lang::Long subtract(const ::java::lang::Long &, const ::java::lang::Long &) const;
            ::java::lang::String toString() const;
            void write(const ::java::lang::Long &, const ::org::apache::lucene::store::DataOutput &) const;
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
          extern PyType_Def PY_TYPE_DEF(PositiveIntOutputs);
          extern PyTypeObject *PY_TYPE(PositiveIntOutputs);

          class t_PositiveIntOutputs {
          public:
            PyObject_HEAD
            PositiveIntOutputs object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_PositiveIntOutputs *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const PositiveIntOutputs&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const PositiveIntOutputs&, PyTypeObject *);
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
