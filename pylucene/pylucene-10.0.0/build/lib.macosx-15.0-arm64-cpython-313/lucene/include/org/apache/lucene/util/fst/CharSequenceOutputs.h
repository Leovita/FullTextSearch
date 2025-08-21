#ifndef org_apache_lucene_util_fst_CharSequenceOutputs_H
#define org_apache_lucene_util_fst_CharSequenceOutputs_H

#include "org/apache/lucene/util/fst/Outputs.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataInput;
        class DataOutput;
      }
      namespace util {
        class CharsRef;
        namespace fst {
          class CharSequenceOutputs;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {

          class CharSequenceOutputs : public ::org::apache::lucene::util::fst::Outputs {
           public:
            enum {
              mid_add_a0859d4aaf2e2420,
              mid_common_a0859d4aaf2e2420,
              mid_getNoOutput_94b51711598dd26a,
              mid_getSingleton_fbc206da1ba31354,
              mid_outputToString_543dde407a4bae22,
              mid_ramBytesUsed_3056679d6a5924d6,
              mid_read_9d5faa143dcf40e8,
              mid_skipOutput_fc75c9d195bdd885,
              mid_subtract_a0859d4aaf2e2420,
              mid_write_43c487ea26be4a91,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CharSequenceOutputs(jobject obj) : ::org::apache::lucene::util::fst::Outputs(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CharSequenceOutputs(const CharSequenceOutputs& obj) : ::org::apache::lucene::util::fst::Outputs(obj) {}

            ::org::apache::lucene::util::CharsRef add(const ::org::apache::lucene::util::CharsRef &, const ::org::apache::lucene::util::CharsRef &) const;
            ::org::apache::lucene::util::CharsRef common(const ::org::apache::lucene::util::CharsRef &, const ::org::apache::lucene::util::CharsRef &) const;
            ::org::apache::lucene::util::CharsRef getNoOutput() const;
            static CharSequenceOutputs getSingleton();
            ::java::lang::String outputToString(const ::org::apache::lucene::util::CharsRef &) const;
            jlong ramBytesUsed(const ::org::apache::lucene::util::CharsRef &) const;
            ::org::apache::lucene::util::CharsRef read(const ::org::apache::lucene::store::DataInput &) const;
            void skipOutput(const ::org::apache::lucene::store::DataInput &) const;
            ::org::apache::lucene::util::CharsRef subtract(const ::org::apache::lucene::util::CharsRef &, const ::org::apache::lucene::util::CharsRef &) const;
            void write(const ::org::apache::lucene::util::CharsRef &, const ::org::apache::lucene::store::DataOutput &) const;
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
          extern PyType_Def PY_TYPE_DEF(CharSequenceOutputs);
          extern PyTypeObject *PY_TYPE(CharSequenceOutputs);

          class t_CharSequenceOutputs {
          public:
            PyObject_HEAD
            CharSequenceOutputs object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_CharSequenceOutputs *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const CharSequenceOutputs&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const CharSequenceOutputs&, PyTypeObject *);
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
