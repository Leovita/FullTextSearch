#ifndef org_apache_lucene_util_fst_FSTCompiler_H
#define org_apache_lucene_util_fst_FSTCompiler_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
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
          class FSTReader;
          class FST$FSTMetadata;
        }
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
              mid_add_b27e2647f98cd7bb,
              mid_compile_4d4ce58ca0109531,
              mid_fstRamBytesUsed_0f176418e3e16541,
              mid_fstSizeInBytes_0f176418e3e16541,
              mid_getArcCount_0f176418e3e16541,
              mid_getDirectAddressingMaxOversizingFactor_8b62236f0e4d0dbc,
              mid_getFSTReader_8b7fd2add884d180,
              mid_getNodeCount_0f176418e3e16541,
              mid_getOnHeapReaderWriter_61810f921a40f6ab,
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
