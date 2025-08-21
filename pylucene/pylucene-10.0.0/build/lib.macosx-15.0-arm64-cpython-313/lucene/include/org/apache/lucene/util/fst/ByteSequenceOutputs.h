#ifndef org_apache_lucene_util_fst_ByteSequenceOutputs_H
#define org_apache_lucene_util_fst_ByteSequenceOutputs_H

#include "org/apache/lucene/util/fst/Outputs.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class ByteSequenceOutputs;
        }
        class BytesRef;
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

          class ByteSequenceOutputs : public ::org::apache::lucene::util::fst::Outputs {
           public:
            enum {
              mid_add_c79fbe10e0e2e4a5,
              mid_common_c79fbe10e0e2e4a5,
              mid_getNoOutput_9740fddd1c7df148,
              mid_getSingleton_ab8cfd5d6c30039a,
              mid_outputToString_3f93dbca6227d6f8,
              mid_ramBytesUsed_7595cb5441b08443,
              mid_read_05cc7a05cfe4e316,
              mid_skipOutput_fc75c9d195bdd885,
              mid_subtract_c79fbe10e0e2e4a5,
              mid_toString_09a7afff1868fc5e,
              mid_write_738b3212c81edacd,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ByteSequenceOutputs(jobject obj) : ::org::apache::lucene::util::fst::Outputs(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ByteSequenceOutputs(const ByteSequenceOutputs& obj) : ::org::apache::lucene::util::fst::Outputs(obj) {}

            ::org::apache::lucene::util::BytesRef add(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &) const;
            ::org::apache::lucene::util::BytesRef common(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &) const;
            ::org::apache::lucene::util::BytesRef getNoOutput() const;
            static ByteSequenceOutputs getSingleton();
            ::java::lang::String outputToString(const ::org::apache::lucene::util::BytesRef &) const;
            jlong ramBytesUsed(const ::org::apache::lucene::util::BytesRef &) const;
            ::org::apache::lucene::util::BytesRef read(const ::org::apache::lucene::store::DataInput &) const;
            void skipOutput(const ::org::apache::lucene::store::DataInput &) const;
            ::org::apache::lucene::util::BytesRef subtract(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &) const;
            ::java::lang::String toString() const;
            void write(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::store::DataOutput &) const;
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
          extern PyType_Def PY_TYPE_DEF(ByteSequenceOutputs);
          extern PyTypeObject *PY_TYPE(ByteSequenceOutputs);

          class t_ByteSequenceOutputs {
          public:
            PyObject_HEAD
            ByteSequenceOutputs object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_ByteSequenceOutputs *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const ByteSequenceOutputs&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const ByteSequenceOutputs&, PyTypeObject *);
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
