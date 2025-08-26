#ifndef org_apache_lucene_util_fst_CharSequenceOutputs_H
#define org_apache_lucene_util_fst_CharSequenceOutputs_H

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
        class CharsRef;
        namespace fst {
          class CharSequenceOutputs;
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

          class CharSequenceOutputs : public ::org::apache::lucene::util::fst::Outputs {
           public:
            enum {
              mid_add_543c2b778744dfa0,
              mid_common_543c2b778744dfa0,
              mid_getNoOutput_669503bbeca09860,
              mid_getSingleton_e61253286a66ead1,
              mid_outputToString_d1153ab530cfde60,
              mid_ramBytesUsed_60394045b49cdac2,
              mid_read_9a4f959bbe9b586f,
              mid_skipOutput_b57ffc017de24fe4,
              mid_subtract_543c2b778744dfa0,
              mid_write_21d8b459be7c56ec,
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
