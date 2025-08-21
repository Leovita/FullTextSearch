#ifndef org_antlr_v4_runtime_atn_Transition_H
#define org_antlr_v4_runtime_atn_Transition_H

#include "java/lang/Object.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class ATNState;
          class Transition;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Integer;
    class String;
    class Class;
  }
  namespace util {
    class List;
    class Map;
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
              mid_getSerializationType_20fbf7565993c3d7,
              mid_isEpsilon_947277eca0748c4e,
              mid_matches_fb87b32bf7e41aa6,
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
