#ifndef org_apache_lucene_analysis_morph_Viterbi$Position_H
#define org_apache_lucene_analysis_morph_Viterbi$Position_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace morph {
          class TokenType;
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

          class Viterbi$Position : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_add_0c9b4c26b19d05c4,
              mid_getBackID_3c9bba330f083871,
              mid_getBackIndex_3c9bba330f083871,
              mid_getBackPos_3c9bba330f083871,
              mid_getBackType_f076e1862997cd4f,
              mid_getBackWordPos_3c9bba330f083871,
              mid_getCost_3c9bba330f083871,
              mid_getCount_20fbf7565993c3d7,
              mid_getLastRightID_3c9bba330f083871,
              mid_getPos_20fbf7565993c3d7,
              mid_reset_3720c61b0679eb3e,
              mid_setCount_540b2b23d51b1efd,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Viterbi$Position(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Viterbi$Position(const Viterbi$Position& obj) : ::java::lang::Object(obj) {}

            Viterbi$Position();

            void add(jint, jint, jint, jint, jint, jint, const ::org::apache::lucene::analysis::morph::TokenType &) const;
            jint getBackID(jint) const;
            jint getBackIndex(jint) const;
            jint getBackPos(jint) const;
            ::org::apache::lucene::analysis::morph::TokenType getBackType(jint) const;
            jint getBackWordPos(jint) const;
            jint getCost(jint) const;
            jint getCount() const;
            jint getLastRightID(jint) const;
            jint getPos() const;
            void reset() const;
            void setCount(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(Viterbi$Position);
          extern PyTypeObject *PY_TYPE(Viterbi$Position);

          class t_Viterbi$Position {
          public:
            PyObject_HEAD
            Viterbi$Position object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_Viterbi$Position *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Viterbi$Position&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Viterbi$Position&, PyTypeObject *, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
