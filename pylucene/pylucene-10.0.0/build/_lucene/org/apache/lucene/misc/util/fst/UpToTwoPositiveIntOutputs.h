#ifndef org_apache_lucene_misc_util_fst_UpToTwoPositiveIntOutputs_H
#define org_apache_lucene_misc_util_fst_UpToTwoPositiveIntOutputs_H

#include "org/apache/lucene/util/fst/Outputs.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        namespace util {
          namespace fst {
            class UpToTwoPositiveIntOutputs$TwoLongs;
            class UpToTwoPositiveIntOutputs;
          }
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
    class Long;
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
      namespace misc {
        namespace util {
          namespace fst {

            class UpToTwoPositiveIntOutputs : public ::org::apache::lucene::util::fst::Outputs {
             public:
              enum {
                mid_add_b3b175dfe26d2c44,
                mid_common_9a76f8c329485099,
                mid_get_4edfa53b3afa7fb6,
                mid_get_d03405c43dc0a3de,
                mid_getNoOutput_4819806f62f1360a,
                mid_getSingleton_228a921241d298bb,
                mid_merge_b3b175dfe26d2c44,
                mid_outputToString_5f92096499c6603e,
                mid_ramBytesUsed_5dbd30c7e10c20e0,
                mid_read_6c9264745f696649,
                mid_subtract_9a76f8c329485099,
                mid_write_dd080dec4470e08d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit UpToTwoPositiveIntOutputs(jobject obj) : ::org::apache::lucene::util::fst::Outputs(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              UpToTwoPositiveIntOutputs(const UpToTwoPositiveIntOutputs& obj) : ::org::apache::lucene::util::fst::Outputs(obj) {}

              ::java::lang::Object add(const ::java::lang::Object &, const ::java::lang::Object &) const;
              ::java::lang::Long common(const ::java::lang::Object &, const ::java::lang::Object &) const;
              ::java::lang::Long get(jlong) const;
              ::org::apache::lucene::misc::util::fst::UpToTwoPositiveIntOutputs$TwoLongs get(jlong, jlong) const;
              ::java::lang::Object getNoOutput() const;
              static UpToTwoPositiveIntOutputs getSingleton(jboolean);
              ::java::lang::Object merge(const ::java::lang::Object &, const ::java::lang::Object &) const;
              ::java::lang::String outputToString(const ::java::lang::Object &) const;
              jlong ramBytesUsed(const ::java::lang::Object &) const;
              ::java::lang::Object read(const ::org::apache::lucene::store::DataInput &) const;
              ::java::lang::Long subtract(const ::java::lang::Object &, const ::java::lang::Object &) const;
              void write(const ::java::lang::Object &, const ::org::apache::lucene::store::DataOutput &) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        namespace util {
          namespace fst {
            extern PyType_Def PY_TYPE_DEF(UpToTwoPositiveIntOutputs);
            extern PyTypeObject *PY_TYPE(UpToTwoPositiveIntOutputs);

            class t_UpToTwoPositiveIntOutputs {
            public:
              PyObject_HEAD
              UpToTwoPositiveIntOutputs object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_UpToTwoPositiveIntOutputs *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const UpToTwoPositiveIntOutputs&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const UpToTwoPositiveIntOutputs&, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
