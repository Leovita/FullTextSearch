#ifndef org_apache_lucene_codecs_blocktreeords_FSTOrdsOutputs$Output_H
#define org_apache_lucene_codecs_blocktreeords_FSTOrdsOutputs$Output_H

#include "java/lang/Record.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace codecs {
        namespace blocktreeords {
          class FSTOrdsOutputs$Output;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace blocktreeords {

          class FSTOrdsOutputs$Output : public ::java::lang::Record {
           public:
            enum {
              mid_init$_25ff7a0759a6ca17,
              mid_bytes_9740fddd1c7df148,
              mid_endOrd_16939d9d0a9a9721,
              mid_equals_570b5248a6da3ef6,
              mid_hashCode_20fbf7565993c3d7,
              mid_startOrd_16939d9d0a9a9721,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FSTOrdsOutputs$Output(jobject obj) : ::java::lang::Record(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FSTOrdsOutputs$Output(const FSTOrdsOutputs$Output& obj) : ::java::lang::Record(obj) {}

            FSTOrdsOutputs$Output(const ::org::apache::lucene::util::BytesRef &, jlong, jlong);

            ::org::apache::lucene::util::BytesRef bytes() const;
            jlong endOrd() const;
            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            jlong startOrd() const;
            ::java::lang::String toString() const;
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
      namespace codecs {
        namespace blocktreeords {
          extern PyType_Def PY_TYPE_DEF(FSTOrdsOutputs$Output);
          extern PyTypeObject *PY_TYPE(FSTOrdsOutputs$Output);

          class t_FSTOrdsOutputs$Output {
          public:
            PyObject_HEAD
            FSTOrdsOutputs$Output object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FSTOrdsOutputs$Output *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FSTOrdsOutputs$Output&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FSTOrdsOutputs$Output&, PyTypeObject *);
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
