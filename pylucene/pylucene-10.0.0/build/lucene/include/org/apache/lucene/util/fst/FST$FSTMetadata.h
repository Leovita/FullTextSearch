#ifndef org_apache_lucene_util_fst_FST$FSTMetadata_H
#define org_apache_lucene_util_fst_FST$FSTMetadata_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class Outputs;
          class FST$INPUT_TYPE;
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
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {

          class FST$FSTMetadata : public ::java::lang::Object {
           public:
            enum {
              mid_init$_6d6fc68131497777,
              mid_getEmptyOutput_4819806f62f1360a,
              mid_getNumBytes_0f176418e3e16541,
              mid_getVersion_bd89ce15dad49192,
              mid_save_949eccaa2018a6dc,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FST$FSTMetadata(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FST$FSTMetadata(const FST$FSTMetadata& obj) : ::java::lang::Object(obj) {}

            FST$FSTMetadata(const ::org::apache::lucene::util::fst::FST$INPUT_TYPE &, const ::org::apache::lucene::util::fst::Outputs &, const ::java::lang::Object &, jlong, jint, jlong);

            ::java::lang::Object getEmptyOutput() const;
            jlong getNumBytes() const;
            jint getVersion() const;
            void save(const ::org::apache::lucene::store::DataOutput &) const;
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
          extern PyType_Def PY_TYPE_DEF(FST$FSTMetadata);
          extern PyTypeObject *PY_TYPE(FST$FSTMetadata);

          class t_FST$FSTMetadata {
          public:
            PyObject_HEAD
            FST$FSTMetadata object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FST$FSTMetadata *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FST$FSTMetadata&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FST$FSTMetadata&, PyTypeObject *);
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
