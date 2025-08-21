#ifndef org_apache_lucene_util_fst_IntSequenceOutputs_H
#define org_apache_lucene_util_fst_IntSequenceOutputs_H

#include "org/apache/lucene/util/fst/Outputs.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class IntSequenceOutputs;
        }
        class IntsRef;
      }
      namespace store {
        class DataInput;
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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {

          class IntSequenceOutputs : public ::org::apache::lucene::util::fst::Outputs {
           public:
            enum {
              mid_add_aa8ce97a0d0a034a,
              mid_common_aa8ce97a0d0a034a,
              mid_getNoOutput_11a210fd9b2b21bd,
              mid_getSingleton_ce96e463710fba89,
              mid_outputToString_3eac1b40b244d463,
              mid_ramBytesUsed_4b786222eed96bec,
              mid_read_8a77f99dd417f2a2,
              mid_skipOutput_fc75c9d195bdd885,
              mid_subtract_aa8ce97a0d0a034a,
              mid_toString_09a7afff1868fc5e,
              mid_write_5a6444a5b7de8723,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IntSequenceOutputs(jobject obj) : ::org::apache::lucene::util::fst::Outputs(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IntSequenceOutputs(const IntSequenceOutputs& obj) : ::org::apache::lucene::util::fst::Outputs(obj) {}

            ::org::apache::lucene::util::IntsRef add(const ::org::apache::lucene::util::IntsRef &, const ::org::apache::lucene::util::IntsRef &) const;
            ::org::apache::lucene::util::IntsRef common(const ::org::apache::lucene::util::IntsRef &, const ::org::apache::lucene::util::IntsRef &) const;
            ::org::apache::lucene::util::IntsRef getNoOutput() const;
            static IntSequenceOutputs getSingleton();
            ::java::lang::String outputToString(const ::org::apache::lucene::util::IntsRef &) const;
            jlong ramBytesUsed(const ::org::apache::lucene::util::IntsRef &) const;
            ::org::apache::lucene::util::IntsRef read(const ::org::apache::lucene::store::DataInput &) const;
            void skipOutput(const ::org::apache::lucene::store::DataInput &) const;
            ::org::apache::lucene::util::IntsRef subtract(const ::org::apache::lucene::util::IntsRef &, const ::org::apache::lucene::util::IntsRef &) const;
            ::java::lang::String toString() const;
            void write(const ::org::apache::lucene::util::IntsRef &, const ::org::apache::lucene::store::DataOutput &) const;
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
          extern PyType_Def PY_TYPE_DEF(IntSequenceOutputs);
          extern PyTypeObject *PY_TYPE(IntSequenceOutputs);

          class t_IntSequenceOutputs {
          public:
            PyObject_HEAD
            IntSequenceOutputs object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_IntSequenceOutputs *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const IntSequenceOutputs&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const IntSequenceOutputs&, PyTypeObject *);
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
