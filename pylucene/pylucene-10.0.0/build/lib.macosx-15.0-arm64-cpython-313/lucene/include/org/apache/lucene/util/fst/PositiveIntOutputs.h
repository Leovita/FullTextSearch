#ifndef org_apache_lucene_util_fst_PositiveIntOutputs_H
#define org_apache_lucene_util_fst_PositiveIntOutputs_H

#include "org/apache/lucene/util/fst/Outputs.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataInput;
        class DataOutput;
      }
      namespace util {
        namespace fst {
          class PositiveIntOutputs;
        }
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
    class String;
    class Long;
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
              mid_add_45eb2284dd90b602,
              mid_common_45eb2284dd90b602,
              mid_getNoOutput_34383b55cea8435b,
              mid_getSingleton_75954ce4a36be032,
              mid_outputToString_0ecc2889c779f940,
              mid_ramBytesUsed_0a2f7204813fa9d2,
              mid_read_082d81551187c06f,
              mid_subtract_45eb2284dd90b602,
              mid_toString_09a7afff1868fc5e,
              mid_write_f0037bba8dd69d9c,
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
