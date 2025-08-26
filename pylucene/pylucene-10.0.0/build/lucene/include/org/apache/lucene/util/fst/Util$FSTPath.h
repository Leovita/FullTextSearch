#ifndef org_apache_lucene_util_fst_Util$FSTPath_H
#define org_apache_lucene_util_fst_Util$FSTPath_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
    class CharSequence;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {
          class FST$Arc;
        }
        class IntsRefBuilder;
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

          class Util$FSTPath : public ::java::lang::Object {
           public:
            enum {
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            enum {
              fid_arc,
              fid_boost,
              fid_context,
              fid_input,
              fid_output,
              fid_payload,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Util$FSTPath(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Util$FSTPath(const Util$FSTPath& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::util::fst::FST$Arc _get_arc() const;
            void _set_arc(const ::org::apache::lucene::util::fst::FST$Arc &) const;
            jfloat _get_boost() const;
            ::java::lang::CharSequence _get_context() const;
            ::org::apache::lucene::util::IntsRefBuilder _get_input() const;
            ::java::lang::Object _get_output() const;
            void _set_output(const ::java::lang::Object &) const;
            jint _get_payload() const;
            void _set_payload(jint) const;

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
          extern PyType_Def PY_TYPE_DEF(Util$FSTPath);
          extern PyTypeObject *PY_TYPE(Util$FSTPath);

          class t_Util$FSTPath {
          public:
            PyObject_HEAD
            Util$FSTPath object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Util$FSTPath *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Util$FSTPath&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Util$FSTPath&, PyTypeObject *);
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
