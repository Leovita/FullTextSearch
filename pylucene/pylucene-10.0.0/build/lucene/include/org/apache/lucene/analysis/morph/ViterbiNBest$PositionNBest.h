#ifndef org_apache_lucene_analysis_morph_ViterbiNBest$PositionNBest_H
#define org_apache_lucene_analysis_morph_ViterbiNBest$PositionNBest_H

#include "org/apache/lucene/analysis/morph/Viterbi$Position.h"

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

          class ViterbiNBest$PositionNBest : public ::org::apache::lucene::analysis::morph::Viterbi$Position {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_addForward_efff196aa6a9e564,
              mid_getForwardCount_20fbf7565993c3d7,
              mid_getForwardID_3c9bba330f083871,
              mid_getForwardPos_3c9bba330f083871,
              mid_getForwardType_f076e1862997cd4f,
              mid_reset_3720c61b0679eb3e,
              mid_setForwardCount_540b2b23d51b1efd,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ViterbiNBest$PositionNBest(jobject obj) : ::org::apache::lucene::analysis::morph::Viterbi$Position(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ViterbiNBest$PositionNBest(const ViterbiNBest$PositionNBest& obj) : ::org::apache::lucene::analysis::morph::Viterbi$Position(obj) {}

            ViterbiNBest$PositionNBest();

            void addForward(jint, jint, jint, const ::org::apache::lucene::analysis::morph::TokenType &) const;
            jint getForwardCount() const;
            jint getForwardID(jint) const;
            jint getForwardPos(jint) const;
            ::org::apache::lucene::analysis::morph::TokenType getForwardType(jint) const;
            void reset() const;
            void setForwardCount(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(ViterbiNBest$PositionNBest);
          extern PyTypeObject *PY_TYPE(ViterbiNBest$PositionNBest);

          class t_ViterbiNBest$PositionNBest {
          public:
            PyObject_HEAD
            ViterbiNBest$PositionNBest object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_ViterbiNBest$PositionNBest *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const ViterbiNBest$PositionNBest&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const ViterbiNBest$PositionNBest&, PyTypeObject *, PyTypeObject *);
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
