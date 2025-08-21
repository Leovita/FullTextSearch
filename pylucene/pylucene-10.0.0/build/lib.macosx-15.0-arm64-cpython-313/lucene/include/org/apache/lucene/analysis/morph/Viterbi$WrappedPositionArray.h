#ifndef org_apache_lucene_analysis_morph_Viterbi$WrappedPositionArray_H
#define org_apache_lucene_analysis_morph_Viterbi$WrappedPositionArray_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace morph {
          class Viterbi$Position;
        }
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
      namespace analysis {
        namespace morph {

          class Viterbi$WrappedPositionArray : public ::java::lang::Object {
           public:
            enum {
              mid_freeBefore_540b2b23d51b1efd,
              mid_get_84dd3c490264e5b8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Viterbi$WrappedPositionArray(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Viterbi$WrappedPositionArray(const Viterbi$WrappedPositionArray& obj) : ::java::lang::Object(obj) {}

            void freeBefore(jint) const;
            ::org::apache::lucene::analysis::morph::Viterbi$Position get(jint) const;
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
      namespace analysis {
        namespace morph {
          extern PyType_Def PY_TYPE_DEF(Viterbi$WrappedPositionArray);
          extern PyTypeObject *PY_TYPE(Viterbi$WrappedPositionArray);

          class t_Viterbi$WrappedPositionArray {
          public:
            PyObject_HEAD
            Viterbi$WrappedPositionArray object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Viterbi$WrappedPositionArray *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Viterbi$WrappedPositionArray&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Viterbi$WrappedPositionArray&, PyTypeObject *);
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
