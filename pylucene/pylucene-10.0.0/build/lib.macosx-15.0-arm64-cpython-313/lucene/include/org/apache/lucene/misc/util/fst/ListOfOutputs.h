#ifndef org_apache_lucene_misc_util_fst_ListOfOutputs_H
#define org_apache_lucene_misc_util_fst_ListOfOutputs_H

#include "org/apache/lucene/util/fst/Outputs.h"

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
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
    class Object;
  }
  namespace util {
    class List;
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
                mid_init$_213377cc29e7ed76,
                mid_add_243089e4ee289db6,
                mid_asList_b887ee42d9bb67f9,
                mid_common_243089e4ee289db6,
                mid_getNoOutput_5655ed8670534604,
                mid_merge_243089e4ee289db6,
                mid_outputToString_a6472d0c4a2d4dc6,
                mid_ramBytesUsed_eed3c4edb9cd98e2,
                mid_read_76ad041c51ef9e53,
                mid_readFinalOutput_76ad041c51ef9e53,
                mid_skipFinalOutput_fc75c9d195bdd885,
                mid_skipOutput_fc75c9d195bdd885,
                mid_subtract_243089e4ee289db6,
                mid_toString_09a7afff1868fc5e,
                mid_write_1fb2a58964472a7b,
                mid_writeFinalOutput_1fb2a58964472a7b,
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
