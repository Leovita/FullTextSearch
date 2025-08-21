#ifndef org_apache_lucene_util_fst_FSTCompiler_H
#define org_apache_lucene_util_fst_FSTCompiler_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class FSTReader;
          class FST$FSTMetadata;
        }
        class IntsRef;
      }
      namespace store {
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

          class FSTCompiler : public ::java::lang::Object {
           public:
            enum {
              mid_add_0a44f2cd64b1f893,
              mid_compile_3f93d7d5124057ff,
              mid_fstRamBytesUsed_16939d9d0a9a9721,
              mid_fstSizeInBytes_16939d9d0a9a9721,
              mid_getArcCount_16939d9d0a9a9721,
              mid_getDirectAddressingMaxOversizingFactor_9b6c3480dac00edf,
              mid_getFSTReader_0a59d503a2d3f824,
              mid_getNodeCount_16939d9d0a9a9721,
              mid_getOnHeapReaderWriter_ff0e472b09d497d9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FSTCompiler(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FSTCompiler(const FSTCompiler& obj) : ::java::lang::Object(obj) {}

            void add(const ::org::apache::lucene::util::IntsRef &, const ::java::lang::Object &) const;
            ::org::apache::lucene::util::fst::FST$FSTMetadata compile() const;
            jlong fstRamBytesUsed() const;
            jlong fstSizeInBytes() const;
            jlong getArcCount() const;
            jfloat getDirectAddressingMaxOversizingFactor() const;
            ::org::apache::lucene::util::fst::FSTReader getFSTReader() const;
            jlong getNodeCount() const;
            static ::org::apache::lucene::store::DataOutput getOnHeapReaderWriter(jint);
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
          extern PyType_Def PY_TYPE_DEF(FSTCompiler);
          extern PyTypeObject *PY_TYPE(FSTCompiler);

          class t_FSTCompiler {
          public:
            PyObject_HEAD
            FSTCompiler object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FSTCompiler *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FSTCompiler&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FSTCompiler&, PyTypeObject *);
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
