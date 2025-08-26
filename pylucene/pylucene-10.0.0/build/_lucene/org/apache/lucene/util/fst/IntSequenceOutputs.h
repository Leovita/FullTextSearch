#ifndef org_apache_lucene_util_fst_IntSequenceOutputs_H
#define org_apache_lucene_util_fst_IntSequenceOutputs_H

#include "org/apache/lucene/util/fst/Outputs.h"

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
      namespace util {
        class IntsRef;
        namespace fst {
          class IntSequenceOutputs;
        }
      }
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

          class IntSequenceOutputs : public ::org::apache::lucene::util::fst::Outputs {
           public:
            enum {
              mid_add_17a16df98e2a1ee3,
              mid_common_17a16df98e2a1ee3,
              mid_getNoOutput_467dd1d064587a13,
              mid_getSingleton_467d7d06af7e46a5,
              mid_outputToString_f2c65e850511e5de,
              mid_ramBytesUsed_dd262f6763393ffa,
              mid_read_63936989fae676d8,
              mid_skipOutput_b57ffc017de24fe4,
              mid_subtract_17a16df98e2a1ee3,
              mid_toString_e7df854526d67fa3,
              mid_write_0162e526cb9f6cff,
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
