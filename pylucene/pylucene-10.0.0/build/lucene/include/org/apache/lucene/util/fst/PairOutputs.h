#ifndef org_apache_lucene_util_fst_PairOutputs_H
#define org_apache_lucene_util_fst_PairOutputs_H

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
          class PairOutputs$Pair;
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
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {

          class PairOutputs : public ::org::apache::lucene::util::fst::Outputs {
           public:
            enum {
              mid_init$_dcae491202edd31d,
              mid_add_1c588690773ba942,
              mid_common_1c588690773ba942,
              mid_getNoOutput_0d3a618659e97ec5,
              mid_newPair_b0a8f5631d461594,
              mid_outputToString_e2af5290df88650f,
              mid_ramBytesUsed_0a22c25f4514ba81,
              mid_read_d4c25ac1702f3d9d,
              mid_skipOutput_fc75c9d195bdd885,
              mid_subtract_1c588690773ba942,
              mid_toString_09a7afff1868fc5e,
              mid_write_022d969cef5c5fc3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PairOutputs(jobject obj) : ::org::apache::lucene::util::fst::Outputs(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PairOutputs(const PairOutputs& obj) : ::org::apache::lucene::util::fst::Outputs(obj) {}

            PairOutputs(const ::org::apache::lucene::util::fst::Outputs &, const ::org::apache::lucene::util::fst::Outputs &);

            ::org::apache::lucene::util::fst::PairOutputs$Pair add(const ::org::apache::lucene::util::fst::PairOutputs$Pair &, const ::org::apache::lucene::util::fst::PairOutputs$Pair &) const;
            ::org::apache::lucene::util::fst::PairOutputs$Pair common(const ::org::apache::lucene::util::fst::PairOutputs$Pair &, const ::org::apache::lucene::util::fst::PairOutputs$Pair &) const;
            ::org::apache::lucene::util::fst::PairOutputs$Pair getNoOutput() const;
            ::org::apache::lucene::util::fst::PairOutputs$Pair newPair(const ::java::lang::Object &, const ::java::lang::Object &) const;
            ::java::lang::String outputToString(const ::org::apache::lucene::util::fst::PairOutputs$Pair &) const;
            jlong ramBytesUsed(const ::org::apache::lucene::util::fst::PairOutputs$Pair &) const;
            ::org::apache::lucene::util::fst::PairOutputs$Pair read(const ::org::apache::lucene::store::DataInput &) const;
            void skipOutput(const ::org::apache::lucene::store::DataInput &) const;
            ::org::apache::lucene::util::fst::PairOutputs$Pair subtract(const ::org::apache::lucene::util::fst::PairOutputs$Pair &, const ::org::apache::lucene::util::fst::PairOutputs$Pair &) const;
            ::java::lang::String toString() const;
            void write(const ::org::apache::lucene::util::fst::PairOutputs$Pair &, const ::org::apache::lucene::store::DataOutput &) const;
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
          extern PyType_Def PY_TYPE_DEF(PairOutputs);
          extern PyTypeObject *PY_TYPE(PairOutputs);

          class t_PairOutputs {
          public:
            PyObject_HEAD
            PairOutputs object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_PairOutputs *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const PairOutputs&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const PairOutputs&, PyTypeObject *, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
