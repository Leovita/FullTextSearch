#ifndef org_apache_lucene_util_fst_NoOutputs_H
#define org_apache_lucene_util_fst_NoOutputs_H

#include "org/apache/lucene/util/fst/Outputs.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class NoOutputs;
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
    class String;
    class Object;
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
              mid_add_243089e4ee289db6,
              mid_common_243089e4ee289db6,
              mid_getNoOutput_5655ed8670534604,
              mid_getSingleton_af656885cb51172b,
              mid_merge_243089e4ee289db6,
              mid_outputToString_a6472d0c4a2d4dc6,
              mid_ramBytesUsed_eed3c4edb9cd98e2,
              mid_read_76ad041c51ef9e53,
              mid_subtract_243089e4ee289db6,
              mid_toString_09a7afff1868fc5e,
              mid_write_1fb2a58964472a7b,
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
