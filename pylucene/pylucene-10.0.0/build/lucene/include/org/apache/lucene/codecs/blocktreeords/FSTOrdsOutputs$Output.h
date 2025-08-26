#ifndef org_apache_lucene_codecs_blocktreeords_FSTOrdsOutputs$Output_H
#define org_apache_lucene_codecs_blocktreeords_FSTOrdsOutputs$Output_H

#include "java/lang/Record.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace blocktreeords {
          class FSTOrdsOutputs$Output;
        }
      }
      namespace util {
        class BytesRef;
      }
    }
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
              mid_init$_21a316e27b6ef4ff,
              mid_bytes_adbedbc1fa61c358,
              mid_endOrd_0f176418e3e16541,
              mid_equals_00d17418847797d4,
              mid_hashCode_bd89ce15dad49192,
              mid_startOrd_0f176418e3e16541,
              mid_toString_e7df854526d67fa3,
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
