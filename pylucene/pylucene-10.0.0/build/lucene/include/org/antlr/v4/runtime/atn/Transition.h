#ifndef org_antlr_v4_runtime_atn_Transition_H
#define org_antlr_v4_runtime_atn_Transition_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Integer;
    class Class;
    class String;
  }
  namespace util {
    class Map;
    class List;
  }
}
namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class Transition;
          class ATNState;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          class Transition : public ::java::lang::Object {
           public:
            enum {
              mid_getSerializationType_bd89ce15dad49192,
              mid_isEpsilon_9aa4f33e82ea333f,
              mid_matches_964913aa98f38ea1,
              max_mid
            };

            enum {
              fid_target,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Transition(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Transition(const Transition& obj) : ::java::lang::Object(obj) {}

            static jint ACTION;
            static jint ATOM;
            static jint EPSILON;
            static jint NOT_SET;
            static jint PRECEDENCE;
            static jint PREDICATE;
            static jint RANGE;
            static jint RULE;
            static jint SET;
            static jint WILDCARD;
            static ::java::util::List *serializationNames;
            static ::java::util::Map *serializationTypes;

            ::org::antlr::v4::runtime::atn::ATNState _get_target() const;
            void _set_target(const ::org::antlr::v4::runtime::atn::ATNState &) const;

            jint getSerializationType() const;
            jboolean isEpsilon() const;
            jboolean matches(jint, jint, jint) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          extern PyType_Def PY_TYPE_DEF(Transition);
          extern PyTypeObject *PY_TYPE(Transition);

          class t_Transition {
          public:
            PyObject_HEAD
            Transition object;
            static PyObject *wrap_Object(const Transition&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
