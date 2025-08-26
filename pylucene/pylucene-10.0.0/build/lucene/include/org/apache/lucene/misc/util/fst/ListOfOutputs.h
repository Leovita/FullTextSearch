#ifndef org_apache_lucene_misc_util_fst_ListOfOutputs_H
#define org_apache_lucene_misc_util_fst_ListOfOutputs_H

#include "org/apache/lucene/util/fst/Outputs.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
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
      namespace misc {
        namespace util {
          namespace fst {

            class ListOfOutputs : public ::org::apache::lucene::util::fst::Outputs {
             public:
              enum {
                mid_init$_4ec33ab480ad86af,
                mid_add_b3b175dfe26d2c44,
                mid_asList_7c2a76b8364a69bd,
                mid_common_b3b175dfe26d2c44,
                mid_getNoOutput_4819806f62f1360a,
                mid_merge_b3b175dfe26d2c44,
                mid_outputToString_5f92096499c6603e,
                mid_ramBytesUsed_5dbd30c7e10c20e0,
                mid_read_6c9264745f696649,
                mid_readFinalOutput_6c9264745f696649,
                mid_skipFinalOutput_b57ffc017de24fe4,
                mid_skipOutput_b57ffc017de24fe4,
                mid_subtract_b3b175dfe26d2c44,
                mid_toString_e7df854526d67fa3,
                mid_write_dd080dec4470e08d,
                mid_writeFinalOutput_dd080dec4470e08d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ListOfOutputs(jobject obj) : ::org::apache::lucene::util::fst::Outputs(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ListOfOutputs(const ListOfOutputs& obj) : ::org::apache::lucene::util::fst::Outputs(obj) {}

              ListOfOutputs(const ::org::apache::lucene::util::fst::Outputs &);

              ::java::lang::Object add(const ::java::lang::Object &, const ::java::lang::Object &) const;
              ::java::util::List asList(const ::java::lang::Object &) const;
              ::java::lang::Object common(const ::java::lang::Object &, const ::java::lang::Object &) const;
              ::java::lang::Object getNoOutput() const;
              ::java::lang::Object merge(const ::java::lang::Object &, const ::java::lang::Object &) const;
              ::java::lang::String outputToString(const ::java::lang::Object &) const;
              jlong ramBytesUsed(const ::java::lang::Object &) const;
              ::java::lang::Object read(const ::org::apache::lucene::store::DataInput &) const;
              ::java::lang::Object readFinalOutput(const ::org::apache::lucene::store::DataInput &) const;
              void skipFinalOutput(const ::org::apache::lucene::store::DataInput &) const;
              void skipOutput(const ::org::apache::lucene::store::DataInput &) const;
              ::java::lang::Object subtract(const ::java::lang::Object &, const ::java::lang::Object &) const;
              ::java::lang::String toString() const;
              void write(const ::java::lang::Object &, const ::org::apache::lucene::store::DataOutput &) const;
              void writeFinalOutput(const ::java::lang::Object &, const ::org::apache::lucene::store::DataOutput &) const;
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
            extern PyType_Def PY_TYPE_DEF(ListOfOutputs);
            extern PyTypeObject *PY_TYPE(ListOfOutputs);

            class t_ListOfOutputs {
            public:
              PyObject_HEAD
              ListOfOutputs object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_ListOfOutputs *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const ListOfOutputs&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const ListOfOutputs&, PyTypeObject *);
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
