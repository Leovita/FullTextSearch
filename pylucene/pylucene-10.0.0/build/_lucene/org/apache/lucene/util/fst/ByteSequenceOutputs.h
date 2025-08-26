#ifndef org_apache_lucene_util_fst_ByteSequenceOutputs_H
#define org_apache_lucene_util_fst_ByteSequenceOutputs_H

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
      namespace store {
        class DataInput;
        class DataOutput;
      }
      namespace util {
        class BytesRef;
        namespace fst {
          class ByteSequenceOutputs;
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

          class ByteSequenceOutputs : public ::org::apache::lucene::util::fst::Outputs {
           public:
            enum {
              mid_add_dbf6697ff5c73228,
              mid_common_dbf6697ff5c73228,
              mid_getNoOutput_adbedbc1fa61c358,
              mid_getSingleton_87fbe296756a3847,
              mid_outputToString_0f852bf1d5588bee,
              mid_ramBytesUsed_8c6e1447894d7a38,
              mid_read_adb1fc4e44fe3416,
              mid_skipOutput_b57ffc017de24fe4,
              mid_subtract_dbf6697ff5c73228,
              mid_toString_e7df854526d67fa3,
              mid_write_3e66b42669522b2a,
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
