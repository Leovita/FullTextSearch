#ifndef org_apache_lucene_util_fst_FST$Arc_H
#define org_apache_lucene_util_fst_FST$Arc_H

#include "java/lang/Object.h"

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
namespace java {
  namespace lang {
    class String;
    class Class;
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
              mid_init$_e7bdbe105ce1bafb,
              mid_arcIdx_bd89ce15dad49192,
              mid_bytesPerArc_bd89ce15dad49192,
              mid_copyFrom_6e3fa3026b92cf4e,
              mid_flags_1456044a01a5c9bf,
              mid_isFinal_9aa4f33e82ea333f,
              mid_isLast_9aa4f33e82ea333f,
              mid_label_bd89ce15dad49192,
              mid_nextFinalOutput_4819806f62f1360a,
              mid_nodeFlags_1456044a01a5c9bf,
              mid_numArcs_bd89ce15dad49192,
              mid_output_4819806f62f1360a,
              mid_posArcsStart_0f176418e3e16541,
              mid_target_0f176418e3e16541,
              mid_toString_e7df854526d67fa3,
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
