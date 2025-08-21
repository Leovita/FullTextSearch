#ifndef org_apache_lucene_util_fst_FSTCompiler$Builder_H
#define org_apache_lucene_util_fst_FSTCompiler$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class FST$INPUT_TYPE;
          class FSTCompiler$Builder;
          class FSTCompiler;
          class Outputs;
        }
      }
      namespace store {
        class DataOutput;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {

          class FSTCompiler$Builder : public ::java::lang::Object {
           public:
            enum {
              mid_init$_4fdbfad7c34e313e,
              mid_allowFixedLengthArcs_e20ff9d080443c4b,
              mid_build_99bc22f9840fe00d,
              mid_dataOutput_afaefbc80557d8f0,
              mid_directAddressingMaxOversizingFactor_3a45bf02fa4b795b,
              mid_setVersion_d07ef88e29023c1d,
              mid_suffixRAMLimitMB_06cc8f2f463b384d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FSTCompiler$Builder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FSTCompiler$Builder(const FSTCompiler$Builder& obj) : ::java::lang::Object(obj) {}

            FSTCompiler$Builder(const ::org::apache::lucene::util::fst::FST$INPUT_TYPE &, const ::org::apache::lucene::util::fst::Outputs &);

            FSTCompiler$Builder allowFixedLengthArcs(jboolean) const;
            ::org::apache::lucene::util::fst::FSTCompiler build() const;
            FSTCompiler$Builder dataOutput(const ::org::apache::lucene::store::DataOutput &) const;
            FSTCompiler$Builder directAddressingMaxOversizingFactor(jfloat) const;
            FSTCompiler$Builder setVersion(jint) const;
            FSTCompiler$Builder suffixRAMLimitMB(jdouble) const;
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
          extern PyType_Def PY_TYPE_DEF(FSTCompiler$Builder);
          extern PyTypeObject *PY_TYPE(FSTCompiler$Builder);

          class t_FSTCompiler$Builder {
          public:
            PyObject_HEAD
            FSTCompiler$Builder object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FSTCompiler$Builder *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FSTCompiler$Builder&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FSTCompiler$Builder&, PyTypeObject *);
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
