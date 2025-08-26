#ifndef org_apache_lucene_util_fst_PairOutputs_H
#define org_apache_lucene_util_fst_PairOutputs_H

#include "org/apache/lucene/util/fst/Outputs.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class PairOutputs$Pair;
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
    class Object;
    class Class;
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

          class PairOutputs : public ::org::apache::lucene::util::fst::Outputs {
           public:
            enum {
              mid_init$_4fa5e057ca3ae522,
              mid_add_39b0c84c938b8e89,
              mid_common_39b0c84c938b8e89,
              mid_getNoOutput_e0eb1f840bcd1c1e,
              mid_newPair_f0573812bb08d0f6,
              mid_outputToString_92b96da4eaab0f84,
              mid_ramBytesUsed_d42a1d29a6aad068,
              mid_read_f89b978fbf6f5b67,
              mid_skipOutput_b57ffc017de24fe4,
              mid_subtract_39b0c84c938b8e89,
              mid_toString_e7df854526d67fa3,
              mid_write_7998ecc9acbf6240,
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
