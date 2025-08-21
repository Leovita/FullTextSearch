#ifndef org_apache_lucene_util_fst_FST$FSTMetadata_H
#define org_apache_lucene_util_fst_FST$FSTMetadata_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class FST$INPUT_TYPE;
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
  namespace io {
    class IOException;
  }
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

          class FST$FSTMetadata : public ::java::lang::Object {
           public:
            enum {
              mid_init$_099e5b0d334d5bc8,
              mid_getEmptyOutput_5655ed8670534604,
              mid_getNumBytes_16939d9d0a9a9721,
              mid_getVersion_20fbf7565993c3d7,
              mid_save_3a071e25ad99bd99,
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
