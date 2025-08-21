#ifndef org_apache_lucene_util_fst_FST$Arc_H
#define org_apache_lucene_util_fst_FST$Arc_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class FST$Arc;
        }
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

          class FST$Arc : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_arcIdx_20fbf7565993c3d7,
              mid_bytesPerArc_20fbf7565993c3d7,
              mid_copyFrom_f5bb151389242a45,
              mid_flags_847674f430f49e4c,
              mid_isFinal_947277eca0748c4e,
              mid_isLast_947277eca0748c4e,
              mid_label_20fbf7565993c3d7,
              mid_nextFinalOutput_5655ed8670534604,
              mid_nodeFlags_847674f430f49e4c,
              mid_numArcs_20fbf7565993c3d7,
              mid_output_5655ed8670534604,
              mid_posArcsStart_16939d9d0a9a9721,
              mid_target_16939d9d0a9a9721,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FST$Arc(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FST$Arc(const FST$Arc& obj) : ::java::lang::Object(obj) {}

            FST$Arc();

            jint arcIdx() const;
            jint bytesPerArc() const;
            FST$Arc copyFrom(const FST$Arc &) const;
            jbyte flags() const;
            jboolean isFinal() const;
            jboolean isLast() const;
            jint label() const;
            ::java::lang::Object nextFinalOutput() const;
            jbyte nodeFlags() const;
            jint numArcs() const;
            ::java::lang::Object output() const;
            jlong posArcsStart() const;
            jlong target() const;
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
      namespace util {
        namespace fst {
          extern PyType_Def PY_TYPE_DEF(FST$Arc);
          extern PyTypeObject *PY_TYPE(FST$Arc);

          class t_FST$Arc {
          public:
            PyObject_HEAD
            FST$Arc object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FST$Arc *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FST$Arc&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FST$Arc&, PyTypeObject *);
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
