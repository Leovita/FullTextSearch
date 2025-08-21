#include <jni.h>
#include "JCCEnv.h"
#include "org/antlr/v4/runtime/atn/AbstractPredicateTransition.h"
#include "org/antlr/v4/runtime/atn/ATNState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          ::java::lang::Class *AbstractPredicateTransition::class$ = NULL;
          jmethodID *AbstractPredicateTransition::mids$ = NULL;
          bool AbstractPredicateTransition::live$ = false;

          jclass AbstractPredicateTransition::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/antlr/v4/runtime/atn/AbstractPredicateTransition");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_dbe437c90ceb25ad] = env->getMethodID(cls, "<init>", "(Lorg/antlr/v4/runtime/atn/ATNState;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AbstractPredicateTransition::AbstractPredicateTransition(const ::org::antlr::v4::runtime::atn::ATNState & a0) : ::org::antlr::v4::runtime::atn::Transition(env->newObject(initializeClass, &mids$, mid_init$_dbe437c90ceb25ad, a0.this$)) {}
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          static PyObject *t_AbstractPredicateTransition_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractPredicateTransition_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AbstractPredicateTransition_init_(t_AbstractPredicateTransition *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_AbstractPredicateTransition__methods_[] = {
            DECLARE_METHOD(t_AbstractPredicateTransition, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractPredicateTransition, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractPredicateTransition)[] = {
            { Py_tp_methods, t_AbstractPredicateTransition__methods_ },
            { Py_tp_init, (void *) t_AbstractPredicateTransition_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractPredicateTransition)[] = {
            &PY_TYPE_DEF(::org::antlr::v4::runtime::atn::Transition),
            NULL
          };

          DEFINE_TYPE(AbstractPredicateTransition, t_AbstractPredicateTransition, AbstractPredicateTransition);

          void t_AbstractPredicateTransition::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractPredicateTransition), &PY_TYPE_DEF(AbstractPredicateTransition), module, "AbstractPredicateTransition", 0);
          }

          void t_AbstractPredicateTransition::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPredicateTransition), "class_", make_descriptor(AbstractPredicateTransition::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPredicateTransition), "wrapfn_", make_descriptor(t_AbstractPredicateTransition::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPredicateTransition), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractPredicateTransition_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractPredicateTransition::initializeClass, 1)))
              return NULL;
            return t_AbstractPredicateTransition::wrap_Object(AbstractPredicateTransition(((t_AbstractPredicateTransition *) arg)->object.this$));
          }
          static PyObject *t_AbstractPredicateTransition_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractPredicateTransition::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AbstractPredicateTransition_init_(t_AbstractPredicateTransition *self, PyObject *args, PyObject *kwds)
          {
            ::org::antlr::v4::runtime::atn::ATNState a0((jobject) NULL);
            AbstractPredicateTransition object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::antlr::v4::runtime::atn::ATNState::initializeClass, &a0))
            {
              INT_CALL(object = AbstractPredicateTransition(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/InvalidPropertiesFormatException.h"
#include "java/lang/String.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *InvalidPropertiesFormatException::class$ = NULL;
    jmethodID *InvalidPropertiesFormatException::mids$ = NULL;
    bool InvalidPropertiesFormatException::live$ = false;

    jclass InvalidPropertiesFormatException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/InvalidPropertiesFormatException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0d82408c6e55bc30] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_4b71a6d99b73f7d1] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    InvalidPropertiesFormatException::InvalidPropertiesFormatException(const ::java::lang::String & a0) : ::java::io::IOException(env->newObject(initializeClass, &mids$, mid_init$_0d82408c6e55bc30, a0.this$)) {}

    InvalidPropertiesFormatException::InvalidPropertiesFormatException(const ::java::lang::Throwable & a0) : ::java::io::IOException(env->newObject(initializeClass, &mids$, mid_init$_4b71a6d99b73f7d1, a0.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_InvalidPropertiesFormatException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_InvalidPropertiesFormatException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_InvalidPropertiesFormatException_init_(t_InvalidPropertiesFormatException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_InvalidPropertiesFormatException__methods_[] = {
      DECLARE_METHOD(t_InvalidPropertiesFormatException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_InvalidPropertiesFormatException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(InvalidPropertiesFormatException)[] = {
      { Py_tp_methods, t_InvalidPropertiesFormatException__methods_ },
      { Py_tp_init, (void *) t_InvalidPropertiesFormatException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(InvalidPropertiesFormatException)[] = {
      &PY_TYPE_DEF(::java::io::IOException),
      NULL
    };

    DEFINE_TYPE(InvalidPropertiesFormatException, t_InvalidPropertiesFormatException, InvalidPropertiesFormatException);

    void t_InvalidPropertiesFormatException::install(PyObject *module)
    {
      installType(&PY_TYPE(InvalidPropertiesFormatException), &PY_TYPE_DEF(InvalidPropertiesFormatException), module, "InvalidPropertiesFormatException", 0);
    }

    void t_InvalidPropertiesFormatException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(InvalidPropertiesFormatException), "class_", make_descriptor(InvalidPropertiesFormatException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(InvalidPropertiesFormatException), "wrapfn_", make_descriptor(t_InvalidPropertiesFormatException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(InvalidPropertiesFormatException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_InvalidPropertiesFormatException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, InvalidPropertiesFormatException::initializeClass, 1)))
        return NULL;
      return t_InvalidPropertiesFormatException::wrap_Object(InvalidPropertiesFormatException(((t_InvalidPropertiesFormatException *) arg)->object.this$));
    }
    static PyObject *t_InvalidPropertiesFormatException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, InvalidPropertiesFormatException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_InvalidPropertiesFormatException_init_(t_InvalidPropertiesFormatException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          InvalidPropertiesFormatException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = InvalidPropertiesFormatException(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Throwable a0((jobject) NULL);
          InvalidPropertiesFormatException object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = InvalidPropertiesFormatException(a0));
            self->object = object;
            break;
          }
        }
       default:
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/antlr/v4/runtime/atn/PrecedencePredicateTransition.h"
#include "org/antlr/v4/runtime/atn/ATNState.h"
#include "java/lang/String.h"
#include "org/antlr/v4/runtime/atn/SemanticContext$PrecedencePredicate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          ::java::lang::Class *PrecedencePredicateTransition::class$ = NULL;
          jmethodID *PrecedencePredicateTransition::mids$ = NULL;
          jfieldID *PrecedencePredicateTransition::fids$ = NULL;
          bool PrecedencePredicateTransition::live$ = false;

          jclass PrecedencePredicateTransition::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/antlr/v4/runtime/atn/PrecedencePredicateTransition");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f44ba19d4113dd3a] = env->getMethodID(cls, "<init>", "(Lorg/antlr/v4/runtime/atn/ATNState;I)V");
              mids$[mid_getPredicate_97b7acd4fcff9dd4] = env->getMethodID(cls, "getPredicate", "()Lorg/antlr/v4/runtime/atn/SemanticContext$PrecedencePredicate;");
              mids$[mid_getSerializationType_20fbf7565993c3d7] = env->getMethodID(cls, "getSerializationType", "()I");
              mids$[mid_isEpsilon_947277eca0748c4e] = env->getMethodID(cls, "isEpsilon", "()Z");
              mids$[mid_matches_fb87b32bf7e41aa6] = env->getMethodID(cls, "matches", "(III)Z");
              mids$[mid_toString_09a7afff1868fc5e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              fids$ = new jfieldID[max_fid];
              fids$[fid_precedence] = env->getFieldID(cls, "precedence", "I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PrecedencePredicateTransition::PrecedencePredicateTransition(const ::org::antlr::v4::runtime::atn::ATNState & a0, jint a1) : ::org::antlr::v4::runtime::atn::AbstractPredicateTransition(env->newObject(initializeClass, &mids$, mid_init$_f44ba19d4113dd3a, a0.this$, a1)) {}

          ::org::antlr::v4::runtime::atn::SemanticContext$PrecedencePredicate PrecedencePredicateTransition::getPredicate() const
          {
            return ::org::antlr::v4::runtime::atn::SemanticContext$PrecedencePredicate(env->callObjectMethod(this$, mids$[mid_getPredicate_97b7acd4fcff9dd4]));
          }

          jint PrecedencePredicateTransition::getSerializationType() const
          {
            return env->callIntMethod(this$, mids$[mid_getSerializationType_20fbf7565993c3d7]);
          }

          jboolean PrecedencePredicateTransition::isEpsilon() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isEpsilon_947277eca0748c4e]);
          }

          jboolean PrecedencePredicateTransition::matches(jint a0, jint a1, jint a2) const
          {
            return env->callBooleanMethod(this$, mids$[mid_matches_fb87b32bf7e41aa6], a0, a1, a2);
          }

          ::java::lang::String PrecedencePredicateTransition::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_09a7afff1868fc5e]));
          }

          jint PrecedencePredicateTransition::_get_precedence() const
          {
            return env->getIntField(this$, fids$[fid_precedence]);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          static PyObject *t_PrecedencePredicateTransition_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PrecedencePredicateTransition_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PrecedencePredicateTransition_init_(t_PrecedencePredicateTransition *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PrecedencePredicateTransition_getPredicate(t_PrecedencePredicateTransition *self);
          static PyObject *t_PrecedencePredicateTransition_getSerializationType(t_PrecedencePredicateTransition *self, PyObject *args);
          static PyObject *t_PrecedencePredicateTransition_isEpsilon(t_PrecedencePredicateTransition *self, PyObject *args);
          static PyObject *t_PrecedencePredicateTransition_matches(t_PrecedencePredicateTransition *self, PyObject *args);
          static PyObject *t_PrecedencePredicateTransition_toString(t_PrecedencePredicateTransition *self, PyObject *args);
          static PyObject *t_PrecedencePredicateTransition_get__precedence(t_PrecedencePredicateTransition *self, void *data);

          static PyObject *t_PrecedencePredicateTransition_get__epsilon(t_PrecedencePredicateTransition *self, void *data);
          static PyObject *t_PrecedencePredicateTransition_get__predicate(t_PrecedencePredicateTransition *self, void *data);
          static PyObject *t_PrecedencePredicateTransition_get__serializationType(t_PrecedencePredicateTransition *self, void *data);
          static PyGetSetDef t_PrecedencePredicateTransition__fields_[] = {
            DECLARE_GET_FIELD(t_PrecedencePredicateTransition, precedence),
            DECLARE_GET_FIELD(t_PrecedencePredicateTransition, epsilon),
            DECLARE_GET_FIELD(t_PrecedencePredicateTransition, predicate),
            DECLARE_GET_FIELD(t_PrecedencePredicateTransition, serializationType),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PrecedencePredicateTransition__methods_[] = {
            DECLARE_METHOD(t_PrecedencePredicateTransition, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PrecedencePredicateTransition, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PrecedencePredicateTransition, getPredicate, METH_NOARGS),
            DECLARE_METHOD(t_PrecedencePredicateTransition, getSerializationType, METH_VARARGS),
            DECLARE_METHOD(t_PrecedencePredicateTransition, isEpsilon, METH_VARARGS),
            DECLARE_METHOD(t_PrecedencePredicateTransition, matches, METH_VARARGS),
            DECLARE_METHOD(t_PrecedencePredicateTransition, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PrecedencePredicateTransition)[] = {
            { Py_tp_methods, t_PrecedencePredicateTransition__methods_ },
            { Py_tp_init, (void *) t_PrecedencePredicateTransition_init_ },
            { Py_tp_getset, t_PrecedencePredicateTransition__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PrecedencePredicateTransition)[] = {
            &PY_TYPE_DEF(::org::antlr::v4::runtime::atn::AbstractPredicateTransition),
            NULL
          };

          DEFINE_TYPE(PrecedencePredicateTransition, t_PrecedencePredicateTransition, PrecedencePredicateTransition);

          void t_PrecedencePredicateTransition::install(PyObject *module)
          {
            installType(&PY_TYPE(PrecedencePredicateTransition), &PY_TYPE_DEF(PrecedencePredicateTransition), module, "PrecedencePredicateTransition", 0);
          }

          void t_PrecedencePredicateTransition::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PrecedencePredicateTransition), "class_", make_descriptor(PrecedencePredicateTransition::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PrecedencePredicateTransition), "wrapfn_", make_descriptor(t_PrecedencePredicateTransition::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PrecedencePredicateTransition), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PrecedencePredicateTransition_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PrecedencePredicateTransition::initializeClass, 1)))
              return NULL;
            return t_PrecedencePredicateTransition::wrap_Object(PrecedencePredicateTransition(((t_PrecedencePredicateTransition *) arg)->object.this$));
          }
          static PyObject *t_PrecedencePredicateTransition_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PrecedencePredicateTransition::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PrecedencePredicateTransition_init_(t_PrecedencePredicateTransition *self, PyObject *args, PyObject *kwds)
          {
            ::org::antlr::v4::runtime::atn::ATNState a0((jobject) NULL);
            jint a1;
            PrecedencePredicateTransition object((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::antlr::v4::runtime::atn::ATNState::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PrecedencePredicateTransition(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PrecedencePredicateTransition_getPredicate(t_PrecedencePredicateTransition *self)
          {
            ::org::antlr::v4::runtime::atn::SemanticContext$PrecedencePredicate result((jobject) NULL);
            OBJ_CALL(result = self->object.getPredicate());
            return ::org::antlr::v4::runtime::atn::t_SemanticContext$PrecedencePredicate::wrap_Object(result);
          }

          static PyObject *t_PrecedencePredicateTransition_getSerializationType(t_PrecedencePredicateTransition *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getSerializationType());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(PrecedencePredicateTransition), (PyObject *) self, "getSerializationType", args, 2);
          }

          static PyObject *t_PrecedencePredicateTransition_isEpsilon(t_PrecedencePredicateTransition *self, PyObject *args)
          {
            jboolean result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.isEpsilon());
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(PrecedencePredicateTransition), (PyObject *) self, "isEpsilon", args, 2);
          }

          static PyObject *t_PrecedencePredicateTransition_matches(t_PrecedencePredicateTransition *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jint a2;
            jboolean result;

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.matches(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(PrecedencePredicateTransition), (PyObject *) self, "matches", args, 2);
          }

          static PyObject *t_PrecedencePredicateTransition_toString(t_PrecedencePredicateTransition *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(PrecedencePredicateTransition), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_PrecedencePredicateTransition_get__precedence(t_PrecedencePredicateTransition *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object._get_precedence());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_PrecedencePredicateTransition_get__epsilon(t_PrecedencePredicateTransition *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isEpsilon());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_PrecedencePredicateTransition_get__predicate(t_PrecedencePredicateTransition *self, void *data)
          {
            ::org::antlr::v4::runtime::atn::SemanticContext$PrecedencePredicate value((jobject) NULL);
            OBJ_CALL(value = self->object.getPredicate());
            return ::org::antlr::v4::runtime::atn::t_SemanticContext$PrecedencePredicate::wrap_Object(value);
          }

          static PyObject *t_PrecedencePredicateTransition_get__serializationType(t_PrecedencePredicateTransition *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getSerializationType());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/antlr/v4/runtime/atn/ATNConfig.h"
#include "org/antlr/v4/runtime/atn/ATNState.h"
#include "org/antlr/v4/runtime/Recognizer.h"
#include "org/antlr/v4/runtime/atn/PredictionContext.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/antlr/v4/runtime/atn/SemanticContext.h"
#include "org/antlr/v4/runtime/atn/ATNConfig.h"
#include "JArray.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          ::java::lang::Class *ATNConfig::class$ = NULL;
          jmethodID *ATNConfig::mids$ = NULL;
          jfieldID *ATNConfig::fids$ = NULL;
          bool ATNConfig::live$ = false;

          jclass ATNConfig::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/antlr/v4/runtime/atn/ATNConfig");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_50678efd7e3803cd] = env->getMethodID(cls, "<init>", "(Lorg/antlr/v4/runtime/atn/ATNConfig;Lorg/antlr/v4/runtime/atn/ATNState;)V");
              mids$[mid_init$_686ae8b83905c858] = env->getMethodID(cls, "<init>", "(Lorg/antlr/v4/runtime/atn/ATNConfig;Lorg/antlr/v4/runtime/atn/SemanticContext;)V");
              mids$[mid_init$_586f509098d2d7fe] = env->getMethodID(cls, "<init>", "(Lorg/antlr/v4/runtime/atn/ATNConfig;Lorg/antlr/v4/runtime/atn/ATNState;Lorg/antlr/v4/runtime/atn/PredictionContext;)V");
              mids$[mid_init$_3774101deb35c039] = env->getMethodID(cls, "<init>", "(Lorg/antlr/v4/runtime/atn/ATNConfig;Lorg/antlr/v4/runtime/atn/ATNState;Lorg/antlr/v4/runtime/atn/SemanticContext;)V");
              mids$[mid_init$_536323d430b07cdd] = env->getMethodID(cls, "<init>", "(Lorg/antlr/v4/runtime/atn/ATNState;ILorg/antlr/v4/runtime/atn/PredictionContext;)V");
              mids$[mid_init$_231e02e246366492] = env->getMethodID(cls, "<init>", "(Lorg/antlr/v4/runtime/atn/ATNConfig;Lorg/antlr/v4/runtime/atn/ATNState;Lorg/antlr/v4/runtime/atn/PredictionContext;Lorg/antlr/v4/runtime/atn/SemanticContext;)V");
              mids$[mid_init$_d23064292c4bc36c] = env->getMethodID(cls, "<init>", "(Lorg/antlr/v4/runtime/atn/ATNState;ILorg/antlr/v4/runtime/atn/PredictionContext;Lorg/antlr/v4/runtime/atn/SemanticContext;)V");
              mids$[mid_equals_1274b529738a1c30] = env->getMethodID(cls, "equals", "(Lorg/antlr/v4/runtime/atn/ATNConfig;)Z");
              mids$[mid_equals_570b5248a6da3ef6] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getOuterContextDepth_20fbf7565993c3d7] = env->getMethodID(cls, "getOuterContextDepth", "()I");
              mids$[mid_hashCode_20fbf7565993c3d7] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isPrecedenceFilterSuppressed_947277eca0748c4e] = env->getMethodID(cls, "isPrecedenceFilterSuppressed", "()Z");
              mids$[mid_setPrecedenceFilterSuppressed_b110fc3a58c081ab] = env->getMethodID(cls, "setPrecedenceFilterSuppressed", "(Z)V");
              mids$[mid_toString_09a7afff1868fc5e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_toString_d7f7f3fa5f7c5519] = env->getMethodID(cls, "toString", "(Lorg/antlr/v4/runtime/Recognizer;Z)Ljava/lang/String;");

              fids$ = new jfieldID[max_fid];
              fids$[fid_alt] = env->getFieldID(cls, "alt", "I");
              fids$[fid_context] = env->getFieldID(cls, "context", "Lorg/antlr/v4/runtime/atn/PredictionContext;");
              fids$[fid_reachesIntoOuterContext] = env->getFieldID(cls, "reachesIntoOuterContext", "I");
              fids$[fid_semanticContext] = env->getFieldID(cls, "semanticContext", "Lorg/antlr/v4/runtime/atn/SemanticContext;");
              fids$[fid_state] = env->getFieldID(cls, "state", "Lorg/antlr/v4/runtime/atn/ATNState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ATNConfig::ATNConfig(const ATNConfig & a0, const ::org::antlr::v4::runtime::atn::ATNState & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_50678efd7e3803cd, a0.this$, a1.this$)) {}

          ATNConfig::ATNConfig(const ATNConfig & a0, const ::org::antlr::v4::runtime::atn::SemanticContext & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_686ae8b83905c858, a0.this$, a1.this$)) {}

          ATNConfig::ATNConfig(const ATNConfig & a0, const ::org::antlr::v4::runtime::atn::ATNState & a1, const ::org::antlr::v4::runtime::atn::PredictionContext & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_586f509098d2d7fe, a0.this$, a1.this$, a2.this$)) {}

          ATNConfig::ATNConfig(const ATNConfig & a0, const ::org::antlr::v4::runtime::atn::ATNState & a1, const ::org::antlr::v4::runtime::atn::SemanticContext & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3774101deb35c039, a0.this$, a1.this$, a2.this$)) {}

          ATNConfig::ATNConfig(const ::org::antlr::v4::runtime::atn::ATNState & a0, jint a1, const ::org::antlr::v4::runtime::atn::PredictionContext & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_536323d430b07cdd, a0.this$, a1, a2.this$)) {}

          ATNConfig::ATNConfig(const ATNConfig & a0, const ::org::antlr::v4::runtime::atn::ATNState & a1, const ::org::antlr::v4::runtime::atn::PredictionContext & a2, const ::org::antlr::v4::runtime::atn::SemanticContext & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_231e02e246366492, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          ATNConfig::ATNConfig(const ::org::antlr::v4::runtime::atn::ATNState & a0, jint a1, const ::org::antlr::v4::runtime::atn::PredictionContext & a2, const ::org::antlr::v4::runtime::atn::SemanticContext & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d23064292c4bc36c, a0.this$, a1, a2.this$, a3.this$)) {}

          jboolean ATNConfig::equals(const ATNConfig & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_1274b529738a1c30], a0.this$);
          }

          jboolean ATNConfig::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_570b5248a6da3ef6], a0.this$);
          }

          jint ATNConfig::getOuterContextDepth() const
          {
            return env->callIntMethod(this$, mids$[mid_getOuterContextDepth_20fbf7565993c3d7]);
          }

          jint ATNConfig::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_20fbf7565993c3d7]);
          }

          jboolean ATNConfig::isPrecedenceFilterSuppressed() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isPrecedenceFilterSuppressed_947277eca0748c4e]);
          }

          void ATNConfig::setPrecedenceFilterSuppressed(jboolean a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setPrecedenceFilterSuppressed_b110fc3a58c081ab], a0);
          }

          ::java::lang::String ATNConfig::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_09a7afff1868fc5e]));
          }

          ::java::lang::String ATNConfig::toString(const ::org::antlr::v4::runtime::Recognizer & a0, jboolean a1) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d7f7f3fa5f7c5519], a0.this$, a1));
          }

          jint ATNConfig::_get_alt() const
          {
            return env->getIntField(this$, fids$[fid_alt]);
          }

          ::org::antlr::v4::runtime::atn::PredictionContext ATNConfig::_get_context() const
          {
            return ::org::antlr::v4::runtime::atn::PredictionContext(env->getObjectField(this$, fids$[fid_context]));
          }

          void ATNConfig::_set_context(const ::org::antlr::v4::runtime::atn::PredictionContext & a0) const
          {
            env->setObjectField(this$, fids$[fid_context], a0.this$);
          }

          jint ATNConfig::_get_reachesIntoOuterContext() const
          {
            return env->getIntField(this$, fids$[fid_reachesIntoOuterContext]);
          }

          void ATNConfig::_set_reachesIntoOuterContext(jint a0) const
          {
            env->setIntField(this$, fids$[fid_reachesIntoOuterContext], a0);
          }

          ::org::antlr::v4::runtime::atn::SemanticContext ATNConfig::_get_semanticContext() const
          {
            return ::org::antlr::v4::runtime::atn::SemanticContext(env->getObjectField(this$, fids$[fid_semanticContext]));
          }

          ::org::antlr::v4::runtime::atn::ATNState ATNConfig::_get_state() const
          {
            return ::org::antlr::v4::runtime::atn::ATNState(env->getObjectField(this$, fids$[fid_state]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          static PyObject *t_ATNConfig_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ATNConfig_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ATNConfig_init_(t_ATNConfig *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ATNConfig_equals(t_ATNConfig *self, PyObject *args);
          static PyObject *t_ATNConfig_getOuterContextDepth(t_ATNConfig *self);
          static PyObject *t_ATNConfig_hashCode(t_ATNConfig *self, PyObject *args);
          static PyObject *t_ATNConfig_isPrecedenceFilterSuppressed(t_ATNConfig *self);
          static PyObject *t_ATNConfig_setPrecedenceFilterSuppressed(t_ATNConfig *self, PyObject *arg);
          static PyObject *t_ATNConfig_toString(t_ATNConfig *self, PyObject *args);
          static PyObject *t_ATNConfig_get__alt(t_ATNConfig *self, void *data);
          static PyObject *t_ATNConfig_get__context(t_ATNConfig *self, void *data);
          static int t_ATNConfig_set__context(t_ATNConfig *self, PyObject *arg, void *data);
          static PyObject *t_ATNConfig_get__reachesIntoOuterContext(t_ATNConfig *self, void *data);
          static int t_ATNConfig_set__reachesIntoOuterContext(t_ATNConfig *self, PyObject *arg, void *data);
          static PyObject *t_ATNConfig_get__semanticContext(t_ATNConfig *self, void *data);
          static PyObject *t_ATNConfig_get__state(t_ATNConfig *self, void *data);

          static PyObject *t_ATNConfig_get__outerContextDepth(t_ATNConfig *self, void *data);
          static PyObject *t_ATNConfig_get__precedenceFilterSuppressed(t_ATNConfig *self, void *data);
          static int t_ATNConfig_set__precedenceFilterSuppressed(t_ATNConfig *self, PyObject *arg, void *data);
          static PyGetSetDef t_ATNConfig__fields_[] = {
            DECLARE_GET_FIELD(t_ATNConfig, alt),
            DECLARE_GETSET_FIELD(t_ATNConfig, context),
            DECLARE_GETSET_FIELD(t_ATNConfig, reachesIntoOuterContext),
            DECLARE_GET_FIELD(t_ATNConfig, semanticContext),
            DECLARE_GET_FIELD(t_ATNConfig, state),
            DECLARE_GET_FIELD(t_ATNConfig, outerContextDepth),
            DECLARE_GETSET_FIELD(t_ATNConfig, precedenceFilterSuppressed),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ATNConfig__methods_[] = {
            DECLARE_METHOD(t_ATNConfig, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ATNConfig, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ATNConfig, equals, METH_VARARGS),
            DECLARE_METHOD(t_ATNConfig, getOuterContextDepth, METH_NOARGS),
            DECLARE_METHOD(t_ATNConfig, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_ATNConfig, isPrecedenceFilterSuppressed, METH_NOARGS),
            DECLARE_METHOD(t_ATNConfig, setPrecedenceFilterSuppressed, METH_O),
            DECLARE_METHOD(t_ATNConfig, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ATNConfig)[] = {
            { Py_tp_methods, t_ATNConfig__methods_ },
            { Py_tp_init, (void *) t_ATNConfig_init_ },
            { Py_tp_getset, t_ATNConfig__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ATNConfig)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ATNConfig, t_ATNConfig, ATNConfig);

          void t_ATNConfig::install(PyObject *module)
          {
            installType(&PY_TYPE(ATNConfig), &PY_TYPE_DEF(ATNConfig), module, "ATNConfig", 0);
          }

          void t_ATNConfig::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ATNConfig), "class_", make_descriptor(ATNConfig::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ATNConfig), "wrapfn_", make_descriptor(t_ATNConfig::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ATNConfig), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ATNConfig_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ATNConfig::initializeClass, 1)))
              return NULL;
            return t_ATNConfig::wrap_Object(ATNConfig(((t_ATNConfig *) arg)->object.this$));
          }
          static PyObject *t_ATNConfig_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ATNConfig::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ATNConfig_init_(t_ATNConfig *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ATNConfig a0((jobject) NULL);
                ::org::antlr::v4::runtime::atn::ATNState a1((jobject) NULL);
                ATNConfig object((jobject) NULL);

                if (!parseArgs(args, "kk", ATNConfig::initializeClass, ::org::antlr::v4::runtime::atn::ATNState::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = ATNConfig(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ATNConfig a0((jobject) NULL);
                ::org::antlr::v4::runtime::atn::SemanticContext a1((jobject) NULL);
                ATNConfig object((jobject) NULL);

                if (!parseArgs(args, "kk", ATNConfig::initializeClass, ::org::antlr::v4::runtime::atn::SemanticContext::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = ATNConfig(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ATNConfig a0((jobject) NULL);
                ::org::antlr::v4::runtime::atn::ATNState a1((jobject) NULL);
                ::org::antlr::v4::runtime::atn::PredictionContext a2((jobject) NULL);
                ATNConfig object((jobject) NULL);

                if (!parseArgs(args, "kkk", ATNConfig::initializeClass, ::org::antlr::v4::runtime::atn::ATNState::initializeClass, ::org::antlr::v4::runtime::atn::PredictionContext::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = ATNConfig(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              {
                ATNConfig a0((jobject) NULL);
                ::org::antlr::v4::runtime::atn::ATNState a1((jobject) NULL);
                ::org::antlr::v4::runtime::atn::SemanticContext a2((jobject) NULL);
                ATNConfig object((jobject) NULL);

                if (!parseArgs(args, "kkk", ATNConfig::initializeClass, ::org::antlr::v4::runtime::atn::ATNState::initializeClass, ::org::antlr::v4::runtime::atn::SemanticContext::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = ATNConfig(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::antlr::v4::runtime::atn::ATNState a0((jobject) NULL);
                jint a1;
                ::org::antlr::v4::runtime::atn::PredictionContext a2((jobject) NULL);
                ATNConfig object((jobject) NULL);

                if (!parseArgs(args, "kIk", ::org::antlr::v4::runtime::atn::ATNState::initializeClass, ::org::antlr::v4::runtime::atn::PredictionContext::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = ATNConfig(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ATNConfig a0((jobject) NULL);
                ::org::antlr::v4::runtime::atn::ATNState a1((jobject) NULL);
                ::org::antlr::v4::runtime::atn::PredictionContext a2((jobject) NULL);
                ::org::antlr::v4::runtime::atn::SemanticContext a3((jobject) NULL);
                ATNConfig object((jobject) NULL);

                if (!parseArgs(args, "kkkk", ATNConfig::initializeClass, ::org::antlr::v4::runtime::atn::ATNState::initializeClass, ::org::antlr::v4::runtime::atn::PredictionContext::initializeClass, ::org::antlr::v4::runtime::atn::SemanticContext::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = ATNConfig(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::antlr::v4::runtime::atn::ATNState a0((jobject) NULL);
                jint a1;
                ::org::antlr::v4::runtime::atn::PredictionContext a2((jobject) NULL);
                ::org::antlr::v4::runtime::atn::SemanticContext a3((jobject) NULL);
                ATNConfig object((jobject) NULL);

                if (!parseArgs(args, "kIkk", ::org::antlr::v4::runtime::atn::ATNState::initializeClass, ::org::antlr::v4::runtime::atn::PredictionContext::initializeClass, ::org::antlr::v4::runtime::atn::SemanticContext::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = ATNConfig(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
             default:
             err:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ATNConfig_equals(t_ATNConfig *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ATNConfig a0((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "k", ATNConfig::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.equals(a0));
                  Py_RETURN_BOOL(result);
                }
              }
              {
                ::java::lang::Object a0((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "o", &a0))
                {
                  OBJ_CALL(result = self->object.equals(a0));
                  Py_RETURN_BOOL(result);
                }
              }
            }

            return callSuper(PY_TYPE(ATNConfig), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_ATNConfig_getOuterContextDepth(t_ATNConfig *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getOuterContextDepth());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_ATNConfig_hashCode(t_ATNConfig *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(ATNConfig), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_ATNConfig_isPrecedenceFilterSuppressed(t_ATNConfig *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isPrecedenceFilterSuppressed());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_ATNConfig_setPrecedenceFilterSuppressed(t_ATNConfig *self, PyObject *arg)
          {
            jboolean a0;

            if (!parseArg(arg, "Z", &a0))
            {
              OBJ_CALL(self->object.setPrecedenceFilterSuppressed(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setPrecedenceFilterSuppressed", arg);
            return NULL;
          }

          static PyObject *t_ATNConfig_toString(t_ATNConfig *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.toString());
                return j2p(result);
              }
              break;
             case 2:
              {
                ::org::antlr::v4::runtime::Recognizer a0((jobject) NULL);
                PyTypeObject **p0;
                jboolean a1;
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, "KZ", ::org::antlr::v4::runtime::Recognizer::initializeClass, &a0, &p0, ::org::antlr::v4::runtime::t_Recognizer::parameters_, &a1))
                {
                  OBJ_CALL(result = self->object.toString(a0, a1));
                  return j2p(result);
                }
              }
            }

            return callSuper(PY_TYPE(ATNConfig), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_ATNConfig_get__alt(t_ATNConfig *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object._get_alt());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_ATNConfig_get__context(t_ATNConfig *self, void *data)
          {
            ::org::antlr::v4::runtime::atn::PredictionContext value((jobject) NULL);
            OBJ_CALL(value = self->object._get_context());
            return ::org::antlr::v4::runtime::atn::t_PredictionContext::wrap_Object(value);
          }
          static int t_ATNConfig_set__context(t_ATNConfig *self, PyObject *arg, void *data)
          {
            ::org::antlr::v4::runtime::atn::PredictionContext value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::antlr::v4::runtime::atn::PredictionContext::initializeClass, &value))
            {
              INT_CALL(self->object._set_context(value));
              return 0;
            }
            PyErr_SetArgsError((PyObject *) self, "context", arg);
            return -1;
          }

          static PyObject *t_ATNConfig_get__reachesIntoOuterContext(t_ATNConfig *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object._get_reachesIntoOuterContext());
            return PyLong_FromLong((long) value);
          }
          static int t_ATNConfig_set__reachesIntoOuterContext(t_ATNConfig *self, PyObject *arg, void *data)
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object._set_reachesIntoOuterContext(value));
              return 0;
            }
            PyErr_SetArgsError((PyObject *) self, "reachesIntoOuterContext", arg);
            return -1;
          }

          static PyObject *t_ATNConfig_get__semanticContext(t_ATNConfig *self, void *data)
          {
            ::org::antlr::v4::runtime::atn::SemanticContext value((jobject) NULL);
            OBJ_CALL(value = self->object._get_semanticContext());
            return ::org::antlr::v4::runtime::atn::t_SemanticContext::wrap_Object(value);
          }

          static PyObject *t_ATNConfig_get__state(t_ATNConfig *self, void *data)
          {
            ::org::antlr::v4::runtime::atn::ATNState value((jobject) NULL);
            OBJ_CALL(value = self->object._get_state());
            return ::org::antlr::v4::runtime::atn::t_ATNState::wrap_Object(value);
          }

          static PyObject *t_ATNConfig_get__outerContextDepth(t_ATNConfig *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getOuterContextDepth());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_ATNConfig_get__precedenceFilterSuppressed(t_ATNConfig *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isPrecedenceFilterSuppressed());
            Py_RETURN_BOOL(value);
          }
          static int t_ATNConfig_set__precedenceFilterSuppressed(t_ATNConfig *self, PyObject *arg, void *data)
          {
            {
              jboolean value;
              if (!parseArg(arg, "Z", &value))
              {
                INT_CALL(self->object.setPrecedenceFilterSuppressed(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "precedenceFilterSuppressed", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/SyncFailedException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *SyncFailedException::class$ = NULL;
    jmethodID *SyncFailedException::mids$ = NULL;
    bool SyncFailedException::live$ = false;

    jclass SyncFailedException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/SyncFailedException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0d82408c6e55bc30] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    SyncFailedException::SyncFailedException(const ::java::lang::String & a0) : ::java::io::IOException(env->newObject(initializeClass, &mids$, mid_init$_0d82408c6e55bc30, a0.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_SyncFailedException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_SyncFailedException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_SyncFailedException_init_(t_SyncFailedException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_SyncFailedException__methods_[] = {
      DECLARE_METHOD(t_SyncFailedException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_SyncFailedException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(SyncFailedException)[] = {
      { Py_tp_methods, t_SyncFailedException__methods_ },
      { Py_tp_init, (void *) t_SyncFailedException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(SyncFailedException)[] = {
      &PY_TYPE_DEF(::java::io::IOException),
      NULL
    };

    DEFINE_TYPE(SyncFailedException, t_SyncFailedException, SyncFailedException);

    void t_SyncFailedException::install(PyObject *module)
    {
      installType(&PY_TYPE(SyncFailedException), &PY_TYPE_DEF(SyncFailedException), module, "SyncFailedException", 0);
    }

    void t_SyncFailedException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(SyncFailedException), "class_", make_descriptor(SyncFailedException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(SyncFailedException), "wrapfn_", make_descriptor(t_SyncFailedException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(SyncFailedException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_SyncFailedException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, SyncFailedException::initializeClass, 1)))
        return NULL;
      return t_SyncFailedException::wrap_Object(SyncFailedException(((t_SyncFailedException *) arg)->object.this$));
    }
    static PyObject *t_SyncFailedException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, SyncFailedException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_SyncFailedException_init_(t_SyncFailedException *self, PyObject *args, PyObject *kwds)
    {
      ::java::lang::String a0((jobject) NULL);
      SyncFailedException object((jobject) NULL);

      if (!parseArgs(args, "s", &a0))
      {
        INT_CALL(object = SyncFailedException(a0));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/antlr/v4/runtime/atn/SemanticContext$PrecedencePredicate.h"
#include "java/lang/Comparable.h"
#include "org/antlr/v4/runtime/Recognizer.h"
#include "org/antlr/v4/runtime/atn/SemanticContext$PrecedencePredicate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/Object.h"
#include "org/antlr/v4/runtime/RuleContext.h"
#include "JArray.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          ::java::lang::Class *SemanticContext$PrecedencePredicate::class$ = NULL;
          jmethodID *SemanticContext$PrecedencePredicate::mids$ = NULL;
          jfieldID *SemanticContext$PrecedencePredicate::fids$ = NULL;
          bool SemanticContext$PrecedencePredicate::live$ = false;

          jclass SemanticContext$PrecedencePredicate::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/antlr/v4/runtime/atn/SemanticContext$PrecedencePredicate");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_540b2b23d51b1efd] = env->getMethodID(cls, "<init>", "(I)V");
              mids$[mid_compareTo_26e5bb05692a12d5] = env->getMethodID(cls, "compareTo", "(Lorg/antlr/v4/runtime/atn/SemanticContext$PrecedencePredicate;)I");
              mids$[mid_equals_570b5248a6da3ef6] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_eval_2f6604bbbd626ce3] = env->getMethodID(cls, "eval", "(Lorg/antlr/v4/runtime/Recognizer;Lorg/antlr/v4/runtime/RuleContext;)Z");
              mids$[mid_evalPrecedence_626336ee8a08c066] = env->getMethodID(cls, "evalPrecedence", "(Lorg/antlr/v4/runtime/Recognizer;Lorg/antlr/v4/runtime/RuleContext;)Lorg/antlr/v4/runtime/atn/SemanticContext;");
              mids$[mid_hashCode_20fbf7565993c3d7] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_toString_09a7afff1868fc5e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              fids$ = new jfieldID[max_fid];
              fids$[fid_precedence] = env->getFieldID(cls, "precedence", "I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SemanticContext$PrecedencePredicate::SemanticContext$PrecedencePredicate(jint a0) : ::org::antlr::v4::runtime::atn::SemanticContext(env->newObject(initializeClass, &mids$, mid_init$_540b2b23d51b1efd, a0)) {}

          jint SemanticContext$PrecedencePredicate::compareTo(const SemanticContext$PrecedencePredicate & a0) const
          {
            return env->callIntMethod(this$, mids$[mid_compareTo_26e5bb05692a12d5], a0.this$);
          }

          jboolean SemanticContext$PrecedencePredicate::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_570b5248a6da3ef6], a0.this$);
          }

          jboolean SemanticContext$PrecedencePredicate::eval(const ::org::antlr::v4::runtime::Recognizer & a0, const ::org::antlr::v4::runtime::RuleContext & a1) const
          {
            return env->callBooleanMethod(this$, mids$[mid_eval_2f6604bbbd626ce3], a0.this$, a1.this$);
          }

          ::org::antlr::v4::runtime::atn::SemanticContext SemanticContext$PrecedencePredicate::evalPrecedence(const ::org::antlr::v4::runtime::Recognizer & a0, const ::org::antlr::v4::runtime::RuleContext & a1) const
          {
            return ::org::antlr::v4::runtime::atn::SemanticContext(env->callObjectMethod(this$, mids$[mid_evalPrecedence_626336ee8a08c066], a0.this$, a1.this$));
          }

          jint SemanticContext$PrecedencePredicate::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_20fbf7565993c3d7]);
          }

          ::java::lang::String SemanticContext$PrecedencePredicate::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_09a7afff1868fc5e]));
          }

          jint SemanticContext$PrecedencePredicate::_get_precedence() const
          {
            return env->getIntField(this$, fids$[fid_precedence]);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          static PyObject *t_SemanticContext$PrecedencePredicate_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SemanticContext$PrecedencePredicate_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SemanticContext$PrecedencePredicate_init_(t_SemanticContext$PrecedencePredicate *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SemanticContext$PrecedencePredicate_compareTo(t_SemanticContext$PrecedencePredicate *self, PyObject *arg);
          static PyObject *t_SemanticContext$PrecedencePredicate_equals(t_SemanticContext$PrecedencePredicate *self, PyObject *args);
          static PyObject *t_SemanticContext$PrecedencePredicate_eval(t_SemanticContext$PrecedencePredicate *self, PyObject *args);
          static PyObject *t_SemanticContext$PrecedencePredicate_evalPrecedence(t_SemanticContext$PrecedencePredicate *self, PyObject *args);
          static PyObject *t_SemanticContext$PrecedencePredicate_hashCode(t_SemanticContext$PrecedencePredicate *self, PyObject *args);
          static PyObject *t_SemanticContext$PrecedencePredicate_toString(t_SemanticContext$PrecedencePredicate *self, PyObject *args);
          static PyObject *t_SemanticContext$PrecedencePredicate_get__precedence(t_SemanticContext$PrecedencePredicate *self, void *data);

          static PyGetSetDef t_SemanticContext$PrecedencePredicate__fields_[] = {
            DECLARE_GET_FIELD(t_SemanticContext$PrecedencePredicate, precedence),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SemanticContext$PrecedencePredicate__methods_[] = {
            DECLARE_METHOD(t_SemanticContext$PrecedencePredicate, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SemanticContext$PrecedencePredicate, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SemanticContext$PrecedencePredicate, compareTo, METH_O),
            DECLARE_METHOD(t_SemanticContext$PrecedencePredicate, equals, METH_VARARGS),
            DECLARE_METHOD(t_SemanticContext$PrecedencePredicate, eval, METH_VARARGS),
            DECLARE_METHOD(t_SemanticContext$PrecedencePredicate, evalPrecedence, METH_VARARGS),
            DECLARE_METHOD(t_SemanticContext$PrecedencePredicate, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_SemanticContext$PrecedencePredicate, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SemanticContext$PrecedencePredicate)[] = {
            { Py_tp_methods, t_SemanticContext$PrecedencePredicate__methods_ },
            { Py_tp_init, (void *) t_SemanticContext$PrecedencePredicate_init_ },
            { Py_tp_getset, t_SemanticContext$PrecedencePredicate__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SemanticContext$PrecedencePredicate)[] = {
            &PY_TYPE_DEF(::org::antlr::v4::runtime::atn::SemanticContext),
            NULL
          };

          DEFINE_TYPE(SemanticContext$PrecedencePredicate, t_SemanticContext$PrecedencePredicate, SemanticContext$PrecedencePredicate);

          void t_SemanticContext$PrecedencePredicate::install(PyObject *module)
          {
            installType(&PY_TYPE(SemanticContext$PrecedencePredicate), &PY_TYPE_DEF(SemanticContext$PrecedencePredicate), module, "SemanticContext$PrecedencePredicate", 0);
          }

          void t_SemanticContext$PrecedencePredicate::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemanticContext$PrecedencePredicate), "class_", make_descriptor(SemanticContext$PrecedencePredicate::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemanticContext$PrecedencePredicate), "wrapfn_", make_descriptor(t_SemanticContext$PrecedencePredicate::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemanticContext$PrecedencePredicate), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SemanticContext$PrecedencePredicate_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SemanticContext$PrecedencePredicate::initializeClass, 1)))
              return NULL;
            return t_SemanticContext$PrecedencePredicate::wrap_Object(SemanticContext$PrecedencePredicate(((t_SemanticContext$PrecedencePredicate *) arg)->object.this$));
          }
          static PyObject *t_SemanticContext$PrecedencePredicate_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SemanticContext$PrecedencePredicate::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SemanticContext$PrecedencePredicate_init_(t_SemanticContext$PrecedencePredicate *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            SemanticContext$PrecedencePredicate object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = SemanticContext$PrecedencePredicate(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SemanticContext$PrecedencePredicate_compareTo(t_SemanticContext$PrecedencePredicate *self, PyObject *arg)
          {
            SemanticContext$PrecedencePredicate a0((jobject) NULL);
            jint result;

            if (!parseArg(arg, "k", SemanticContext$PrecedencePredicate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.compareTo(a0));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
            return NULL;
          }

          static PyObject *t_SemanticContext$PrecedencePredicate_equals(t_SemanticContext$PrecedencePredicate *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(SemanticContext$PrecedencePredicate), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_SemanticContext$PrecedencePredicate_eval(t_SemanticContext$PrecedencePredicate *self, PyObject *args)
          {
            ::org::antlr::v4::runtime::Recognizer a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::antlr::v4::runtime::RuleContext a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "Kk", ::org::antlr::v4::runtime::Recognizer::initializeClass, ::org::antlr::v4::runtime::RuleContext::initializeClass, &a0, &p0, ::org::antlr::v4::runtime::t_Recognizer::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.eval(a0, a1));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(SemanticContext$PrecedencePredicate), (PyObject *) self, "eval", args, 2);
          }

          static PyObject *t_SemanticContext$PrecedencePredicate_evalPrecedence(t_SemanticContext$PrecedencePredicate *self, PyObject *args)
          {
            ::org::antlr::v4::runtime::Recognizer a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::antlr::v4::runtime::RuleContext a1((jobject) NULL);
            ::org::antlr::v4::runtime::atn::SemanticContext result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::antlr::v4::runtime::Recognizer::initializeClass, ::org::antlr::v4::runtime::RuleContext::initializeClass, &a0, &p0, ::org::antlr::v4::runtime::t_Recognizer::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.evalPrecedence(a0, a1));
              return ::org::antlr::v4::runtime::atn::t_SemanticContext::wrap_Object(result);
            }

            return callSuper(PY_TYPE(SemanticContext$PrecedencePredicate), (PyObject *) self, "evalPrecedence", args, 2);
          }

          static PyObject *t_SemanticContext$PrecedencePredicate_hashCode(t_SemanticContext$PrecedencePredicate *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(SemanticContext$PrecedencePredicate), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_SemanticContext$PrecedencePredicate_toString(t_SemanticContext$PrecedencePredicate *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(SemanticContext$PrecedencePredicate), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_SemanticContext$PrecedencePredicate_get__precedence(t_SemanticContext$PrecedencePredicate *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object._get_precedence());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Void.h"
#include "java/lang/Void.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Void::class$ = NULL;
    jmethodID *Void::mids$ = NULL;
    bool Void::live$ = false;
    ::java::lang::Class *Void::TYPE = NULL;

    jclass Void::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Void");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        TYPE = new ::java::lang::Class(env->getStaticObjectField(cls, "TYPE", "Ljava/lang/Class;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Void_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Void_instance_(PyTypeObject *type, PyObject *arg);

    static PyMethodDef t_Void__methods_[] = {
      DECLARE_METHOD(t_Void, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Void, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Void)[] = {
      { Py_tp_methods, t_Void__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Void)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Void, t_Void, Void);

    void t_Void::install(PyObject *module)
    {
      installType(&PY_TYPE(Void), &PY_TYPE_DEF(Void), module, "Void", 0);
    }

    void t_Void::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Void), "class_", make_descriptor(Void::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Void), "wrapfn_", make_descriptor(t_Void::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Void), "boxfn_", make_descriptor(boxObject));
      env->getClass(Void::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Void), "TYPE", make_descriptor(::java::lang::t_Class::wrap_Object(*Void::TYPE)));
    }

    static PyObject *t_Void_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Void::initializeClass, 1)))
        return NULL;
      return t_Void::wrap_Object(Void(((t_Void *) arg)->object.this$));
    }
    static PyObject *t_Void_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Void::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/regex/MatchResult.h"
#include "java/lang/String.h"
#include "java/util/Map.h"
#include "java/lang/Integer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {
    namespace regex {

      ::java::lang::Class *MatchResult::class$ = NULL;
      jmethodID *MatchResult::mids$ = NULL;
      bool MatchResult::live$ = false;

      jclass MatchResult::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("java/util/regex/MatchResult");

          mids$ = new jmethodID[max_mid];
          mids$[mid_end_20fbf7565993c3d7] = env->getMethodID(cls, "end", "()I");
          mids$[mid_end_3f230d713d7fd2b0] = env->getMethodID(cls, "end", "(Ljava/lang/String;)I");
          mids$[mid_end_3c9bba330f083871] = env->getMethodID(cls, "end", "(I)I");
          mids$[mid_group_09a7afff1868fc5e] = env->getMethodID(cls, "group", "()Ljava/lang/String;");
          mids$[mid_group_cb0eb1432185fc94] = env->getMethodID(cls, "group", "(Ljava/lang/String;)Ljava/lang/String;");
          mids$[mid_group_cd8436557ab831f9] = env->getMethodID(cls, "group", "(I)Ljava/lang/String;");
          mids$[mid_groupCount_20fbf7565993c3d7] = env->getMethodID(cls, "groupCount", "()I");
          mids$[mid_hasMatch_947277eca0748c4e] = env->getMethodID(cls, "hasMatch", "()Z");
          mids$[mid_namedGroups_f125f26c07a7bec8] = env->getMethodID(cls, "namedGroups", "()Ljava/util/Map;");
          mids$[mid_start_20fbf7565993c3d7] = env->getMethodID(cls, "start", "()I");
          mids$[mid_start_3f230d713d7fd2b0] = env->getMethodID(cls, "start", "(Ljava/lang/String;)I");
          mids$[mid_start_3c9bba330f083871] = env->getMethodID(cls, "start", "(I)I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint MatchResult::end() const
      {
        return env->callIntMethod(this$, mids$[mid_end_20fbf7565993c3d7]);
      }

      jint MatchResult::end(const ::java::lang::String & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_end_3f230d713d7fd2b0], a0.this$);
      }

      jint MatchResult::end(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_end_3c9bba330f083871], a0);
      }

      ::java::lang::String MatchResult::group() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_group_09a7afff1868fc5e]));
      }

      ::java::lang::String MatchResult::group(const ::java::lang::String & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_group_cb0eb1432185fc94], a0.this$));
      }

      ::java::lang::String MatchResult::group(jint a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_group_cd8436557ab831f9], a0));
      }

      jint MatchResult::groupCount() const
      {
        return env->callIntMethod(this$, mids$[mid_groupCount_20fbf7565993c3d7]);
      }

      jboolean MatchResult::hasMatch() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasMatch_947277eca0748c4e]);
      }

      ::java::util::Map MatchResult::namedGroups() const
      {
        return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_namedGroups_f125f26c07a7bec8]));
      }

      jint MatchResult::start() const
      {
        return env->callIntMethod(this$, mids$[mid_start_20fbf7565993c3d7]);
      }

      jint MatchResult::start(const ::java::lang::String & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_start_3f230d713d7fd2b0], a0.this$);
      }

      jint MatchResult::start(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_start_3c9bba330f083871], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    namespace regex {
      static PyObject *t_MatchResult_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatchResult_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatchResult_end(t_MatchResult *self, PyObject *args);
      static PyObject *t_MatchResult_group(t_MatchResult *self, PyObject *args);
      static PyObject *t_MatchResult_groupCount(t_MatchResult *self);
      static PyObject *t_MatchResult_hasMatch(t_MatchResult *self);
      static PyObject *t_MatchResult_namedGroups(t_MatchResult *self);
      static PyObject *t_MatchResult_start(t_MatchResult *self, PyObject *args);

      static PyMethodDef t_MatchResult__methods_[] = {
        DECLARE_METHOD(t_MatchResult, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatchResult, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatchResult, end, METH_VARARGS),
        DECLARE_METHOD(t_MatchResult, group, METH_VARARGS),
        DECLARE_METHOD(t_MatchResult, groupCount, METH_NOARGS),
        DECLARE_METHOD(t_MatchResult, hasMatch, METH_NOARGS),
        DECLARE_METHOD(t_MatchResult, namedGroups, METH_NOARGS),
        DECLARE_METHOD(t_MatchResult, start, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MatchResult)[] = {
        { Py_tp_methods, t_MatchResult__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MatchResult)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MatchResult, t_MatchResult, MatchResult);

      void t_MatchResult::install(PyObject *module)
      {
        installType(&PY_TYPE(MatchResult), &PY_TYPE_DEF(MatchResult), module, "MatchResult", 0);
      }

      void t_MatchResult::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatchResult), "class_", make_descriptor(MatchResult::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatchResult), "wrapfn_", make_descriptor(t_MatchResult::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatchResult), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MatchResult_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MatchResult::initializeClass, 1)))
          return NULL;
        return t_MatchResult::wrap_Object(MatchResult(((t_MatchResult *) arg)->object.this$));
      }
      static PyObject *t_MatchResult_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MatchResult::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MatchResult_end(t_MatchResult *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jint result;
            OBJ_CALL(result = self->object.end());
            return PyLong_FromLong((long) result);
          }
          break;
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            jint result;

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.end(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.end(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "end", args);
        return NULL;
      }

      static PyObject *t_MatchResult_group(t_MatchResult *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.group());
            return j2p(result);
          }
          break;
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.group(a0));
              return j2p(result);
            }
          }
          {
            jint a0;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.group(a0));
              return j2p(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "group", args);
        return NULL;
      }

      static PyObject *t_MatchResult_groupCount(t_MatchResult *self)
      {
        jint result;
        OBJ_CALL(result = self->object.groupCount());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_MatchResult_hasMatch(t_MatchResult *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasMatch());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_MatchResult_namedGroups(t_MatchResult *self)
      {
        ::java::util::Map result((jobject) NULL);
        OBJ_CALL(result = self->object.namedGroups());
        return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::java::lang::PY_TYPE(Integer));
      }

      static PyObject *t_MatchResult_start(t_MatchResult *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jint result;
            OBJ_CALL(result = self->object.start());
            return PyLong_FromLong((long) result);
          }
          break;
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            jint result;

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.start(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.start(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/IdentityHashMap.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "java/util/Map$Entry.h"
#include "java/util/Set.h"
#include "java/lang/Cloneable.h"
#include "java/util/function/BiFunction.h"
#include "java/lang/Object.h"
#include "java/util/function/BiConsumer.h"
#include "java/util/Map.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *IdentityHashMap::class$ = NULL;
    jmethodID *IdentityHashMap::mids$ = NULL;
    bool IdentityHashMap::live$ = false;

    jclass IdentityHashMap::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/IdentityHashMap");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_3720c61b0679eb3e] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_540b2b23d51b1efd] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_79ba0f5a7d05e623] = env->getMethodID(cls, "<init>", "(Ljava/util/Map;)V");
        mids$[mid_clear_3720c61b0679eb3e] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_clone_5655ed8670534604] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_containsKey_570b5248a6da3ef6] = env->getMethodID(cls, "containsKey", "(Ljava/lang/Object;)Z");
        mids$[mid_containsValue_570b5248a6da3ef6] = env->getMethodID(cls, "containsValue", "(Ljava/lang/Object;)Z");
        mids$[mid_entrySet_4df174295554d7bd] = env->getMethodID(cls, "entrySet", "()Ljava/util/Set;");
        mids$[mid_equals_570b5248a6da3ef6] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_forEach_b72e978f1e58c9c6] = env->getMethodID(cls, "forEach", "(Ljava/util/function/BiConsumer;)V");
        mids$[mid_get_5fd81664d2d475e1] = env->getMethodID(cls, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_hashCode_20fbf7565993c3d7] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isEmpty_947277eca0748c4e] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_keySet_4df174295554d7bd] = env->getMethodID(cls, "keySet", "()Ljava/util/Set;");
        mids$[mid_put_243089e4ee289db6] = env->getMethodID(cls, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_putAll_79ba0f5a7d05e623] = env->getMethodID(cls, "putAll", "(Ljava/util/Map;)V");
        mids$[mid_remove_5fd81664d2d475e1] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_remove_6810d3c479f60a43] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_replace_681a33cfaf020676] = env->getMethodID(cls, "replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_replaceAll_e62f673264196dae] = env->getMethodID(cls, "replaceAll", "(Ljava/util/function/BiFunction;)V");
        mids$[mid_size_20fbf7565993c3d7] = env->getMethodID(cls, "size", "()I");
        mids$[mid_values_aa58b3beec16cbbd] = env->getMethodID(cls, "values", "()Ljava/util/Collection;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    IdentityHashMap::IdentityHashMap() : ::java::util::AbstractMap(env->newObject(initializeClass, &mids$, mid_init$_3720c61b0679eb3e)) {}

    IdentityHashMap::IdentityHashMap(jint a0) : ::java::util::AbstractMap(env->newObject(initializeClass, &mids$, mid_init$_540b2b23d51b1efd, a0)) {}

    IdentityHashMap::IdentityHashMap(const ::java::util::Map & a0) : ::java::util::AbstractMap(env->newObject(initializeClass, &mids$, mid_init$_79ba0f5a7d05e623, a0.this$)) {}

    void IdentityHashMap::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_3720c61b0679eb3e]);
    }

    ::java::lang::Object IdentityHashMap::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_5655ed8670534604]));
    }

    jboolean IdentityHashMap::containsKey(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsKey_570b5248a6da3ef6], a0.this$);
    }

    jboolean IdentityHashMap::containsValue(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsValue_570b5248a6da3ef6], a0.this$);
    }

    ::java::util::Set IdentityHashMap::entrySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_entrySet_4df174295554d7bd]));
    }

    jboolean IdentityHashMap::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_570b5248a6da3ef6], a0.this$);
    }

    void IdentityHashMap::forEach(const ::java::util::function::BiConsumer & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_forEach_b72e978f1e58c9c6], a0.this$);
    }

    ::java::lang::Object IdentityHashMap::get(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_5fd81664d2d475e1], a0.this$));
    }

    jint IdentityHashMap::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_20fbf7565993c3d7]);
    }

    jboolean IdentityHashMap::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_947277eca0748c4e]);
    }

    ::java::util::Set IdentityHashMap::keySet() const
    {
      return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_keySet_4df174295554d7bd]));
    }

    ::java::lang::Object IdentityHashMap::put(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_put_243089e4ee289db6], a0.this$, a1.this$));
    }

    void IdentityHashMap::putAll(const ::java::util::Map & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_putAll_79ba0f5a7d05e623], a0.this$);
    }

    ::java::lang::Object IdentityHashMap::remove(const ::java::lang::Object & a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_5fd81664d2d475e1], a0.this$));
    }

    jboolean IdentityHashMap::remove(const ::java::lang::Object & a0, const ::java::lang::Object & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_6810d3c479f60a43], a0.this$, a1.this$);
    }

    jboolean IdentityHashMap::replace(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
    {
      return env->callBooleanMethod(this$, mids$[mid_replace_681a33cfaf020676], a0.this$, a1.this$, a2.this$);
    }

    void IdentityHashMap::replaceAll(const ::java::util::function::BiFunction & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_replaceAll_e62f673264196dae], a0.this$);
    }

    jint IdentityHashMap::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_20fbf7565993c3d7]);
    }

    ::java::util::Collection IdentityHashMap::values() const
    {
      return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_values_aa58b3beec16cbbd]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_IdentityHashMap_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_IdentityHashMap_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_IdentityHashMap_of_(t_IdentityHashMap *self, PyObject *args);
    static int t_IdentityHashMap_init_(t_IdentityHashMap *self, PyObject *args, PyObject *kwds);
    static PyObject *t_IdentityHashMap_clear(t_IdentityHashMap *self, PyObject *args);
    static PyObject *t_IdentityHashMap_clone(t_IdentityHashMap *self);
    static PyObject *t_IdentityHashMap_containsKey(t_IdentityHashMap *self, PyObject *args);
    static PyObject *t_IdentityHashMap_containsValue(t_IdentityHashMap *self, PyObject *args);
    static PyObject *t_IdentityHashMap_entrySet(t_IdentityHashMap *self, PyObject *args);
    static PyObject *t_IdentityHashMap_equals(t_IdentityHashMap *self, PyObject *args);
    static PyObject *t_IdentityHashMap_forEach(t_IdentityHashMap *self, PyObject *args);
    static PyObject *t_IdentityHashMap_get(t_IdentityHashMap *self, PyObject *args);
    static PyObject *t_IdentityHashMap_hashCode(t_IdentityHashMap *self, PyObject *args);
    static PyObject *t_IdentityHashMap_isEmpty(t_IdentityHashMap *self, PyObject *args);
    static PyObject *t_IdentityHashMap_keySet(t_IdentityHashMap *self, PyObject *args);
    static PyObject *t_IdentityHashMap_put(t_IdentityHashMap *self, PyObject *args);
    static PyObject *t_IdentityHashMap_putAll(t_IdentityHashMap *self, PyObject *args);
    static PyObject *t_IdentityHashMap_remove(t_IdentityHashMap *self, PyObject *args);
    static PyObject *t_IdentityHashMap_replace(t_IdentityHashMap *self, PyObject *args);
    static PyObject *t_IdentityHashMap_replaceAll(t_IdentityHashMap *self, PyObject *args);
    static PyObject *t_IdentityHashMap_size(t_IdentityHashMap *self, PyObject *args);
    static PyObject *t_IdentityHashMap_values(t_IdentityHashMap *self, PyObject *args);
    static PyObject *t_IdentityHashMap_get__empty(t_IdentityHashMap *self, void *data);
    static PyObject *t_IdentityHashMap_get__parameters_(t_IdentityHashMap *self, void *data);
    static PyGetSetDef t_IdentityHashMap__fields_[] = {
      DECLARE_GET_FIELD(t_IdentityHashMap, empty),
      DECLARE_GET_FIELD(t_IdentityHashMap, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_IdentityHashMap__methods_[] = {
      DECLARE_METHOD(t_IdentityHashMap, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_IdentityHashMap, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_IdentityHashMap, of_, METH_VARARGS),
      DECLARE_METHOD(t_IdentityHashMap, clear, METH_VARARGS),
      DECLARE_METHOD(t_IdentityHashMap, clone, METH_NOARGS),
      DECLARE_METHOD(t_IdentityHashMap, containsKey, METH_VARARGS),
      DECLARE_METHOD(t_IdentityHashMap, containsValue, METH_VARARGS),
      DECLARE_METHOD(t_IdentityHashMap, entrySet, METH_VARARGS),
      DECLARE_METHOD(t_IdentityHashMap, equals, METH_VARARGS),
      DECLARE_METHOD(t_IdentityHashMap, forEach, METH_VARARGS),
      DECLARE_METHOD(t_IdentityHashMap, get, METH_VARARGS),
      DECLARE_METHOD(t_IdentityHashMap, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_IdentityHashMap, isEmpty, METH_VARARGS),
      DECLARE_METHOD(t_IdentityHashMap, keySet, METH_VARARGS),
      DECLARE_METHOD(t_IdentityHashMap, put, METH_VARARGS),
      DECLARE_METHOD(t_IdentityHashMap, putAll, METH_VARARGS),
      DECLARE_METHOD(t_IdentityHashMap, remove, METH_VARARGS),
      DECLARE_METHOD(t_IdentityHashMap, replace, METH_VARARGS),
      DECLARE_METHOD(t_IdentityHashMap, replaceAll, METH_VARARGS),
      DECLARE_METHOD(t_IdentityHashMap, size, METH_VARARGS),
      DECLARE_METHOD(t_IdentityHashMap, values, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(IdentityHashMap)[] = {
      { Py_tp_methods, t_IdentityHashMap__methods_ },
      { Py_tp_init, (void *) t_IdentityHashMap_init_ },
      { Py_tp_getset, t_IdentityHashMap__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(IdentityHashMap)[] = {
      &PY_TYPE_DEF(::java::util::AbstractMap),
      NULL
    };

    DEFINE_TYPE(IdentityHashMap, t_IdentityHashMap, IdentityHashMap);
    PyObject *t_IdentityHashMap::wrap_Object(const IdentityHashMap& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_IdentityHashMap::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_IdentityHashMap *self = (t_IdentityHashMap *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    PyObject *t_IdentityHashMap::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
    {
      PyObject *obj = t_IdentityHashMap::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_IdentityHashMap *self = (t_IdentityHashMap *) obj;
        self->parameters[0] = p0;
        self->parameters[1] = p1;
      }
      return obj;
    }

    void t_IdentityHashMap::install(PyObject *module)
    {
      installType(&PY_TYPE(IdentityHashMap), &PY_TYPE_DEF(IdentityHashMap), module, "IdentityHashMap", 0);
    }

    void t_IdentityHashMap::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(IdentityHashMap), "class_", make_descriptor(IdentityHashMap::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(IdentityHashMap), "wrapfn_", make_descriptor(t_IdentityHashMap::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(IdentityHashMap), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_IdentityHashMap_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, IdentityHashMap::initializeClass, 1)))
        return NULL;
      return t_IdentityHashMap::wrap_Object(IdentityHashMap(((t_IdentityHashMap *) arg)->object.this$));
    }
    static PyObject *t_IdentityHashMap_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, IdentityHashMap::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_IdentityHashMap_of_(t_IdentityHashMap *self, PyObject *args)
    {
      if (!parseArg(args, "T", 2, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static int t_IdentityHashMap_init_(t_IdentityHashMap *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          IdentityHashMap object((jobject) NULL);

          INT_CALL(object = IdentityHashMap());
          self->object = object;
          break;
        }
       case 1:
        {
          jint a0;
          IdentityHashMap object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = IdentityHashMap(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::util::Map a0((jobject) NULL);
          PyTypeObject **p0;
          IdentityHashMap object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
          {
            INT_CALL(object = IdentityHashMap(a0));
            self->object = object;
            break;
          }
        }
       default:
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_IdentityHashMap_clear(t_IdentityHashMap *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(IdentityHashMap), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_IdentityHashMap_clone(t_IdentityHashMap *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_IdentityHashMap_containsKey(t_IdentityHashMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.containsKey(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(IdentityHashMap), (PyObject *) self, "containsKey", args, 2);
    }

    static PyObject *t_IdentityHashMap_containsValue(t_IdentityHashMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.containsValue(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(IdentityHashMap), (PyObject *) self, "containsValue", args, 2);
    }

    static PyObject *t_IdentityHashMap_entrySet(t_IdentityHashMap *self, PyObject *args)
    {
      ::java::util::Set result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.entrySet());
        return ::java::util::t_Set::wrap_Object(result);
      }

      return callSuper(PY_TYPE(IdentityHashMap), (PyObject *) self, "entrySet", args, 2);
    }

    static PyObject *t_IdentityHashMap_equals(t_IdentityHashMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(IdentityHashMap), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_IdentityHashMap_forEach(t_IdentityHashMap *self, PyObject *args)
    {
      ::java::util::function::BiConsumer a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArgs(args, "K", ::java::util::function::BiConsumer::initializeClass, &a0, &p0, ::java::util::function::t_BiConsumer::parameters_))
      {
        OBJ_CALL(self->object.forEach(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(IdentityHashMap), (PyObject *) self, "forEach", args, 2);
    }

    static PyObject *t_IdentityHashMap_get(t_IdentityHashMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.get(a0));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(IdentityHashMap), (PyObject *) self, "get", args, 2);
    }

    static PyObject *t_IdentityHashMap_hashCode(t_IdentityHashMap *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(IdentityHashMap), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_IdentityHashMap_isEmpty(t_IdentityHashMap *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.isEmpty());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(IdentityHashMap), (PyObject *) self, "isEmpty", args, 2);
    }

    static PyObject *t_IdentityHashMap_keySet(t_IdentityHashMap *self, PyObject *args)
    {
      ::java::util::Set result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.keySet());
        return ::java::util::t_Set::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(IdentityHashMap), (PyObject *) self, "keySet", args, 2);
    }

    static PyObject *t_IdentityHashMap_put(t_IdentityHashMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "OO", self->parameters[0], self->parameters[1], &a0, &a1))
      {
        OBJ_CALL(result = self->object.put(a0, a1));
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(IdentityHashMap), (PyObject *) self, "put", args, 2);
    }

    static PyObject *t_IdentityHashMap_putAll(t_IdentityHashMap *self, PyObject *args)
    {
      ::java::util::Map a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArgs(args, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
      {
        OBJ_CALL(self->object.putAll(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(IdentityHashMap), (PyObject *) self, "putAll", args, 2);
    }

    static PyObject *t_IdentityHashMap_remove(t_IdentityHashMap *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.remove(a0));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "oo", &a0, &a1))
          {
            OBJ_CALL(result = self->object.remove(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(PY_TYPE(IdentityHashMap), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_IdentityHashMap_replace(t_IdentityHashMap *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object a2((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "OOO", self->parameters[0], self->parameters[1], self->parameters[1], &a0, &a1, &a2))
      {
        OBJ_CALL(result = self->object.replace(a0, a1, a2));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(IdentityHashMap), (PyObject *) self, "replace", args, 2);
    }

    static PyObject *t_IdentityHashMap_replaceAll(t_IdentityHashMap *self, PyObject *args)
    {
      ::java::util::function::BiFunction a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArgs(args, "K", ::java::util::function::BiFunction::initializeClass, &a0, &p0, ::java::util::function::t_BiFunction::parameters_))
      {
        OBJ_CALL(self->object.replaceAll(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(IdentityHashMap), (PyObject *) self, "replaceAll", args, 2);
    }

    static PyObject *t_IdentityHashMap_size(t_IdentityHashMap *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(IdentityHashMap), (PyObject *) self, "size", args, 2);
    }

    static PyObject *t_IdentityHashMap_values(t_IdentityHashMap *self, PyObject *args)
    {
      ::java::util::Collection result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.values());
        return ::java::util::t_Collection::wrap_Object(result, self->parameters[1]);
      }

      return callSuper(PY_TYPE(IdentityHashMap), (PyObject *) self, "values", args, 2);
    }
    static PyObject *t_IdentityHashMap_get__parameters_(t_IdentityHashMap *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_IdentityHashMap_get__empty(t_IdentityHashMap *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/antlr/v4/runtime/atn/DecisionInfo.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/util/List.h"
#include "org/antlr/v4/runtime/atn/AmbiguityInfo.h"
#include "org/antlr/v4/runtime/atn/ErrorInfo.h"
#include "org/antlr/v4/runtime/atn/LookaheadEventInfo.h"
#include "org/antlr/v4/runtime/atn/PredicateEvalInfo.h"
#include "org/antlr/v4/runtime/atn/ContextSensitivityInfo.h"
#include "JArray.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          ::java::lang::Class *DecisionInfo::class$ = NULL;
          jmethodID *DecisionInfo::mids$ = NULL;
          jfieldID *DecisionInfo::fids$ = NULL;
          bool DecisionInfo::live$ = false;

          jclass DecisionInfo::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/antlr/v4/runtime/atn/DecisionInfo");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_540b2b23d51b1efd] = env->getMethodID(cls, "<init>", "(I)V");
              mids$[mid_toString_09a7afff1868fc5e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              fids$ = new jfieldID[max_fid];
              fids$[fid_LL_ATNTransitions] = env->getFieldID(cls, "LL_ATNTransitions", "J");
              fids$[fid_LL_DFATransitions] = env->getFieldID(cls, "LL_DFATransitions", "J");
              fids$[fid_LL_Fallback] = env->getFieldID(cls, "LL_Fallback", "J");
              fids$[fid_LL_MaxLook] = env->getFieldID(cls, "LL_MaxLook", "J");
              fids$[fid_LL_MaxLookEvent] = env->getFieldID(cls, "LL_MaxLookEvent", "Lorg/antlr/v4/runtime/atn/LookaheadEventInfo;");
              fids$[fid_LL_MinLook] = env->getFieldID(cls, "LL_MinLook", "J");
              fids$[fid_LL_TotalLook] = env->getFieldID(cls, "LL_TotalLook", "J");
              fids$[fid_SLL_ATNTransitions] = env->getFieldID(cls, "SLL_ATNTransitions", "J");
              fids$[fid_SLL_DFATransitions] = env->getFieldID(cls, "SLL_DFATransitions", "J");
              fids$[fid_SLL_MaxLook] = env->getFieldID(cls, "SLL_MaxLook", "J");
              fids$[fid_SLL_MaxLookEvent] = env->getFieldID(cls, "SLL_MaxLookEvent", "Lorg/antlr/v4/runtime/atn/LookaheadEventInfo;");
              fids$[fid_SLL_MinLook] = env->getFieldID(cls, "SLL_MinLook", "J");
              fids$[fid_SLL_TotalLook] = env->getFieldID(cls, "SLL_TotalLook", "J");
              fids$[fid_ambiguities] = env->getFieldID(cls, "ambiguities", "Ljava/util/List;");
              fids$[fid_contextSensitivities] = env->getFieldID(cls, "contextSensitivities", "Ljava/util/List;");
              fids$[fid_decision] = env->getFieldID(cls, "decision", "I");
              fids$[fid_errors] = env->getFieldID(cls, "errors", "Ljava/util/List;");
              fids$[fid_invocations] = env->getFieldID(cls, "invocations", "J");
              fids$[fid_predicateEvals] = env->getFieldID(cls, "predicateEvals", "Ljava/util/List;");
              fids$[fid_timeInPrediction] = env->getFieldID(cls, "timeInPrediction", "J");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DecisionInfo::DecisionInfo(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_540b2b23d51b1efd, a0)) {}

          ::java::lang::String DecisionInfo::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_09a7afff1868fc5e]));
          }

          jlong DecisionInfo::_get_LL_ATNTransitions() const
          {
            return env->getLongField(this$, fids$[fid_LL_ATNTransitions]);
          }

          void DecisionInfo::_set_LL_ATNTransitions(jlong a0) const
          {
            env->setLongField(this$, fids$[fid_LL_ATNTransitions], a0);
          }

          jlong DecisionInfo::_get_LL_DFATransitions() const
          {
            return env->getLongField(this$, fids$[fid_LL_DFATransitions]);
          }

          void DecisionInfo::_set_LL_DFATransitions(jlong a0) const
          {
            env->setLongField(this$, fids$[fid_LL_DFATransitions], a0);
          }

          jlong DecisionInfo::_get_LL_Fallback() const
          {
            return env->getLongField(this$, fids$[fid_LL_Fallback]);
          }

          void DecisionInfo::_set_LL_Fallback(jlong a0) const
          {
            env->setLongField(this$, fids$[fid_LL_Fallback], a0);
          }

          jlong DecisionInfo::_get_LL_MaxLook() const
          {
            return env->getLongField(this$, fids$[fid_LL_MaxLook]);
          }

          void DecisionInfo::_set_LL_MaxLook(jlong a0) const
          {
            env->setLongField(this$, fids$[fid_LL_MaxLook], a0);
          }

          ::org::antlr::v4::runtime::atn::LookaheadEventInfo DecisionInfo::_get_LL_MaxLookEvent() const
          {
            return ::org::antlr::v4::runtime::atn::LookaheadEventInfo(env->getObjectField(this$, fids$[fid_LL_MaxLookEvent]));
          }

          void DecisionInfo::_set_LL_MaxLookEvent(const ::org::antlr::v4::runtime::atn::LookaheadEventInfo & a0) const
          {
            env->setObjectField(this$, fids$[fid_LL_MaxLookEvent], a0.this$);
          }

          jlong DecisionInfo::_get_LL_MinLook() const
          {
            return env->getLongField(this$, fids$[fid_LL_MinLook]);
          }

          void DecisionInfo::_set_LL_MinLook(jlong a0) const
          {
            env->setLongField(this$, fids$[fid_LL_MinLook], a0);
          }

          jlong DecisionInfo::_get_LL_TotalLook() const
          {
            return env->getLongField(this$, fids$[fid_LL_TotalLook]);
          }

          void DecisionInfo::_set_LL_TotalLook(jlong a0) const
          {
            env->setLongField(this$, fids$[fid_LL_TotalLook], a0);
          }

          jlong DecisionInfo::_get_SLL_ATNTransitions() const
          {
            return env->getLongField(this$, fids$[fid_SLL_ATNTransitions]);
          }

          void DecisionInfo::_set_SLL_ATNTransitions(jlong a0) const
          {
            env->setLongField(this$, fids$[fid_SLL_ATNTransitions], a0);
          }

          jlong DecisionInfo::_get_SLL_DFATransitions() const
          {
            return env->getLongField(this$, fids$[fid_SLL_DFATransitions]);
          }

          void DecisionInfo::_set_SLL_DFATransitions(jlong a0) const
          {
            env->setLongField(this$, fids$[fid_SLL_DFATransitions], a0);
          }

          jlong DecisionInfo::_get_SLL_MaxLook() const
          {
            return env->getLongField(this$, fids$[fid_SLL_MaxLook]);
          }

          void DecisionInfo::_set_SLL_MaxLook(jlong a0) const
          {
            env->setLongField(this$, fids$[fid_SLL_MaxLook], a0);
          }

          ::org::antlr::v4::runtime::atn::LookaheadEventInfo DecisionInfo::_get_SLL_MaxLookEvent() const
          {
            return ::org::antlr::v4::runtime::atn::LookaheadEventInfo(env->getObjectField(this$, fids$[fid_SLL_MaxLookEvent]));
          }

          void DecisionInfo::_set_SLL_MaxLookEvent(const ::org::antlr::v4::runtime::atn::LookaheadEventInfo & a0) const
          {
            env->setObjectField(this$, fids$[fid_SLL_MaxLookEvent], a0.this$);
          }

          jlong DecisionInfo::_get_SLL_MinLook() const
          {
            return env->getLongField(this$, fids$[fid_SLL_MinLook]);
          }

          void DecisionInfo::_set_SLL_MinLook(jlong a0) const
          {
            env->setLongField(this$, fids$[fid_SLL_MinLook], a0);
          }

          jlong DecisionInfo::_get_SLL_TotalLook() const
          {
            return env->getLongField(this$, fids$[fid_SLL_TotalLook]);
          }

          void DecisionInfo::_set_SLL_TotalLook(jlong a0) const
          {
            env->setLongField(this$, fids$[fid_SLL_TotalLook], a0);
          }

          ::java::util::List DecisionInfo::_get_ambiguities() const
          {
            return ::java::util::List(env->getObjectField(this$, fids$[fid_ambiguities]));
          }

          ::java::util::List DecisionInfo::_get_contextSensitivities() const
          {
            return ::java::util::List(env->getObjectField(this$, fids$[fid_contextSensitivities]));
          }

          jint DecisionInfo::_get_decision() const
          {
            return env->getIntField(this$, fids$[fid_decision]);
          }

          ::java::util::List DecisionInfo::_get_errors() const
          {
            return ::java::util::List(env->getObjectField(this$, fids$[fid_errors]));
          }

          jlong DecisionInfo::_get_invocations() const
          {
            return env->getLongField(this$, fids$[fid_invocations]);
          }

          void DecisionInfo::_set_invocations(jlong a0) const
          {
            env->setLongField(this$, fids$[fid_invocations], a0);
          }

          ::java::util::List DecisionInfo::_get_predicateEvals() const
          {
            return ::java::util::List(env->getObjectField(this$, fids$[fid_predicateEvals]));
          }

          jlong DecisionInfo::_get_timeInPrediction() const
          {
            return env->getLongField(this$, fids$[fid_timeInPrediction]);
          }

          void DecisionInfo::_set_timeInPrediction(jlong a0) const
          {
            env->setLongField(this$, fids$[fid_timeInPrediction], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          static PyObject *t_DecisionInfo_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DecisionInfo_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DecisionInfo_init_(t_DecisionInfo *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DecisionInfo_toString(t_DecisionInfo *self, PyObject *args);
          static PyObject *t_DecisionInfo_get__LL_ATNTransitions(t_DecisionInfo *self, void *data);
          static int t_DecisionInfo_set__LL_ATNTransitions(t_DecisionInfo *self, PyObject *arg, void *data);
          static PyObject *t_DecisionInfo_get__LL_DFATransitions(t_DecisionInfo *self, void *data);
          static int t_DecisionInfo_set__LL_DFATransitions(t_DecisionInfo *self, PyObject *arg, void *data);
          static PyObject *t_DecisionInfo_get__LL_Fallback(t_DecisionInfo *self, void *data);
          static int t_DecisionInfo_set__LL_Fallback(t_DecisionInfo *self, PyObject *arg, void *data);
          static PyObject *t_DecisionInfo_get__LL_MaxLook(t_DecisionInfo *self, void *data);
          static int t_DecisionInfo_set__LL_MaxLook(t_DecisionInfo *self, PyObject *arg, void *data);
          static PyObject *t_DecisionInfo_get__LL_MaxLookEvent(t_DecisionInfo *self, void *data);
          static int t_DecisionInfo_set__LL_MaxLookEvent(t_DecisionInfo *self, PyObject *arg, void *data);
          static PyObject *t_DecisionInfo_get__LL_MinLook(t_DecisionInfo *self, void *data);
          static int t_DecisionInfo_set__LL_MinLook(t_DecisionInfo *self, PyObject *arg, void *data);
          static PyObject *t_DecisionInfo_get__LL_TotalLook(t_DecisionInfo *self, void *data);
          static int t_DecisionInfo_set__LL_TotalLook(t_DecisionInfo *self, PyObject *arg, void *data);
          static PyObject *t_DecisionInfo_get__SLL_ATNTransitions(t_DecisionInfo *self, void *data);
          static int t_DecisionInfo_set__SLL_ATNTransitions(t_DecisionInfo *self, PyObject *arg, void *data);
          static PyObject *t_DecisionInfo_get__SLL_DFATransitions(t_DecisionInfo *self, void *data);
          static int t_DecisionInfo_set__SLL_DFATransitions(t_DecisionInfo *self, PyObject *arg, void *data);
          static PyObject *t_DecisionInfo_get__SLL_MaxLook(t_DecisionInfo *self, void *data);
          static int t_DecisionInfo_set__SLL_MaxLook(t_DecisionInfo *self, PyObject *arg, void *data);
          static PyObject *t_DecisionInfo_get__SLL_MaxLookEvent(t_DecisionInfo *self, void *data);
          static int t_DecisionInfo_set__SLL_MaxLookEvent(t_DecisionInfo *self, PyObject *arg, void *data);
          static PyObject *t_DecisionInfo_get__SLL_MinLook(t_DecisionInfo *self, void *data);
          static int t_DecisionInfo_set__SLL_MinLook(t_DecisionInfo *self, PyObject *arg, void *data);
          static PyObject *t_DecisionInfo_get__SLL_TotalLook(t_DecisionInfo *self, void *data);
          static int t_DecisionInfo_set__SLL_TotalLook(t_DecisionInfo *self, PyObject *arg, void *data);
          static PyObject *t_DecisionInfo_get__ambiguities(t_DecisionInfo *self, void *data);
          static PyObject *t_DecisionInfo_get__contextSensitivities(t_DecisionInfo *self, void *data);
          static PyObject *t_DecisionInfo_get__decision(t_DecisionInfo *self, void *data);
          static PyObject *t_DecisionInfo_get__errors(t_DecisionInfo *self, void *data);
          static PyObject *t_DecisionInfo_get__invocations(t_DecisionInfo *self, void *data);
          static int t_DecisionInfo_set__invocations(t_DecisionInfo *self, PyObject *arg, void *data);
          static PyObject *t_DecisionInfo_get__predicateEvals(t_DecisionInfo *self, void *data);
          static PyObject *t_DecisionInfo_get__timeInPrediction(t_DecisionInfo *self, void *data);
          static int t_DecisionInfo_set__timeInPrediction(t_DecisionInfo *self, PyObject *arg, void *data);

          static PyGetSetDef t_DecisionInfo__fields_[] = {
            DECLARE_GETSET_FIELD(t_DecisionInfo, LL_ATNTransitions),
            DECLARE_GETSET_FIELD(t_DecisionInfo, LL_DFATransitions),
            DECLARE_GETSET_FIELD(t_DecisionInfo, LL_Fallback),
            DECLARE_GETSET_FIELD(t_DecisionInfo, LL_MaxLook),
            DECLARE_GETSET_FIELD(t_DecisionInfo, LL_MaxLookEvent),
            DECLARE_GETSET_FIELD(t_DecisionInfo, LL_MinLook),
            DECLARE_GETSET_FIELD(t_DecisionInfo, LL_TotalLook),
            DECLARE_GETSET_FIELD(t_DecisionInfo, SLL_ATNTransitions),
            DECLARE_GETSET_FIELD(t_DecisionInfo, SLL_DFATransitions),
            DECLARE_GETSET_FIELD(t_DecisionInfo, SLL_MaxLook),
            DECLARE_GETSET_FIELD(t_DecisionInfo, SLL_MaxLookEvent),
            DECLARE_GETSET_FIELD(t_DecisionInfo, SLL_MinLook),
            DECLARE_GETSET_FIELD(t_DecisionInfo, SLL_TotalLook),
            DECLARE_GET_FIELD(t_DecisionInfo, ambiguities),
            DECLARE_GET_FIELD(t_DecisionInfo, contextSensitivities),
            DECLARE_GET_FIELD(t_DecisionInfo, decision),
            DECLARE_GET_FIELD(t_DecisionInfo, errors),
            DECLARE_GETSET_FIELD(t_DecisionInfo, invocations),
            DECLARE_GET_FIELD(t_DecisionInfo, predicateEvals),
            DECLARE_GETSET_FIELD(t_DecisionInfo, timeInPrediction),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DecisionInfo__methods_[] = {
            DECLARE_METHOD(t_DecisionInfo, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DecisionInfo, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DecisionInfo, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DecisionInfo)[] = {
            { Py_tp_methods, t_DecisionInfo__methods_ },
            { Py_tp_init, (void *) t_DecisionInfo_init_ },
            { Py_tp_getset, t_DecisionInfo__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DecisionInfo)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(DecisionInfo, t_DecisionInfo, DecisionInfo);

          void t_DecisionInfo::install(PyObject *module)
          {
            installType(&PY_TYPE(DecisionInfo), &PY_TYPE_DEF(DecisionInfo), module, "DecisionInfo", 0);
          }

          void t_DecisionInfo::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DecisionInfo), "class_", make_descriptor(DecisionInfo::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DecisionInfo), "wrapfn_", make_descriptor(t_DecisionInfo::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DecisionInfo), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DecisionInfo_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DecisionInfo::initializeClass, 1)))
              return NULL;
            return t_DecisionInfo::wrap_Object(DecisionInfo(((t_DecisionInfo *) arg)->object.this$));
          }
          static PyObject *t_DecisionInfo_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DecisionInfo::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DecisionInfo_init_(t_DecisionInfo *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            DecisionInfo object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = DecisionInfo(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_DecisionInfo_toString(t_DecisionInfo *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(DecisionInfo), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_DecisionInfo_get__LL_ATNTransitions(t_DecisionInfo *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object._get_LL_ATNTransitions());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }
          static int t_DecisionInfo_set__LL_ATNTransitions(t_DecisionInfo *self, PyObject *arg, void *data)
          {
            jlong value;
            if (!parseArg(arg, "J", &value))
            {
              INT_CALL(self->object._set_LL_ATNTransitions(value));
              return 0;
            }
            PyErr_SetArgsError((PyObject *) self, "LL_ATNTransitions", arg);
            return -1;
          }

          static PyObject *t_DecisionInfo_get__LL_DFATransitions(t_DecisionInfo *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object._get_LL_DFATransitions());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }
          static int t_DecisionInfo_set__LL_DFATransitions(t_DecisionInfo *self, PyObject *arg, void *data)
          {
            jlong value;
            if (!parseArg(arg, "J", &value))
            {
              INT_CALL(self->object._set_LL_DFATransitions(value));
              return 0;
            }
            PyErr_SetArgsError((PyObject *) self, "LL_DFATransitions", arg);
            return -1;
          }

          static PyObject *t_DecisionInfo_get__LL_Fallback(t_DecisionInfo *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object._get_LL_Fallback());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }
          static int t_DecisionInfo_set__LL_Fallback(t_DecisionInfo *self, PyObject *arg, void *data)
          {
            jlong value;
            if (!parseArg(arg, "J", &value))
            {
              INT_CALL(self->object._set_LL_Fallback(value));
              return 0;
            }
            PyErr_SetArgsError((PyObject *) self, "LL_Fallback", arg);
            return -1;
          }

          static PyObject *t_DecisionInfo_get__LL_MaxLook(t_DecisionInfo *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object._get_LL_MaxLook());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }
          static int t_DecisionInfo_set__LL_MaxLook(t_DecisionInfo *self, PyObject *arg, void *data)
          {
            jlong value;
            if (!parseArg(arg, "J", &value))
            {
              INT_CALL(self->object._set_LL_MaxLook(value));
              return 0;
            }
            PyErr_SetArgsError((PyObject *) self, "LL_MaxLook", arg);
            return -1;
          }

          static PyObject *t_DecisionInfo_get__LL_MaxLookEvent(t_DecisionInfo *self, void *data)
          {
            ::org::antlr::v4::runtime::atn::LookaheadEventInfo value((jobject) NULL);
            OBJ_CALL(value = self->object._get_LL_MaxLookEvent());
            return ::org::antlr::v4::runtime::atn::t_LookaheadEventInfo::wrap_Object(value);
          }
          static int t_DecisionInfo_set__LL_MaxLookEvent(t_DecisionInfo *self, PyObject *arg, void *data)
          {
            ::org::antlr::v4::runtime::atn::LookaheadEventInfo value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::antlr::v4::runtime::atn::LookaheadEventInfo::initializeClass, &value))
            {
              INT_CALL(self->object._set_LL_MaxLookEvent(value));
              return 0;
            }
            PyErr_SetArgsError((PyObject *) self, "LL_MaxLookEvent", arg);
            return -1;
          }

          static PyObject *t_DecisionInfo_get__LL_MinLook(t_DecisionInfo *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object._get_LL_MinLook());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }
          static int t_DecisionInfo_set__LL_MinLook(t_DecisionInfo *self, PyObject *arg, void *data)
          {
            jlong value;
            if (!parseArg(arg, "J", &value))
            {
              INT_CALL(self->object._set_LL_MinLook(value));
              return 0;
            }
            PyErr_SetArgsError((PyObject *) self, "LL_MinLook", arg);
            return -1;
          }

          static PyObject *t_DecisionInfo_get__LL_TotalLook(t_DecisionInfo *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object._get_LL_TotalLook());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }
          static int t_DecisionInfo_set__LL_TotalLook(t_DecisionInfo *self, PyObject *arg, void *data)
          {
            jlong value;
            if (!parseArg(arg, "J", &value))
            {
              INT_CALL(self->object._set_LL_TotalLook(value));
              return 0;
            }
            PyErr_SetArgsError((PyObject *) self, "LL_TotalLook", arg);
            return -1;
          }

          static PyObject *t_DecisionInfo_get__SLL_ATNTransitions(t_DecisionInfo *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object._get_SLL_ATNTransitions());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }
          static int t_DecisionInfo_set__SLL_ATNTransitions(t_DecisionInfo *self, PyObject *arg, void *data)
          {
            jlong value;
            if (!parseArg(arg, "J", &value))
            {
              INT_CALL(self->object._set_SLL_ATNTransitions(value));
              return 0;
            }
            PyErr_SetArgsError((PyObject *) self, "SLL_ATNTransitions", arg);
            return -1;
          }

          static PyObject *t_DecisionInfo_get__SLL_DFATransitions(t_DecisionInfo *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object._get_SLL_DFATransitions());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }
          static int t_DecisionInfo_set__SLL_DFATransitions(t_DecisionInfo *self, PyObject *arg, void *data)
          {
            jlong value;
            if (!parseArg(arg, "J", &value))
            {
              INT_CALL(self->object._set_SLL_DFATransitions(value));
              return 0;
            }
            PyErr_SetArgsError((PyObject *) self, "SLL_DFATransitions", arg);
            return -1;
          }

          static PyObject *t_DecisionInfo_get__SLL_MaxLook(t_DecisionInfo *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object._get_SLL_MaxLook());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }
          static int t_DecisionInfo_set__SLL_MaxLook(t_DecisionInfo *self, PyObject *arg, void *data)
          {
            jlong value;
            if (!parseArg(arg, "J", &value))
            {
              INT_CALL(self->object._set_SLL_MaxLook(value));
              return 0;
            }
            PyErr_SetArgsError((PyObject *) self, "SLL_MaxLook", arg);
            return -1;
          }

          static PyObject *t_DecisionInfo_get__SLL_MaxLookEvent(t_DecisionInfo *self, void *data)
          {
            ::org::antlr::v4::runtime::atn::LookaheadEventInfo value((jobject) NULL);
            OBJ_CALL(value = self->object._get_SLL_MaxLookEvent());
            return ::org::antlr::v4::runtime::atn::t_LookaheadEventInfo::wrap_Object(value);
          }
          static int t_DecisionInfo_set__SLL_MaxLookEvent(t_DecisionInfo *self, PyObject *arg, void *data)
          {
            ::org::antlr::v4::runtime::atn::LookaheadEventInfo value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::antlr::v4::runtime::atn::LookaheadEventInfo::initializeClass, &value))
            {
              INT_CALL(self->object._set_SLL_MaxLookEvent(value));
              return 0;
            }
            PyErr_SetArgsError((PyObject *) self, "SLL_MaxLookEvent", arg);
            return -1;
          }

          static PyObject *t_DecisionInfo_get__SLL_MinLook(t_DecisionInfo *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object._get_SLL_MinLook());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }
          static int t_DecisionInfo_set__SLL_MinLook(t_DecisionInfo *self, PyObject *arg, void *data)
          {
            jlong value;
            if (!parseArg(arg, "J", &value))
            {
              INT_CALL(self->object._set_SLL_MinLook(value));
              return 0;
            }
            PyErr_SetArgsError((PyObject *) self, "SLL_MinLook", arg);
            return -1;
          }

          static PyObject *t_DecisionInfo_get__SLL_TotalLook(t_DecisionInfo *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object._get_SLL_TotalLook());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }
          static int t_DecisionInfo_set__SLL_TotalLook(t_DecisionInfo *self, PyObject *arg, void *data)
          {
            jlong value;
            if (!parseArg(arg, "J", &value))
            {
              INT_CALL(self->object._set_SLL_TotalLook(value));
              return 0;
            }
            PyErr_SetArgsError((PyObject *) self, "SLL_TotalLook", arg);
            return -1;
          }

          static PyObject *t_DecisionInfo_get__ambiguities(t_DecisionInfo *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object._get_ambiguities());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_DecisionInfo_get__contextSensitivities(t_DecisionInfo *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object._get_contextSensitivities());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_DecisionInfo_get__decision(t_DecisionInfo *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object._get_decision());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_DecisionInfo_get__errors(t_DecisionInfo *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object._get_errors());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_DecisionInfo_get__invocations(t_DecisionInfo *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object._get_invocations());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }
          static int t_DecisionInfo_set__invocations(t_DecisionInfo *self, PyObject *arg, void *data)
          {
            jlong value;
            if (!parseArg(arg, "J", &value))
            {
              INT_CALL(self->object._set_invocations(value));
              return 0;
            }
            PyErr_SetArgsError((PyObject *) self, "invocations", arg);
            return -1;
          }

          static PyObject *t_DecisionInfo_get__predicateEvals(t_DecisionInfo *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object._get_predicateEvals());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_DecisionInfo_get__timeInPrediction(t_DecisionInfo *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object._get_timeInPrediction());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }
          static int t_DecisionInfo_set__timeInPrediction(t_DecisionInfo *self, PyObject *arg, void *data)
          {
            jlong value;
            if (!parseArg(arg, "J", &value))
            {
              INT_CALL(self->object._set_timeInPrediction(value));
              return 0;
            }
            PyErr_SetArgsError((PyObject *) self, "timeInPrediction", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/antlr/v4/runtime/atn/ProfilingATNSimulator.h"
#include "org/antlr/v4/runtime/Parser.h"
#include "org/antlr/v4/runtime/TokenStream.h"
#include "java/lang/Class.h"
#include "org/antlr/v4/runtime/atn/DecisionInfo.h"
#include "org/antlr/v4/runtime/ParserRuleContext.h"
#include "JArray.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          ::java::lang::Class *ProfilingATNSimulator::class$ = NULL;
          jmethodID *ProfilingATNSimulator::mids$ = NULL;
          bool ProfilingATNSimulator::live$ = false;

          jclass ProfilingATNSimulator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/antlr/v4/runtime/atn/ProfilingATNSimulator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c54371d1025687ef] = env->getMethodID(cls, "<init>", "(Lorg/antlr/v4/runtime/Parser;)V");
              mids$[mid_adaptivePredict_12b1c8e21827aa0e] = env->getMethodID(cls, "adaptivePredict", "(Lorg/antlr/v4/runtime/TokenStream;ILorg/antlr/v4/runtime/ParserRuleContext;)I");
              mids$[mid_getDecisionInfo_8363648230130448] = env->getMethodID(cls, "getDecisionInfo", "()[Lorg/antlr/v4/runtime/atn/DecisionInfo;");
              mids$[mid_reportAmbiguity_3a3363f43d42bafe] = env->getMethodID(cls, "reportAmbiguity", "(Lorg/antlr/v4/runtime/dfa/DFA;Lorg/antlr/v4/runtime/dfa/DFAState;IIZLjava/util/BitSet;Lorg/antlr/v4/runtime/atn/ATNConfigSet;)V");
              mids$[mid_reportAttemptingFullContext_8de98c3c46deafdf] = env->getMethodID(cls, "reportAttemptingFullContext", "(Lorg/antlr/v4/runtime/dfa/DFA;Ljava/util/BitSet;Lorg/antlr/v4/runtime/atn/ATNConfigSet;II)V");
              mids$[mid_reportContextSensitivity_6d548c6057643b60] = env->getMethodID(cls, "reportContextSensitivity", "(Lorg/antlr/v4/runtime/dfa/DFA;ILorg/antlr/v4/runtime/atn/ATNConfigSet;II)V");
              mids$[mid_getExistingTargetState_921945ff8f30a545] = env->getMethodID(cls, "getExistingTargetState", "(Lorg/antlr/v4/runtime/dfa/DFAState;I)Lorg/antlr/v4/runtime/dfa/DFAState;");
              mids$[mid_computeTargetState_0c7e50815af077b9] = env->getMethodID(cls, "computeTargetState", "(Lorg/antlr/v4/runtime/dfa/DFA;Lorg/antlr/v4/runtime/dfa/DFAState;I)Lorg/antlr/v4/runtime/dfa/DFAState;");
              mids$[mid_computeReachSet_01b4ad33b0bec0ca] = env->getMethodID(cls, "computeReachSet", "(Lorg/antlr/v4/runtime/atn/ATNConfigSet;IZ)Lorg/antlr/v4/runtime/atn/ATNConfigSet;");
              mids$[mid_evalSemanticContext_ff62547a28a12d21] = env->getMethodID(cls, "evalSemanticContext", "(Lorg/antlr/v4/runtime/atn/SemanticContext;Lorg/antlr/v4/runtime/ParserRuleContext;IZ)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ProfilingATNSimulator::ProfilingATNSimulator(const ::org::antlr::v4::runtime::Parser & a0) : ::org::antlr::v4::runtime::atn::ParserATNSimulator(env->newObject(initializeClass, &mids$, mid_init$_c54371d1025687ef, a0.this$)) {}

          jint ProfilingATNSimulator::adaptivePredict(const ::org::antlr::v4::runtime::TokenStream & a0, jint a1, const ::org::antlr::v4::runtime::ParserRuleContext & a2) const
          {
            return env->callIntMethod(this$, mids$[mid_adaptivePredict_12b1c8e21827aa0e], a0.this$, a1, a2.this$);
          }

          JArray< ::org::antlr::v4::runtime::atn::DecisionInfo > ProfilingATNSimulator::getDecisionInfo() const
          {
            return JArray< ::org::antlr::v4::runtime::atn::DecisionInfo >(env->callObjectMethod(this$, mids$[mid_getDecisionInfo_8363648230130448]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          static PyObject *t_ProfilingATNSimulator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ProfilingATNSimulator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ProfilingATNSimulator_init_(t_ProfilingATNSimulator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ProfilingATNSimulator_adaptivePredict(t_ProfilingATNSimulator *self, PyObject *args);
          static PyObject *t_ProfilingATNSimulator_getDecisionInfo(t_ProfilingATNSimulator *self);
          static PyObject *t_ProfilingATNSimulator_get__decisionInfo(t_ProfilingATNSimulator *self, void *data);
          static PyGetSetDef t_ProfilingATNSimulator__fields_[] = {
            DECLARE_GET_FIELD(t_ProfilingATNSimulator, decisionInfo),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ProfilingATNSimulator__methods_[] = {
            DECLARE_METHOD(t_ProfilingATNSimulator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ProfilingATNSimulator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ProfilingATNSimulator, adaptivePredict, METH_VARARGS),
            DECLARE_METHOD(t_ProfilingATNSimulator, getDecisionInfo, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ProfilingATNSimulator)[] = {
            { Py_tp_methods, t_ProfilingATNSimulator__methods_ },
            { Py_tp_init, (void *) t_ProfilingATNSimulator_init_ },
            { Py_tp_getset, t_ProfilingATNSimulator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ProfilingATNSimulator)[] = {
            &PY_TYPE_DEF(::org::antlr::v4::runtime::atn::ParserATNSimulator),
            NULL
          };

          DEFINE_TYPE(ProfilingATNSimulator, t_ProfilingATNSimulator, ProfilingATNSimulator);

          void t_ProfilingATNSimulator::install(PyObject *module)
          {
            installType(&PY_TYPE(ProfilingATNSimulator), &PY_TYPE_DEF(ProfilingATNSimulator), module, "ProfilingATNSimulator", 0);
          }

          void t_ProfilingATNSimulator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ProfilingATNSimulator), "class_", make_descriptor(ProfilingATNSimulator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ProfilingATNSimulator), "wrapfn_", make_descriptor(t_ProfilingATNSimulator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ProfilingATNSimulator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ProfilingATNSimulator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ProfilingATNSimulator::initializeClass, 1)))
              return NULL;
            return t_ProfilingATNSimulator::wrap_Object(ProfilingATNSimulator(((t_ProfilingATNSimulator *) arg)->object.this$));
          }
          static PyObject *t_ProfilingATNSimulator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ProfilingATNSimulator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ProfilingATNSimulator_init_(t_ProfilingATNSimulator *self, PyObject *args, PyObject *kwds)
          {
            ::org::antlr::v4::runtime::Parser a0((jobject) NULL);
            PyTypeObject **p0;
            ProfilingATNSimulator object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::antlr::v4::runtime::Parser::initializeClass, &a0, &p0, ::org::antlr::v4::runtime::t_Parser::parameters_))
            {
              INT_CALL(object = ProfilingATNSimulator(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ProfilingATNSimulator_adaptivePredict(t_ProfilingATNSimulator *self, PyObject *args)
          {
            ::org::antlr::v4::runtime::TokenStream a0((jobject) NULL);
            jint a1;
            ::org::antlr::v4::runtime::ParserRuleContext a2((jobject) NULL);
            jint result;

            if (!parseArgs(args, "kIk", ::org::antlr::v4::runtime::TokenStream::initializeClass, ::org::antlr::v4::runtime::ParserRuleContext::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.adaptivePredict(a0, a1, a2));
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(ProfilingATNSimulator), (PyObject *) self, "adaptivePredict", args, 2);
          }

          static PyObject *t_ProfilingATNSimulator_getDecisionInfo(t_ProfilingATNSimulator *self)
          {
            JArray< ::org::antlr::v4::runtime::atn::DecisionInfo > result((jobject) NULL);
            OBJ_CALL(result = self->object.getDecisionInfo());
            return JArray<jobject>(result.this$).wrap(::org::antlr::v4::runtime::atn::t_DecisionInfo::wrap_jobject);
          }

          static PyObject *t_ProfilingATNSimulator_get__decisionInfo(t_ProfilingATNSimulator *self, void *data)
          {
            JArray< ::org::antlr::v4::runtime::atn::DecisionInfo > value((jobject) NULL);
            OBJ_CALL(value = self->object.getDecisionInfo());
            return JArray<jobject>(value.this$).wrap(::org::antlr::v4::runtime::atn::t_DecisionInfo::wrap_jobject);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/antlr/v4/runtime/atn/RuleStopState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          ::java::lang::Class *RuleStopState::class$ = NULL;
          jmethodID *RuleStopState::mids$ = NULL;
          bool RuleStopState::live$ = false;

          jclass RuleStopState::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/antlr/v4/runtime/atn/RuleStopState");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3720c61b0679eb3e] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getStateType_20fbf7565993c3d7] = env->getMethodID(cls, "getStateType", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RuleStopState::RuleStopState() : ::org::antlr::v4::runtime::atn::ATNState(env->newObject(initializeClass, &mids$, mid_init$_3720c61b0679eb3e)) {}

          jint RuleStopState::getStateType() const
          {
            return env->callIntMethod(this$, mids$[mid_getStateType_20fbf7565993c3d7]);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          static PyObject *t_RuleStopState_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RuleStopState_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RuleStopState_init_(t_RuleStopState *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RuleStopState_getStateType(t_RuleStopState *self, PyObject *args);
          static PyObject *t_RuleStopState_get__stateType(t_RuleStopState *self, void *data);
          static PyGetSetDef t_RuleStopState__fields_[] = {
            DECLARE_GET_FIELD(t_RuleStopState, stateType),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RuleStopState__methods_[] = {
            DECLARE_METHOD(t_RuleStopState, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RuleStopState, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RuleStopState, getStateType, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RuleStopState)[] = {
            { Py_tp_methods, t_RuleStopState__methods_ },
            { Py_tp_init, (void *) t_RuleStopState_init_ },
            { Py_tp_getset, t_RuleStopState__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RuleStopState)[] = {
            &PY_TYPE_DEF(::org::antlr::v4::runtime::atn::ATNState),
            NULL
          };

          DEFINE_TYPE(RuleStopState, t_RuleStopState, RuleStopState);

          void t_RuleStopState::install(PyObject *module)
          {
            installType(&PY_TYPE(RuleStopState), &PY_TYPE_DEF(RuleStopState), module, "RuleStopState", 0);
          }

          void t_RuleStopState::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RuleStopState), "class_", make_descriptor(RuleStopState::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RuleStopState), "wrapfn_", make_descriptor(t_RuleStopState::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RuleStopState), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RuleStopState_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RuleStopState::initializeClass, 1)))
              return NULL;
            return t_RuleStopState::wrap_Object(RuleStopState(((t_RuleStopState *) arg)->object.this$));
          }
          static PyObject *t_RuleStopState_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RuleStopState::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RuleStopState_init_(t_RuleStopState *self, PyObject *args, PyObject *kwds)
          {
            RuleStopState object((jobject) NULL);

            INT_CALL(object = RuleStopState());
            self->object = object;

            return 0;
          }

          static PyObject *t_RuleStopState_getStateType(t_RuleStopState *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getStateType());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(RuleStopState), (PyObject *) self, "getStateType", args, 2);
          }

          static PyObject *t_RuleStopState_get__stateType(t_RuleStopState *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getStateType());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/antlr/v4/runtime/atn/LexerAction.h"
#include "org/antlr/v4/runtime/atn/LexerActionType.h"
#include "org/antlr/v4/runtime/Lexer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          ::java::lang::Class *LexerAction::class$ = NULL;
          jmethodID *LexerAction::mids$ = NULL;
          bool LexerAction::live$ = false;

          jclass LexerAction::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/antlr/v4/runtime/atn/LexerAction");

              mids$ = new jmethodID[max_mid];
              mids$[mid_execute_704fbc51304663e4] = env->getMethodID(cls, "execute", "(Lorg/antlr/v4/runtime/Lexer;)V");
              mids$[mid_getActionType_18b0813cb0715daf] = env->getMethodID(cls, "getActionType", "()Lorg/antlr/v4/runtime/atn/LexerActionType;");
              mids$[mid_isPositionDependent_947277eca0748c4e] = env->getMethodID(cls, "isPositionDependent", "()Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void LexerAction::execute(const ::org::antlr::v4::runtime::Lexer & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_execute_704fbc51304663e4], a0.this$);
          }

          ::org::antlr::v4::runtime::atn::LexerActionType LexerAction::getActionType() const
          {
            return ::org::antlr::v4::runtime::atn::LexerActionType(env->callObjectMethod(this$, mids$[mid_getActionType_18b0813cb0715daf]));
          }

          jboolean LexerAction::isPositionDependent() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isPositionDependent_947277eca0748c4e]);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          static PyObject *t_LexerAction_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LexerAction_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LexerAction_execute(t_LexerAction *self, PyObject *arg);
          static PyObject *t_LexerAction_getActionType(t_LexerAction *self);
          static PyObject *t_LexerAction_isPositionDependent(t_LexerAction *self);
          static PyObject *t_LexerAction_get__actionType(t_LexerAction *self, void *data);
          static PyObject *t_LexerAction_get__positionDependent(t_LexerAction *self, void *data);
          static PyGetSetDef t_LexerAction__fields_[] = {
            DECLARE_GET_FIELD(t_LexerAction, actionType),
            DECLARE_GET_FIELD(t_LexerAction, positionDependent),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_LexerAction__methods_[] = {
            DECLARE_METHOD(t_LexerAction, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LexerAction, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LexerAction, execute, METH_O),
            DECLARE_METHOD(t_LexerAction, getActionType, METH_NOARGS),
            DECLARE_METHOD(t_LexerAction, isPositionDependent, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LexerAction)[] = {
            { Py_tp_methods, t_LexerAction__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_LexerAction__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LexerAction)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(LexerAction, t_LexerAction, LexerAction);

          void t_LexerAction::install(PyObject *module)
          {
            installType(&PY_TYPE(LexerAction), &PY_TYPE_DEF(LexerAction), module, "LexerAction", 0);
          }

          void t_LexerAction::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LexerAction), "class_", make_descriptor(LexerAction::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LexerAction), "wrapfn_", make_descriptor(t_LexerAction::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LexerAction), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LexerAction_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LexerAction::initializeClass, 1)))
              return NULL;
            return t_LexerAction::wrap_Object(LexerAction(((t_LexerAction *) arg)->object.this$));
          }
          static PyObject *t_LexerAction_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LexerAction::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_LexerAction_execute(t_LexerAction *self, PyObject *arg)
          {
            ::org::antlr::v4::runtime::Lexer a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::antlr::v4::runtime::Lexer::initializeClass, &a0, &p0, ::org::antlr::v4::runtime::t_Lexer::parameters_))
            {
              OBJ_CALL(self->object.execute(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "execute", arg);
            return NULL;
          }

          static PyObject *t_LexerAction_getActionType(t_LexerAction *self)
          {
            ::org::antlr::v4::runtime::atn::LexerActionType result((jobject) NULL);
            OBJ_CALL(result = self->object.getActionType());
            return ::org::antlr::v4::runtime::atn::t_LexerActionType::wrap_Object(result);
          }

          static PyObject *t_LexerAction_isPositionDependent(t_LexerAction *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isPositionDependent());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_LexerAction_get__actionType(t_LexerAction *self, void *data)
          {
            ::org::antlr::v4::runtime::atn::LexerActionType value((jobject) NULL);
            OBJ_CALL(value = self->object.getActionType());
            return ::org::antlr::v4::runtime::atn::t_LexerActionType::wrap_Object(value);
          }

          static PyObject *t_LexerAction_get__positionDependent(t_LexerAction *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isPositionDependent());
            Py_RETURN_BOOL(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/antlr/v4/runtime/atn/RuleStartState.h"
#include "org/antlr/v4/runtime/atn/RuleStopState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          ::java::lang::Class *RuleStartState::class$ = NULL;
          jmethodID *RuleStartState::mids$ = NULL;
          jfieldID *RuleStartState::fids$ = NULL;
          bool RuleStartState::live$ = false;

          jclass RuleStartState::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/antlr/v4/runtime/atn/RuleStartState");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3720c61b0679eb3e] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getStateType_20fbf7565993c3d7] = env->getMethodID(cls, "getStateType", "()I");

              fids$ = new jfieldID[max_fid];
              fids$[fid_isLeftRecursiveRule] = env->getFieldID(cls, "isLeftRecursiveRule", "Z");
              fids$[fid_stopState] = env->getFieldID(cls, "stopState", "Lorg/antlr/v4/runtime/atn/RuleStopState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RuleStartState::RuleStartState() : ::org::antlr::v4::runtime::atn::ATNState(env->newObject(initializeClass, &mids$, mid_init$_3720c61b0679eb3e)) {}

          jint RuleStartState::getStateType() const
          {
            return env->callIntMethod(this$, mids$[mid_getStateType_20fbf7565993c3d7]);
          }

          jboolean RuleStartState::_get_isLeftRecursiveRule() const
          {
            return env->getBooleanField(this$, fids$[fid_isLeftRecursiveRule]);
          }

          void RuleStartState::_set_isLeftRecursiveRule(jboolean a0) const
          {
            env->setBooleanField(this$, fids$[fid_isLeftRecursiveRule], a0);
          }

          ::org::antlr::v4::runtime::atn::RuleStopState RuleStartState::_get_stopState() const
          {
            return ::org::antlr::v4::runtime::atn::RuleStopState(env->getObjectField(this$, fids$[fid_stopState]));
          }

          void RuleStartState::_set_stopState(const ::org::antlr::v4::runtime::atn::RuleStopState & a0) const
          {
            env->setObjectField(this$, fids$[fid_stopState], a0.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          static PyObject *t_RuleStartState_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RuleStartState_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RuleStartState_init_(t_RuleStartState *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RuleStartState_getStateType(t_RuleStartState *self, PyObject *args);
          static PyObject *t_RuleStartState_get__isLeftRecursiveRule(t_RuleStartState *self, void *data);
          static int t_RuleStartState_set__isLeftRecursiveRule(t_RuleStartState *self, PyObject *arg, void *data);
          static PyObject *t_RuleStartState_get__stopState(t_RuleStartState *self, void *data);
          static int t_RuleStartState_set__stopState(t_RuleStartState *self, PyObject *arg, void *data);

          static PyObject *t_RuleStartState_get__stateType(t_RuleStartState *self, void *data);
          static PyGetSetDef t_RuleStartState__fields_[] = {
            DECLARE_GETSET_FIELD(t_RuleStartState, isLeftRecursiveRule),
            DECLARE_GETSET_FIELD(t_RuleStartState, stopState),
            DECLARE_GET_FIELD(t_RuleStartState, stateType),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RuleStartState__methods_[] = {
            DECLARE_METHOD(t_RuleStartState, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RuleStartState, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RuleStartState, getStateType, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RuleStartState)[] = {
            { Py_tp_methods, t_RuleStartState__methods_ },
            { Py_tp_init, (void *) t_RuleStartState_init_ },
            { Py_tp_getset, t_RuleStartState__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RuleStartState)[] = {
            &PY_TYPE_DEF(::org::antlr::v4::runtime::atn::ATNState),
            NULL
          };

          DEFINE_TYPE(RuleStartState, t_RuleStartState, RuleStartState);

          void t_RuleStartState::install(PyObject *module)
          {
            installType(&PY_TYPE(RuleStartState), &PY_TYPE_DEF(RuleStartState), module, "RuleStartState", 0);
          }

          void t_RuleStartState::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RuleStartState), "class_", make_descriptor(RuleStartState::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RuleStartState), "wrapfn_", make_descriptor(t_RuleStartState::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RuleStartState), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RuleStartState_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RuleStartState::initializeClass, 1)))
              return NULL;
            return t_RuleStartState::wrap_Object(RuleStartState(((t_RuleStartState *) arg)->object.this$));
          }
          static PyObject *t_RuleStartState_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RuleStartState::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RuleStartState_init_(t_RuleStartState *self, PyObject *args, PyObject *kwds)
          {
            RuleStartState object((jobject) NULL);

            INT_CALL(object = RuleStartState());
            self->object = object;

            return 0;
          }

          static PyObject *t_RuleStartState_getStateType(t_RuleStartState *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getStateType());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(RuleStartState), (PyObject *) self, "getStateType", args, 2);
          }

          static PyObject *t_RuleStartState_get__isLeftRecursiveRule(t_RuleStartState *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object._get_isLeftRecursiveRule());
            Py_RETURN_BOOL(value);
          }
          static int t_RuleStartState_set__isLeftRecursiveRule(t_RuleStartState *self, PyObject *arg, void *data)
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object._set_isLeftRecursiveRule(value));
              return 0;
            }
            PyErr_SetArgsError((PyObject *) self, "isLeftRecursiveRule", arg);
            return -1;
          }

          static PyObject *t_RuleStartState_get__stopState(t_RuleStartState *self, void *data)
          {
            ::org::antlr::v4::runtime::atn::RuleStopState value((jobject) NULL);
            OBJ_CALL(value = self->object._get_stopState());
            return ::org::antlr::v4::runtime::atn::t_RuleStopState::wrap_Object(value);
          }
          static int t_RuleStartState_set__stopState(t_RuleStartState *self, PyObject *arg, void *data)
          {
            ::org::antlr::v4::runtime::atn::RuleStopState value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::antlr::v4::runtime::atn::RuleStopState::initializeClass, &value))
            {
              INT_CALL(self->object._set_stopState(value));
              return 0;
            }
            PyErr_SetArgsError((PyObject *) self, "stopState", arg);
            return -1;
          }

          static PyObject *t_RuleStartState_get__stateType(t_RuleStartState *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getStateType());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/antlr/v4/runtime/atn/TokensStartState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          ::java::lang::Class *TokensStartState::class$ = NULL;
          jmethodID *TokensStartState::mids$ = NULL;
          bool TokensStartState::live$ = false;

          jclass TokensStartState::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/antlr/v4/runtime/atn/TokensStartState");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3720c61b0679eb3e] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getStateType_20fbf7565993c3d7] = env->getMethodID(cls, "getStateType", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TokensStartState::TokensStartState() : ::org::antlr::v4::runtime::atn::DecisionState(env->newObject(initializeClass, &mids$, mid_init$_3720c61b0679eb3e)) {}

          jint TokensStartState::getStateType() const
          {
            return env->callIntMethod(this$, mids$[mid_getStateType_20fbf7565993c3d7]);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          static PyObject *t_TokensStartState_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TokensStartState_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TokensStartState_init_(t_TokensStartState *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TokensStartState_getStateType(t_TokensStartState *self, PyObject *args);
          static PyObject *t_TokensStartState_get__stateType(t_TokensStartState *self, void *data);
          static PyGetSetDef t_TokensStartState__fields_[] = {
            DECLARE_GET_FIELD(t_TokensStartState, stateType),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TokensStartState__methods_[] = {
            DECLARE_METHOD(t_TokensStartState, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TokensStartState, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TokensStartState, getStateType, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TokensStartState)[] = {
            { Py_tp_methods, t_TokensStartState__methods_ },
            { Py_tp_init, (void *) t_TokensStartState_init_ },
            { Py_tp_getset, t_TokensStartState__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TokensStartState)[] = {
            &PY_TYPE_DEF(::org::antlr::v4::runtime::atn::DecisionState),
            NULL
          };

          DEFINE_TYPE(TokensStartState, t_TokensStartState, TokensStartState);

          void t_TokensStartState::install(PyObject *module)
          {
            installType(&PY_TYPE(TokensStartState), &PY_TYPE_DEF(TokensStartState), module, "TokensStartState", 0);
          }

          void t_TokensStartState::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TokensStartState), "class_", make_descriptor(TokensStartState::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TokensStartState), "wrapfn_", make_descriptor(t_TokensStartState::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TokensStartState), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TokensStartState_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TokensStartState::initializeClass, 1)))
              return NULL;
            return t_TokensStartState::wrap_Object(TokensStartState(((t_TokensStartState *) arg)->object.this$));
          }
          static PyObject *t_TokensStartState_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TokensStartState::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TokensStartState_init_(t_TokensStartState *self, PyObject *args, PyObject *kwds)
          {
            TokensStartState object((jobject) NULL);

            INT_CALL(object = TokensStartState());
            self->object = object;

            return 0;
          }

          static PyObject *t_TokensStartState_getStateType(t_TokensStartState *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getStateType());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(TokensStartState), (PyObject *) self, "getStateType", args, 2);
          }

          static PyObject *t_TokensStartState_get__stateType(t_TokensStartState *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getStateType());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/antlr/v4/runtime/atn/SemanticContext.h"
#include "org/antlr/v4/runtime/Recognizer.h"
#include "java/lang/Class.h"
#include "org/antlr/v4/runtime/atn/SemanticContext.h"
#include "org/antlr/v4/runtime/RuleContext.h"
#include "JArray.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          ::java::lang::Class *SemanticContext::class$ = NULL;
          jmethodID *SemanticContext::mids$ = NULL;
          bool SemanticContext::live$ = false;

          jclass SemanticContext::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/antlr/v4/runtime/atn/SemanticContext");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3720c61b0679eb3e] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_and_69faa054a378ea0f] = env->getStaticMethodID(cls, "and", "(Lorg/antlr/v4/runtime/atn/SemanticContext;Lorg/antlr/v4/runtime/atn/SemanticContext;)Lorg/antlr/v4/runtime/atn/SemanticContext;");
              mids$[mid_eval_2f6604bbbd626ce3] = env->getMethodID(cls, "eval", "(Lorg/antlr/v4/runtime/Recognizer;Lorg/antlr/v4/runtime/RuleContext;)Z");
              mids$[mid_evalPrecedence_626336ee8a08c066] = env->getMethodID(cls, "evalPrecedence", "(Lorg/antlr/v4/runtime/Recognizer;Lorg/antlr/v4/runtime/RuleContext;)Lorg/antlr/v4/runtime/atn/SemanticContext;");
              mids$[mid_or_69faa054a378ea0f] = env->getStaticMethodID(cls, "or", "(Lorg/antlr/v4/runtime/atn/SemanticContext;Lorg/antlr/v4/runtime/atn/SemanticContext;)Lorg/antlr/v4/runtime/atn/SemanticContext;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SemanticContext::SemanticContext() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3720c61b0679eb3e)) {}

          SemanticContext SemanticContext::and$(const SemanticContext & a0, const SemanticContext & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return SemanticContext(env->callStaticObjectMethod(cls, mids$[mid_and_69faa054a378ea0f], a0.this$, a1.this$));
          }

          jboolean SemanticContext::eval(const ::org::antlr::v4::runtime::Recognizer & a0, const ::org::antlr::v4::runtime::RuleContext & a1) const
          {
            return env->callBooleanMethod(this$, mids$[mid_eval_2f6604bbbd626ce3], a0.this$, a1.this$);
          }

          SemanticContext SemanticContext::evalPrecedence(const ::org::antlr::v4::runtime::Recognizer & a0, const ::org::antlr::v4::runtime::RuleContext & a1) const
          {
            return SemanticContext(env->callObjectMethod(this$, mids$[mid_evalPrecedence_626336ee8a08c066], a0.this$, a1.this$));
          }

          SemanticContext SemanticContext::or$(const SemanticContext & a0, const SemanticContext & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return SemanticContext(env->callStaticObjectMethod(cls, mids$[mid_or_69faa054a378ea0f], a0.this$, a1.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/antlr/v4/runtime/atn/SemanticContext$PrecedencePredicate.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          static PyObject *t_SemanticContext_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SemanticContext_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SemanticContext_init_(t_SemanticContext *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SemanticContext_and(PyTypeObject *type, PyObject *args);
          static PyObject *t_SemanticContext_eval(t_SemanticContext *self, PyObject *args);
          static PyObject *t_SemanticContext_evalPrecedence(t_SemanticContext *self, PyObject *args);
          static PyObject *t_SemanticContext_or(PyTypeObject *type, PyObject *args);

          static PyMethodDef t_SemanticContext__methods_[] = {
            DECLARE_METHOD(t_SemanticContext, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SemanticContext, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SemanticContext, and, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_SemanticContext, eval, METH_VARARGS),
            DECLARE_METHOD(t_SemanticContext, evalPrecedence, METH_VARARGS),
            DECLARE_METHOD(t_SemanticContext, or, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SemanticContext)[] = {
            { Py_tp_methods, t_SemanticContext__methods_ },
            { Py_tp_init, (void *) t_SemanticContext_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SemanticContext)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SemanticContext, t_SemanticContext, SemanticContext);

          void t_SemanticContext::install(PyObject *module)
          {
            installType(&PY_TYPE(SemanticContext), &PY_TYPE_DEF(SemanticContext), module, "SemanticContext", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemanticContext), "PrecedencePredicate", make_descriptor(&PY_TYPE_DEF(SemanticContext$PrecedencePredicate)));
          }

          void t_SemanticContext::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemanticContext), "class_", make_descriptor(SemanticContext::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemanticContext), "wrapfn_", make_descriptor(t_SemanticContext::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemanticContext), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SemanticContext_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SemanticContext::initializeClass, 1)))
              return NULL;
            return t_SemanticContext::wrap_Object(SemanticContext(((t_SemanticContext *) arg)->object.this$));
          }
          static PyObject *t_SemanticContext_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SemanticContext::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SemanticContext_init_(t_SemanticContext *self, PyObject *args, PyObject *kwds)
          {
            SemanticContext object((jobject) NULL);

            INT_CALL(object = SemanticContext());
            self->object = object;

            return 0;
          }

          static PyObject *t_SemanticContext_and(PyTypeObject *type, PyObject *args)
          {
            SemanticContext a0((jobject) NULL);
            SemanticContext a1((jobject) NULL);
            SemanticContext result((jobject) NULL);

            if (!parseArgs(args, "kk", SemanticContext::initializeClass, SemanticContext::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::antlr::v4::runtime::atn::SemanticContext::and$(a0, a1));
              return t_SemanticContext::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "and", args);
            return NULL;
          }

          static PyObject *t_SemanticContext_eval(t_SemanticContext *self, PyObject *args)
          {
            ::org::antlr::v4::runtime::Recognizer a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::antlr::v4::runtime::RuleContext a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "Kk", ::org::antlr::v4::runtime::Recognizer::initializeClass, ::org::antlr::v4::runtime::RuleContext::initializeClass, &a0, &p0, ::org::antlr::v4::runtime::t_Recognizer::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.eval(a0, a1));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eval", args);
            return NULL;
          }

          static PyObject *t_SemanticContext_evalPrecedence(t_SemanticContext *self, PyObject *args)
          {
            ::org::antlr::v4::runtime::Recognizer a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::antlr::v4::runtime::RuleContext a1((jobject) NULL);
            SemanticContext result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::antlr::v4::runtime::Recognizer::initializeClass, ::org::antlr::v4::runtime::RuleContext::initializeClass, &a0, &p0, ::org::antlr::v4::runtime::t_Recognizer::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.evalPrecedence(a0, a1));
              return t_SemanticContext::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "evalPrecedence", args);
            return NULL;
          }

          static PyObject *t_SemanticContext_or(PyTypeObject *type, PyObject *args)
          {
            SemanticContext a0((jobject) NULL);
            SemanticContext a1((jobject) NULL);
            SemanticContext result((jobject) NULL);

            if (!parseArgs(args, "kk", SemanticContext::initializeClass, SemanticContext::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::antlr::v4::runtime::atn::SemanticContext::or$(a0, a1));
              return t_SemanticContext::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "or", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/antlr/v4/runtime/atn/SingletonPredictionContext.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/Object.h"
#include "org/antlr/v4/runtime/atn/SingletonPredictionContext.h"
#include "JArray.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          ::java::lang::Class *SingletonPredictionContext::class$ = NULL;
          jmethodID *SingletonPredictionContext::mids$ = NULL;
          jfieldID *SingletonPredictionContext::fids$ = NULL;
          bool SingletonPredictionContext::live$ = false;

          jclass SingletonPredictionContext::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/antlr/v4/runtime/atn/SingletonPredictionContext");

              mids$ = new jmethodID[max_mid];
              mids$[mid_create_6f5c365553ddfa60] = env->getStaticMethodID(cls, "create", "(Lorg/antlr/v4/runtime/atn/PredictionContext;I)Lorg/antlr/v4/runtime/atn/SingletonPredictionContext;");
              mids$[mid_equals_570b5248a6da3ef6] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getParent_1cc09022daab7d23] = env->getMethodID(cls, "getParent", "(I)Lorg/antlr/v4/runtime/atn/PredictionContext;");
              mids$[mid_getReturnState_3c9bba330f083871] = env->getMethodID(cls, "getReturnState", "(I)I");
              mids$[mid_size_20fbf7565993c3d7] = env->getMethodID(cls, "size", "()I");
              mids$[mid_toString_09a7afff1868fc5e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              fids$ = new jfieldID[max_fid];
              fids$[fid_parent] = env->getFieldID(cls, "parent", "Lorg/antlr/v4/runtime/atn/PredictionContext;");
              fids$[fid_returnState] = env->getFieldID(cls, "returnState", "I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SingletonPredictionContext SingletonPredictionContext::create(const ::org::antlr::v4::runtime::atn::PredictionContext & a0, jint a1)
          {
            jclass cls = env->getClass(initializeClass);
            return SingletonPredictionContext(env->callStaticObjectMethod(cls, mids$[mid_create_6f5c365553ddfa60], a0.this$, a1));
          }

          jboolean SingletonPredictionContext::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_570b5248a6da3ef6], a0.this$);
          }

          ::org::antlr::v4::runtime::atn::PredictionContext SingletonPredictionContext::getParent(jint a0) const
          {
            return ::org::antlr::v4::runtime::atn::PredictionContext(env->callObjectMethod(this$, mids$[mid_getParent_1cc09022daab7d23], a0));
          }

          jint SingletonPredictionContext::getReturnState(jint a0) const
          {
            return env->callIntMethod(this$, mids$[mid_getReturnState_3c9bba330f083871], a0);
          }

          jint SingletonPredictionContext::size() const
          {
            return env->callIntMethod(this$, mids$[mid_size_20fbf7565993c3d7]);
          }

          ::java::lang::String SingletonPredictionContext::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_09a7afff1868fc5e]));
          }

          ::org::antlr::v4::runtime::atn::PredictionContext SingletonPredictionContext::_get_parent() const
          {
            return ::org::antlr::v4::runtime::atn::PredictionContext(env->getObjectField(this$, fids$[fid_parent]));
          }

          jint SingletonPredictionContext::_get_returnState() const
          {
            return env->getIntField(this$, fids$[fid_returnState]);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          static PyObject *t_SingletonPredictionContext_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SingletonPredictionContext_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SingletonPredictionContext_create(PyTypeObject *type, PyObject *args);
          static PyObject *t_SingletonPredictionContext_equals(t_SingletonPredictionContext *self, PyObject *args);
          static PyObject *t_SingletonPredictionContext_getParent(t_SingletonPredictionContext *self, PyObject *args);
          static PyObject *t_SingletonPredictionContext_getReturnState(t_SingletonPredictionContext *self, PyObject *args);
          static PyObject *t_SingletonPredictionContext_size(t_SingletonPredictionContext *self, PyObject *args);
          static PyObject *t_SingletonPredictionContext_toString(t_SingletonPredictionContext *self, PyObject *args);
          static PyObject *t_SingletonPredictionContext_get__parent(t_SingletonPredictionContext *self, void *data);
          static PyObject *t_SingletonPredictionContext_get__returnState(t_SingletonPredictionContext *self, void *data);

          static PyGetSetDef t_SingletonPredictionContext__fields_[] = {
            DECLARE_GET_FIELD(t_SingletonPredictionContext, parent),
            DECLARE_GET_FIELD(t_SingletonPredictionContext, returnState),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SingletonPredictionContext__methods_[] = {
            DECLARE_METHOD(t_SingletonPredictionContext, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SingletonPredictionContext, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SingletonPredictionContext, create, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_SingletonPredictionContext, equals, METH_VARARGS),
            DECLARE_METHOD(t_SingletonPredictionContext, getParent, METH_VARARGS),
            DECLARE_METHOD(t_SingletonPredictionContext, getReturnState, METH_VARARGS),
            DECLARE_METHOD(t_SingletonPredictionContext, size, METH_VARARGS),
            DECLARE_METHOD(t_SingletonPredictionContext, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SingletonPredictionContext)[] = {
            { Py_tp_methods, t_SingletonPredictionContext__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SingletonPredictionContext__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SingletonPredictionContext)[] = {
            &PY_TYPE_DEF(::org::antlr::v4::runtime::atn::PredictionContext),
            NULL
          };

          DEFINE_TYPE(SingletonPredictionContext, t_SingletonPredictionContext, SingletonPredictionContext);

          void t_SingletonPredictionContext::install(PyObject *module)
          {
            installType(&PY_TYPE(SingletonPredictionContext), &PY_TYPE_DEF(SingletonPredictionContext), module, "SingletonPredictionContext", 0);
          }

          void t_SingletonPredictionContext::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingletonPredictionContext), "class_", make_descriptor(SingletonPredictionContext::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingletonPredictionContext), "wrapfn_", make_descriptor(t_SingletonPredictionContext::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingletonPredictionContext), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SingletonPredictionContext_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SingletonPredictionContext::initializeClass, 1)))
              return NULL;
            return t_SingletonPredictionContext::wrap_Object(SingletonPredictionContext(((t_SingletonPredictionContext *) arg)->object.this$));
          }
          static PyObject *t_SingletonPredictionContext_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SingletonPredictionContext::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SingletonPredictionContext_create(PyTypeObject *type, PyObject *args)
          {
            ::org::antlr::v4::runtime::atn::PredictionContext a0((jobject) NULL);
            jint a1;
            SingletonPredictionContext result((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::antlr::v4::runtime::atn::PredictionContext::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::antlr::v4::runtime::atn::SingletonPredictionContext::create(a0, a1));
              return t_SingletonPredictionContext::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "create", args);
            return NULL;
          }

          static PyObject *t_SingletonPredictionContext_equals(t_SingletonPredictionContext *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(SingletonPredictionContext), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_SingletonPredictionContext_getParent(t_SingletonPredictionContext *self, PyObject *args)
          {
            jint a0;
            ::org::antlr::v4::runtime::atn::PredictionContext result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.getParent(a0));
              return ::org::antlr::v4::runtime::atn::t_PredictionContext::wrap_Object(result);
            }

            return callSuper(PY_TYPE(SingletonPredictionContext), (PyObject *) self, "getParent", args, 2);
          }

          static PyObject *t_SingletonPredictionContext_getReturnState(t_SingletonPredictionContext *self, PyObject *args)
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.getReturnState(a0));
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(SingletonPredictionContext), (PyObject *) self, "getReturnState", args, 2);
          }

          static PyObject *t_SingletonPredictionContext_size(t_SingletonPredictionContext *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.size());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(SingletonPredictionContext), (PyObject *) self, "size", args, 2);
          }

          static PyObject *t_SingletonPredictionContext_toString(t_SingletonPredictionContext *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(SingletonPredictionContext), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_SingletonPredictionContext_get__parent(t_SingletonPredictionContext *self, void *data)
          {
            ::org::antlr::v4::runtime::atn::PredictionContext value((jobject) NULL);
            OBJ_CALL(value = self->object._get_parent());
            return ::org::antlr::v4::runtime::atn::t_PredictionContext::wrap_Object(value);
          }

          static PyObject *t_SingletonPredictionContext_get__returnState(t_SingletonPredictionContext *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object._get_returnState());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/antlr/v4/runtime/atn/ATNState.h"
#include "org/antlr/v4/runtime/atn/ATN.h"
#include "org/antlr/v4/runtime/atn/Transition.h"
#include "java/lang/String.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          ::java::lang::Class *ATNState::class$ = NULL;
          jmethodID *ATNState::mids$ = NULL;
          jfieldID *ATNState::fids$ = NULL;
          bool ATNState::live$ = false;
          jint ATNState::BASIC = (jint) 0;
          jint ATNState::BLOCK_END = (jint) 0;
          jint ATNState::BLOCK_START = (jint) 0;
          jint ATNState::INITIAL_NUM_TRANSITIONS = (jint) 0;
          jint ATNState::INVALID_STATE_NUMBER = (jint) 0;
          jint ATNState::INVALID_TYPE = (jint) 0;
          jint ATNState::LOOP_END = (jint) 0;
          jint ATNState::PLUS_BLOCK_START = (jint) 0;
          jint ATNState::PLUS_LOOP_BACK = (jint) 0;
          jint ATNState::RULE_START = (jint) 0;
          jint ATNState::RULE_STOP = (jint) 0;
          jint ATNState::STAR_BLOCK_START = (jint) 0;
          jint ATNState::STAR_LOOP_BACK = (jint) 0;
          jint ATNState::STAR_LOOP_ENTRY = (jint) 0;
          jint ATNState::TOKEN_START = (jint) 0;
          ::java::util::List *ATNState::serializationNames = NULL;

          jclass ATNState::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/antlr/v4/runtime/atn/ATNState");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3720c61b0679eb3e] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addTransition_c51e71640d4aacd3] = env->getMethodID(cls, "addTransition", "(Lorg/antlr/v4/runtime/atn/Transition;)V");
              mids$[mid_addTransition_f33347ff42daac33] = env->getMethodID(cls, "addTransition", "(ILorg/antlr/v4/runtime/atn/Transition;)V");
              mids$[mid_equals_570b5248a6da3ef6] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getNumberOfTransitions_20fbf7565993c3d7] = env->getMethodID(cls, "getNumberOfTransitions", "()I");
              mids$[mid_getStateType_20fbf7565993c3d7] = env->getMethodID(cls, "getStateType", "()I");
              mids$[mid_getTransitions_1c39c967c8348547] = env->getMethodID(cls, "getTransitions", "()[Lorg/antlr/v4/runtime/atn/Transition;");
              mids$[mid_hashCode_20fbf7565993c3d7] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isNonGreedyExitState_947277eca0748c4e] = env->getMethodID(cls, "isNonGreedyExitState", "()Z");
              mids$[mid_onlyHasEpsilonTransitions_947277eca0748c4e] = env->getMethodID(cls, "onlyHasEpsilonTransitions", "()Z");
              mids$[mid_removeTransition_a48f9f0ab24566f5] = env->getMethodID(cls, "removeTransition", "(I)Lorg/antlr/v4/runtime/atn/Transition;");
              mids$[mid_setRuleIndex_540b2b23d51b1efd] = env->getMethodID(cls, "setRuleIndex", "(I)V");
              mids$[mid_setTransition_f33347ff42daac33] = env->getMethodID(cls, "setTransition", "(ILorg/antlr/v4/runtime/atn/Transition;)V");
              mids$[mid_toString_09a7afff1868fc5e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_transition_a48f9f0ab24566f5] = env->getMethodID(cls, "transition", "(I)Lorg/antlr/v4/runtime/atn/Transition;");

              fids$ = new jfieldID[max_fid];
              fids$[fid_atn] = env->getFieldID(cls, "atn", "Lorg/antlr/v4/runtime/atn/ATN;");
              fids$[fid_epsilonOnlyTransitions] = env->getFieldID(cls, "epsilonOnlyTransitions", "Z");
              fids$[fid_ruleIndex] = env->getFieldID(cls, "ruleIndex", "I");
              fids$[fid_stateNumber] = env->getFieldID(cls, "stateNumber", "I");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              BASIC = env->getStaticIntField(cls, "BASIC");
              BLOCK_END = env->getStaticIntField(cls, "BLOCK_END");
              BLOCK_START = env->getStaticIntField(cls, "BLOCK_START");
              INITIAL_NUM_TRANSITIONS = env->getStaticIntField(cls, "INITIAL_NUM_TRANSITIONS");
              INVALID_STATE_NUMBER = env->getStaticIntField(cls, "INVALID_STATE_NUMBER");
              INVALID_TYPE = env->getStaticIntField(cls, "INVALID_TYPE");
              LOOP_END = env->getStaticIntField(cls, "LOOP_END");
              PLUS_BLOCK_START = env->getStaticIntField(cls, "PLUS_BLOCK_START");
              PLUS_LOOP_BACK = env->getStaticIntField(cls, "PLUS_LOOP_BACK");
              RULE_START = env->getStaticIntField(cls, "RULE_START");
              RULE_STOP = env->getStaticIntField(cls, "RULE_STOP");
              STAR_BLOCK_START = env->getStaticIntField(cls, "STAR_BLOCK_START");
              STAR_LOOP_BACK = env->getStaticIntField(cls, "STAR_LOOP_BACK");
              STAR_LOOP_ENTRY = env->getStaticIntField(cls, "STAR_LOOP_ENTRY");
              TOKEN_START = env->getStaticIntField(cls, "TOKEN_START");
              serializationNames = new ::java::util::List(env->getStaticObjectField(cls, "serializationNames", "Ljava/util/List;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ATNState::ATNState() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3720c61b0679eb3e)) {}

          void ATNState::addTransition(const ::org::antlr::v4::runtime::atn::Transition & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addTransition_c51e71640d4aacd3], a0.this$);
          }

          void ATNState::addTransition(jint a0, const ::org::antlr::v4::runtime::atn::Transition & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addTransition_f33347ff42daac33], a0, a1.this$);
          }

          jboolean ATNState::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_570b5248a6da3ef6], a0.this$);
          }

          jint ATNState::getNumberOfTransitions() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfTransitions_20fbf7565993c3d7]);
          }

          jint ATNState::getStateType() const
          {
            return env->callIntMethod(this$, mids$[mid_getStateType_20fbf7565993c3d7]);
          }

          JArray< ::org::antlr::v4::runtime::atn::Transition > ATNState::getTransitions() const
          {
            return JArray< ::org::antlr::v4::runtime::atn::Transition >(env->callObjectMethod(this$, mids$[mid_getTransitions_1c39c967c8348547]));
          }

          jint ATNState::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_20fbf7565993c3d7]);
          }

          jboolean ATNState::isNonGreedyExitState() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNonGreedyExitState_947277eca0748c4e]);
          }

          jboolean ATNState::onlyHasEpsilonTransitions() const
          {
            return env->callBooleanMethod(this$, mids$[mid_onlyHasEpsilonTransitions_947277eca0748c4e]);
          }

          ::org::antlr::v4::runtime::atn::Transition ATNState::removeTransition(jint a0) const
          {
            return ::org::antlr::v4::runtime::atn::Transition(env->callObjectMethod(this$, mids$[mid_removeTransition_a48f9f0ab24566f5], a0));
          }

          void ATNState::setRuleIndex(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setRuleIndex_540b2b23d51b1efd], a0);
          }

          void ATNState::setTransition(jint a0, const ::org::antlr::v4::runtime::atn::Transition & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setTransition_f33347ff42daac33], a0, a1.this$);
          }

          ::java::lang::String ATNState::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_09a7afff1868fc5e]));
          }

          ::org::antlr::v4::runtime::atn::Transition ATNState::transition(jint a0) const
          {
            return ::org::antlr::v4::runtime::atn::Transition(env->callObjectMethod(this$, mids$[mid_transition_a48f9f0ab24566f5], a0));
          }

          ::org::antlr::v4::runtime::atn::ATN ATNState::_get_atn() const
          {
            return ::org::antlr::v4::runtime::atn::ATN(env->getObjectField(this$, fids$[fid_atn]));
          }

          void ATNState::_set_atn(const ::org::antlr::v4::runtime::atn::ATN & a0) const
          {
            env->setObjectField(this$, fids$[fid_atn], a0.this$);
          }

          jboolean ATNState::_get_epsilonOnlyTransitions() const
          {
            return env->getBooleanField(this$, fids$[fid_epsilonOnlyTransitions]);
          }

          void ATNState::_set_epsilonOnlyTransitions(jboolean a0) const
          {
            env->setBooleanField(this$, fids$[fid_epsilonOnlyTransitions], a0);
          }

          jint ATNState::_get_ruleIndex() const
          {
            return env->getIntField(this$, fids$[fid_ruleIndex]);
          }

          void ATNState::_set_ruleIndex(jint a0) const
          {
            env->setIntField(this$, fids$[fid_ruleIndex], a0);
          }

          jint ATNState::_get_stateNumber() const
          {
            return env->getIntField(this$, fids$[fid_stateNumber]);
          }

          void ATNState::_set_stateNumber(jint a0) const
          {
            env->setIntField(this$, fids$[fid_stateNumber], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          static PyObject *t_ATNState_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ATNState_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ATNState_init_(t_ATNState *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ATNState_addTransition(t_ATNState *self, PyObject *args);
          static PyObject *t_ATNState_equals(t_ATNState *self, PyObject *args);
          static PyObject *t_ATNState_getNumberOfTransitions(t_ATNState *self);
          static PyObject *t_ATNState_getStateType(t_ATNState *self);
          static PyObject *t_ATNState_getTransitions(t_ATNState *self);
          static PyObject *t_ATNState_hashCode(t_ATNState *self, PyObject *args);
          static PyObject *t_ATNState_isNonGreedyExitState(t_ATNState *self);
          static PyObject *t_ATNState_onlyHasEpsilonTransitions(t_ATNState *self);
          static PyObject *t_ATNState_removeTransition(t_ATNState *self, PyObject *arg);
          static PyObject *t_ATNState_setRuleIndex(t_ATNState *self, PyObject *arg);
          static PyObject *t_ATNState_setTransition(t_ATNState *self, PyObject *args);
          static PyObject *t_ATNState_toString(t_ATNState *self, PyObject *args);
          static PyObject *t_ATNState_transition(t_ATNState *self, PyObject *arg);
          static PyObject *t_ATNState_get__atn(t_ATNState *self, void *data);
          static int t_ATNState_set__atn(t_ATNState *self, PyObject *arg, void *data);
          static PyObject *t_ATNState_get__epsilonOnlyTransitions(t_ATNState *self, void *data);
          static int t_ATNState_set__epsilonOnlyTransitions(t_ATNState *self, PyObject *arg, void *data);
          static PyObject *t_ATNState_get__stateNumber(t_ATNState *self, void *data);
          static int t_ATNState_set__stateNumber(t_ATNState *self, PyObject *arg, void *data);

          static PyObject *t_ATNState_get__nonGreedyExitState(t_ATNState *self, void *data);
          static PyObject *t_ATNState_get__numberOfTransitions(t_ATNState *self, void *data);
          static int t_ATNState_set__ruleIndex(t_ATNState *self, PyObject *arg, void *data);
          static PyObject *t_ATNState_get__stateType(t_ATNState *self, void *data);
          static PyObject *t_ATNState_get__transitions(t_ATNState *self, void *data);
          static PyGetSetDef t_ATNState__fields_[] = {
            DECLARE_GETSET_FIELD(t_ATNState, atn),
            DECLARE_GETSET_FIELD(t_ATNState, epsilonOnlyTransitions),
            DECLARE_GETSET_FIELD(t_ATNState, stateNumber),
            DECLARE_GET_FIELD(t_ATNState, nonGreedyExitState),
            DECLARE_GET_FIELD(t_ATNState, numberOfTransitions),
            DECLARE_SET_FIELD(t_ATNState, ruleIndex),
            DECLARE_GET_FIELD(t_ATNState, stateType),
            DECLARE_GET_FIELD(t_ATNState, transitions),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ATNState__methods_[] = {
            DECLARE_METHOD(t_ATNState, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ATNState, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ATNState, addTransition, METH_VARARGS),
            DECLARE_METHOD(t_ATNState, equals, METH_VARARGS),
            DECLARE_METHOD(t_ATNState, getNumberOfTransitions, METH_NOARGS),
            DECLARE_METHOD(t_ATNState, getStateType, METH_NOARGS),
            DECLARE_METHOD(t_ATNState, getTransitions, METH_NOARGS),
            DECLARE_METHOD(t_ATNState, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_ATNState, isNonGreedyExitState, METH_NOARGS),
            DECLARE_METHOD(t_ATNState, onlyHasEpsilonTransitions, METH_NOARGS),
            DECLARE_METHOD(t_ATNState, removeTransition, METH_O),
            DECLARE_METHOD(t_ATNState, setRuleIndex, METH_O),
            DECLARE_METHOD(t_ATNState, setTransition, METH_VARARGS),
            DECLARE_METHOD(t_ATNState, toString, METH_VARARGS),
            DECLARE_METHOD(t_ATNState, transition, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ATNState)[] = {
            { Py_tp_methods, t_ATNState__methods_ },
            { Py_tp_init, (void *) t_ATNState_init_ },
            { Py_tp_getset, t_ATNState__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ATNState)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ATNState, t_ATNState, ATNState);

          void t_ATNState::install(PyObject *module)
          {
            installType(&PY_TYPE(ATNState), &PY_TYPE_DEF(ATNState), module, "ATNState", 0);
          }

          void t_ATNState::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ATNState), "class_", make_descriptor(ATNState::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ATNState), "wrapfn_", make_descriptor(t_ATNState::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ATNState), "boxfn_", make_descriptor(boxObject));
            env->getClass(ATNState::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(ATNState), "BASIC", make_descriptor(ATNState::BASIC));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ATNState), "BLOCK_END", make_descriptor(ATNState::BLOCK_END));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ATNState), "BLOCK_START", make_descriptor(ATNState::BLOCK_START));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ATNState), "INITIAL_NUM_TRANSITIONS", make_descriptor(ATNState::INITIAL_NUM_TRANSITIONS));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ATNState), "INVALID_STATE_NUMBER", make_descriptor(ATNState::INVALID_STATE_NUMBER));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ATNState), "INVALID_TYPE", make_descriptor(ATNState::INVALID_TYPE));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ATNState), "LOOP_END", make_descriptor(ATNState::LOOP_END));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ATNState), "PLUS_BLOCK_START", make_descriptor(ATNState::PLUS_BLOCK_START));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ATNState), "PLUS_LOOP_BACK", make_descriptor(ATNState::PLUS_LOOP_BACK));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ATNState), "RULE_START", make_descriptor(ATNState::RULE_START));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ATNState), "RULE_STOP", make_descriptor(ATNState::RULE_STOP));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ATNState), "STAR_BLOCK_START", make_descriptor(ATNState::STAR_BLOCK_START));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ATNState), "STAR_LOOP_BACK", make_descriptor(ATNState::STAR_LOOP_BACK));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ATNState), "STAR_LOOP_ENTRY", make_descriptor(ATNState::STAR_LOOP_ENTRY));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ATNState), "TOKEN_START", make_descriptor(ATNState::TOKEN_START));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ATNState), "serializationNames", make_descriptor(::java::util::t_List::wrap_Object(*ATNState::serializationNames)));
          }

          static PyObject *t_ATNState_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ATNState::initializeClass, 1)))
              return NULL;
            return t_ATNState::wrap_Object(ATNState(((t_ATNState *) arg)->object.this$));
          }
          static PyObject *t_ATNState_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ATNState::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ATNState_init_(t_ATNState *self, PyObject *args, PyObject *kwds)
          {
            ATNState object((jobject) NULL);

            INT_CALL(object = ATNState());
            self->object = object;

            return 0;
          }

          static PyObject *t_ATNState_addTransition(t_ATNState *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::antlr::v4::runtime::atn::Transition a0((jobject) NULL);

                if (!parseArgs(args, "k", ::org::antlr::v4::runtime::atn::Transition::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addTransition(a0));
                  Py_RETURN_NONE;
                }
              }
              break;
             case 2:
              {
                jint a0;
                ::org::antlr::v4::runtime::atn::Transition a1((jobject) NULL);

                if (!parseArgs(args, "Ik", ::org::antlr::v4::runtime::atn::Transition::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(self->object.addTransition(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "addTransition", args);
            return NULL;
          }

          static PyObject *t_ATNState_equals(t_ATNState *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(ATNState), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_ATNState_getNumberOfTransitions(t_ATNState *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfTransitions());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_ATNState_getStateType(t_ATNState *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getStateType());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_ATNState_getTransitions(t_ATNState *self)
          {
            JArray< ::org::antlr::v4::runtime::atn::Transition > result((jobject) NULL);
            OBJ_CALL(result = self->object.getTransitions());
            return JArray<jobject>(result.this$).wrap(::org::antlr::v4::runtime::atn::t_Transition::wrap_jobject);
          }

          static PyObject *t_ATNState_hashCode(t_ATNState *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(ATNState), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_ATNState_isNonGreedyExitState(t_ATNState *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNonGreedyExitState());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_ATNState_onlyHasEpsilonTransitions(t_ATNState *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.onlyHasEpsilonTransitions());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_ATNState_removeTransition(t_ATNState *self, PyObject *arg)
          {
            jint a0;
            ::org::antlr::v4::runtime::atn::Transition result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.removeTransition(a0));
              return ::org::antlr::v4::runtime::atn::t_Transition::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "removeTransition", arg);
            return NULL;
          }

          static PyObject *t_ATNState_setRuleIndex(t_ATNState *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setRuleIndex(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setRuleIndex", arg);
            return NULL;
          }

          static PyObject *t_ATNState_setTransition(t_ATNState *self, PyObject *args)
          {
            jint a0;
            ::org::antlr::v4::runtime::atn::Transition a1((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::antlr::v4::runtime::atn::Transition::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.setTransition(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTransition", args);
            return NULL;
          }

          static PyObject *t_ATNState_toString(t_ATNState *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(ATNState), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_ATNState_transition(t_ATNState *self, PyObject *arg)
          {
            jint a0;
            ::org::antlr::v4::runtime::atn::Transition result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.transition(a0));
              return ::org::antlr::v4::runtime::atn::t_Transition::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "transition", arg);
            return NULL;
          }

          static PyObject *t_ATNState_get__atn(t_ATNState *self, void *data)
          {
            ::org::antlr::v4::runtime::atn::ATN value((jobject) NULL);
            OBJ_CALL(value = self->object._get_atn());
            return ::org::antlr::v4::runtime::atn::t_ATN::wrap_Object(value);
          }
          static int t_ATNState_set__atn(t_ATNState *self, PyObject *arg, void *data)
          {
            ::org::antlr::v4::runtime::atn::ATN value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::antlr::v4::runtime::atn::ATN::initializeClass, &value))
            {
              INT_CALL(self->object._set_atn(value));
              return 0;
            }
            PyErr_SetArgsError((PyObject *) self, "atn", arg);
            return -1;
          }

          static PyObject *t_ATNState_get__epsilonOnlyTransitions(t_ATNState *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object._get_epsilonOnlyTransitions());
            Py_RETURN_BOOL(value);
          }
          static int t_ATNState_set__epsilonOnlyTransitions(t_ATNState *self, PyObject *arg, void *data)
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object._set_epsilonOnlyTransitions(value));
              return 0;
            }
            PyErr_SetArgsError((PyObject *) self, "epsilonOnlyTransitions", arg);
            return -1;
          }

          static PyObject *t_ATNState_get__stateNumber(t_ATNState *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object._get_stateNumber());
            return PyLong_FromLong((long) value);
          }
          static int t_ATNState_set__stateNumber(t_ATNState *self, PyObject *arg, void *data)
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object._set_stateNumber(value));
              return 0;
            }
            PyErr_SetArgsError((PyObject *) self, "stateNumber", arg);
            return -1;
          }

          static PyObject *t_ATNState_get__nonGreedyExitState(t_ATNState *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNonGreedyExitState());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_ATNState_get__numberOfTransitions(t_ATNState *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfTransitions());
            return PyLong_FromLong((long) value);
          }

          static int t_ATNState_set__ruleIndex(t_ATNState *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setRuleIndex(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "ruleIndex", arg);
            return -1;
          }

          static PyObject *t_ATNState_get__stateType(t_ATNState *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getStateType());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_ATNState_get__transitions(t_ATNState *self, void *data)
          {
            JArray< ::org::antlr::v4::runtime::atn::Transition > value((jobject) NULL);
            OBJ_CALL(value = self->object.getTransitions());
            return JArray<jobject>(value.this$).wrap(::org::antlr::v4::runtime::atn::t_Transition::wrap_jobject);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/concurrent/CompletionStage.h"
#include "java/util/function/Consumer.h"
#include "java/util/concurrent/CompletionStage.h"
#include "java/lang/Class.h"
#include "java/lang/Runnable.h"
#include "java/lang/Void.h"
#include "java/util/function/BiFunction.h"
#include "java/lang/Throwable.h"
#include "java/util/concurrent/CompletableFuture.h"
#include "java/util/function/BiConsumer.h"
#include "java/util/function/Function.h"
#include "java/util/concurrent/Executor.h"
#include "JArray.h"

namespace java {
  namespace util {
    namespace concurrent {

      ::java::lang::Class *CompletionStage::class$ = NULL;
      jmethodID *CompletionStage::mids$ = NULL;
      bool CompletionStage::live$ = false;

      jclass CompletionStage::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("java/util/concurrent/CompletionStage");

          mids$ = new jmethodID[max_mid];
          mids$[mid_acceptEither_70c417c0faaf4598] = env->getMethodID(cls, "acceptEither", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_acceptEitherAsync_70c417c0faaf4598] = env->getMethodID(cls, "acceptEitherAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_acceptEitherAsync_9b5bdf58c2c02074] = env->getMethodID(cls, "acceptEitherAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_applyToEither_1ab1cffe7f1f7dab] = env->getMethodID(cls, "applyToEither", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_applyToEitherAsync_1ab1cffe7f1f7dab] = env->getMethodID(cls, "applyToEitherAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_applyToEitherAsync_f455df2f1305ab43] = env->getMethodID(cls, "applyToEitherAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_exceptionally_8d6f7e61e17d3f6d] = env->getMethodID(cls, "exceptionally", "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_exceptionallyAsync_8d6f7e61e17d3f6d] = env->getMethodID(cls, "exceptionallyAsync", "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_exceptionallyAsync_a61822ed03a52f7f] = env->getMethodID(cls, "exceptionallyAsync", "(Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_exceptionallyCompose_8d6f7e61e17d3f6d] = env->getMethodID(cls, "exceptionallyCompose", "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_exceptionallyComposeAsync_8d6f7e61e17d3f6d] = env->getMethodID(cls, "exceptionallyComposeAsync", "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_exceptionallyComposeAsync_a61822ed03a52f7f] = env->getMethodID(cls, "exceptionallyComposeAsync", "(Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_handle_f0570b96a612cca1] = env->getMethodID(cls, "handle", "(Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_handleAsync_f0570b96a612cca1] = env->getMethodID(cls, "handleAsync", "(Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_handleAsync_073c71704105e00b] = env->getMethodID(cls, "handleAsync", "(Ljava/util/function/BiFunction;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_runAfterBoth_59ecd927df0749e6] = env->getMethodID(cls, "runAfterBoth", "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_runAfterBothAsync_59ecd927df0749e6] = env->getMethodID(cls, "runAfterBothAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_runAfterBothAsync_201b4e93c3747d88] = env->getMethodID(cls, "runAfterBothAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_runAfterEither_59ecd927df0749e6] = env->getMethodID(cls, "runAfterEither", "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_runAfterEitherAsync_59ecd927df0749e6] = env->getMethodID(cls, "runAfterEitherAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_runAfterEitherAsync_201b4e93c3747d88] = env->getMethodID(cls, "runAfterEitherAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_thenAccept_23e2d4f1113a0298] = env->getMethodID(cls, "thenAccept", "(Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_thenAcceptAsync_23e2d4f1113a0298] = env->getMethodID(cls, "thenAcceptAsync", "(Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_thenAcceptAsync_cfad9c5b51d6eba2] = env->getMethodID(cls, "thenAcceptAsync", "(Ljava/util/function/Consumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_thenAcceptBoth_bfe59fe74a3234ee] = env->getMethodID(cls, "thenAcceptBoth", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_thenAcceptBothAsync_bfe59fe74a3234ee] = env->getMethodID(cls, "thenAcceptBothAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_thenAcceptBothAsync_d4e195ae32bfc1f0] = env->getMethodID(cls, "thenAcceptBothAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_thenApply_8d6f7e61e17d3f6d] = env->getMethodID(cls, "thenApply", "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_thenApplyAsync_8d6f7e61e17d3f6d] = env->getMethodID(cls, "thenApplyAsync", "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_thenApplyAsync_a61822ed03a52f7f] = env->getMethodID(cls, "thenApplyAsync", "(Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_thenCombine_78c74e43f43e08fa] = env->getMethodID(cls, "thenCombine", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_thenCombineAsync_78c74e43f43e08fa] = env->getMethodID(cls, "thenCombineAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_thenCombineAsync_f67d8a1fd0dc508f] = env->getMethodID(cls, "thenCombineAsync", "(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_thenCompose_8d6f7e61e17d3f6d] = env->getMethodID(cls, "thenCompose", "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_thenComposeAsync_8d6f7e61e17d3f6d] = env->getMethodID(cls, "thenComposeAsync", "(Ljava/util/function/Function;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_thenComposeAsync_a61822ed03a52f7f] = env->getMethodID(cls, "thenComposeAsync", "(Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_thenRun_5a87c88bf99df1db] = env->getMethodID(cls, "thenRun", "(Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_thenRunAsync_5a87c88bf99df1db] = env->getMethodID(cls, "thenRunAsync", "(Ljava/lang/Runnable;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_thenRunAsync_7a3a2f313f36946e] = env->getMethodID(cls, "thenRunAsync", "(Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_toCompletableFuture_67c044688e7780df] = env->getMethodID(cls, "toCompletableFuture", "()Ljava/util/concurrent/CompletableFuture;");
          mids$[mid_whenComplete_2b245a0dce7a704c] = env->getMethodID(cls, "whenComplete", "(Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_whenCompleteAsync_2b245a0dce7a704c] = env->getMethodID(cls, "whenCompleteAsync", "(Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletionStage;");
          mids$[mid_whenCompleteAsync_e6919763cd2ee0ec] = env->getMethodID(cls, "whenCompleteAsync", "(Ljava/util/function/BiConsumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletionStage;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CompletionStage CompletionStage::acceptEither(const CompletionStage & a0, const ::java::util::function::Consumer & a1) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_acceptEither_70c417c0faaf4598], a0.this$, a1.this$));
      }

      CompletionStage CompletionStage::acceptEitherAsync(const CompletionStage & a0, const ::java::util::function::Consumer & a1) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_acceptEitherAsync_70c417c0faaf4598], a0.this$, a1.this$));
      }

      CompletionStage CompletionStage::acceptEitherAsync(const CompletionStage & a0, const ::java::util::function::Consumer & a1, const ::java::util::concurrent::Executor & a2) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_acceptEitherAsync_9b5bdf58c2c02074], a0.this$, a1.this$, a2.this$));
      }

      CompletionStage CompletionStage::applyToEither(const CompletionStage & a0, const ::java::util::function::Function & a1) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_applyToEither_1ab1cffe7f1f7dab], a0.this$, a1.this$));
      }

      CompletionStage CompletionStage::applyToEitherAsync(const CompletionStage & a0, const ::java::util::function::Function & a1) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_applyToEitherAsync_1ab1cffe7f1f7dab], a0.this$, a1.this$));
      }

      CompletionStage CompletionStage::applyToEitherAsync(const CompletionStage & a0, const ::java::util::function::Function & a1, const ::java::util::concurrent::Executor & a2) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_applyToEitherAsync_f455df2f1305ab43], a0.this$, a1.this$, a2.this$));
      }

      CompletionStage CompletionStage::exceptionally(const ::java::util::function::Function & a0) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_exceptionally_8d6f7e61e17d3f6d], a0.this$));
      }

      CompletionStage CompletionStage::exceptionallyAsync(const ::java::util::function::Function & a0) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_exceptionallyAsync_8d6f7e61e17d3f6d], a0.this$));
      }

      CompletionStage CompletionStage::exceptionallyAsync(const ::java::util::function::Function & a0, const ::java::util::concurrent::Executor & a1) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_exceptionallyAsync_a61822ed03a52f7f], a0.this$, a1.this$));
      }

      CompletionStage CompletionStage::exceptionallyCompose(const ::java::util::function::Function & a0) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_exceptionallyCompose_8d6f7e61e17d3f6d], a0.this$));
      }

      CompletionStage CompletionStage::exceptionallyComposeAsync(const ::java::util::function::Function & a0) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_exceptionallyComposeAsync_8d6f7e61e17d3f6d], a0.this$));
      }

      CompletionStage CompletionStage::exceptionallyComposeAsync(const ::java::util::function::Function & a0, const ::java::util::concurrent::Executor & a1) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_exceptionallyComposeAsync_a61822ed03a52f7f], a0.this$, a1.this$));
      }

      CompletionStage CompletionStage::handle(const ::java::util::function::BiFunction & a0) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_handle_f0570b96a612cca1], a0.this$));
      }

      CompletionStage CompletionStage::handleAsync(const ::java::util::function::BiFunction & a0) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_handleAsync_f0570b96a612cca1], a0.this$));
      }

      CompletionStage CompletionStage::handleAsync(const ::java::util::function::BiFunction & a0, const ::java::util::concurrent::Executor & a1) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_handleAsync_073c71704105e00b], a0.this$, a1.this$));
      }

      CompletionStage CompletionStage::runAfterBoth(const CompletionStage & a0, const ::java::lang::Runnable & a1) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_runAfterBoth_59ecd927df0749e6], a0.this$, a1.this$));
      }

      CompletionStage CompletionStage::runAfterBothAsync(const CompletionStage & a0, const ::java::lang::Runnable & a1) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_runAfterBothAsync_59ecd927df0749e6], a0.this$, a1.this$));
      }

      CompletionStage CompletionStage::runAfterBothAsync(const CompletionStage & a0, const ::java::lang::Runnable & a1, const ::java::util::concurrent::Executor & a2) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_runAfterBothAsync_201b4e93c3747d88], a0.this$, a1.this$, a2.this$));
      }

      CompletionStage CompletionStage::runAfterEither(const CompletionStage & a0, const ::java::lang::Runnable & a1) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_runAfterEither_59ecd927df0749e6], a0.this$, a1.this$));
      }

      CompletionStage CompletionStage::runAfterEitherAsync(const CompletionStage & a0, const ::java::lang::Runnable & a1) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_runAfterEitherAsync_59ecd927df0749e6], a0.this$, a1.this$));
      }

      CompletionStage CompletionStage::runAfterEitherAsync(const CompletionStage & a0, const ::java::lang::Runnable & a1, const ::java::util::concurrent::Executor & a2) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_runAfterEitherAsync_201b4e93c3747d88], a0.this$, a1.this$, a2.this$));
      }

      CompletionStage CompletionStage::thenAccept(const ::java::util::function::Consumer & a0) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_thenAccept_23e2d4f1113a0298], a0.this$));
      }

      CompletionStage CompletionStage::thenAcceptAsync(const ::java::util::function::Consumer & a0) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_thenAcceptAsync_23e2d4f1113a0298], a0.this$));
      }

      CompletionStage CompletionStage::thenAcceptAsync(const ::java::util::function::Consumer & a0, const ::java::util::concurrent::Executor & a1) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_thenAcceptAsync_cfad9c5b51d6eba2], a0.this$, a1.this$));
      }

      CompletionStage CompletionStage::thenAcceptBoth(const CompletionStage & a0, const ::java::util::function::BiConsumer & a1) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_thenAcceptBoth_bfe59fe74a3234ee], a0.this$, a1.this$));
      }

      CompletionStage CompletionStage::thenAcceptBothAsync(const CompletionStage & a0, const ::java::util::function::BiConsumer & a1) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_thenAcceptBothAsync_bfe59fe74a3234ee], a0.this$, a1.this$));
      }

      CompletionStage CompletionStage::thenAcceptBothAsync(const CompletionStage & a0, const ::java::util::function::BiConsumer & a1, const ::java::util::concurrent::Executor & a2) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_thenAcceptBothAsync_d4e195ae32bfc1f0], a0.this$, a1.this$, a2.this$));
      }

      CompletionStage CompletionStage::thenApply(const ::java::util::function::Function & a0) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_thenApply_8d6f7e61e17d3f6d], a0.this$));
      }

      CompletionStage CompletionStage::thenApplyAsync(const ::java::util::function::Function & a0) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_thenApplyAsync_8d6f7e61e17d3f6d], a0.this$));
      }

      CompletionStage CompletionStage::thenApplyAsync(const ::java::util::function::Function & a0, const ::java::util::concurrent::Executor & a1) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_thenApplyAsync_a61822ed03a52f7f], a0.this$, a1.this$));
      }

      CompletionStage CompletionStage::thenCombine(const CompletionStage & a0, const ::java::util::function::BiFunction & a1) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_thenCombine_78c74e43f43e08fa], a0.this$, a1.this$));
      }

      CompletionStage CompletionStage::thenCombineAsync(const CompletionStage & a0, const ::java::util::function::BiFunction & a1) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_thenCombineAsync_78c74e43f43e08fa], a0.this$, a1.this$));
      }

      CompletionStage CompletionStage::thenCombineAsync(const CompletionStage & a0, const ::java::util::function::BiFunction & a1, const ::java::util::concurrent::Executor & a2) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_thenCombineAsync_f67d8a1fd0dc508f], a0.this$, a1.this$, a2.this$));
      }

      CompletionStage CompletionStage::thenCompose(const ::java::util::function::Function & a0) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_thenCompose_8d6f7e61e17d3f6d], a0.this$));
      }

      CompletionStage CompletionStage::thenComposeAsync(const ::java::util::function::Function & a0) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_thenComposeAsync_8d6f7e61e17d3f6d], a0.this$));
      }

      CompletionStage CompletionStage::thenComposeAsync(const ::java::util::function::Function & a0, const ::java::util::concurrent::Executor & a1) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_thenComposeAsync_a61822ed03a52f7f], a0.this$, a1.this$));
      }

      CompletionStage CompletionStage::thenRun(const ::java::lang::Runnable & a0) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_thenRun_5a87c88bf99df1db], a0.this$));
      }

      CompletionStage CompletionStage::thenRunAsync(const ::java::lang::Runnable & a0) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_thenRunAsync_5a87c88bf99df1db], a0.this$));
      }

      CompletionStage CompletionStage::thenRunAsync(const ::java::lang::Runnable & a0, const ::java::util::concurrent::Executor & a1) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_thenRunAsync_7a3a2f313f36946e], a0.this$, a1.this$));
      }

      ::java::util::concurrent::CompletableFuture CompletionStage::toCompletableFuture() const
      {
        return ::java::util::concurrent::CompletableFuture(env->callObjectMethod(this$, mids$[mid_toCompletableFuture_67c044688e7780df]));
      }

      CompletionStage CompletionStage::whenComplete(const ::java::util::function::BiConsumer & a0) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_whenComplete_2b245a0dce7a704c], a0.this$));
      }

      CompletionStage CompletionStage::whenCompleteAsync(const ::java::util::function::BiConsumer & a0) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_whenCompleteAsync_2b245a0dce7a704c], a0.this$));
      }

      CompletionStage CompletionStage::whenCompleteAsync(const ::java::util::function::BiConsumer & a0, const ::java::util::concurrent::Executor & a1) const
      {
        return CompletionStage(env->callObjectMethod(this$, mids$[mid_whenCompleteAsync_e6919763cd2ee0ec], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    namespace concurrent {
      static PyObject *t_CompletionStage_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CompletionStage_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CompletionStage_of_(t_CompletionStage *self, PyObject *args);
      static PyObject *t_CompletionStage_acceptEither(t_CompletionStage *self, PyObject *args);
      static PyObject *t_CompletionStage_acceptEitherAsync(t_CompletionStage *self, PyObject *args);
      static PyObject *t_CompletionStage_applyToEither(t_CompletionStage *self, PyObject *args);
      static PyObject *t_CompletionStage_applyToEitherAsync(t_CompletionStage *self, PyObject *args);
      static PyObject *t_CompletionStage_exceptionally(t_CompletionStage *self, PyObject *arg);
      static PyObject *t_CompletionStage_exceptionallyAsync(t_CompletionStage *self, PyObject *args);
      static PyObject *t_CompletionStage_exceptionallyCompose(t_CompletionStage *self, PyObject *arg);
      static PyObject *t_CompletionStage_exceptionallyComposeAsync(t_CompletionStage *self, PyObject *args);
      static PyObject *t_CompletionStage_handle(t_CompletionStage *self, PyObject *arg);
      static PyObject *t_CompletionStage_handleAsync(t_CompletionStage *self, PyObject *args);
      static PyObject *t_CompletionStage_runAfterBoth(t_CompletionStage *self, PyObject *args);
      static PyObject *t_CompletionStage_runAfterBothAsync(t_CompletionStage *self, PyObject *args);
      static PyObject *t_CompletionStage_runAfterEither(t_CompletionStage *self, PyObject *args);
      static PyObject *t_CompletionStage_runAfterEitherAsync(t_CompletionStage *self, PyObject *args);
      static PyObject *t_CompletionStage_thenAccept(t_CompletionStage *self, PyObject *arg);
      static PyObject *t_CompletionStage_thenAcceptAsync(t_CompletionStage *self, PyObject *args);
      static PyObject *t_CompletionStage_thenAcceptBoth(t_CompletionStage *self, PyObject *args);
      static PyObject *t_CompletionStage_thenAcceptBothAsync(t_CompletionStage *self, PyObject *args);
      static PyObject *t_CompletionStage_thenApply(t_CompletionStage *self, PyObject *arg);
      static PyObject *t_CompletionStage_thenApplyAsync(t_CompletionStage *self, PyObject *args);
      static PyObject *t_CompletionStage_thenCombine(t_CompletionStage *self, PyObject *args);
      static PyObject *t_CompletionStage_thenCombineAsync(t_CompletionStage *self, PyObject *args);
      static PyObject *t_CompletionStage_thenCompose(t_CompletionStage *self, PyObject *arg);
      static PyObject *t_CompletionStage_thenComposeAsync(t_CompletionStage *self, PyObject *args);
      static PyObject *t_CompletionStage_thenRun(t_CompletionStage *self, PyObject *arg);
      static PyObject *t_CompletionStage_thenRunAsync(t_CompletionStage *self, PyObject *args);
      static PyObject *t_CompletionStage_toCompletableFuture(t_CompletionStage *self);
      static PyObject *t_CompletionStage_whenComplete(t_CompletionStage *self, PyObject *arg);
      static PyObject *t_CompletionStage_whenCompleteAsync(t_CompletionStage *self, PyObject *args);
      static PyObject *t_CompletionStage_get__parameters_(t_CompletionStage *self, void *data);
      static PyGetSetDef t_CompletionStage__fields_[] = {
        DECLARE_GET_FIELD(t_CompletionStage, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CompletionStage__methods_[] = {
        DECLARE_METHOD(t_CompletionStage, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CompletionStage, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CompletionStage, of_, METH_VARARGS),
        DECLARE_METHOD(t_CompletionStage, acceptEither, METH_VARARGS),
        DECLARE_METHOD(t_CompletionStage, acceptEitherAsync, METH_VARARGS),
        DECLARE_METHOD(t_CompletionStage, applyToEither, METH_VARARGS),
        DECLARE_METHOD(t_CompletionStage, applyToEitherAsync, METH_VARARGS),
        DECLARE_METHOD(t_CompletionStage, exceptionally, METH_O),
        DECLARE_METHOD(t_CompletionStage, exceptionallyAsync, METH_VARARGS),
        DECLARE_METHOD(t_CompletionStage, exceptionallyCompose, METH_O),
        DECLARE_METHOD(t_CompletionStage, exceptionallyComposeAsync, METH_VARARGS),
        DECLARE_METHOD(t_CompletionStage, handle, METH_O),
        DECLARE_METHOD(t_CompletionStage, handleAsync, METH_VARARGS),
        DECLARE_METHOD(t_CompletionStage, runAfterBoth, METH_VARARGS),
        DECLARE_METHOD(t_CompletionStage, runAfterBothAsync, METH_VARARGS),
        DECLARE_METHOD(t_CompletionStage, runAfterEither, METH_VARARGS),
        DECLARE_METHOD(t_CompletionStage, runAfterEitherAsync, METH_VARARGS),
        DECLARE_METHOD(t_CompletionStage, thenAccept, METH_O),
        DECLARE_METHOD(t_CompletionStage, thenAcceptAsync, METH_VARARGS),
        DECLARE_METHOD(t_CompletionStage, thenAcceptBoth, METH_VARARGS),
        DECLARE_METHOD(t_CompletionStage, thenAcceptBothAsync, METH_VARARGS),
        DECLARE_METHOD(t_CompletionStage, thenApply, METH_O),
        DECLARE_METHOD(t_CompletionStage, thenApplyAsync, METH_VARARGS),
        DECLARE_METHOD(t_CompletionStage, thenCombine, METH_VARARGS),
        DECLARE_METHOD(t_CompletionStage, thenCombineAsync, METH_VARARGS),
        DECLARE_METHOD(t_CompletionStage, thenCompose, METH_O),
        DECLARE_METHOD(t_CompletionStage, thenComposeAsync, METH_VARARGS),
        DECLARE_METHOD(t_CompletionStage, thenRun, METH_O),
        DECLARE_METHOD(t_CompletionStage, thenRunAsync, METH_VARARGS),
        DECLARE_METHOD(t_CompletionStage, toCompletableFuture, METH_NOARGS),
        DECLARE_METHOD(t_CompletionStage, whenComplete, METH_O),
        DECLARE_METHOD(t_CompletionStage, whenCompleteAsync, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CompletionStage)[] = {
        { Py_tp_methods, t_CompletionStage__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CompletionStage__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CompletionStage)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CompletionStage, t_CompletionStage, CompletionStage);
      PyObject *t_CompletionStage::wrap_Object(const CompletionStage& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CompletionStage::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CompletionStage *self = (t_CompletionStage *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_CompletionStage::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CompletionStage::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CompletionStage *self = (t_CompletionStage *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_CompletionStage::install(PyObject *module)
      {
        installType(&PY_TYPE(CompletionStage), &PY_TYPE_DEF(CompletionStage), module, "CompletionStage", 0);
      }

      void t_CompletionStage::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CompletionStage), "class_", make_descriptor(CompletionStage::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CompletionStage), "wrapfn_", make_descriptor(t_CompletionStage::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CompletionStage), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CompletionStage_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CompletionStage::initializeClass, 1)))
          return NULL;
        return t_CompletionStage::wrap_Object(CompletionStage(((t_CompletionStage *) arg)->object.this$));
      }
      static PyObject *t_CompletionStage_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CompletionStage::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CompletionStage_of_(t_CompletionStage *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_CompletionStage_acceptEither(t_CompletionStage *self, PyObject *args)
      {
        CompletionStage a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::function::Consumer a1((jobject) NULL);
        PyTypeObject **p1;
        CompletionStage result((jobject) NULL);

        if (!parseArgs(args, "KK", CompletionStage::initializeClass, ::java::util::function::Consumer::initializeClass, &a0, &p0, t_CompletionStage::parameters_, &a1, &p1, ::java::util::function::t_Consumer::parameters_))
        {
          OBJ_CALL(result = self->object.acceptEither(a0, a1));
          return t_CompletionStage::wrap_Object(result, ::java::lang::PY_TYPE(Void));
        }

        PyErr_SetArgsError((PyObject *) self, "acceptEither", args);
        return NULL;
      }

      static PyObject *t_CompletionStage_acceptEitherAsync(t_CompletionStage *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            CompletionStage a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::function::Consumer a1((jobject) NULL);
            PyTypeObject **p1;
            CompletionStage result((jobject) NULL);

            if (!parseArgs(args, "KK", CompletionStage::initializeClass, ::java::util::function::Consumer::initializeClass, &a0, &p0, t_CompletionStage::parameters_, &a1, &p1, ::java::util::function::t_Consumer::parameters_))
            {
              OBJ_CALL(result = self->object.acceptEitherAsync(a0, a1));
              return t_CompletionStage::wrap_Object(result, ::java::lang::PY_TYPE(Void));
            }
          }
          break;
         case 3:
          {
            CompletionStage a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::function::Consumer a1((jobject) NULL);
            PyTypeObject **p1;
            ::java::util::concurrent::Executor a2((jobject) NULL);
            CompletionStage result((jobject) NULL);

            if (!parseArgs(args, "KKk", CompletionStage::initializeClass, ::java::util::function::Consumer::initializeClass, ::java::util::concurrent::Executor::initializeClass, &a0, &p0, t_CompletionStage::parameters_, &a1, &p1, ::java::util::function::t_Consumer::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.acceptEitherAsync(a0, a1, a2));
              return t_CompletionStage::wrap_Object(result, ::java::lang::PY_TYPE(Void));
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "acceptEitherAsync", args);
        return NULL;
      }

      static PyObject *t_CompletionStage_applyToEither(t_CompletionStage *self, PyObject *args)
      {
        CompletionStage a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::function::Function a1((jobject) NULL);
        PyTypeObject **p1;
        CompletionStage result((jobject) NULL);

        if (!parseArgs(args, "KK", CompletionStage::initializeClass, ::java::util::function::Function::initializeClass, &a0, &p0, t_CompletionStage::parameters_, &a1, &p1, ::java::util::function::t_Function::parameters_))
        {
          OBJ_CALL(result = self->object.applyToEither(a0, a1));
          return t_CompletionStage::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "applyToEither", args);
        return NULL;
      }

      static PyObject *t_CompletionStage_applyToEitherAsync(t_CompletionStage *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            CompletionStage a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::function::Function a1((jobject) NULL);
            PyTypeObject **p1;
            CompletionStage result((jobject) NULL);

            if (!parseArgs(args, "KK", CompletionStage::initializeClass, ::java::util::function::Function::initializeClass, &a0, &p0, t_CompletionStage::parameters_, &a1, &p1, ::java::util::function::t_Function::parameters_))
            {
              OBJ_CALL(result = self->object.applyToEitherAsync(a0, a1));
              return t_CompletionStage::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            CompletionStage a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::function::Function a1((jobject) NULL);
            PyTypeObject **p1;
            ::java::util::concurrent::Executor a2((jobject) NULL);
            CompletionStage result((jobject) NULL);

            if (!parseArgs(args, "KKk", CompletionStage::initializeClass, ::java::util::function::Function::initializeClass, ::java::util::concurrent::Executor::initializeClass, &a0, &p0, t_CompletionStage::parameters_, &a1, &p1, ::java::util::function::t_Function::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.applyToEitherAsync(a0, a1, a2));
              return t_CompletionStage::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "applyToEitherAsync", args);
        return NULL;
      }

      static PyObject *t_CompletionStage_exceptionally(t_CompletionStage *self, PyObject *arg)
      {
        ::java::util::function::Function a0((jobject) NULL);
        PyTypeObject **p0;
        CompletionStage result((jobject) NULL);

        if (!parseArg(arg, "K", ::java::util::function::Function::initializeClass, &a0, &p0, ::java::util::function::t_Function::parameters_))
        {
          OBJ_CALL(result = self->object.exceptionally(a0));
          return t_CompletionStage::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "exceptionally", arg);
        return NULL;
      }

      static PyObject *t_CompletionStage_exceptionallyAsync(t_CompletionStage *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::util::function::Function a0((jobject) NULL);
            PyTypeObject **p0;
            CompletionStage result((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::function::Function::initializeClass, &a0, &p0, ::java::util::function::t_Function::parameters_))
            {
              OBJ_CALL(result = self->object.exceptionallyAsync(a0));
              return t_CompletionStage::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 2:
          {
            ::java::util::function::Function a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::concurrent::Executor a1((jobject) NULL);
            CompletionStage result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::java::util::function::Function::initializeClass, ::java::util::concurrent::Executor::initializeClass, &a0, &p0, ::java::util::function::t_Function::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.exceptionallyAsync(a0, a1));
              return t_CompletionStage::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "exceptionallyAsync", args);
        return NULL;
      }

      static PyObject *t_CompletionStage_exceptionallyCompose(t_CompletionStage *self, PyObject *arg)
      {
        ::java::util::function::Function a0((jobject) NULL);
        PyTypeObject **p0;
        CompletionStage result((jobject) NULL);

        if (!parseArg(arg, "K", ::java::util::function::Function::initializeClass, &a0, &p0, ::java::util::function::t_Function::parameters_))
        {
          OBJ_CALL(result = self->object.exceptionallyCompose(a0));
          return t_CompletionStage::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "exceptionallyCompose", arg);
        return NULL;
      }

      static PyObject *t_CompletionStage_exceptionallyComposeAsync(t_CompletionStage *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::util::function::Function a0((jobject) NULL);
            PyTypeObject **p0;
            CompletionStage result((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::function::Function::initializeClass, &a0, &p0, ::java::util::function::t_Function::parameters_))
            {
              OBJ_CALL(result = self->object.exceptionallyComposeAsync(a0));
              return t_CompletionStage::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 2:
          {
            ::java::util::function::Function a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::concurrent::Executor a1((jobject) NULL);
            CompletionStage result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::java::util::function::Function::initializeClass, ::java::util::concurrent::Executor::initializeClass, &a0, &p0, ::java::util::function::t_Function::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.exceptionallyComposeAsync(a0, a1));
              return t_CompletionStage::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "exceptionallyComposeAsync", args);
        return NULL;
      }

      static PyObject *t_CompletionStage_handle(t_CompletionStage *self, PyObject *arg)
      {
        ::java::util::function::BiFunction a0((jobject) NULL);
        PyTypeObject **p0;
        CompletionStage result((jobject) NULL);

        if (!parseArg(arg, "K", ::java::util::function::BiFunction::initializeClass, &a0, &p0, ::java::util::function::t_BiFunction::parameters_))
        {
          OBJ_CALL(result = self->object.handle(a0));
          return t_CompletionStage::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "handle", arg);
        return NULL;
      }

      static PyObject *t_CompletionStage_handleAsync(t_CompletionStage *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::util::function::BiFunction a0((jobject) NULL);
            PyTypeObject **p0;
            CompletionStage result((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::function::BiFunction::initializeClass, &a0, &p0, ::java::util::function::t_BiFunction::parameters_))
            {
              OBJ_CALL(result = self->object.handleAsync(a0));
              return t_CompletionStage::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::util::function::BiFunction a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::concurrent::Executor a1((jobject) NULL);
            CompletionStage result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::java::util::function::BiFunction::initializeClass, ::java::util::concurrent::Executor::initializeClass, &a0, &p0, ::java::util::function::t_BiFunction::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.handleAsync(a0, a1));
              return t_CompletionStage::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "handleAsync", args);
        return NULL;
      }

      static PyObject *t_CompletionStage_runAfterBoth(t_CompletionStage *self, PyObject *args)
      {
        CompletionStage a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::lang::Runnable a1((jobject) NULL);
        CompletionStage result((jobject) NULL);

        if (!parseArgs(args, "Kk", CompletionStage::initializeClass, ::java::lang::Runnable::initializeClass, &a0, &p0, t_CompletionStage::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.runAfterBoth(a0, a1));
          return t_CompletionStage::wrap_Object(result, ::java::lang::PY_TYPE(Void));
        }

        PyErr_SetArgsError((PyObject *) self, "runAfterBoth", args);
        return NULL;
      }

      static PyObject *t_CompletionStage_runAfterBothAsync(t_CompletionStage *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            CompletionStage a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::lang::Runnable a1((jobject) NULL);
            CompletionStage result((jobject) NULL);

            if (!parseArgs(args, "Kk", CompletionStage::initializeClass, ::java::lang::Runnable::initializeClass, &a0, &p0, t_CompletionStage::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.runAfterBothAsync(a0, a1));
              return t_CompletionStage::wrap_Object(result, ::java::lang::PY_TYPE(Void));
            }
          }
          break;
         case 3:
          {
            CompletionStage a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::lang::Runnable a1((jobject) NULL);
            ::java::util::concurrent::Executor a2((jobject) NULL);
            CompletionStage result((jobject) NULL);

            if (!parseArgs(args, "Kkk", CompletionStage::initializeClass, ::java::lang::Runnable::initializeClass, ::java::util::concurrent::Executor::initializeClass, &a0, &p0, t_CompletionStage::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.runAfterBothAsync(a0, a1, a2));
              return t_CompletionStage::wrap_Object(result, ::java::lang::PY_TYPE(Void));
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "runAfterBothAsync", args);
        return NULL;
      }

      static PyObject *t_CompletionStage_runAfterEither(t_CompletionStage *self, PyObject *args)
      {
        CompletionStage a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::lang::Runnable a1((jobject) NULL);
        CompletionStage result((jobject) NULL);

        if (!parseArgs(args, "Kk", CompletionStage::initializeClass, ::java::lang::Runnable::initializeClass, &a0, &p0, t_CompletionStage::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.runAfterEither(a0, a1));
          return t_CompletionStage::wrap_Object(result, ::java::lang::PY_TYPE(Void));
        }

        PyErr_SetArgsError((PyObject *) self, "runAfterEither", args);
        return NULL;
      }

      static PyObject *t_CompletionStage_runAfterEitherAsync(t_CompletionStage *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            CompletionStage a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::lang::Runnable a1((jobject) NULL);
            CompletionStage result((jobject) NULL);

            if (!parseArgs(args, "Kk", CompletionStage::initializeClass, ::java::lang::Runnable::initializeClass, &a0, &p0, t_CompletionStage::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.runAfterEitherAsync(a0, a1));
              return t_CompletionStage::wrap_Object(result, ::java::lang::PY_TYPE(Void));
            }
          }
          break;
         case 3:
          {
            CompletionStage a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::lang::Runnable a1((jobject) NULL);
            ::java::util::concurrent::Executor a2((jobject) NULL);
            CompletionStage result((jobject) NULL);

            if (!parseArgs(args, "Kkk", CompletionStage::initializeClass, ::java::lang::Runnable::initializeClass, ::java::util::concurrent::Executor::initializeClass, &a0, &p0, t_CompletionStage::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.runAfterEitherAsync(a0, a1, a2));
              return t_CompletionStage::wrap_Object(result, ::java::lang::PY_TYPE(Void));
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "runAfterEitherAsync", args);
        return NULL;
      }

      static PyObject *t_CompletionStage_thenAccept(t_CompletionStage *self, PyObject *arg)
      {
        ::java::util::function::Consumer a0((jobject) NULL);
        PyTypeObject **p0;
        CompletionStage result((jobject) NULL);

        if (!parseArg(arg, "K", ::java::util::function::Consumer::initializeClass, &a0, &p0, ::java::util::function::t_Consumer::parameters_))
        {
          OBJ_CALL(result = self->object.thenAccept(a0));
          return t_CompletionStage::wrap_Object(result, ::java::lang::PY_TYPE(Void));
        }

        PyErr_SetArgsError((PyObject *) self, "thenAccept", arg);
        return NULL;
      }

      static PyObject *t_CompletionStage_thenAcceptAsync(t_CompletionStage *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::util::function::Consumer a0((jobject) NULL);
            PyTypeObject **p0;
            CompletionStage result((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::function::Consumer::initializeClass, &a0, &p0, ::java::util::function::t_Consumer::parameters_))
            {
              OBJ_CALL(result = self->object.thenAcceptAsync(a0));
              return t_CompletionStage::wrap_Object(result, ::java::lang::PY_TYPE(Void));
            }
          }
          break;
         case 2:
          {
            ::java::util::function::Consumer a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::concurrent::Executor a1((jobject) NULL);
            CompletionStage result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::java::util::function::Consumer::initializeClass, ::java::util::concurrent::Executor::initializeClass, &a0, &p0, ::java::util::function::t_Consumer::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.thenAcceptAsync(a0, a1));
              return t_CompletionStage::wrap_Object(result, ::java::lang::PY_TYPE(Void));
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "thenAcceptAsync", args);
        return NULL;
      }

      static PyObject *t_CompletionStage_thenAcceptBoth(t_CompletionStage *self, PyObject *args)
      {
        CompletionStage a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::function::BiConsumer a1((jobject) NULL);
        PyTypeObject **p1;
        CompletionStage result((jobject) NULL);

        if (!parseArgs(args, "KK", CompletionStage::initializeClass, ::java::util::function::BiConsumer::initializeClass, &a0, &p0, t_CompletionStage::parameters_, &a1, &p1, ::java::util::function::t_BiConsumer::parameters_))
        {
          OBJ_CALL(result = self->object.thenAcceptBoth(a0, a1));
          return t_CompletionStage::wrap_Object(result, ::java::lang::PY_TYPE(Void));
        }

        PyErr_SetArgsError((PyObject *) self, "thenAcceptBoth", args);
        return NULL;
      }

      static PyObject *t_CompletionStage_thenAcceptBothAsync(t_CompletionStage *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            CompletionStage a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::function::BiConsumer a1((jobject) NULL);
            PyTypeObject **p1;
            CompletionStage result((jobject) NULL);

            if (!parseArgs(args, "KK", CompletionStage::initializeClass, ::java::util::function::BiConsumer::initializeClass, &a0, &p0, t_CompletionStage::parameters_, &a1, &p1, ::java::util::function::t_BiConsumer::parameters_))
            {
              OBJ_CALL(result = self->object.thenAcceptBothAsync(a0, a1));
              return t_CompletionStage::wrap_Object(result, ::java::lang::PY_TYPE(Void));
            }
          }
          break;
         case 3:
          {
            CompletionStage a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::function::BiConsumer a1((jobject) NULL);
            PyTypeObject **p1;
            ::java::util::concurrent::Executor a2((jobject) NULL);
            CompletionStage result((jobject) NULL);

            if (!parseArgs(args, "KKk", CompletionStage::initializeClass, ::java::util::function::BiConsumer::initializeClass, ::java::util::concurrent::Executor::initializeClass, &a0, &p0, t_CompletionStage::parameters_, &a1, &p1, ::java::util::function::t_BiConsumer::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.thenAcceptBothAsync(a0, a1, a2));
              return t_CompletionStage::wrap_Object(result, ::java::lang::PY_TYPE(Void));
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "thenAcceptBothAsync", args);
        return NULL;
      }

      static PyObject *t_CompletionStage_thenApply(t_CompletionStage *self, PyObject *arg)
      {
        ::java::util::function::Function a0((jobject) NULL);
        PyTypeObject **p0;
        CompletionStage result((jobject) NULL);

        if (!parseArg(arg, "K", ::java::util::function::Function::initializeClass, &a0, &p0, ::java::util::function::t_Function::parameters_))
        {
          OBJ_CALL(result = self->object.thenApply(a0));
          return t_CompletionStage::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "thenApply", arg);
        return NULL;
      }

      static PyObject *t_CompletionStage_thenApplyAsync(t_CompletionStage *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::util::function::Function a0((jobject) NULL);
            PyTypeObject **p0;
            CompletionStage result((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::function::Function::initializeClass, &a0, &p0, ::java::util::function::t_Function::parameters_))
            {
              OBJ_CALL(result = self->object.thenApplyAsync(a0));
              return t_CompletionStage::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::util::function::Function a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::concurrent::Executor a1((jobject) NULL);
            CompletionStage result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::java::util::function::Function::initializeClass, ::java::util::concurrent::Executor::initializeClass, &a0, &p0, ::java::util::function::t_Function::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.thenApplyAsync(a0, a1));
              return t_CompletionStage::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "thenApplyAsync", args);
        return NULL;
      }

      static PyObject *t_CompletionStage_thenCombine(t_CompletionStage *self, PyObject *args)
      {
        CompletionStage a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::function::BiFunction a1((jobject) NULL);
        PyTypeObject **p1;
        CompletionStage result((jobject) NULL);

        if (!parseArgs(args, "KK", CompletionStage::initializeClass, ::java::util::function::BiFunction::initializeClass, &a0, &p0, t_CompletionStage::parameters_, &a1, &p1, ::java::util::function::t_BiFunction::parameters_))
        {
          OBJ_CALL(result = self->object.thenCombine(a0, a1));
          return t_CompletionStage::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "thenCombine", args);
        return NULL;
      }

      static PyObject *t_CompletionStage_thenCombineAsync(t_CompletionStage *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            CompletionStage a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::function::BiFunction a1((jobject) NULL);
            PyTypeObject **p1;
            CompletionStage result((jobject) NULL);

            if (!parseArgs(args, "KK", CompletionStage::initializeClass, ::java::util::function::BiFunction::initializeClass, &a0, &p0, t_CompletionStage::parameters_, &a1, &p1, ::java::util::function::t_BiFunction::parameters_))
            {
              OBJ_CALL(result = self->object.thenCombineAsync(a0, a1));
              return t_CompletionStage::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            CompletionStage a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::function::BiFunction a1((jobject) NULL);
            PyTypeObject **p1;
            ::java::util::concurrent::Executor a2((jobject) NULL);
            CompletionStage result((jobject) NULL);

            if (!parseArgs(args, "KKk", CompletionStage::initializeClass, ::java::util::function::BiFunction::initializeClass, ::java::util::concurrent::Executor::initializeClass, &a0, &p0, t_CompletionStage::parameters_, &a1, &p1, ::java::util::function::t_BiFunction::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.thenCombineAsync(a0, a1, a2));
              return t_CompletionStage::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "thenCombineAsync", args);
        return NULL;
      }

      static PyObject *t_CompletionStage_thenCompose(t_CompletionStage *self, PyObject *arg)
      {
        ::java::util::function::Function a0((jobject) NULL);
        PyTypeObject **p0;
        CompletionStage result((jobject) NULL);

        if (!parseArg(arg, "K", ::java::util::function::Function::initializeClass, &a0, &p0, ::java::util::function::t_Function::parameters_))
        {
          OBJ_CALL(result = self->object.thenCompose(a0));
          return t_CompletionStage::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "thenCompose", arg);
        return NULL;
      }

      static PyObject *t_CompletionStage_thenComposeAsync(t_CompletionStage *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::util::function::Function a0((jobject) NULL);
            PyTypeObject **p0;
            CompletionStage result((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::function::Function::initializeClass, &a0, &p0, ::java::util::function::t_Function::parameters_))
            {
              OBJ_CALL(result = self->object.thenComposeAsync(a0));
              return t_CompletionStage::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::util::function::Function a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::concurrent::Executor a1((jobject) NULL);
            CompletionStage result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::java::util::function::Function::initializeClass, ::java::util::concurrent::Executor::initializeClass, &a0, &p0, ::java::util::function::t_Function::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.thenComposeAsync(a0, a1));
              return t_CompletionStage::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "thenComposeAsync", args);
        return NULL;
      }

      static PyObject *t_CompletionStage_thenRun(t_CompletionStage *self, PyObject *arg)
      {
        ::java::lang::Runnable a0((jobject) NULL);
        CompletionStage result((jobject) NULL);

        if (!parseArg(arg, "k", ::java::lang::Runnable::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.thenRun(a0));
          return t_CompletionStage::wrap_Object(result, ::java::lang::PY_TYPE(Void));
        }

        PyErr_SetArgsError((PyObject *) self, "thenRun", arg);
        return NULL;
      }

      static PyObject *t_CompletionStage_thenRunAsync(t_CompletionStage *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::Runnable a0((jobject) NULL);
            CompletionStage result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::lang::Runnable::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.thenRunAsync(a0));
              return t_CompletionStage::wrap_Object(result, ::java::lang::PY_TYPE(Void));
            }
          }
          break;
         case 2:
          {
            ::java::lang::Runnable a0((jobject) NULL);
            ::java::util::concurrent::Executor a1((jobject) NULL);
            CompletionStage result((jobject) NULL);

            if (!parseArgs(args, "kk", ::java::lang::Runnable::initializeClass, ::java::util::concurrent::Executor::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.thenRunAsync(a0, a1));
              return t_CompletionStage::wrap_Object(result, ::java::lang::PY_TYPE(Void));
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "thenRunAsync", args);
        return NULL;
      }

      static PyObject *t_CompletionStage_toCompletableFuture(t_CompletionStage *self)
      {
        ::java::util::concurrent::CompletableFuture result((jobject) NULL);
        OBJ_CALL(result = self->object.toCompletableFuture());
        return ::java::util::concurrent::t_CompletableFuture::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_CompletionStage_whenComplete(t_CompletionStage *self, PyObject *arg)
      {
        ::java::util::function::BiConsumer a0((jobject) NULL);
        PyTypeObject **p0;
        CompletionStage result((jobject) NULL);

        if (!parseArg(arg, "K", ::java::util::function::BiConsumer::initializeClass, &a0, &p0, ::java::util::function::t_BiConsumer::parameters_))
        {
          OBJ_CALL(result = self->object.whenComplete(a0));
          return t_CompletionStage::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "whenComplete", arg);
        return NULL;
      }

      static PyObject *t_CompletionStage_whenCompleteAsync(t_CompletionStage *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::util::function::BiConsumer a0((jobject) NULL);
            PyTypeObject **p0;
            CompletionStage result((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::function::BiConsumer::initializeClass, &a0, &p0, ::java::util::function::t_BiConsumer::parameters_))
            {
              OBJ_CALL(result = self->object.whenCompleteAsync(a0));
              return t_CompletionStage::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 2:
          {
            ::java::util::function::BiConsumer a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::concurrent::Executor a1((jobject) NULL);
            CompletionStage result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::java::util::function::BiConsumer::initializeClass, ::java::util::concurrent::Executor::initializeClass, &a0, &p0, ::java::util::function::t_BiConsumer::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.whenCompleteAsync(a0, a1));
              return t_CompletionStage::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "whenCompleteAsync", args);
        return NULL;
      }
      static PyObject *t_CompletionStage_get__parameters_(t_CompletionStage *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/concurrent/Delayed.h"
#include "java/util/concurrent/TimeUnit.h"
#include "java/util/concurrent/Delayed.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {
    namespace concurrent {

      ::java::lang::Class *Delayed::class$ = NULL;
      jmethodID *Delayed::mids$ = NULL;
      bool Delayed::live$ = false;

      jclass Delayed::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("java/util/concurrent/Delayed");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getDelay_c388efbac5736a8b] = env->getMethodID(cls, "getDelay", "(Ljava/util/concurrent/TimeUnit;)J");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jlong Delayed::getDelay(const ::java::util::concurrent::TimeUnit & a0) const
      {
        return env->callLongMethod(this$, mids$[mid_getDelay_c388efbac5736a8b], a0.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    namespace concurrent {
      static PyObject *t_Delayed_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Delayed_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Delayed_getDelay(t_Delayed *self, PyObject *arg);

      static PyMethodDef t_Delayed__methods_[] = {
        DECLARE_METHOD(t_Delayed, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Delayed, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Delayed, getDelay, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Delayed)[] = {
        { Py_tp_methods, t_Delayed__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Delayed)[] = {
        &PY_TYPE_DEF(::java::lang::Comparable),
        NULL
      };

      DEFINE_TYPE(Delayed, t_Delayed, Delayed);

      void t_Delayed::install(PyObject *module)
      {
        installType(&PY_TYPE(Delayed), &PY_TYPE_DEF(Delayed), module, "Delayed", 0);
      }

      void t_Delayed::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Delayed), "class_", make_descriptor(Delayed::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Delayed), "wrapfn_", make_descriptor(t_Delayed::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Delayed), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Delayed_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Delayed::initializeClass, 1)))
          return NULL;
        return t_Delayed::wrap_Object(Delayed(((t_Delayed *) arg)->object.this$));
      }
      static PyObject *t_Delayed_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Delayed::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Delayed_getDelay(t_Delayed *self, PyObject *arg)
      {
        ::java::util::concurrent::TimeUnit a0((jobject) NULL);
        PyTypeObject **p0;
        jlong result;

        if (!parseArg(arg, "K", ::java::util::concurrent::TimeUnit::initializeClass, &a0, &p0, ::java::util::concurrent::t_TimeUnit::parameters_))
        {
          OBJ_CALL(result = self->object.getDelay(a0));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getDelay", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/antlr/v4/runtime/atn/ATNConfigSet.h"
#include "org/antlr/v4/runtime/atn/ATNState.h"
#include "java/util/Iterator.h"
#include "java/util/BitSet.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "java/util/List.h"
#include "java/lang/String.h"
#include "java/util/Set.h"
#include "java/util/ArrayList.h"
#include "org/antlr/v4/runtime/atn/SemanticContext.h"
#include "org/antlr/v4/runtime/atn/ATNSimulator.h"
#include "org/antlr/v4/runtime/atn/ATNConfig.h"
#include "org/antlr/v4/runtime/atn/ATNConfigSet$AbstractConfigHashSet.h"
#include "JArray.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          ::java::lang::Class *ATNConfigSet::class$ = NULL;
          jmethodID *ATNConfigSet::mids$ = NULL;
          jfieldID *ATNConfigSet::fids$ = NULL;
          bool ATNConfigSet::live$ = false;

          jclass ATNConfigSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/antlr/v4/runtime/atn/ATNConfigSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3720c61b0679eb3e] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_b110fc3a58c081ab] = env->getMethodID(cls, "<init>", "(Z)V");
              mids$[mid_add_1274b529738a1c30] = env->getMethodID(cls, "add", "(Lorg/antlr/v4/runtime/atn/ATNConfig;)Z");
              mids$[mid_addAll_f2a1f31c5865e20d] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
              mids$[mid_clear_3720c61b0679eb3e] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_contains_570b5248a6da3ef6] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
              mids$[mid_containsAll_f2a1f31c5865e20d] = env->getMethodID(cls, "containsAll", "(Ljava/util/Collection;)Z");
              mids$[mid_containsFast_1274b529738a1c30] = env->getMethodID(cls, "containsFast", "(Lorg/antlr/v4/runtime/atn/ATNConfig;)Z");
              mids$[mid_elements_36830460e10839eb] = env->getMethodID(cls, "elements", "()Ljava/util/List;");
              mids$[mid_equals_570b5248a6da3ef6] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_get_30baa13de933d284] = env->getMethodID(cls, "get", "(I)Lorg/antlr/v4/runtime/atn/ATNConfig;");
              mids$[mid_getAlts_a3ae020b288cd028] = env->getMethodID(cls, "getAlts", "()Ljava/util/BitSet;");
              mids$[mid_getPredicates_36830460e10839eb] = env->getMethodID(cls, "getPredicates", "()Ljava/util/List;");
              mids$[mid_getStates_4df174295554d7bd] = env->getMethodID(cls, "getStates", "()Ljava/util/Set;");
              mids$[mid_hashCode_20fbf7565993c3d7] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isEmpty_947277eca0748c4e] = env->getMethodID(cls, "isEmpty", "()Z");
              mids$[mid_isReadonly_947277eca0748c4e] = env->getMethodID(cls, "isReadonly", "()Z");
              mids$[mid_iterator_0db4c76ff7ee995b] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
              mids$[mid_optimizeConfigs_5cfb6c9fd627ce9e] = env->getMethodID(cls, "optimizeConfigs", "(Lorg/antlr/v4/runtime/atn/ATNSimulator;)V");
              mids$[mid_remove_570b5248a6da3ef6] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
              mids$[mid_removeAll_f2a1f31c5865e20d] = env->getMethodID(cls, "removeAll", "(Ljava/util/Collection;)Z");
              mids$[mid_retainAll_f2a1f31c5865e20d] = env->getMethodID(cls, "retainAll", "(Ljava/util/Collection;)Z");
              mids$[mid_setReadonly_b110fc3a58c081ab] = env->getMethodID(cls, "setReadonly", "(Z)V");
              mids$[mid_size_20fbf7565993c3d7] = env->getMethodID(cls, "size", "()I");
              mids$[mid_toArray_90cac70f3363a8e7] = env->getMethodID(cls, "toArray", "()[Lorg/antlr/v4/runtime/atn/ATNConfig;");
              mids$[mid_toArray_1794d6b866766560] = env->getMethodID(cls, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");
              mids$[mid_toString_09a7afff1868fc5e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              fids$ = new jfieldID[max_fid];
              fids$[fid_configLookup] = env->getFieldID(cls, "configLookup", "Lorg/antlr/v4/runtime/atn/ATNConfigSet$AbstractConfigHashSet;");
              fids$[fid_configs] = env->getFieldID(cls, "configs", "Ljava/util/ArrayList;");
              fids$[fid_dipsIntoOuterContext] = env->getFieldID(cls, "dipsIntoOuterContext", "Z");
              fids$[fid_fullCtx] = env->getFieldID(cls, "fullCtx", "Z");
              fids$[fid_hasSemanticContext] = env->getFieldID(cls, "hasSemanticContext", "Z");
              fids$[fid_uniqueAlt] = env->getFieldID(cls, "uniqueAlt", "I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ATNConfigSet::ATNConfigSet() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3720c61b0679eb3e)) {}

          ATNConfigSet::ATNConfigSet(jboolean a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b110fc3a58c081ab, a0)) {}

          jboolean ATNConfigSet::add(const ::org::antlr::v4::runtime::atn::ATNConfig & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_add_1274b529738a1c30], a0.this$);
          }

          jboolean ATNConfigSet::addAll(const ::java::util::Collection & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_addAll_f2a1f31c5865e20d], a0.this$);
          }

          void ATNConfigSet::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_3720c61b0679eb3e]);
          }

          jboolean ATNConfigSet::contains(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_contains_570b5248a6da3ef6], a0.this$);
          }

          jboolean ATNConfigSet::containsAll(const ::java::util::Collection & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_containsAll_f2a1f31c5865e20d], a0.this$);
          }

          jboolean ATNConfigSet::containsFast(const ::org::antlr::v4::runtime::atn::ATNConfig & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_containsFast_1274b529738a1c30], a0.this$);
          }

          ::java::util::List ATNConfigSet::elements() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_elements_36830460e10839eb]));
          }

          jboolean ATNConfigSet::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_570b5248a6da3ef6], a0.this$);
          }

          ::org::antlr::v4::runtime::atn::ATNConfig ATNConfigSet::get(jint a0) const
          {
            return ::org::antlr::v4::runtime::atn::ATNConfig(env->callObjectMethod(this$, mids$[mid_get_30baa13de933d284], a0));
          }

          ::java::util::BitSet ATNConfigSet::getAlts() const
          {
            return ::java::util::BitSet(env->callObjectMethod(this$, mids$[mid_getAlts_a3ae020b288cd028]));
          }

          ::java::util::List ATNConfigSet::getPredicates() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPredicates_36830460e10839eb]));
          }

          ::java::util::Set ATNConfigSet::getStates() const
          {
            return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getStates_4df174295554d7bd]));
          }

          jint ATNConfigSet::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_20fbf7565993c3d7]);
          }

          jboolean ATNConfigSet::isEmpty() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isEmpty_947277eca0748c4e]);
          }

          jboolean ATNConfigSet::isReadonly() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isReadonly_947277eca0748c4e]);
          }

          ::java::util::Iterator ATNConfigSet::iterator() const
          {
            return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_0db4c76ff7ee995b]));
          }

          void ATNConfigSet::optimizeConfigs(const ::org::antlr::v4::runtime::atn::ATNSimulator & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_optimizeConfigs_5cfb6c9fd627ce9e], a0.this$);
          }

          jboolean ATNConfigSet::remove(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_remove_570b5248a6da3ef6], a0.this$);
          }

          jboolean ATNConfigSet::removeAll(const ::java::util::Collection & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_removeAll_f2a1f31c5865e20d], a0.this$);
          }

          jboolean ATNConfigSet::retainAll(const ::java::util::Collection & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_retainAll_f2a1f31c5865e20d], a0.this$);
          }

          void ATNConfigSet::setReadonly(jboolean a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReadonly_b110fc3a58c081ab], a0);
          }

          jint ATNConfigSet::size() const
          {
            return env->callIntMethod(this$, mids$[mid_size_20fbf7565993c3d7]);
          }

          JArray< ::org::antlr::v4::runtime::atn::ATNConfig > ATNConfigSet::toArray() const
          {
            return JArray< ::org::antlr::v4::runtime::atn::ATNConfig >(env->callObjectMethod(this$, mids$[mid_toArray_90cac70f3363a8e7]));
          }

          JArray< ::java::lang::Object > ATNConfigSet::toArray(const JArray< ::java::lang::Object > & a0) const
          {
            return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_1794d6b866766560], a0.this$));
          }

          ::java::lang::String ATNConfigSet::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_09a7afff1868fc5e]));
          }

          ::org::antlr::v4::runtime::atn::ATNConfigSet$AbstractConfigHashSet ATNConfigSet::_get_configLookup() const
          {
            return ::org::antlr::v4::runtime::atn::ATNConfigSet$AbstractConfigHashSet(env->getObjectField(this$, fids$[fid_configLookup]));
          }

          void ATNConfigSet::_set_configLookup(const ::org::antlr::v4::runtime::atn::ATNConfigSet$AbstractConfigHashSet & a0) const
          {
            env->setObjectField(this$, fids$[fid_configLookup], a0.this$);
          }

          ::java::util::ArrayList ATNConfigSet::_get_configs() const
          {
            return ::java::util::ArrayList(env->getObjectField(this$, fids$[fid_configs]));
          }

          jboolean ATNConfigSet::_get_dipsIntoOuterContext() const
          {
            return env->getBooleanField(this$, fids$[fid_dipsIntoOuterContext]);
          }

          void ATNConfigSet::_set_dipsIntoOuterContext(jboolean a0) const
          {
            env->setBooleanField(this$, fids$[fid_dipsIntoOuterContext], a0);
          }

          jboolean ATNConfigSet::_get_fullCtx() const
          {
            return env->getBooleanField(this$, fids$[fid_fullCtx]);
          }

          jboolean ATNConfigSet::_get_hasSemanticContext() const
          {
            return env->getBooleanField(this$, fids$[fid_hasSemanticContext]);
          }

          void ATNConfigSet::_set_hasSemanticContext(jboolean a0) const
          {
            env->setBooleanField(this$, fids$[fid_hasSemanticContext], a0);
          }

          jint ATNConfigSet::_get_uniqueAlt() const
          {
            return env->getIntField(this$, fids$[fid_uniqueAlt]);
          }

          void ATNConfigSet::_set_uniqueAlt(jint a0) const
          {
            env->setIntField(this$, fids$[fid_uniqueAlt], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          static PyObject *t_ATNConfigSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ATNConfigSet_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ATNConfigSet_init_(t_ATNConfigSet *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ATNConfigSet_add(t_ATNConfigSet *self, PyObject *arg);
          static PyObject *t_ATNConfigSet_addAll(t_ATNConfigSet *self, PyObject *arg);
          static PyObject *t_ATNConfigSet_clear(t_ATNConfigSet *self);
          static PyObject *t_ATNConfigSet_contains(t_ATNConfigSet *self, PyObject *arg);
          static PyObject *t_ATNConfigSet_containsAll(t_ATNConfigSet *self, PyObject *arg);
          static PyObject *t_ATNConfigSet_containsFast(t_ATNConfigSet *self, PyObject *arg);
          static PyObject *t_ATNConfigSet_elements(t_ATNConfigSet *self);
          static PyObject *t_ATNConfigSet_equals(t_ATNConfigSet *self, PyObject *args);
          static PyObject *t_ATNConfigSet_get(t_ATNConfigSet *self, PyObject *arg);
          static PyObject *t_ATNConfigSet_getAlts(t_ATNConfigSet *self);
          static PyObject *t_ATNConfigSet_getPredicates(t_ATNConfigSet *self);
          static PyObject *t_ATNConfigSet_getStates(t_ATNConfigSet *self);
          static PyObject *t_ATNConfigSet_hashCode(t_ATNConfigSet *self, PyObject *args);
          static PyObject *t_ATNConfigSet_isEmpty(t_ATNConfigSet *self);
          static PyObject *t_ATNConfigSet_isReadonly(t_ATNConfigSet *self);
          static PyObject *t_ATNConfigSet_iterator(t_ATNConfigSet *self);
          static PyObject *t_ATNConfigSet_optimizeConfigs(t_ATNConfigSet *self, PyObject *arg);
          static PyObject *t_ATNConfigSet_remove(t_ATNConfigSet *self, PyObject *arg);
          static PyObject *t_ATNConfigSet_removeAll(t_ATNConfigSet *self, PyObject *arg);
          static PyObject *t_ATNConfigSet_retainAll(t_ATNConfigSet *self, PyObject *arg);
          static PyObject *t_ATNConfigSet_setReadonly(t_ATNConfigSet *self, PyObject *arg);
          static PyObject *t_ATNConfigSet_size(t_ATNConfigSet *self);
          static PyObject *t_ATNConfigSet_toArray(t_ATNConfigSet *self, PyObject *args);
          static PyObject *t_ATNConfigSet_toString(t_ATNConfigSet *self, PyObject *args);
          static PyObject *t_ATNConfigSet_get__configLookup(t_ATNConfigSet *self, void *data);
          static int t_ATNConfigSet_set__configLookup(t_ATNConfigSet *self, PyObject *arg, void *data);
          static PyObject *t_ATNConfigSet_get__configs(t_ATNConfigSet *self, void *data);
          static PyObject *t_ATNConfigSet_get__dipsIntoOuterContext(t_ATNConfigSet *self, void *data);
          static int t_ATNConfigSet_set__dipsIntoOuterContext(t_ATNConfigSet *self, PyObject *arg, void *data);
          static PyObject *t_ATNConfigSet_get__fullCtx(t_ATNConfigSet *self, void *data);
          static PyObject *t_ATNConfigSet_get__hasSemanticContext(t_ATNConfigSet *self, void *data);
          static int t_ATNConfigSet_set__hasSemanticContext(t_ATNConfigSet *self, PyObject *arg, void *data);
          static PyObject *t_ATNConfigSet_get__uniqueAlt(t_ATNConfigSet *self, void *data);
          static int t_ATNConfigSet_set__uniqueAlt(t_ATNConfigSet *self, PyObject *arg, void *data);

          static PyObject *t_ATNConfigSet_get__alts(t_ATNConfigSet *self, void *data);
          static PyObject *t_ATNConfigSet_get__empty(t_ATNConfigSet *self, void *data);
          static PyObject *t_ATNConfigSet_get__predicates(t_ATNConfigSet *self, void *data);
          static PyObject *t_ATNConfigSet_get__readonly(t_ATNConfigSet *self, void *data);
          static int t_ATNConfigSet_set__readonly(t_ATNConfigSet *self, PyObject *arg, void *data);
          static PyObject *t_ATNConfigSet_get__states(t_ATNConfigSet *self, void *data);
          static PyGetSetDef t_ATNConfigSet__fields_[] = {
            DECLARE_GETSET_FIELD(t_ATNConfigSet, configLookup),
            DECLARE_GET_FIELD(t_ATNConfigSet, configs),
            DECLARE_GETSET_FIELD(t_ATNConfigSet, dipsIntoOuterContext),
            DECLARE_GET_FIELD(t_ATNConfigSet, fullCtx),
            DECLARE_GETSET_FIELD(t_ATNConfigSet, hasSemanticContext),
            DECLARE_GETSET_FIELD(t_ATNConfigSet, uniqueAlt),
            DECLARE_GET_FIELD(t_ATNConfigSet, alts),
            DECLARE_GET_FIELD(t_ATNConfigSet, empty),
            DECLARE_GET_FIELD(t_ATNConfigSet, predicates),
            DECLARE_GETSET_FIELD(t_ATNConfigSet, readonly),
            DECLARE_GET_FIELD(t_ATNConfigSet, states),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ATNConfigSet__methods_[] = {
            DECLARE_METHOD(t_ATNConfigSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ATNConfigSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ATNConfigSet, add, METH_O),
            DECLARE_METHOD(t_ATNConfigSet, addAll, METH_O),
            DECLARE_METHOD(t_ATNConfigSet, clear, METH_NOARGS),
            DECLARE_METHOD(t_ATNConfigSet, contains, METH_O),
            DECLARE_METHOD(t_ATNConfigSet, containsAll, METH_O),
            DECLARE_METHOD(t_ATNConfigSet, containsFast, METH_O),
            DECLARE_METHOD(t_ATNConfigSet, elements, METH_NOARGS),
            DECLARE_METHOD(t_ATNConfigSet, equals, METH_VARARGS),
            DECLARE_METHOD(t_ATNConfigSet, get, METH_O),
            DECLARE_METHOD(t_ATNConfigSet, getAlts, METH_NOARGS),
            DECLARE_METHOD(t_ATNConfigSet, getPredicates, METH_NOARGS),
            DECLARE_METHOD(t_ATNConfigSet, getStates, METH_NOARGS),
            DECLARE_METHOD(t_ATNConfigSet, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_ATNConfigSet, isEmpty, METH_NOARGS),
            DECLARE_METHOD(t_ATNConfigSet, isReadonly, METH_NOARGS),
            DECLARE_METHOD(t_ATNConfigSet, iterator, METH_NOARGS),
            DECLARE_METHOD(t_ATNConfigSet, optimizeConfigs, METH_O),
            DECLARE_METHOD(t_ATNConfigSet, remove, METH_O),
            DECLARE_METHOD(t_ATNConfigSet, removeAll, METH_O),
            DECLARE_METHOD(t_ATNConfigSet, retainAll, METH_O),
            DECLARE_METHOD(t_ATNConfigSet, setReadonly, METH_O),
            DECLARE_METHOD(t_ATNConfigSet, size, METH_NOARGS),
            DECLARE_METHOD(t_ATNConfigSet, toArray, METH_VARARGS),
            DECLARE_METHOD(t_ATNConfigSet, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ATNConfigSet)[] = {
            { Py_tp_methods, t_ATNConfigSet__methods_ },
            { Py_tp_init, (void *) t_ATNConfigSet_init_ },
            { Py_tp_getset, t_ATNConfigSet__fields_ },
            { Py_tp_iter, (void *) ((PyObject *(*)(t_ATNConfigSet *)) get_iterator< t_ATNConfigSet >) },
            { Py_tp_iternext, (void *) 0 },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ATNConfigSet)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ATNConfigSet, t_ATNConfigSet, ATNConfigSet);

          void t_ATNConfigSet::install(PyObject *module)
          {
            installType(&PY_TYPE(ATNConfigSet), &PY_TYPE_DEF(ATNConfigSet), module, "ATNConfigSet", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(ATNConfigSet), "AbstractConfigHashSet", make_descriptor(&PY_TYPE_DEF(ATNConfigSet$AbstractConfigHashSet)));
          }

          void t_ATNConfigSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ATNConfigSet), "class_", make_descriptor(ATNConfigSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ATNConfigSet), "wrapfn_", make_descriptor(t_ATNConfigSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ATNConfigSet), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ATNConfigSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ATNConfigSet::initializeClass, 1)))
              return NULL;
            return t_ATNConfigSet::wrap_Object(ATNConfigSet(((t_ATNConfigSet *) arg)->object.this$));
          }
          static PyObject *t_ATNConfigSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ATNConfigSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ATNConfigSet_init_(t_ATNConfigSet *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ATNConfigSet object((jobject) NULL);

                INT_CALL(object = ATNConfigSet());
                self->object = object;
                break;
              }
             case 1:
              {
                jboolean a0;
                ATNConfigSet object((jobject) NULL);

                if (!parseArgs(args, "Z", &a0))
                {
                  INT_CALL(object = ATNConfigSet(a0));
                  self->object = object;
                  break;
                }
              }
             default:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ATNConfigSet_add(t_ATNConfigSet *self, PyObject *arg)
          {
            ::org::antlr::v4::runtime::atn::ATNConfig a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::antlr::v4::runtime::atn::ATNConfig::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "add", arg);
            return NULL;
          }

          static PyObject *t_ATNConfigSet_addAll(t_ATNConfigSet *self, PyObject *arg)
          {
            ::java::util::Collection a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.addAll(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "addAll", arg);
            return NULL;
          }

          static PyObject *t_ATNConfigSet_clear(t_ATNConfigSet *self)
          {
            OBJ_CALL(self->object.clear());
            Py_RETURN_NONE;
          }

          static PyObject *t_ATNConfigSet_contains(t_ATNConfigSet *self, PyObject *arg)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "o", &a0))
            {
              OBJ_CALL(result = self->object.contains(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "contains", arg);
            return NULL;
          }

          static PyObject *t_ATNConfigSet_containsAll(t_ATNConfigSet *self, PyObject *arg)
          {
            ::java::util::Collection a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.containsAll(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "containsAll", arg);
            return NULL;
          }

          static PyObject *t_ATNConfigSet_containsFast(t_ATNConfigSet *self, PyObject *arg)
          {
            ::org::antlr::v4::runtime::atn::ATNConfig a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::antlr::v4::runtime::atn::ATNConfig::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.containsFast(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "containsFast", arg);
            return NULL;
          }

          static PyObject *t_ATNConfigSet_elements(t_ATNConfigSet *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.elements());
            return ::java::util::t_List::wrap_Object(result, ::org::antlr::v4::runtime::atn::PY_TYPE(ATNConfig));
          }

          static PyObject *t_ATNConfigSet_equals(t_ATNConfigSet *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(ATNConfigSet), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_ATNConfigSet_get(t_ATNConfigSet *self, PyObject *arg)
          {
            jint a0;
            ::org::antlr::v4::runtime::atn::ATNConfig result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.get(a0));
              return ::org::antlr::v4::runtime::atn::t_ATNConfig::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "get", arg);
            return NULL;
          }

          static PyObject *t_ATNConfigSet_getAlts(t_ATNConfigSet *self)
          {
            ::java::util::BitSet result((jobject) NULL);
            OBJ_CALL(result = self->object.getAlts());
            return ::java::util::t_BitSet::wrap_Object(result);
          }

          static PyObject *t_ATNConfigSet_getPredicates(t_ATNConfigSet *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getPredicates());
            return ::java::util::t_List::wrap_Object(result, ::org::antlr::v4::runtime::atn::PY_TYPE(SemanticContext));
          }

          static PyObject *t_ATNConfigSet_getStates(t_ATNConfigSet *self)
          {
            ::java::util::Set result((jobject) NULL);
            OBJ_CALL(result = self->object.getStates());
            return ::java::util::t_Set::wrap_Object(result, ::org::antlr::v4::runtime::atn::PY_TYPE(ATNState));
          }

          static PyObject *t_ATNConfigSet_hashCode(t_ATNConfigSet *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(ATNConfigSet), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_ATNConfigSet_isEmpty(t_ATNConfigSet *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isEmpty());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_ATNConfigSet_isReadonly(t_ATNConfigSet *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isReadonly());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_ATNConfigSet_iterator(t_ATNConfigSet *self)
          {
            ::java::util::Iterator result((jobject) NULL);
            OBJ_CALL(result = self->object.iterator());
            return ::java::util::t_Iterator::wrap_Object(result, ::org::antlr::v4::runtime::atn::PY_TYPE(ATNConfig));
          }

          static PyObject *t_ATNConfigSet_optimizeConfigs(t_ATNConfigSet *self, PyObject *arg)
          {
            ::org::antlr::v4::runtime::atn::ATNSimulator a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::antlr::v4::runtime::atn::ATNSimulator::initializeClass, &a0))
            {
              OBJ_CALL(self->object.optimizeConfigs(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "optimizeConfigs", arg);
            return NULL;
          }

          static PyObject *t_ATNConfigSet_remove(t_ATNConfigSet *self, PyObject *arg)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "o", &a0))
            {
              OBJ_CALL(result = self->object.remove(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "remove", arg);
            return NULL;
          }

          static PyObject *t_ATNConfigSet_removeAll(t_ATNConfigSet *self, PyObject *arg)
          {
            ::java::util::Collection a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.removeAll(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "removeAll", arg);
            return NULL;
          }

          static PyObject *t_ATNConfigSet_retainAll(t_ATNConfigSet *self, PyObject *arg)
          {
            ::java::util::Collection a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.retainAll(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "retainAll", arg);
            return NULL;
          }

          static PyObject *t_ATNConfigSet_setReadonly(t_ATNConfigSet *self, PyObject *arg)
          {
            jboolean a0;

            if (!parseArg(arg, "Z", &a0))
            {
              OBJ_CALL(self->object.setReadonly(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setReadonly", arg);
            return NULL;
          }

          static PyObject *t_ATNConfigSet_size(t_ATNConfigSet *self)
          {
            jint result;
            OBJ_CALL(result = self->object.size());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_ATNConfigSet_toArray(t_ATNConfigSet *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                JArray< ::org::antlr::v4::runtime::atn::ATNConfig > result((jobject) NULL);
                OBJ_CALL(result = self->object.toArray());
                return JArray<jobject>(result.this$).wrap(::org::antlr::v4::runtime::atn::t_ATNConfig::wrap_jobject);
              }
              break;
             case 1:
              {
                JArray< ::java::lang::Object > a0((jobject) NULL);
                JArray< ::java::lang::Object > result((jobject) NULL);

                if (!parseArgs(args, "[o", &a0))
                {
                  OBJ_CALL(result = self->object.toArray(a0));
                  return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "toArray", args);
            return NULL;
          }

          static PyObject *t_ATNConfigSet_toString(t_ATNConfigSet *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(ATNConfigSet), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_ATNConfigSet_get__configLookup(t_ATNConfigSet *self, void *data)
          {
            ::org::antlr::v4::runtime::atn::ATNConfigSet$AbstractConfigHashSet value((jobject) NULL);
            OBJ_CALL(value = self->object._get_configLookup());
            return ::org::antlr::v4::runtime::atn::t_ATNConfigSet$AbstractConfigHashSet::wrap_Object(value);
          }
          static int t_ATNConfigSet_set__configLookup(t_ATNConfigSet *self, PyObject *arg, void *data)
          {
            ::org::antlr::v4::runtime::atn::ATNConfigSet$AbstractConfigHashSet value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::antlr::v4::runtime::atn::ATNConfigSet$AbstractConfigHashSet::initializeClass, &value))
            {
              INT_CALL(self->object._set_configLookup(value));
              return 0;
            }
            PyErr_SetArgsError((PyObject *) self, "configLookup", arg);
            return -1;
          }

          static PyObject *t_ATNConfigSet_get__configs(t_ATNConfigSet *self, void *data)
          {
            ::java::util::ArrayList value((jobject) NULL);
            OBJ_CALL(value = self->object._get_configs());
            return ::java::util::t_ArrayList::wrap_Object(value);
          }

          static PyObject *t_ATNConfigSet_get__dipsIntoOuterContext(t_ATNConfigSet *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object._get_dipsIntoOuterContext());
            Py_RETURN_BOOL(value);
          }
          static int t_ATNConfigSet_set__dipsIntoOuterContext(t_ATNConfigSet *self, PyObject *arg, void *data)
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object._set_dipsIntoOuterContext(value));
              return 0;
            }
            PyErr_SetArgsError((PyObject *) self, "dipsIntoOuterContext", arg);
            return -1;
          }

          static PyObject *t_ATNConfigSet_get__fullCtx(t_ATNConfigSet *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object._get_fullCtx());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_ATNConfigSet_get__hasSemanticContext(t_ATNConfigSet *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object._get_hasSemanticContext());
            Py_RETURN_BOOL(value);
          }
          static int t_ATNConfigSet_set__hasSemanticContext(t_ATNConfigSet *self, PyObject *arg, void *data)
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object._set_hasSemanticContext(value));
              return 0;
            }
            PyErr_SetArgsError((PyObject *) self, "hasSemanticContext", arg);
            return -1;
          }

          static PyObject *t_ATNConfigSet_get__uniqueAlt(t_ATNConfigSet *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object._get_uniqueAlt());
            return PyLong_FromLong((long) value);
          }
          static int t_ATNConfigSet_set__uniqueAlt(t_ATNConfigSet *self, PyObject *arg, void *data)
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object._set_uniqueAlt(value));
              return 0;
            }
            PyErr_SetArgsError((PyObject *) self, "uniqueAlt", arg);
            return -1;
          }

          static PyObject *t_ATNConfigSet_get__alts(t_ATNConfigSet *self, void *data)
          {
            ::java::util::BitSet value((jobject) NULL);
            OBJ_CALL(value = self->object.getAlts());
            return ::java::util::t_BitSet::wrap_Object(value);
          }

          static PyObject *t_ATNConfigSet_get__empty(t_ATNConfigSet *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isEmpty());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_ATNConfigSet_get__predicates(t_ATNConfigSet *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getPredicates());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_ATNConfigSet_get__readonly(t_ATNConfigSet *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isReadonly());
            Py_RETURN_BOOL(value);
          }
          static int t_ATNConfigSet_set__readonly(t_ATNConfigSet *self, PyObject *arg, void *data)
          {
            {
              jboolean value;
              if (!parseArg(arg, "Z", &value))
              {
                INT_CALL(self->object.setReadonly(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "readonly", arg);
            return -1;
          }

          static PyObject *t_ATNConfigSet_get__states(t_ATNConfigSet *self, void *data)
          {
            ::java::util::Set value((jobject) NULL);
            OBJ_CALL(value = self->object.getStates());
            return ::java::util::t_Set::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/antlr/v4/runtime/atn/DecisionState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          ::java::lang::Class *DecisionState::class$ = NULL;
          jmethodID *DecisionState::mids$ = NULL;
          jfieldID *DecisionState::fids$ = NULL;
          bool DecisionState::live$ = false;

          jclass DecisionState::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/antlr/v4/runtime/atn/DecisionState");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3720c61b0679eb3e] = env->getMethodID(cls, "<init>", "()V");

              fids$ = new jfieldID[max_fid];
              fids$[fid_decision] = env->getFieldID(cls, "decision", "I");
              fids$[fid_nonGreedy] = env->getFieldID(cls, "nonGreedy", "Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DecisionState::DecisionState() : ::org::antlr::v4::runtime::atn::ATNState(env->newObject(initializeClass, &mids$, mid_init$_3720c61b0679eb3e)) {}

          jint DecisionState::_get_decision() const
          {
            return env->getIntField(this$, fids$[fid_decision]);
          }

          void DecisionState::_set_decision(jint a0) const
          {
            env->setIntField(this$, fids$[fid_decision], a0);
          }

          jboolean DecisionState::_get_nonGreedy() const
          {
            return env->getBooleanField(this$, fids$[fid_nonGreedy]);
          }

          void DecisionState::_set_nonGreedy(jboolean a0) const
          {
            env->setBooleanField(this$, fids$[fid_nonGreedy], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          static PyObject *t_DecisionState_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DecisionState_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DecisionState_init_(t_DecisionState *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DecisionState_get__decision(t_DecisionState *self, void *data);
          static int t_DecisionState_set__decision(t_DecisionState *self, PyObject *arg, void *data);
          static PyObject *t_DecisionState_get__nonGreedy(t_DecisionState *self, void *data);
          static int t_DecisionState_set__nonGreedy(t_DecisionState *self, PyObject *arg, void *data);

          static PyGetSetDef t_DecisionState__fields_[] = {
            DECLARE_GETSET_FIELD(t_DecisionState, decision),
            DECLARE_GETSET_FIELD(t_DecisionState, nonGreedy),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DecisionState__methods_[] = {
            DECLARE_METHOD(t_DecisionState, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DecisionState, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DecisionState)[] = {
            { Py_tp_methods, t_DecisionState__methods_ },
            { Py_tp_init, (void *) t_DecisionState_init_ },
            { Py_tp_getset, t_DecisionState__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DecisionState)[] = {
            &PY_TYPE_DEF(::org::antlr::v4::runtime::atn::ATNState),
            NULL
          };

          DEFINE_TYPE(DecisionState, t_DecisionState, DecisionState);

          void t_DecisionState::install(PyObject *module)
          {
            installType(&PY_TYPE(DecisionState), &PY_TYPE_DEF(DecisionState), module, "DecisionState", 0);
          }

          void t_DecisionState::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DecisionState), "class_", make_descriptor(DecisionState::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DecisionState), "wrapfn_", make_descriptor(t_DecisionState::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DecisionState), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DecisionState_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DecisionState::initializeClass, 1)))
              return NULL;
            return t_DecisionState::wrap_Object(DecisionState(((t_DecisionState *) arg)->object.this$));
          }
          static PyObject *t_DecisionState_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DecisionState::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DecisionState_init_(t_DecisionState *self, PyObject *args, PyObject *kwds)
          {
            DecisionState object((jobject) NULL);

            INT_CALL(object = DecisionState());
            self->object = object;

            return 0;
          }

          static PyObject *t_DecisionState_get__decision(t_DecisionState *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object._get_decision());
            return PyLong_FromLong((long) value);
          }
          static int t_DecisionState_set__decision(t_DecisionState *self, PyObject *arg, void *data)
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object._set_decision(value));
              return 0;
            }
            PyErr_SetArgsError((PyObject *) self, "decision", arg);
            return -1;
          }

          static PyObject *t_DecisionState_get__nonGreedy(t_DecisionState *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object._get_nonGreedy());
            Py_RETURN_BOOL(value);
          }
          static int t_DecisionState_set__nonGreedy(t_DecisionState *self, PyObject *arg, void *data)
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object._set_nonGreedy(value));
              return 0;
            }
            PyErr_SetArgsError((PyObject *) self, "nonGreedy", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/antlr/v4/runtime/atn/ATNType.h"
#include "java/lang/String.h"
#include "org/antlr/v4/runtime/atn/ATNType.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          ::java::lang::Class *ATNType::class$ = NULL;
          jmethodID *ATNType::mids$ = NULL;
          bool ATNType::live$ = false;
          ATNType *ATNType::LEXER = NULL;
          ATNType *ATNType::PARSER = NULL;

          jclass ATNType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/antlr/v4/runtime/atn/ATNType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_d6689cd5d02f0888] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/antlr/v4/runtime/atn/ATNType;");
              mids$[mid_values_797a4d60645cad51] = env->getStaticMethodID(cls, "values", "()[Lorg/antlr/v4/runtime/atn/ATNType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              LEXER = new ATNType(env->getStaticObjectField(cls, "LEXER", "Lorg/antlr/v4/runtime/atn/ATNType;"));
              PARSER = new ATNType(env->getStaticObjectField(cls, "PARSER", "Lorg/antlr/v4/runtime/atn/ATNType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ATNType ATNType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ATNType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d6689cd5d02f0888], a0.this$));
          }

          JArray< ATNType > ATNType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< ATNType >(env->callStaticObjectMethod(cls, mids$[mid_values_797a4d60645cad51]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          static PyObject *t_ATNType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ATNType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ATNType_of_(t_ATNType *self, PyObject *args);
          static PyObject *t_ATNType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_ATNType_values(PyTypeObject *type);
          static PyObject *t_ATNType_get__parameters_(t_ATNType *self, void *data);
          static PyGetSetDef t_ATNType__fields_[] = {
            DECLARE_GET_FIELD(t_ATNType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ATNType__methods_[] = {
            DECLARE_METHOD(t_ATNType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ATNType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ATNType, of_, METH_VARARGS),
            DECLARE_METHOD(t_ATNType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_ATNType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ATNType)[] = {
            { Py_tp_methods, t_ATNType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_ATNType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ATNType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(ATNType, t_ATNType, ATNType);
          PyObject *t_ATNType::wrap_Object(const ATNType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ATNType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ATNType *self = (t_ATNType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_ATNType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ATNType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ATNType *self = (t_ATNType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_ATNType::install(PyObject *module)
          {
            installType(&PY_TYPE(ATNType), &PY_TYPE_DEF(ATNType), module, "ATNType", 0);
          }

          void t_ATNType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ATNType), "class_", make_descriptor(ATNType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ATNType), "wrapfn_", make_descriptor(t_ATNType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ATNType), "boxfn_", make_descriptor(boxObject));
            env->getClass(ATNType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(ATNType), "LEXER", make_descriptor(t_ATNType::wrap_Object(*ATNType::LEXER)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ATNType), "PARSER", make_descriptor(t_ATNType::wrap_Object(*ATNType::PARSER)));
          }

          static PyObject *t_ATNType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ATNType::initializeClass, 1)))
              return NULL;
            return t_ATNType::wrap_Object(ATNType(((t_ATNType *) arg)->object.this$));
          }
          static PyObject *t_ATNType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ATNType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ATNType_of_(t_ATNType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_ATNType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ATNType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::antlr::v4::runtime::atn::ATNType::valueOf(a0));
              return t_ATNType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_ATNType_values(PyTypeObject *type)
          {
            JArray< ATNType > result((jobject) NULL);
            OBJ_CALL(result = ::org::antlr::v4::runtime::atn::ATNType::values());
            return JArray<jobject>(result.this$).wrap(t_ATNType::wrap_jobject);
          }
          static PyObject *t_ATNType_get__parameters_(t_ATNType *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/antlr/v4/runtime/atn/ArrayPredictionContext.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/Object.h"
#include "org/antlr/v4/runtime/atn/SingletonPredictionContext.h"
#include "JArray.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          ::java::lang::Class *ArrayPredictionContext::class$ = NULL;
          jmethodID *ArrayPredictionContext::mids$ = NULL;
          jfieldID *ArrayPredictionContext::fids$ = NULL;
          bool ArrayPredictionContext::live$ = false;

          jclass ArrayPredictionContext::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/antlr/v4/runtime/atn/ArrayPredictionContext");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_13b936985587ee11] = env->getMethodID(cls, "<init>", "(Lorg/antlr/v4/runtime/atn/SingletonPredictionContext;)V");
              mids$[mid_init$_b1606c0b50bd41f2] = env->getMethodID(cls, "<init>", "([Lorg/antlr/v4/runtime/atn/PredictionContext;[I)V");
              mids$[mid_equals_570b5248a6da3ef6] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getParent_1cc09022daab7d23] = env->getMethodID(cls, "getParent", "(I)Lorg/antlr/v4/runtime/atn/PredictionContext;");
              mids$[mid_getReturnState_3c9bba330f083871] = env->getMethodID(cls, "getReturnState", "(I)I");
              mids$[mid_isEmpty_947277eca0748c4e] = env->getMethodID(cls, "isEmpty", "()Z");
              mids$[mid_size_20fbf7565993c3d7] = env->getMethodID(cls, "size", "()I");
              mids$[mid_toString_09a7afff1868fc5e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              fids$ = new jfieldID[max_fid];
              fids$[fid_parents] = env->getFieldID(cls, "parents", "[Lorg/antlr/v4/runtime/atn/PredictionContext;");
              fids$[fid_returnStates] = env->getFieldID(cls, "returnStates", "[I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ArrayPredictionContext::ArrayPredictionContext(const ::org::antlr::v4::runtime::atn::SingletonPredictionContext & a0) : ::org::antlr::v4::runtime::atn::PredictionContext(env->newObject(initializeClass, &mids$, mid_init$_13b936985587ee11, a0.this$)) {}

          ArrayPredictionContext::ArrayPredictionContext(const JArray< ::org::antlr::v4::runtime::atn::PredictionContext > & a0, const JArray< jint > & a1) : ::org::antlr::v4::runtime::atn::PredictionContext(env->newObject(initializeClass, &mids$, mid_init$_b1606c0b50bd41f2, a0.this$, a1.this$)) {}

          jboolean ArrayPredictionContext::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_570b5248a6da3ef6], a0.this$);
          }

          ::org::antlr::v4::runtime::atn::PredictionContext ArrayPredictionContext::getParent(jint a0) const
          {
            return ::org::antlr::v4::runtime::atn::PredictionContext(env->callObjectMethod(this$, mids$[mid_getParent_1cc09022daab7d23], a0));
          }

          jint ArrayPredictionContext::getReturnState(jint a0) const
          {
            return env->callIntMethod(this$, mids$[mid_getReturnState_3c9bba330f083871], a0);
          }

          jboolean ArrayPredictionContext::isEmpty() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isEmpty_947277eca0748c4e]);
          }

          jint ArrayPredictionContext::size() const
          {
            return env->callIntMethod(this$, mids$[mid_size_20fbf7565993c3d7]);
          }

          ::java::lang::String ArrayPredictionContext::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_09a7afff1868fc5e]));
          }

          JArray< ::org::antlr::v4::runtime::atn::PredictionContext > ArrayPredictionContext::_get_parents() const
          {
            return JArray< ::org::antlr::v4::runtime::atn::PredictionContext >(env->getObjectField(this$, fids$[fid_parents]));
          }

          JArray< jint > ArrayPredictionContext::_get_returnStates() const
          {
            return JArray< jint >(env->getObjectField(this$, fids$[fid_returnStates]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          static PyObject *t_ArrayPredictionContext_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ArrayPredictionContext_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ArrayPredictionContext_init_(t_ArrayPredictionContext *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ArrayPredictionContext_equals(t_ArrayPredictionContext *self, PyObject *args);
          static PyObject *t_ArrayPredictionContext_getParent(t_ArrayPredictionContext *self, PyObject *args);
          static PyObject *t_ArrayPredictionContext_getReturnState(t_ArrayPredictionContext *self, PyObject *args);
          static PyObject *t_ArrayPredictionContext_isEmpty(t_ArrayPredictionContext *self, PyObject *args);
          static PyObject *t_ArrayPredictionContext_size(t_ArrayPredictionContext *self, PyObject *args);
          static PyObject *t_ArrayPredictionContext_toString(t_ArrayPredictionContext *self, PyObject *args);
          static PyObject *t_ArrayPredictionContext_get__parents(t_ArrayPredictionContext *self, void *data);
          static PyObject *t_ArrayPredictionContext_get__returnStates(t_ArrayPredictionContext *self, void *data);

          static PyObject *t_ArrayPredictionContext_get__empty(t_ArrayPredictionContext *self, void *data);
          static PyGetSetDef t_ArrayPredictionContext__fields_[] = {
            DECLARE_GET_FIELD(t_ArrayPredictionContext, parents),
            DECLARE_GET_FIELD(t_ArrayPredictionContext, returnStates),
            DECLARE_GET_FIELD(t_ArrayPredictionContext, empty),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ArrayPredictionContext__methods_[] = {
            DECLARE_METHOD(t_ArrayPredictionContext, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ArrayPredictionContext, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ArrayPredictionContext, equals, METH_VARARGS),
            DECLARE_METHOD(t_ArrayPredictionContext, getParent, METH_VARARGS),
            DECLARE_METHOD(t_ArrayPredictionContext, getReturnState, METH_VARARGS),
            DECLARE_METHOD(t_ArrayPredictionContext, isEmpty, METH_VARARGS),
            DECLARE_METHOD(t_ArrayPredictionContext, size, METH_VARARGS),
            DECLARE_METHOD(t_ArrayPredictionContext, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ArrayPredictionContext)[] = {
            { Py_tp_methods, t_ArrayPredictionContext__methods_ },
            { Py_tp_init, (void *) t_ArrayPredictionContext_init_ },
            { Py_tp_getset, t_ArrayPredictionContext__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ArrayPredictionContext)[] = {
            &PY_TYPE_DEF(::org::antlr::v4::runtime::atn::PredictionContext),
            NULL
          };

          DEFINE_TYPE(ArrayPredictionContext, t_ArrayPredictionContext, ArrayPredictionContext);

          void t_ArrayPredictionContext::install(PyObject *module)
          {
            installType(&PY_TYPE(ArrayPredictionContext), &PY_TYPE_DEF(ArrayPredictionContext), module, "ArrayPredictionContext", 0);
          }

          void t_ArrayPredictionContext::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayPredictionContext), "class_", make_descriptor(ArrayPredictionContext::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayPredictionContext), "wrapfn_", make_descriptor(t_ArrayPredictionContext::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayPredictionContext), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ArrayPredictionContext_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ArrayPredictionContext::initializeClass, 1)))
              return NULL;
            return t_ArrayPredictionContext::wrap_Object(ArrayPredictionContext(((t_ArrayPredictionContext *) arg)->object.this$));
          }
          static PyObject *t_ArrayPredictionContext_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ArrayPredictionContext::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ArrayPredictionContext_init_(t_ArrayPredictionContext *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::antlr::v4::runtime::atn::SingletonPredictionContext a0((jobject) NULL);
                ArrayPredictionContext object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::antlr::v4::runtime::atn::SingletonPredictionContext::initializeClass, &a0))
                {
                  INT_CALL(object = ArrayPredictionContext(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                JArray< ::org::antlr::v4::runtime::atn::PredictionContext > a0((jobject) NULL);
                JArray< jint > a1((jobject) NULL);
                ArrayPredictionContext object((jobject) NULL);

                if (!parseArgs(args, "[k[I", ::org::antlr::v4::runtime::atn::PredictionContext::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = ArrayPredictionContext(a0, a1));
                  self->object = object;
                  break;
                }
              }
             default:
             err:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ArrayPredictionContext_equals(t_ArrayPredictionContext *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(ArrayPredictionContext), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_ArrayPredictionContext_getParent(t_ArrayPredictionContext *self, PyObject *args)
          {
            jint a0;
            ::org::antlr::v4::runtime::atn::PredictionContext result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.getParent(a0));
              return ::org::antlr::v4::runtime::atn::t_PredictionContext::wrap_Object(result);
            }

            return callSuper(PY_TYPE(ArrayPredictionContext), (PyObject *) self, "getParent", args, 2);
          }

          static PyObject *t_ArrayPredictionContext_getReturnState(t_ArrayPredictionContext *self, PyObject *args)
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.getReturnState(a0));
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(ArrayPredictionContext), (PyObject *) self, "getReturnState", args, 2);
          }

          static PyObject *t_ArrayPredictionContext_isEmpty(t_ArrayPredictionContext *self, PyObject *args)
          {
            jboolean result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.isEmpty());
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(ArrayPredictionContext), (PyObject *) self, "isEmpty", args, 2);
          }

          static PyObject *t_ArrayPredictionContext_size(t_ArrayPredictionContext *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.size());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(ArrayPredictionContext), (PyObject *) self, "size", args, 2);
          }

          static PyObject *t_ArrayPredictionContext_toString(t_ArrayPredictionContext *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(ArrayPredictionContext), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_ArrayPredictionContext_get__parents(t_ArrayPredictionContext *self, void *data)
          {
            JArray< ::org::antlr::v4::runtime::atn::PredictionContext > value((jobject) NULL);
            OBJ_CALL(value = self->object._get_parents());
            return JArray<jobject>(value.this$).wrap(::org::antlr::v4::runtime::atn::t_PredictionContext::wrap_jobject);
          }

          static PyObject *t_ArrayPredictionContext_get__returnStates(t_ArrayPredictionContext *self, void *data)
          {
            JArray< jint > value((jobject) NULL);
            OBJ_CALL(value = self->object._get_returnStates());
            return value.wrap();
          }

          static PyObject *t_ArrayPredictionContext_get__empty(t_ArrayPredictionContext *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isEmpty());
            Py_RETURN_BOOL(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/ModuleLayer$Controller.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/Module.h"
#include "java/lang/ModuleLayer.h"
#include "java/lang/ModuleLayer$Controller.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *ModuleLayer$Controller::class$ = NULL;
    jmethodID *ModuleLayer$Controller::mids$ = NULL;
    bool ModuleLayer$Controller::live$ = false;

    jclass ModuleLayer$Controller::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/ModuleLayer$Controller");

        mids$ = new jmethodID[max_mid];
        mids$[mid_addExports_1d2a00fec42060e9] = env->getMethodID(cls, "addExports", "(Ljava/lang/Module;Ljava/lang/String;Ljava/lang/Module;)Ljava/lang/ModuleLayer$Controller;");
        mids$[mid_addOpens_1d2a00fec42060e9] = env->getMethodID(cls, "addOpens", "(Ljava/lang/Module;Ljava/lang/String;Ljava/lang/Module;)Ljava/lang/ModuleLayer$Controller;");
        mids$[mid_addReads_e64753861280aa5f] = env->getMethodID(cls, "addReads", "(Ljava/lang/Module;Ljava/lang/Module;)Ljava/lang/ModuleLayer$Controller;");
        mids$[mid_enableNativeAccess_0ab4bcadc7d2532f] = env->getMethodID(cls, "enableNativeAccess", "(Ljava/lang/Module;)Ljava/lang/ModuleLayer$Controller;");
        mids$[mid_layer_e0d6a2c9ff2cc4b5] = env->getMethodID(cls, "layer", "()Ljava/lang/ModuleLayer;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ModuleLayer$Controller ModuleLayer$Controller::addExports(const ::java::lang::Module & a0, const ::java::lang::String & a1, const ::java::lang::Module & a2) const
    {
      return ModuleLayer$Controller(env->callObjectMethod(this$, mids$[mid_addExports_1d2a00fec42060e9], a0.this$, a1.this$, a2.this$));
    }

    ModuleLayer$Controller ModuleLayer$Controller::addOpens(const ::java::lang::Module & a0, const ::java::lang::String & a1, const ::java::lang::Module & a2) const
    {
      return ModuleLayer$Controller(env->callObjectMethod(this$, mids$[mid_addOpens_1d2a00fec42060e9], a0.this$, a1.this$, a2.this$));
    }

    ModuleLayer$Controller ModuleLayer$Controller::addReads(const ::java::lang::Module & a0, const ::java::lang::Module & a1) const
    {
      return ModuleLayer$Controller(env->callObjectMethod(this$, mids$[mid_addReads_e64753861280aa5f], a0.this$, a1.this$));
    }

    ModuleLayer$Controller ModuleLayer$Controller::enableNativeAccess(const ::java::lang::Module & a0) const
    {
      return ModuleLayer$Controller(env->callObjectMethod(this$, mids$[mid_enableNativeAccess_0ab4bcadc7d2532f], a0.this$));
    }

    ::java::lang::ModuleLayer ModuleLayer$Controller::layer() const
    {
      return ::java::lang::ModuleLayer(env->callObjectMethod(this$, mids$[mid_layer_e0d6a2c9ff2cc4b5]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_ModuleLayer$Controller_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ModuleLayer$Controller_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ModuleLayer$Controller_addExports(t_ModuleLayer$Controller *self, PyObject *args);
    static PyObject *t_ModuleLayer$Controller_addOpens(t_ModuleLayer$Controller *self, PyObject *args);
    static PyObject *t_ModuleLayer$Controller_addReads(t_ModuleLayer$Controller *self, PyObject *args);
    static PyObject *t_ModuleLayer$Controller_enableNativeAccess(t_ModuleLayer$Controller *self, PyObject *arg);
    static PyObject *t_ModuleLayer$Controller_layer(t_ModuleLayer$Controller *self);

    static PyMethodDef t_ModuleLayer$Controller__methods_[] = {
      DECLARE_METHOD(t_ModuleLayer$Controller, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ModuleLayer$Controller, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ModuleLayer$Controller, addExports, METH_VARARGS),
      DECLARE_METHOD(t_ModuleLayer$Controller, addOpens, METH_VARARGS),
      DECLARE_METHOD(t_ModuleLayer$Controller, addReads, METH_VARARGS),
      DECLARE_METHOD(t_ModuleLayer$Controller, enableNativeAccess, METH_O),
      DECLARE_METHOD(t_ModuleLayer$Controller, layer, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ModuleLayer$Controller)[] = {
      { Py_tp_methods, t_ModuleLayer$Controller__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ModuleLayer$Controller)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(ModuleLayer$Controller, t_ModuleLayer$Controller, ModuleLayer$Controller);

    void t_ModuleLayer$Controller::install(PyObject *module)
    {
      installType(&PY_TYPE(ModuleLayer$Controller), &PY_TYPE_DEF(ModuleLayer$Controller), module, "ModuleLayer$Controller", 0);
    }

    void t_ModuleLayer$Controller::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ModuleLayer$Controller), "class_", make_descriptor(ModuleLayer$Controller::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ModuleLayer$Controller), "wrapfn_", make_descriptor(t_ModuleLayer$Controller::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ModuleLayer$Controller), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ModuleLayer$Controller_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ModuleLayer$Controller::initializeClass, 1)))
        return NULL;
      return t_ModuleLayer$Controller::wrap_Object(ModuleLayer$Controller(((t_ModuleLayer$Controller *) arg)->object.this$));
    }
    static PyObject *t_ModuleLayer$Controller_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ModuleLayer$Controller::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_ModuleLayer$Controller_addExports(t_ModuleLayer$Controller *self, PyObject *args)
    {
      ::java::lang::Module a0((jobject) NULL);
      ::java::lang::String a1((jobject) NULL);
      ::java::lang::Module a2((jobject) NULL);
      ModuleLayer$Controller result((jobject) NULL);

      if (!parseArgs(args, "ksk", ::java::lang::Module::initializeClass, ::java::lang::Module::initializeClass, &a0, &a1, &a2))
      {
        OBJ_CALL(result = self->object.addExports(a0, a1, a2));
        return t_ModuleLayer$Controller::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "addExports", args);
      return NULL;
    }

    static PyObject *t_ModuleLayer$Controller_addOpens(t_ModuleLayer$Controller *self, PyObject *args)
    {
      ::java::lang::Module a0((jobject) NULL);
      ::java::lang::String a1((jobject) NULL);
      ::java::lang::Module a2((jobject) NULL);
      ModuleLayer$Controller result((jobject) NULL);

      if (!parseArgs(args, "ksk", ::java::lang::Module::initializeClass, ::java::lang::Module::initializeClass, &a0, &a1, &a2))
      {
        OBJ_CALL(result = self->object.addOpens(a0, a1, a2));
        return t_ModuleLayer$Controller::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "addOpens", args);
      return NULL;
    }

    static PyObject *t_ModuleLayer$Controller_addReads(t_ModuleLayer$Controller *self, PyObject *args)
    {
      ::java::lang::Module a0((jobject) NULL);
      ::java::lang::Module a1((jobject) NULL);
      ModuleLayer$Controller result((jobject) NULL);

      if (!parseArgs(args, "kk", ::java::lang::Module::initializeClass, ::java::lang::Module::initializeClass, &a0, &a1))
      {
        OBJ_CALL(result = self->object.addReads(a0, a1));
        return t_ModuleLayer$Controller::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "addReads", args);
      return NULL;
    }

    static PyObject *t_ModuleLayer$Controller_enableNativeAccess(t_ModuleLayer$Controller *self, PyObject *arg)
    {
      ::java::lang::Module a0((jobject) NULL);
      ModuleLayer$Controller result((jobject) NULL);

      if (!parseArg(arg, "k", ::java::lang::Module::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.enableNativeAccess(a0));
        return t_ModuleLayer$Controller::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "enableNativeAccess", arg);
      return NULL;
    }

    static PyObject *t_ModuleLayer$Controller_layer(t_ModuleLayer$Controller *self)
    {
      ::java::lang::ModuleLayer result((jobject) NULL);
      OBJ_CALL(result = self->object.layer());
      return ::java::lang::t_ModuleLayer::wrap_Object(result);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/antlr/v4/runtime/atn/LexerActionType.h"
#include "java/lang/String.h"
#include "org/antlr/v4/runtime/atn/LexerActionType.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          ::java::lang::Class *LexerActionType::class$ = NULL;
          jmethodID *LexerActionType::mids$ = NULL;
          bool LexerActionType::live$ = false;
          LexerActionType *LexerActionType::CHANNEL = NULL;
          LexerActionType *LexerActionType::CUSTOM = NULL;
          LexerActionType *LexerActionType::MODE = NULL;
          LexerActionType *LexerActionType::MORE = NULL;
          LexerActionType *LexerActionType::POP_MODE = NULL;
          LexerActionType *LexerActionType::PUSH_MODE = NULL;
          LexerActionType *LexerActionType::SKIP = NULL;
          LexerActionType *LexerActionType::TYPE = NULL;

          jclass LexerActionType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/antlr/v4/runtime/atn/LexerActionType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_197c24fb67401c0c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/antlr/v4/runtime/atn/LexerActionType;");
              mids$[mid_values_1264a5f3fcae4898] = env->getStaticMethodID(cls, "values", "()[Lorg/antlr/v4/runtime/atn/LexerActionType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              CHANNEL = new LexerActionType(env->getStaticObjectField(cls, "CHANNEL", "Lorg/antlr/v4/runtime/atn/LexerActionType;"));
              CUSTOM = new LexerActionType(env->getStaticObjectField(cls, "CUSTOM", "Lorg/antlr/v4/runtime/atn/LexerActionType;"));
              MODE = new LexerActionType(env->getStaticObjectField(cls, "MODE", "Lorg/antlr/v4/runtime/atn/LexerActionType;"));
              MORE = new LexerActionType(env->getStaticObjectField(cls, "MORE", "Lorg/antlr/v4/runtime/atn/LexerActionType;"));
              POP_MODE = new LexerActionType(env->getStaticObjectField(cls, "POP_MODE", "Lorg/antlr/v4/runtime/atn/LexerActionType;"));
              PUSH_MODE = new LexerActionType(env->getStaticObjectField(cls, "PUSH_MODE", "Lorg/antlr/v4/runtime/atn/LexerActionType;"));
              SKIP = new LexerActionType(env->getStaticObjectField(cls, "SKIP", "Lorg/antlr/v4/runtime/atn/LexerActionType;"));
              TYPE = new LexerActionType(env->getStaticObjectField(cls, "TYPE", "Lorg/antlr/v4/runtime/atn/LexerActionType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LexerActionType LexerActionType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return LexerActionType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_197c24fb67401c0c], a0.this$));
          }

          JArray< LexerActionType > LexerActionType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< LexerActionType >(env->callStaticObjectMethod(cls, mids$[mid_values_1264a5f3fcae4898]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          static PyObject *t_LexerActionType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LexerActionType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LexerActionType_of_(t_LexerActionType *self, PyObject *args);
          static PyObject *t_LexerActionType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_LexerActionType_values(PyTypeObject *type);
          static PyObject *t_LexerActionType_get__parameters_(t_LexerActionType *self, void *data);
          static PyGetSetDef t_LexerActionType__fields_[] = {
            DECLARE_GET_FIELD(t_LexerActionType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_LexerActionType__methods_[] = {
            DECLARE_METHOD(t_LexerActionType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LexerActionType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LexerActionType, of_, METH_VARARGS),
            DECLARE_METHOD(t_LexerActionType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_LexerActionType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LexerActionType)[] = {
            { Py_tp_methods, t_LexerActionType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_LexerActionType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LexerActionType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(LexerActionType, t_LexerActionType, LexerActionType);
          PyObject *t_LexerActionType::wrap_Object(const LexerActionType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_LexerActionType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_LexerActionType *self = (t_LexerActionType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_LexerActionType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_LexerActionType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_LexerActionType *self = (t_LexerActionType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_LexerActionType::install(PyObject *module)
          {
            installType(&PY_TYPE(LexerActionType), &PY_TYPE_DEF(LexerActionType), module, "LexerActionType", 0);
          }

          void t_LexerActionType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LexerActionType), "class_", make_descriptor(LexerActionType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LexerActionType), "wrapfn_", make_descriptor(t_LexerActionType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LexerActionType), "boxfn_", make_descriptor(boxObject));
            env->getClass(LexerActionType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(LexerActionType), "CHANNEL", make_descriptor(t_LexerActionType::wrap_Object(*LexerActionType::CHANNEL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LexerActionType), "CUSTOM", make_descriptor(t_LexerActionType::wrap_Object(*LexerActionType::CUSTOM)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LexerActionType), "MODE", make_descriptor(t_LexerActionType::wrap_Object(*LexerActionType::MODE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LexerActionType), "MORE", make_descriptor(t_LexerActionType::wrap_Object(*LexerActionType::MORE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LexerActionType), "POP_MODE", make_descriptor(t_LexerActionType::wrap_Object(*LexerActionType::POP_MODE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LexerActionType), "PUSH_MODE", make_descriptor(t_LexerActionType::wrap_Object(*LexerActionType::PUSH_MODE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LexerActionType), "SKIP", make_descriptor(t_LexerActionType::wrap_Object(*LexerActionType::SKIP)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LexerActionType), "TYPE", make_descriptor(t_LexerActionType::wrap_Object(*LexerActionType::TYPE)));
          }

          static PyObject *t_LexerActionType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LexerActionType::initializeClass, 1)))
              return NULL;
            return t_LexerActionType::wrap_Object(LexerActionType(((t_LexerActionType *) arg)->object.this$));
          }
          static PyObject *t_LexerActionType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LexerActionType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_LexerActionType_of_(t_LexerActionType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_LexerActionType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            LexerActionType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::antlr::v4::runtime::atn::LexerActionType::valueOf(a0));
              return t_LexerActionType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_LexerActionType_values(PyTypeObject *type)
          {
            JArray< LexerActionType > result((jobject) NULL);
            OBJ_CALL(result = ::org::antlr::v4::runtime::atn::LexerActionType::values());
            return JArray<jobject>(result.this$).wrap(t_LexerActionType::wrap_jobject);
          }
          static PyObject *t_LexerActionType_get__parameters_(t_LexerActionType *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/antlr/v4/runtime/atn/AmbiguityInfo.h"
#include "org/antlr/v4/runtime/atn/ATNConfigSet.h"
#include "java/util/BitSet.h"
#include "org/antlr/v4/runtime/TokenStream.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          ::java::lang::Class *AmbiguityInfo::class$ = NULL;
          jmethodID *AmbiguityInfo::mids$ = NULL;
          jfieldID *AmbiguityInfo::fids$ = NULL;
          bool AmbiguityInfo::live$ = false;

          jclass AmbiguityInfo::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/antlr/v4/runtime/atn/AmbiguityInfo");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b742548cb82e58e9] = env->getMethodID(cls, "<init>", "(ILorg/antlr/v4/runtime/atn/ATNConfigSet;Ljava/util/BitSet;Lorg/antlr/v4/runtime/TokenStream;IIZ)V");

              fids$ = new jfieldID[max_fid];
              fids$[fid_ambigAlts] = env->getFieldID(cls, "ambigAlts", "Ljava/util/BitSet;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AmbiguityInfo::AmbiguityInfo(jint a0, const ::org::antlr::v4::runtime::atn::ATNConfigSet & a1, const ::java::util::BitSet & a2, const ::org::antlr::v4::runtime::TokenStream & a3, jint a4, jint a5, jboolean a6) : ::org::antlr::v4::runtime::atn::DecisionEventInfo(env->newObject(initializeClass, &mids$, mid_init$_b742548cb82e58e9, a0, a1.this$, a2.this$, a3.this$, a4, a5, a6)) {}

          ::java::util::BitSet AmbiguityInfo::_get_ambigAlts() const
          {
            return ::java::util::BitSet(env->getObjectField(this$, fids$[fid_ambigAlts]));
          }

          void AmbiguityInfo::_set_ambigAlts(const ::java::util::BitSet & a0) const
          {
            env->setObjectField(this$, fids$[fid_ambigAlts], a0.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          static PyObject *t_AmbiguityInfo_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AmbiguityInfo_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AmbiguityInfo_init_(t_AmbiguityInfo *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AmbiguityInfo_get__ambigAlts(t_AmbiguityInfo *self, void *data);
          static int t_AmbiguityInfo_set__ambigAlts(t_AmbiguityInfo *self, PyObject *arg, void *data);

          static PyGetSetDef t_AmbiguityInfo__fields_[] = {
            DECLARE_GETSET_FIELD(t_AmbiguityInfo, ambigAlts),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AmbiguityInfo__methods_[] = {
            DECLARE_METHOD(t_AmbiguityInfo, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AmbiguityInfo, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AmbiguityInfo)[] = {
            { Py_tp_methods, t_AmbiguityInfo__methods_ },
            { Py_tp_init, (void *) t_AmbiguityInfo_init_ },
            { Py_tp_getset, t_AmbiguityInfo__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AmbiguityInfo)[] = {
            &PY_TYPE_DEF(::org::antlr::v4::runtime::atn::DecisionEventInfo),
            NULL
          };

          DEFINE_TYPE(AmbiguityInfo, t_AmbiguityInfo, AmbiguityInfo);

          void t_AmbiguityInfo::install(PyObject *module)
          {
            installType(&PY_TYPE(AmbiguityInfo), &PY_TYPE_DEF(AmbiguityInfo), module, "AmbiguityInfo", 0);
          }

          void t_AmbiguityInfo::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AmbiguityInfo), "class_", make_descriptor(AmbiguityInfo::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AmbiguityInfo), "wrapfn_", make_descriptor(t_AmbiguityInfo::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AmbiguityInfo), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AmbiguityInfo_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AmbiguityInfo::initializeClass, 1)))
              return NULL;
            return t_AmbiguityInfo::wrap_Object(AmbiguityInfo(((t_AmbiguityInfo *) arg)->object.this$));
          }
          static PyObject *t_AmbiguityInfo_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AmbiguityInfo::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AmbiguityInfo_init_(t_AmbiguityInfo *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            ::org::antlr::v4::runtime::atn::ATNConfigSet a1((jobject) NULL);
            ::java::util::BitSet a2((jobject) NULL);
            ::org::antlr::v4::runtime::TokenStream a3((jobject) NULL);
            jint a4;
            jint a5;
            jboolean a6;
            AmbiguityInfo object((jobject) NULL);

            if (!parseArgs(args, "IkkkIIZ", ::org::antlr::v4::runtime::atn::ATNConfigSet::initializeClass, ::java::util::BitSet::initializeClass, ::org::antlr::v4::runtime::TokenStream::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = AmbiguityInfo(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_AmbiguityInfo_get__ambigAlts(t_AmbiguityInfo *self, void *data)
          {
            ::java::util::BitSet value((jobject) NULL);
            OBJ_CALL(value = self->object._get_ambigAlts());
            return ::java::util::t_BitSet::wrap_Object(value);
          }
          static int t_AmbiguityInfo_set__ambigAlts(t_AmbiguityInfo *self, PyObject *arg, void *data)
          {
            ::java::util::BitSet value((jobject) NULL);
            if (!parseArg(arg, "k", ::java::util::BitSet::initializeClass, &value))
            {
              INT_CALL(self->object._set_ambigAlts(value));
              return 0;
            }
            PyErr_SetArgsError((PyObject *) self, "ambigAlts", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/antlr/v4/runtime/atn/ErrorInfo.h"
#include "org/antlr/v4/runtime/atn/ATNConfigSet.h"
#include "org/antlr/v4/runtime/TokenStream.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          ::java::lang::Class *ErrorInfo::class$ = NULL;
          jmethodID *ErrorInfo::mids$ = NULL;
          bool ErrorInfo::live$ = false;

          jclass ErrorInfo::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/antlr/v4/runtime/atn/ErrorInfo");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_2249b4bb23ad8343] = env->getMethodID(cls, "<init>", "(ILorg/antlr/v4/runtime/atn/ATNConfigSet;Lorg/antlr/v4/runtime/TokenStream;IIZ)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ErrorInfo::ErrorInfo(jint a0, const ::org::antlr::v4::runtime::atn::ATNConfigSet & a1, const ::org::antlr::v4::runtime::TokenStream & a2, jint a3, jint a4, jboolean a5) : ::org::antlr::v4::runtime::atn::DecisionEventInfo(env->newObject(initializeClass, &mids$, mid_init$_2249b4bb23ad8343, a0, a1.this$, a2.this$, a3, a4, a5)) {}
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          static PyObject *t_ErrorInfo_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ErrorInfo_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ErrorInfo_init_(t_ErrorInfo *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_ErrorInfo__methods_[] = {
            DECLARE_METHOD(t_ErrorInfo, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ErrorInfo, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ErrorInfo)[] = {
            { Py_tp_methods, t_ErrorInfo__methods_ },
            { Py_tp_init, (void *) t_ErrorInfo_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ErrorInfo)[] = {
            &PY_TYPE_DEF(::org::antlr::v4::runtime::atn::DecisionEventInfo),
            NULL
          };

          DEFINE_TYPE(ErrorInfo, t_ErrorInfo, ErrorInfo);

          void t_ErrorInfo::install(PyObject *module)
          {
            installType(&PY_TYPE(ErrorInfo), &PY_TYPE_DEF(ErrorInfo), module, "ErrorInfo", 0);
          }

          void t_ErrorInfo::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ErrorInfo), "class_", make_descriptor(ErrorInfo::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ErrorInfo), "wrapfn_", make_descriptor(t_ErrorInfo::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ErrorInfo), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ErrorInfo_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ErrorInfo::initializeClass, 1)))
              return NULL;
            return t_ErrorInfo::wrap_Object(ErrorInfo(((t_ErrorInfo *) arg)->object.this$));
          }
          static PyObject *t_ErrorInfo_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ErrorInfo::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ErrorInfo_init_(t_ErrorInfo *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            ::org::antlr::v4::runtime::atn::ATNConfigSet a1((jobject) NULL);
            ::org::antlr::v4::runtime::TokenStream a2((jobject) NULL);
            jint a3;
            jint a4;
            jboolean a5;
            ErrorInfo object((jobject) NULL);

            if (!parseArgs(args, "IkkIIZ", ::org::antlr::v4::runtime::atn::ATNConfigSet::initializeClass, ::org::antlr::v4::runtime::TokenStream::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = ErrorInfo(a0, a1, a2, a3, a4, a5));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/antlr/v4/runtime/atn/PredicateEvalInfo.h"
#include "org/antlr/v4/runtime/TokenStream.h"
#include "org/antlr/v4/runtime/atn/SemanticContext.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          ::java::lang::Class *PredicateEvalInfo::class$ = NULL;
          jmethodID *PredicateEvalInfo::mids$ = NULL;
          jfieldID *PredicateEvalInfo::fids$ = NULL;
          bool PredicateEvalInfo::live$ = false;

          jclass PredicateEvalInfo::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/antlr/v4/runtime/atn/PredicateEvalInfo");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_646ccb8f48f24a62] = env->getMethodID(cls, "<init>", "(ILorg/antlr/v4/runtime/TokenStream;IILorg/antlr/v4/runtime/atn/SemanticContext;ZIZ)V");

              fids$ = new jfieldID[max_fid];
              fids$[fid_evalResult] = env->getFieldID(cls, "evalResult", "Z");
              fids$[fid_predictedAlt] = env->getFieldID(cls, "predictedAlt", "I");
              fids$[fid_semctx] = env->getFieldID(cls, "semctx", "Lorg/antlr/v4/runtime/atn/SemanticContext;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PredicateEvalInfo::PredicateEvalInfo(jint a0, const ::org::antlr::v4::runtime::TokenStream & a1, jint a2, jint a3, const ::org::antlr::v4::runtime::atn::SemanticContext & a4, jboolean a5, jint a6, jboolean a7) : ::org::antlr::v4::runtime::atn::DecisionEventInfo(env->newObject(initializeClass, &mids$, mid_init$_646ccb8f48f24a62, a0, a1.this$, a2, a3, a4.this$, a5, a6, a7)) {}

          jboolean PredicateEvalInfo::_get_evalResult() const
          {
            return env->getBooleanField(this$, fids$[fid_evalResult]);
          }

          jint PredicateEvalInfo::_get_predictedAlt() const
          {
            return env->getIntField(this$, fids$[fid_predictedAlt]);
          }

          ::org::antlr::v4::runtime::atn::SemanticContext PredicateEvalInfo::_get_semctx() const
          {
            return ::org::antlr::v4::runtime::atn::SemanticContext(env->getObjectField(this$, fids$[fid_semctx]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          static PyObject *t_PredicateEvalInfo_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PredicateEvalInfo_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PredicateEvalInfo_init_(t_PredicateEvalInfo *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PredicateEvalInfo_get__evalResult(t_PredicateEvalInfo *self, void *data);
          static PyObject *t_PredicateEvalInfo_get__predictedAlt(t_PredicateEvalInfo *self, void *data);
          static PyObject *t_PredicateEvalInfo_get__semctx(t_PredicateEvalInfo *self, void *data);

          static PyGetSetDef t_PredicateEvalInfo__fields_[] = {
            DECLARE_GET_FIELD(t_PredicateEvalInfo, evalResult),
            DECLARE_GET_FIELD(t_PredicateEvalInfo, predictedAlt),
            DECLARE_GET_FIELD(t_PredicateEvalInfo, semctx),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PredicateEvalInfo__methods_[] = {
            DECLARE_METHOD(t_PredicateEvalInfo, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PredicateEvalInfo, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PredicateEvalInfo)[] = {
            { Py_tp_methods, t_PredicateEvalInfo__methods_ },
            { Py_tp_init, (void *) t_PredicateEvalInfo_init_ },
            { Py_tp_getset, t_PredicateEvalInfo__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PredicateEvalInfo)[] = {
            &PY_TYPE_DEF(::org::antlr::v4::runtime::atn::DecisionEventInfo),
            NULL
          };

          DEFINE_TYPE(PredicateEvalInfo, t_PredicateEvalInfo, PredicateEvalInfo);

          void t_PredicateEvalInfo::install(PyObject *module)
          {
            installType(&PY_TYPE(PredicateEvalInfo), &PY_TYPE_DEF(PredicateEvalInfo), module, "PredicateEvalInfo", 0);
          }

          void t_PredicateEvalInfo::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PredicateEvalInfo), "class_", make_descriptor(PredicateEvalInfo::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PredicateEvalInfo), "wrapfn_", make_descriptor(t_PredicateEvalInfo::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PredicateEvalInfo), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PredicateEvalInfo_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PredicateEvalInfo::initializeClass, 1)))
              return NULL;
            return t_PredicateEvalInfo::wrap_Object(PredicateEvalInfo(((t_PredicateEvalInfo *) arg)->object.this$));
          }
          static PyObject *t_PredicateEvalInfo_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PredicateEvalInfo::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PredicateEvalInfo_init_(t_PredicateEvalInfo *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            ::org::antlr::v4::runtime::TokenStream a1((jobject) NULL);
            jint a2;
            jint a3;
            ::org::antlr::v4::runtime::atn::SemanticContext a4((jobject) NULL);
            jboolean a5;
            jint a6;
            jboolean a7;
            PredicateEvalInfo object((jobject) NULL);

            if (!parseArgs(args, "IkIIkZIZ", ::org::antlr::v4::runtime::TokenStream::initializeClass, ::org::antlr::v4::runtime::atn::SemanticContext::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              INT_CALL(object = PredicateEvalInfo(a0, a1, a2, a3, a4, a5, a6, a7));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PredicateEvalInfo_get__evalResult(t_PredicateEvalInfo *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object._get_evalResult());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_PredicateEvalInfo_get__predictedAlt(t_PredicateEvalInfo *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object._get_predictedAlt());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_PredicateEvalInfo_get__semctx(t_PredicateEvalInfo *self, void *data)
          {
            ::org::antlr::v4::runtime::atn::SemanticContext value((jobject) NULL);
            OBJ_CALL(value = self->object._get_semctx());
            return ::org::antlr::v4::runtime::atn::t_SemanticContext::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/antlr/v4/runtime/atn/LookaheadEventInfo.h"
#include "org/antlr/v4/runtime/atn/ATNConfigSet.h"
#include "org/antlr/v4/runtime/TokenStream.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          ::java::lang::Class *LookaheadEventInfo::class$ = NULL;
          jmethodID *LookaheadEventInfo::mids$ = NULL;
          jfieldID *LookaheadEventInfo::fids$ = NULL;
          bool LookaheadEventInfo::live$ = false;

          jclass LookaheadEventInfo::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/antlr/v4/runtime/atn/LookaheadEventInfo");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_64036c46646bca10] = env->getMethodID(cls, "<init>", "(ILorg/antlr/v4/runtime/atn/ATNConfigSet;ILorg/antlr/v4/runtime/TokenStream;IIZ)V");

              fids$ = new jfieldID[max_fid];
              fids$[fid_predictedAlt] = env->getFieldID(cls, "predictedAlt", "I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LookaheadEventInfo::LookaheadEventInfo(jint a0, const ::org::antlr::v4::runtime::atn::ATNConfigSet & a1, jint a2, const ::org::antlr::v4::runtime::TokenStream & a3, jint a4, jint a5, jboolean a6) : ::org::antlr::v4::runtime::atn::DecisionEventInfo(env->newObject(initializeClass, &mids$, mid_init$_64036c46646bca10, a0, a1.this$, a2, a3.this$, a4, a5, a6)) {}

          jint LookaheadEventInfo::_get_predictedAlt() const
          {
            return env->getIntField(this$, fids$[fid_predictedAlt]);
          }

          void LookaheadEventInfo::_set_predictedAlt(jint a0) const
          {
            env->setIntField(this$, fids$[fid_predictedAlt], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          static PyObject *t_LookaheadEventInfo_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LookaheadEventInfo_instance_(PyTypeObject *type, PyObject *arg);
          static int t_LookaheadEventInfo_init_(t_LookaheadEventInfo *self, PyObject *args, PyObject *kwds);
          static PyObject *t_LookaheadEventInfo_get__predictedAlt(t_LookaheadEventInfo *self, void *data);
          static int t_LookaheadEventInfo_set__predictedAlt(t_LookaheadEventInfo *self, PyObject *arg, void *data);

          static PyGetSetDef t_LookaheadEventInfo__fields_[] = {
            DECLARE_GETSET_FIELD(t_LookaheadEventInfo, predictedAlt),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_LookaheadEventInfo__methods_[] = {
            DECLARE_METHOD(t_LookaheadEventInfo, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LookaheadEventInfo, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LookaheadEventInfo)[] = {
            { Py_tp_methods, t_LookaheadEventInfo__methods_ },
            { Py_tp_init, (void *) t_LookaheadEventInfo_init_ },
            { Py_tp_getset, t_LookaheadEventInfo__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LookaheadEventInfo)[] = {
            &PY_TYPE_DEF(::org::antlr::v4::runtime::atn::DecisionEventInfo),
            NULL
          };

          DEFINE_TYPE(LookaheadEventInfo, t_LookaheadEventInfo, LookaheadEventInfo);

          void t_LookaheadEventInfo::install(PyObject *module)
          {
            installType(&PY_TYPE(LookaheadEventInfo), &PY_TYPE_DEF(LookaheadEventInfo), module, "LookaheadEventInfo", 0);
          }

          void t_LookaheadEventInfo::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LookaheadEventInfo), "class_", make_descriptor(LookaheadEventInfo::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LookaheadEventInfo), "wrapfn_", make_descriptor(t_LookaheadEventInfo::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LookaheadEventInfo), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LookaheadEventInfo_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LookaheadEventInfo::initializeClass, 1)))
              return NULL;
            return t_LookaheadEventInfo::wrap_Object(LookaheadEventInfo(((t_LookaheadEventInfo *) arg)->object.this$));
          }
          static PyObject *t_LookaheadEventInfo_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LookaheadEventInfo::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_LookaheadEventInfo_init_(t_LookaheadEventInfo *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            ::org::antlr::v4::runtime::atn::ATNConfigSet a1((jobject) NULL);
            jint a2;
            ::org::antlr::v4::runtime::TokenStream a3((jobject) NULL);
            jint a4;
            jint a5;
            jboolean a6;
            LookaheadEventInfo object((jobject) NULL);

            if (!parseArgs(args, "IkIkIIZ", ::org::antlr::v4::runtime::atn::ATNConfigSet::initializeClass, ::org::antlr::v4::runtime::TokenStream::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = LookaheadEventInfo(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_LookaheadEventInfo_get__predictedAlt(t_LookaheadEventInfo *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object._get_predictedAlt());
            return PyLong_FromLong((long) value);
          }
          static int t_LookaheadEventInfo_set__predictedAlt(t_LookaheadEventInfo *self, PyObject *arg, void *data)
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object._set_predictedAlt(value));
              return 0;
            }
            PyErr_SetArgsError((PyObject *) self, "predictedAlt", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/antlr/v4/runtime/misc/Array2DHashSet.h"
#include "java/util/Iterator.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/util/Set.h"
#include "JArray.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace misc {

          ::java::lang::Class *Array2DHashSet::class$ = NULL;
          jmethodID *Array2DHashSet::mids$ = NULL;
          bool Array2DHashSet::live$ = false;
          jint Array2DHashSet::INITAL_BUCKET_CAPACITY = (jint) 0;
          jint Array2DHashSet::INITAL_CAPACITY = (jint) 0;
          jdouble Array2DHashSet::LOAD_FACTOR = (jdouble) 0;

          jclass Array2DHashSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/antlr/v4/runtime/misc/Array2DHashSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3720c61b0679eb3e] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_add_570b5248a6da3ef6] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
              mids$[mid_addAll_f2a1f31c5865e20d] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
              mids$[mid_clear_3720c61b0679eb3e] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_contains_570b5248a6da3ef6] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
              mids$[mid_containsAll_f2a1f31c5865e20d] = env->getMethodID(cls, "containsAll", "(Ljava/util/Collection;)Z");
              mids$[mid_containsFast_570b5248a6da3ef6] = env->getMethodID(cls, "containsFast", "(Ljava/lang/Object;)Z");
              mids$[mid_equals_570b5248a6da3ef6] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_get_5fd81664d2d475e1] = env->getMethodID(cls, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
              mids$[mid_getOrAdd_5fd81664d2d475e1] = env->getMethodID(cls, "getOrAdd", "(Ljava/lang/Object;)Ljava/lang/Object;");
              mids$[mid_hashCode_20fbf7565993c3d7] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isEmpty_947277eca0748c4e] = env->getMethodID(cls, "isEmpty", "()Z");
              mids$[mid_iterator_0db4c76ff7ee995b] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
              mids$[mid_remove_570b5248a6da3ef6] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
              mids$[mid_removeAll_f2a1f31c5865e20d] = env->getMethodID(cls, "removeAll", "(Ljava/util/Collection;)Z");
              mids$[mid_removeFast_570b5248a6da3ef6] = env->getMethodID(cls, "removeFast", "(Ljava/lang/Object;)Z");
              mids$[mid_retainAll_f2a1f31c5865e20d] = env->getMethodID(cls, "retainAll", "(Ljava/util/Collection;)Z");
              mids$[mid_size_20fbf7565993c3d7] = env->getMethodID(cls, "size", "()I");
              mids$[mid_toArray_e6b839682a4610a6] = env->getMethodID(cls, "toArray", "()[Ljava/lang/Object;");
              mids$[mid_toArray_1794d6b866766560] = env->getMethodID(cls, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");
              mids$[mid_toString_09a7afff1868fc5e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_toTableString_09a7afff1868fc5e] = env->getMethodID(cls, "toTableString", "()Ljava/lang/String;");
              mids$[mid_getBucket_657656e6a597f732] = env->getMethodID(cls, "getBucket", "(Ljava/lang/Object;)I");
              mids$[mid_asElementType_5fd81664d2d475e1] = env->getMethodID(cls, "asElementType", "(Ljava/lang/Object;)Ljava/lang/Object;");
              mids$[mid_createBuckets_bdd5b43a20f192f7] = env->getMethodID(cls, "createBuckets", "(I)[[Ljava/lang/Object;");
              mids$[mid_createBucket_fddd493c893a9ca4] = env->getMethodID(cls, "createBucket", "(I)[Ljava/lang/Object;");
              mids$[mid_getOrAddImpl_5fd81664d2d475e1] = env->getMethodID(cls, "getOrAddImpl", "(Ljava/lang/Object;)Ljava/lang/Object;");
              mids$[mid_expand_3720c61b0679eb3e] = env->getMethodID(cls, "expand", "()V");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              INITAL_BUCKET_CAPACITY = env->getStaticIntField(cls, "INITAL_BUCKET_CAPACITY");
              INITAL_CAPACITY = env->getStaticIntField(cls, "INITAL_CAPACITY");
              LOAD_FACTOR = env->getStaticDoubleField(cls, "LOAD_FACTOR");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Array2DHashSet::Array2DHashSet() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3720c61b0679eb3e)) {}

          jboolean Array2DHashSet::add(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_add_570b5248a6da3ef6], a0.this$);
          }

          jboolean Array2DHashSet::addAll(const ::java::util::Collection & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_addAll_f2a1f31c5865e20d], a0.this$);
          }

          void Array2DHashSet::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_3720c61b0679eb3e]);
          }

          jboolean Array2DHashSet::contains(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_contains_570b5248a6da3ef6], a0.this$);
          }

          jboolean Array2DHashSet::containsAll(const ::java::util::Collection & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_containsAll_f2a1f31c5865e20d], a0.this$);
          }

          jboolean Array2DHashSet::containsFast(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_containsFast_570b5248a6da3ef6], a0.this$);
          }

          jboolean Array2DHashSet::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_570b5248a6da3ef6], a0.this$);
          }

          ::java::lang::Object Array2DHashSet::get(const ::java::lang::Object & a0) const
          {
            return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_5fd81664d2d475e1], a0.this$));
          }

          ::java::lang::Object Array2DHashSet::getOrAdd(const ::java::lang::Object & a0) const
          {
            return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getOrAdd_5fd81664d2d475e1], a0.this$));
          }

          jint Array2DHashSet::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_20fbf7565993c3d7]);
          }

          jboolean Array2DHashSet::isEmpty() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isEmpty_947277eca0748c4e]);
          }

          ::java::util::Iterator Array2DHashSet::iterator() const
          {
            return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_0db4c76ff7ee995b]));
          }

          jboolean Array2DHashSet::remove(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_remove_570b5248a6da3ef6], a0.this$);
          }

          jboolean Array2DHashSet::removeAll(const ::java::util::Collection & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_removeAll_f2a1f31c5865e20d], a0.this$);
          }

          jboolean Array2DHashSet::removeFast(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_removeFast_570b5248a6da3ef6], a0.this$);
          }

          jboolean Array2DHashSet::retainAll(const ::java::util::Collection & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_retainAll_f2a1f31c5865e20d], a0.this$);
          }

          jint Array2DHashSet::size() const
          {
            return env->callIntMethod(this$, mids$[mid_size_20fbf7565993c3d7]);
          }

          JArray< ::java::lang::Object > Array2DHashSet::toArray() const
          {
            return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_e6b839682a4610a6]));
          }

          JArray< ::java::lang::Object > Array2DHashSet::toArray(const JArray< ::java::lang::Object > & a0) const
          {
            return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_1794d6b866766560], a0.this$));
          }

          ::java::lang::String Array2DHashSet::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_09a7afff1868fc5e]));
          }

          ::java::lang::String Array2DHashSet::toTableString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toTableString_09a7afff1868fc5e]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace misc {
          static PyObject *t_Array2DHashSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Array2DHashSet_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Array2DHashSet_of_(t_Array2DHashSet *self, PyObject *args);
          static int t_Array2DHashSet_init_(t_Array2DHashSet *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Array2DHashSet_add(t_Array2DHashSet *self, PyObject *arg);
          static PyObject *t_Array2DHashSet_addAll(t_Array2DHashSet *self, PyObject *arg);
          static PyObject *t_Array2DHashSet_clear(t_Array2DHashSet *self);
          static PyObject *t_Array2DHashSet_contains(t_Array2DHashSet *self, PyObject *arg);
          static PyObject *t_Array2DHashSet_containsAll(t_Array2DHashSet *self, PyObject *arg);
          static PyObject *t_Array2DHashSet_containsFast(t_Array2DHashSet *self, PyObject *arg);
          static PyObject *t_Array2DHashSet_equals(t_Array2DHashSet *self, PyObject *args);
          static PyObject *t_Array2DHashSet_get(t_Array2DHashSet *self, PyObject *arg);
          static PyObject *t_Array2DHashSet_getOrAdd(t_Array2DHashSet *self, PyObject *arg);
          static PyObject *t_Array2DHashSet_hashCode(t_Array2DHashSet *self, PyObject *args);
          static PyObject *t_Array2DHashSet_isEmpty(t_Array2DHashSet *self);
          static PyObject *t_Array2DHashSet_iterator(t_Array2DHashSet *self);
          static PyObject *t_Array2DHashSet_remove(t_Array2DHashSet *self, PyObject *arg);
          static PyObject *t_Array2DHashSet_removeAll(t_Array2DHashSet *self, PyObject *arg);
          static PyObject *t_Array2DHashSet_removeFast(t_Array2DHashSet *self, PyObject *arg);
          static PyObject *t_Array2DHashSet_retainAll(t_Array2DHashSet *self, PyObject *arg);
          static PyObject *t_Array2DHashSet_size(t_Array2DHashSet *self);
          static PyObject *t_Array2DHashSet_toArray(t_Array2DHashSet *self, PyObject *args);
          static PyObject *t_Array2DHashSet_toString(t_Array2DHashSet *self, PyObject *args);
          static PyObject *t_Array2DHashSet_toTableString(t_Array2DHashSet *self);
          static PyObject *t_Array2DHashSet_get__empty(t_Array2DHashSet *self, void *data);
          static PyObject *t_Array2DHashSet_get__parameters_(t_Array2DHashSet *self, void *data);
          static PyGetSetDef t_Array2DHashSet__fields_[] = {
            DECLARE_GET_FIELD(t_Array2DHashSet, empty),
            DECLARE_GET_FIELD(t_Array2DHashSet, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Array2DHashSet__methods_[] = {
            DECLARE_METHOD(t_Array2DHashSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Array2DHashSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Array2DHashSet, of_, METH_VARARGS),
            DECLARE_METHOD(t_Array2DHashSet, add, METH_O),
            DECLARE_METHOD(t_Array2DHashSet, addAll, METH_O),
            DECLARE_METHOD(t_Array2DHashSet, clear, METH_NOARGS),
            DECLARE_METHOD(t_Array2DHashSet, contains, METH_O),
            DECLARE_METHOD(t_Array2DHashSet, containsAll, METH_O),
            DECLARE_METHOD(t_Array2DHashSet, containsFast, METH_O),
            DECLARE_METHOD(t_Array2DHashSet, equals, METH_VARARGS),
            DECLARE_METHOD(t_Array2DHashSet, get, METH_O),
            DECLARE_METHOD(t_Array2DHashSet, getOrAdd, METH_O),
            DECLARE_METHOD(t_Array2DHashSet, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_Array2DHashSet, isEmpty, METH_NOARGS),
            DECLARE_METHOD(t_Array2DHashSet, iterator, METH_NOARGS),
            DECLARE_METHOD(t_Array2DHashSet, remove, METH_O),
            DECLARE_METHOD(t_Array2DHashSet, removeAll, METH_O),
            DECLARE_METHOD(t_Array2DHashSet, removeFast, METH_O),
            DECLARE_METHOD(t_Array2DHashSet, retainAll, METH_O),
            DECLARE_METHOD(t_Array2DHashSet, size, METH_NOARGS),
            DECLARE_METHOD(t_Array2DHashSet, toArray, METH_VARARGS),
            DECLARE_METHOD(t_Array2DHashSet, toString, METH_VARARGS),
            DECLARE_METHOD(t_Array2DHashSet, toTableString, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Array2DHashSet)[] = {
            { Py_tp_methods, t_Array2DHashSet__methods_ },
            { Py_tp_init, (void *) t_Array2DHashSet_init_ },
            { Py_tp_getset, t_Array2DHashSet__fields_ },
            { Py_tp_iter, (void *) ((PyObject *(*)(t_Array2DHashSet *)) get_generic_iterator< t_Array2DHashSet >) },
            { Py_tp_iternext, (void *) 0 },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Array2DHashSet)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Array2DHashSet, t_Array2DHashSet, Array2DHashSet);
          PyObject *t_Array2DHashSet::wrap_Object(const Array2DHashSet& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Array2DHashSet::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Array2DHashSet *self = (t_Array2DHashSet *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_Array2DHashSet::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Array2DHashSet::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Array2DHashSet *self = (t_Array2DHashSet *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_Array2DHashSet::install(PyObject *module)
          {
            installType(&PY_TYPE(Array2DHashSet), &PY_TYPE_DEF(Array2DHashSet), module, "Array2DHashSet", 0);
          }

          void t_Array2DHashSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Array2DHashSet), "class_", make_descriptor(Array2DHashSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Array2DHashSet), "wrapfn_", make_descriptor(t_Array2DHashSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Array2DHashSet), "boxfn_", make_descriptor(boxObject));
            env->getClass(Array2DHashSet::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Array2DHashSet), "INITAL_BUCKET_CAPACITY", make_descriptor(Array2DHashSet::INITAL_BUCKET_CAPACITY));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Array2DHashSet), "INITAL_CAPACITY", make_descriptor(Array2DHashSet::INITAL_CAPACITY));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Array2DHashSet), "LOAD_FACTOR", make_descriptor(Array2DHashSet::LOAD_FACTOR));
          }

          static PyObject *t_Array2DHashSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Array2DHashSet::initializeClass, 1)))
              return NULL;
            return t_Array2DHashSet::wrap_Object(Array2DHashSet(((t_Array2DHashSet *) arg)->object.this$));
          }
          static PyObject *t_Array2DHashSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Array2DHashSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Array2DHashSet_of_(t_Array2DHashSet *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_Array2DHashSet_init_(t_Array2DHashSet *self, PyObject *args, PyObject *kwds)
          {
            Array2DHashSet object((jobject) NULL);

            INT_CALL(object = Array2DHashSet());
            self->object = object;

            return 0;
          }

          static PyObject *t_Array2DHashSet_add(t_Array2DHashSet *self, PyObject *arg)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "O", self->parameters[0], &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "add", arg);
            return NULL;
          }

          static PyObject *t_Array2DHashSet_addAll(t_Array2DHashSet *self, PyObject *arg)
          {
            ::java::util::Collection a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.addAll(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "addAll", arg);
            return NULL;
          }

          static PyObject *t_Array2DHashSet_clear(t_Array2DHashSet *self)
          {
            OBJ_CALL(self->object.clear());
            Py_RETURN_NONE;
          }

          static PyObject *t_Array2DHashSet_contains(t_Array2DHashSet *self, PyObject *arg)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "o", &a0))
            {
              OBJ_CALL(result = self->object.contains(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "contains", arg);
            return NULL;
          }

          static PyObject *t_Array2DHashSet_containsAll(t_Array2DHashSet *self, PyObject *arg)
          {
            ::java::util::Collection a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.containsAll(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "containsAll", arg);
            return NULL;
          }

          static PyObject *t_Array2DHashSet_containsFast(t_Array2DHashSet *self, PyObject *arg)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "O", self->parameters[0], &a0))
            {
              OBJ_CALL(result = self->object.containsFast(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "containsFast", arg);
            return NULL;
          }

          static PyObject *t_Array2DHashSet_equals(t_Array2DHashSet *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(Array2DHashSet), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_Array2DHashSet_get(t_Array2DHashSet *self, PyObject *arg)
          {
            ::java::lang::Object a0((jobject) NULL);
            ::java::lang::Object result((jobject) NULL);

            if (!parseArg(arg, "O", self->parameters[0], &a0))
            {
              OBJ_CALL(result = self->object.get(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "get", arg);
            return NULL;
          }

          static PyObject *t_Array2DHashSet_getOrAdd(t_Array2DHashSet *self, PyObject *arg)
          {
            ::java::lang::Object a0((jobject) NULL);
            ::java::lang::Object result((jobject) NULL);

            if (!parseArg(arg, "O", self->parameters[0], &a0))
            {
              OBJ_CALL(result = self->object.getOrAdd(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getOrAdd", arg);
            return NULL;
          }

          static PyObject *t_Array2DHashSet_hashCode(t_Array2DHashSet *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(Array2DHashSet), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_Array2DHashSet_isEmpty(t_Array2DHashSet *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isEmpty());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_Array2DHashSet_iterator(t_Array2DHashSet *self)
          {
            ::java::util::Iterator result((jobject) NULL);
            OBJ_CALL(result = self->object.iterator());
            return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_Array2DHashSet_remove(t_Array2DHashSet *self, PyObject *arg)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "o", &a0))
            {
              OBJ_CALL(result = self->object.remove(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "remove", arg);
            return NULL;
          }

          static PyObject *t_Array2DHashSet_removeAll(t_Array2DHashSet *self, PyObject *arg)
          {
            ::java::util::Collection a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.removeAll(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "removeAll", arg);
            return NULL;
          }

          static PyObject *t_Array2DHashSet_removeFast(t_Array2DHashSet *self, PyObject *arg)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "O", self->parameters[0], &a0))
            {
              OBJ_CALL(result = self->object.removeFast(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "removeFast", arg);
            return NULL;
          }

          static PyObject *t_Array2DHashSet_retainAll(t_Array2DHashSet *self, PyObject *arg)
          {
            ::java::util::Collection a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.retainAll(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "retainAll", arg);
            return NULL;
          }

          static PyObject *t_Array2DHashSet_size(t_Array2DHashSet *self)
          {
            jint result;
            OBJ_CALL(result = self->object.size());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Array2DHashSet_toArray(t_Array2DHashSet *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                JArray< ::java::lang::Object > result((jobject) NULL);
                OBJ_CALL(result = self->object.toArray());
                return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
              }
              break;
             case 1:
              {
                JArray< ::java::lang::Object > a0((jobject) NULL);
                JArray< ::java::lang::Object > result((jobject) NULL);

                if (!parseArgs(args, "[o", &a0))
                {
                  OBJ_CALL(result = self->object.toArray(a0));
                  return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "toArray", args);
            return NULL;
          }

          static PyObject *t_Array2DHashSet_toString(t_Array2DHashSet *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(Array2DHashSet), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_Array2DHashSet_toTableString(t_Array2DHashSet *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.toTableString());
            return j2p(result);
          }
          static PyObject *t_Array2DHashSet_get__parameters_(t_Array2DHashSet *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_Array2DHashSet_get__empty(t_Array2DHashSet *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isEmpty());
            Py_RETURN_BOOL(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/antlr/v4/runtime/atn/DecisionEventInfo.h"
#include "org/antlr/v4/runtime/atn/ATNConfigSet.h"
#include "org/antlr/v4/runtime/TokenStream.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          ::java::lang::Class *DecisionEventInfo::class$ = NULL;
          jmethodID *DecisionEventInfo::mids$ = NULL;
          jfieldID *DecisionEventInfo::fids$ = NULL;
          bool DecisionEventInfo::live$ = false;

          jclass DecisionEventInfo::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/antlr/v4/runtime/atn/DecisionEventInfo");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_2249b4bb23ad8343] = env->getMethodID(cls, "<init>", "(ILorg/antlr/v4/runtime/atn/ATNConfigSet;Lorg/antlr/v4/runtime/TokenStream;IIZ)V");

              fids$ = new jfieldID[max_fid];
              fids$[fid_configs] = env->getFieldID(cls, "configs", "Lorg/antlr/v4/runtime/atn/ATNConfigSet;");
              fids$[fid_decision] = env->getFieldID(cls, "decision", "I");
              fids$[fid_fullCtx] = env->getFieldID(cls, "fullCtx", "Z");
              fids$[fid_input] = env->getFieldID(cls, "input", "Lorg/antlr/v4/runtime/TokenStream;");
              fids$[fid_startIndex] = env->getFieldID(cls, "startIndex", "I");
              fids$[fid_stopIndex] = env->getFieldID(cls, "stopIndex", "I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DecisionEventInfo::DecisionEventInfo(jint a0, const ::org::antlr::v4::runtime::atn::ATNConfigSet & a1, const ::org::antlr::v4::runtime::TokenStream & a2, jint a3, jint a4, jboolean a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2249b4bb23ad8343, a0, a1.this$, a2.this$, a3, a4, a5)) {}

          ::org::antlr::v4::runtime::atn::ATNConfigSet DecisionEventInfo::_get_configs() const
          {
            return ::org::antlr::v4::runtime::atn::ATNConfigSet(env->getObjectField(this$, fids$[fid_configs]));
          }

          jint DecisionEventInfo::_get_decision() const
          {
            return env->getIntField(this$, fids$[fid_decision]);
          }

          jboolean DecisionEventInfo::_get_fullCtx() const
          {
            return env->getBooleanField(this$, fids$[fid_fullCtx]);
          }

          ::org::antlr::v4::runtime::TokenStream DecisionEventInfo::_get_input() const
          {
            return ::org::antlr::v4::runtime::TokenStream(env->getObjectField(this$, fids$[fid_input]));
          }

          jint DecisionEventInfo::_get_startIndex() const
          {
            return env->getIntField(this$, fids$[fid_startIndex]);
          }

          jint DecisionEventInfo::_get_stopIndex() const
          {
            return env->getIntField(this$, fids$[fid_stopIndex]);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          static PyObject *t_DecisionEventInfo_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DecisionEventInfo_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DecisionEventInfo_init_(t_DecisionEventInfo *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DecisionEventInfo_get__configs(t_DecisionEventInfo *self, void *data);
          static PyObject *t_DecisionEventInfo_get__decision(t_DecisionEventInfo *self, void *data);
          static PyObject *t_DecisionEventInfo_get__fullCtx(t_DecisionEventInfo *self, void *data);
          static PyObject *t_DecisionEventInfo_get__input(t_DecisionEventInfo *self, void *data);
          static PyObject *t_DecisionEventInfo_get__startIndex(t_DecisionEventInfo *self, void *data);
          static PyObject *t_DecisionEventInfo_get__stopIndex(t_DecisionEventInfo *self, void *data);

          static PyGetSetDef t_DecisionEventInfo__fields_[] = {
            DECLARE_GET_FIELD(t_DecisionEventInfo, configs),
            DECLARE_GET_FIELD(t_DecisionEventInfo, decision),
            DECLARE_GET_FIELD(t_DecisionEventInfo, fullCtx),
            DECLARE_GET_FIELD(t_DecisionEventInfo, input),
            DECLARE_GET_FIELD(t_DecisionEventInfo, startIndex),
            DECLARE_GET_FIELD(t_DecisionEventInfo, stopIndex),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DecisionEventInfo__methods_[] = {
            DECLARE_METHOD(t_DecisionEventInfo, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DecisionEventInfo, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DecisionEventInfo)[] = {
            { Py_tp_methods, t_DecisionEventInfo__methods_ },
            { Py_tp_init, (void *) t_DecisionEventInfo_init_ },
            { Py_tp_getset, t_DecisionEventInfo__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DecisionEventInfo)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(DecisionEventInfo, t_DecisionEventInfo, DecisionEventInfo);

          void t_DecisionEventInfo::install(PyObject *module)
          {
            installType(&PY_TYPE(DecisionEventInfo), &PY_TYPE_DEF(DecisionEventInfo), module, "DecisionEventInfo", 0);
          }

          void t_DecisionEventInfo::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DecisionEventInfo), "class_", make_descriptor(DecisionEventInfo::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DecisionEventInfo), "wrapfn_", make_descriptor(t_DecisionEventInfo::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DecisionEventInfo), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DecisionEventInfo_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DecisionEventInfo::initializeClass, 1)))
              return NULL;
            return t_DecisionEventInfo::wrap_Object(DecisionEventInfo(((t_DecisionEventInfo *) arg)->object.this$));
          }
          static PyObject *t_DecisionEventInfo_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DecisionEventInfo::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DecisionEventInfo_init_(t_DecisionEventInfo *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            ::org::antlr::v4::runtime::atn::ATNConfigSet a1((jobject) NULL);
            ::org::antlr::v4::runtime::TokenStream a2((jobject) NULL);
            jint a3;
            jint a4;
            jboolean a5;
            DecisionEventInfo object((jobject) NULL);

            if (!parseArgs(args, "IkkIIZ", ::org::antlr::v4::runtime::atn::ATNConfigSet::initializeClass, ::org::antlr::v4::runtime::TokenStream::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = DecisionEventInfo(a0, a1, a2, a3, a4, a5));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_DecisionEventInfo_get__configs(t_DecisionEventInfo *self, void *data)
          {
            ::org::antlr::v4::runtime::atn::ATNConfigSet value((jobject) NULL);
            OBJ_CALL(value = self->object._get_configs());
            return ::org::antlr::v4::runtime::atn::t_ATNConfigSet::wrap_Object(value);
          }

          static PyObject *t_DecisionEventInfo_get__decision(t_DecisionEventInfo *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object._get_decision());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_DecisionEventInfo_get__fullCtx(t_DecisionEventInfo *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object._get_fullCtx());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_DecisionEventInfo_get__input(t_DecisionEventInfo *self, void *data)
          {
            ::org::antlr::v4::runtime::TokenStream value((jobject) NULL);
            OBJ_CALL(value = self->object._get_input());
            return ::org::antlr::v4::runtime::t_TokenStream::wrap_Object(value);
          }

          static PyObject *t_DecisionEventInfo_get__startIndex(t_DecisionEventInfo *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object._get_startIndex());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_DecisionEventInfo_get__stopIndex(t_DecisionEventInfo *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object._get_stopIndex());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/antlr/v4/runtime/Lexer.h"
#include "org/antlr/v4/runtime/TokenFactory.h"
#include "org/antlr/v4/runtime/CharStream.h"
#include "java/lang/Integer.h"
#include "org/antlr/v4/runtime/TokenSource.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/util/List.h"
#include "org/antlr/v4/runtime/atn/LexerATNSimulator.h"
#include "org/antlr/v4/runtime/IntStream.h"
#include "org/antlr/v4/runtime/LexerNoViableAltException.h"
#include "java/lang/Object.h"
#include "org/antlr/v4/runtime/RecognitionException.h"
#include "org/antlr/v4/runtime/Token.h"
#include "JArray.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {

        ::java::lang::Class *Lexer::class$ = NULL;
        jmethodID *Lexer::mids$ = NULL;
        jfieldID *Lexer::fids$ = NULL;
        bool Lexer::live$ = false;
        jint Lexer::DEFAULT_MODE = (jint) 0;
        jint Lexer::DEFAULT_TOKEN_CHANNEL = (jint) 0;
        jint Lexer::HIDDEN = (jint) 0;
        jint Lexer::MAX_CHAR_VALUE = (jint) 0;
        jint Lexer::MIN_CHAR_VALUE = (jint) 0;
        jint Lexer::MORE = (jint) 0;
        jint Lexer::SKIP = (jint) 0;

        jclass Lexer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/antlr/v4/runtime/Lexer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3720c61b0679eb3e] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_4d3fc62038ae73ec] = env->getMethodID(cls, "<init>", "(Lorg/antlr/v4/runtime/CharStream;)V");
            mids$[mid_emit_9ddaacaf798f5cf6] = env->getMethodID(cls, "emit", "()Lorg/antlr/v4/runtime/Token;");
            mids$[mid_emit_c666cf9aed935f19] = env->getMethodID(cls, "emit", "(Lorg/antlr/v4/runtime/Token;)V");
            mids$[mid_emitEOF_9ddaacaf798f5cf6] = env->getMethodID(cls, "emitEOF", "()Lorg/antlr/v4/runtime/Token;");
            mids$[mid_getAllTokens_36830460e10839eb] = env->getMethodID(cls, "getAllTokens", "()Ljava/util/List;");
            mids$[mid_getChannel_20fbf7565993c3d7] = env->getMethodID(cls, "getChannel", "()I");
            mids$[mid_getChannelNames_6da8f3ea65e22733] = env->getMethodID(cls, "getChannelNames", "()[Ljava/lang/String;");
            mids$[mid_getCharErrorDisplay_cd8436557ab831f9] = env->getMethodID(cls, "getCharErrorDisplay", "(I)Ljava/lang/String;");
            mids$[mid_getCharIndex_20fbf7565993c3d7] = env->getMethodID(cls, "getCharIndex", "()I");
            mids$[mid_getCharPositionInLine_20fbf7565993c3d7] = env->getMethodID(cls, "getCharPositionInLine", "()I");
            mids$[mid_getErrorDisplay_cb0eb1432185fc94] = env->getMethodID(cls, "getErrorDisplay", "(Ljava/lang/String;)Ljava/lang/String;");
            mids$[mid_getErrorDisplay_cd8436557ab831f9] = env->getMethodID(cls, "getErrorDisplay", "(I)Ljava/lang/String;");
            mids$[mid_getInputStream_b461eccf8f9c2fcc] = env->getMethodID(cls, "getInputStream", "()Lorg/antlr/v4/runtime/CharStream;");
            mids$[mid_getLine_20fbf7565993c3d7] = env->getMethodID(cls, "getLine", "()I");
            mids$[mid_getModeNames_6da8f3ea65e22733] = env->getMethodID(cls, "getModeNames", "()[Ljava/lang/String;");
            mids$[mid_getSourceName_09a7afff1868fc5e] = env->getMethodID(cls, "getSourceName", "()Ljava/lang/String;");
            mids$[mid_getText_09a7afff1868fc5e] = env->getMethodID(cls, "getText", "()Ljava/lang/String;");
            mids$[mid_getToken_9ddaacaf798f5cf6] = env->getMethodID(cls, "getToken", "()Lorg/antlr/v4/runtime/Token;");
            mids$[mid_getTokenFactory_c8e0d1a54d80678c] = env->getMethodID(cls, "getTokenFactory", "()Lorg/antlr/v4/runtime/TokenFactory;");
            mids$[mid_getTokenNames_6da8f3ea65e22733] = env->getMethodID(cls, "getTokenNames", "()[Ljava/lang/String;");
            mids$[mid_getType_20fbf7565993c3d7] = env->getMethodID(cls, "getType", "()I");
            mids$[mid_mode_540b2b23d51b1efd] = env->getMethodID(cls, "mode", "(I)V");
            mids$[mid_more_3720c61b0679eb3e] = env->getMethodID(cls, "more", "()V");
            mids$[mid_nextToken_9ddaacaf798f5cf6] = env->getMethodID(cls, "nextToken", "()Lorg/antlr/v4/runtime/Token;");
            mids$[mid_notifyListeners_5cd4dbb1f11ee7f4] = env->getMethodID(cls, "notifyListeners", "(Lorg/antlr/v4/runtime/LexerNoViableAltException;)V");
            mids$[mid_popMode_20fbf7565993c3d7] = env->getMethodID(cls, "popMode", "()I");
            mids$[mid_pushMode_540b2b23d51b1efd] = env->getMethodID(cls, "pushMode", "(I)V");
            mids$[mid_recover_5cd4dbb1f11ee7f4] = env->getMethodID(cls, "recover", "(Lorg/antlr/v4/runtime/LexerNoViableAltException;)V");
            mids$[mid_recover_3cb1ebd09e36450e] = env->getMethodID(cls, "recover", "(Lorg/antlr/v4/runtime/RecognitionException;)V");
            mids$[mid_reset_3720c61b0679eb3e] = env->getMethodID(cls, "reset", "()V");
            mids$[mid_setChannel_540b2b23d51b1efd] = env->getMethodID(cls, "setChannel", "(I)V");
            mids$[mid_setCharPositionInLine_540b2b23d51b1efd] = env->getMethodID(cls, "setCharPositionInLine", "(I)V");
            mids$[mid_setInputStream_e95b24b8d6abbd06] = env->getMethodID(cls, "setInputStream", "(Lorg/antlr/v4/runtime/IntStream;)V");
            mids$[mid_setLine_540b2b23d51b1efd] = env->getMethodID(cls, "setLine", "(I)V");
            mids$[mid_setText_0d82408c6e55bc30] = env->getMethodID(cls, "setText", "(Ljava/lang/String;)V");
            mids$[mid_setToken_c666cf9aed935f19] = env->getMethodID(cls, "setToken", "(Lorg/antlr/v4/runtime/Token;)V");
            mids$[mid_setTokenFactory_70a7fa7b38564c5e] = env->getMethodID(cls, "setTokenFactory", "(Lorg/antlr/v4/runtime/TokenFactory;)V");
            mids$[mid_setType_540b2b23d51b1efd] = env->getMethodID(cls, "setType", "(I)V");
            mids$[mid_skip_3720c61b0679eb3e] = env->getMethodID(cls, "skip", "()V");

            fids$ = new jfieldID[max_fid];
            fids$[fid__channel] = env->getFieldID(cls, "_channel", "I");
            fids$[fid__hitEOF] = env->getFieldID(cls, "_hitEOF", "Z");
            fids$[fid__input] = env->getFieldID(cls, "_input", "Lorg/antlr/v4/runtime/CharStream;");
            fids$[fid__mode] = env->getFieldID(cls, "_mode", "I");
            fids$[fid__text] = env->getFieldID(cls, "_text", "Ljava/lang/String;");
            fids$[fid__token] = env->getFieldID(cls, "_token", "Lorg/antlr/v4/runtime/Token;");
            fids$[fid__tokenStartCharIndex] = env->getFieldID(cls, "_tokenStartCharIndex", "I");
            fids$[fid__tokenStartCharPositionInLine] = env->getFieldID(cls, "_tokenStartCharPositionInLine", "I");
            fids$[fid__tokenStartLine] = env->getFieldID(cls, "_tokenStartLine", "I");
            fids$[fid__type] = env->getFieldID(cls, "_type", "I");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_MODE = env->getStaticIntField(cls, "DEFAULT_MODE");
            DEFAULT_TOKEN_CHANNEL = env->getStaticIntField(cls, "DEFAULT_TOKEN_CHANNEL");
            HIDDEN = env->getStaticIntField(cls, "HIDDEN");
            MAX_CHAR_VALUE = env->getStaticIntField(cls, "MAX_CHAR_VALUE");
            MIN_CHAR_VALUE = env->getStaticIntField(cls, "MIN_CHAR_VALUE");
            MORE = env->getStaticIntField(cls, "MORE");
            SKIP = env->getStaticIntField(cls, "SKIP");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Lexer::Lexer() : ::org::antlr::v4::runtime::Recognizer(env->newObject(initializeClass, &mids$, mid_init$_3720c61b0679eb3e)) {}

        Lexer::Lexer(const ::org::antlr::v4::runtime::CharStream & a0) : ::org::antlr::v4::runtime::Recognizer(env->newObject(initializeClass, &mids$, mid_init$_4d3fc62038ae73ec, a0.this$)) {}

        ::org::antlr::v4::runtime::Token Lexer::emit() const
        {
          return ::org::antlr::v4::runtime::Token(env->callObjectMethod(this$, mids$[mid_emit_9ddaacaf798f5cf6]));
        }

        void Lexer::emit(const ::org::antlr::v4::runtime::Token & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_emit_c666cf9aed935f19], a0.this$);
        }

        ::org::antlr::v4::runtime::Token Lexer::emitEOF() const
        {
          return ::org::antlr::v4::runtime::Token(env->callObjectMethod(this$, mids$[mid_emitEOF_9ddaacaf798f5cf6]));
        }

        ::java::util::List Lexer::getAllTokens() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAllTokens_36830460e10839eb]));
        }

        jint Lexer::getChannel() const
        {
          return env->callIntMethod(this$, mids$[mid_getChannel_20fbf7565993c3d7]);
        }

        JArray< ::java::lang::String > Lexer::getChannelNames() const
        {
          return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getChannelNames_6da8f3ea65e22733]));
        }

        ::java::lang::String Lexer::getCharErrorDisplay(jint a0) const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCharErrorDisplay_cd8436557ab831f9], a0));
        }

        jint Lexer::getCharIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getCharIndex_20fbf7565993c3d7]);
        }

        jint Lexer::getCharPositionInLine() const
        {
          return env->callIntMethod(this$, mids$[mid_getCharPositionInLine_20fbf7565993c3d7]);
        }

        ::java::lang::String Lexer::getErrorDisplay(const ::java::lang::String & a0) const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getErrorDisplay_cb0eb1432185fc94], a0.this$));
        }

        ::java::lang::String Lexer::getErrorDisplay(jint a0) const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getErrorDisplay_cd8436557ab831f9], a0));
        }

        ::org::antlr::v4::runtime::CharStream Lexer::getInputStream() const
        {
          return ::org::antlr::v4::runtime::CharStream(env->callObjectMethod(this$, mids$[mid_getInputStream_b461eccf8f9c2fcc]));
        }

        jint Lexer::getLine() const
        {
          return env->callIntMethod(this$, mids$[mid_getLine_20fbf7565993c3d7]);
        }

        JArray< ::java::lang::String > Lexer::getModeNames() const
        {
          return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getModeNames_6da8f3ea65e22733]));
        }

        ::java::lang::String Lexer::getSourceName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceName_09a7afff1868fc5e]));
        }

        ::java::lang::String Lexer::getText() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getText_09a7afff1868fc5e]));
        }

        ::org::antlr::v4::runtime::Token Lexer::getToken() const
        {
          return ::org::antlr::v4::runtime::Token(env->callObjectMethod(this$, mids$[mid_getToken_9ddaacaf798f5cf6]));
        }

        ::org::antlr::v4::runtime::TokenFactory Lexer::getTokenFactory() const
        {
          return ::org::antlr::v4::runtime::TokenFactory(env->callObjectMethod(this$, mids$[mid_getTokenFactory_c8e0d1a54d80678c]));
        }

        JArray< ::java::lang::String > Lexer::getTokenNames() const
        {
          return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getTokenNames_6da8f3ea65e22733]));
        }

        jint Lexer::getType() const
        {
          return env->callIntMethod(this$, mids$[mid_getType_20fbf7565993c3d7]);
        }

        void Lexer::mode(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_mode_540b2b23d51b1efd], a0);
        }

        void Lexer::more() const
        {
          env->callVoidMethod(this$, mids$[mid_more_3720c61b0679eb3e]);
        }

        ::org::antlr::v4::runtime::Token Lexer::nextToken() const
        {
          return ::org::antlr::v4::runtime::Token(env->callObjectMethod(this$, mids$[mid_nextToken_9ddaacaf798f5cf6]));
        }

        void Lexer::notifyListeners(const ::org::antlr::v4::runtime::LexerNoViableAltException & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_notifyListeners_5cd4dbb1f11ee7f4], a0.this$);
        }

        jint Lexer::popMode() const
        {
          return env->callIntMethod(this$, mids$[mid_popMode_20fbf7565993c3d7]);
        }

        void Lexer::pushMode(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pushMode_540b2b23d51b1efd], a0);
        }

        void Lexer::recover(const ::org::antlr::v4::runtime::LexerNoViableAltException & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_recover_5cd4dbb1f11ee7f4], a0.this$);
        }

        void Lexer::recover(const ::org::antlr::v4::runtime::RecognitionException & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_recover_3cb1ebd09e36450e], a0.this$);
        }

        void Lexer::reset() const
        {
          env->callVoidMethod(this$, mids$[mid_reset_3720c61b0679eb3e]);
        }

        void Lexer::setChannel(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setChannel_540b2b23d51b1efd], a0);
        }

        void Lexer::setCharPositionInLine(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setCharPositionInLine_540b2b23d51b1efd], a0);
        }

        void Lexer::setInputStream(const ::org::antlr::v4::runtime::IntStream & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInputStream_e95b24b8d6abbd06], a0.this$);
        }

        void Lexer::setLine(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setLine_540b2b23d51b1efd], a0);
        }

        void Lexer::setText(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setText_0d82408c6e55bc30], a0.this$);
        }

        void Lexer::setToken(const ::org::antlr::v4::runtime::Token & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setToken_c666cf9aed935f19], a0.this$);
        }

        void Lexer::setTokenFactory(const ::org::antlr::v4::runtime::TokenFactory & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTokenFactory_70a7fa7b38564c5e], a0.this$);
        }

        void Lexer::setType(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setType_540b2b23d51b1efd], a0);
        }

        void Lexer::skip() const
        {
          env->callVoidMethod(this$, mids$[mid_skip_3720c61b0679eb3e]);
        }

        jint Lexer::_get__channel() const
        {
          return env->getIntField(this$, fids$[fid__channel]);
        }

        void Lexer::_set__channel(jint a0) const
        {
          env->setIntField(this$, fids$[fid__channel], a0);
        }

        jboolean Lexer::_get__hitEOF() const
        {
          return env->getBooleanField(this$, fids$[fid__hitEOF]);
        }

        void Lexer::_set__hitEOF(jboolean a0) const
        {
          env->setBooleanField(this$, fids$[fid__hitEOF], a0);
        }

        ::org::antlr::v4::runtime::CharStream Lexer::_get__input() const
        {
          return ::org::antlr::v4::runtime::CharStream(env->getObjectField(this$, fids$[fid__input]));
        }

        void Lexer::_set__input(const ::org::antlr::v4::runtime::CharStream & a0) const
        {
          env->setObjectField(this$, fids$[fid__input], a0.this$);
        }

        jint Lexer::_get__mode() const
        {
          return env->getIntField(this$, fids$[fid__mode]);
        }

        void Lexer::_set__mode(jint a0) const
        {
          env->setIntField(this$, fids$[fid__mode], a0);
        }

        ::java::lang::String Lexer::_get__text() const
        {
          return ::java::lang::String(env->getObjectField(this$, fids$[fid__text]));
        }

        void Lexer::_set__text(const ::java::lang::String & a0) const
        {
          env->setObjectField(this$, fids$[fid__text], a0.this$);
        }

        ::org::antlr::v4::runtime::Token Lexer::_get__token() const
        {
          return ::org::antlr::v4::runtime::Token(env->getObjectField(this$, fids$[fid__token]));
        }

        void Lexer::_set__token(const ::org::antlr::v4::runtime::Token & a0) const
        {
          env->setObjectField(this$, fids$[fid__token], a0.this$);
        }

        jint Lexer::_get__tokenStartCharIndex() const
        {
          return env->getIntField(this$, fids$[fid__tokenStartCharIndex]);
        }

        void Lexer::_set__tokenStartCharIndex(jint a0) const
        {
          env->setIntField(this$, fids$[fid__tokenStartCharIndex], a0);
        }

        jint Lexer::_get__tokenStartCharPositionInLine() const
        {
          return env->getIntField(this$, fids$[fid__tokenStartCharPositionInLine]);
        }

        void Lexer::_set__tokenStartCharPositionInLine(jint a0) const
        {
          env->setIntField(this$, fids$[fid__tokenStartCharPositionInLine], a0);
        }

        jint Lexer::_get__tokenStartLine() const
        {
          return env->getIntField(this$, fids$[fid__tokenStartLine]);
        }

        void Lexer::_set__tokenStartLine(jint a0) const
        {
          env->setIntField(this$, fids$[fid__tokenStartLine], a0);
        }

        jint Lexer::_get__type() const
        {
          return env->getIntField(this$, fids$[fid__type]);
        }

        void Lexer::_set__type(jint a0) const
        {
          env->setIntField(this$, fids$[fid__type], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        static PyObject *t_Lexer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Lexer_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Lexer_of_(t_Lexer *self, PyObject *args);
        static int t_Lexer_init_(t_Lexer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Lexer_emit(t_Lexer *self, PyObject *args);
        static PyObject *t_Lexer_emitEOF(t_Lexer *self);
        static PyObject *t_Lexer_getAllTokens(t_Lexer *self);
        static PyObject *t_Lexer_getChannel(t_Lexer *self);
        static PyObject *t_Lexer_getChannelNames(t_Lexer *self);
        static PyObject *t_Lexer_getCharErrorDisplay(t_Lexer *self, PyObject *arg);
        static PyObject *t_Lexer_getCharIndex(t_Lexer *self);
        static PyObject *t_Lexer_getCharPositionInLine(t_Lexer *self);
        static PyObject *t_Lexer_getErrorDisplay(t_Lexer *self, PyObject *args);
        static PyObject *t_Lexer_getInputStream(t_Lexer *self, PyObject *args);
        static PyObject *t_Lexer_getLine(t_Lexer *self);
        static PyObject *t_Lexer_getModeNames(t_Lexer *self);
        static PyObject *t_Lexer_getSourceName(t_Lexer *self);
        static PyObject *t_Lexer_getText(t_Lexer *self);
        static PyObject *t_Lexer_getToken(t_Lexer *self);
        static PyObject *t_Lexer_getTokenFactory(t_Lexer *self, PyObject *args);
        static PyObject *t_Lexer_getTokenNames(t_Lexer *self, PyObject *args);
        static PyObject *t_Lexer_getType(t_Lexer *self);
        static PyObject *t_Lexer_mode(t_Lexer *self, PyObject *arg);
        static PyObject *t_Lexer_more(t_Lexer *self);
        static PyObject *t_Lexer_nextToken(t_Lexer *self);
        static PyObject *t_Lexer_notifyListeners(t_Lexer *self, PyObject *arg);
        static PyObject *t_Lexer_popMode(t_Lexer *self);
        static PyObject *t_Lexer_pushMode(t_Lexer *self, PyObject *arg);
        static PyObject *t_Lexer_recover(t_Lexer *self, PyObject *args);
        static PyObject *t_Lexer_reset(t_Lexer *self);
        static PyObject *t_Lexer_setChannel(t_Lexer *self, PyObject *arg);
        static PyObject *t_Lexer_setCharPositionInLine(t_Lexer *self, PyObject *arg);
        static PyObject *t_Lexer_setInputStream(t_Lexer *self, PyObject *args);
        static PyObject *t_Lexer_setLine(t_Lexer *self, PyObject *arg);
        static PyObject *t_Lexer_setText(t_Lexer *self, PyObject *arg);
        static PyObject *t_Lexer_setToken(t_Lexer *self, PyObject *arg);
        static PyObject *t_Lexer_setTokenFactory(t_Lexer *self, PyObject *args);
        static PyObject *t_Lexer_setType(t_Lexer *self, PyObject *arg);
        static PyObject *t_Lexer_skip(t_Lexer *self);
        static PyObject *t_Lexer_get___channel(t_Lexer *self, void *data);
        static int t_Lexer_set___channel(t_Lexer *self, PyObject *arg, void *data);
        static PyObject *t_Lexer_get___hitEOF(t_Lexer *self, void *data);
        static int t_Lexer_set___hitEOF(t_Lexer *self, PyObject *arg, void *data);
        static PyObject *t_Lexer_get___input(t_Lexer *self, void *data);
        static int t_Lexer_set___input(t_Lexer *self, PyObject *arg, void *data);
        static PyObject *t_Lexer_get___mode(t_Lexer *self, void *data);
        static int t_Lexer_set___mode(t_Lexer *self, PyObject *arg, void *data);
        static PyObject *t_Lexer_get___text(t_Lexer *self, void *data);
        static int t_Lexer_set___text(t_Lexer *self, PyObject *arg, void *data);
        static PyObject *t_Lexer_get___token(t_Lexer *self, void *data);
        static int t_Lexer_set___token(t_Lexer *self, PyObject *arg, void *data);
        static PyObject *t_Lexer_get___tokenStartCharIndex(t_Lexer *self, void *data);
        static int t_Lexer_set___tokenStartCharIndex(t_Lexer *self, PyObject *arg, void *data);
        static PyObject *t_Lexer_get___tokenStartCharPositionInLine(t_Lexer *self, void *data);
        static int t_Lexer_set___tokenStartCharPositionInLine(t_Lexer *self, PyObject *arg, void *data);
        static PyObject *t_Lexer_get___tokenStartLine(t_Lexer *self, void *data);
        static int t_Lexer_set___tokenStartLine(t_Lexer *self, PyObject *arg, void *data);
        static PyObject *t_Lexer_get___type(t_Lexer *self, void *data);
        static int t_Lexer_set___type(t_Lexer *self, PyObject *arg, void *data);

        static PyObject *t_Lexer_get__allTokens(t_Lexer *self, void *data);
        static PyObject *t_Lexer_get__channel(t_Lexer *self, void *data);
        static int t_Lexer_set__channel(t_Lexer *self, PyObject *arg, void *data);
        static PyObject *t_Lexer_get__channelNames(t_Lexer *self, void *data);
        static PyObject *t_Lexer_get__charIndex(t_Lexer *self, void *data);
        static PyObject *t_Lexer_get__charPositionInLine(t_Lexer *self, void *data);
        static int t_Lexer_set__charPositionInLine(t_Lexer *self, PyObject *arg, void *data);
        static PyObject *t_Lexer_get__inputStream(t_Lexer *self, void *data);
        static int t_Lexer_set__inputStream(t_Lexer *self, PyObject *arg, void *data);
        static PyObject *t_Lexer_get__line(t_Lexer *self, void *data);
        static int t_Lexer_set__line(t_Lexer *self, PyObject *arg, void *data);
        static PyObject *t_Lexer_get__modeNames(t_Lexer *self, void *data);
        static PyObject *t_Lexer_get__sourceName(t_Lexer *self, void *data);
        static PyObject *t_Lexer_get__text(t_Lexer *self, void *data);
        static int t_Lexer_set__text(t_Lexer *self, PyObject *arg, void *data);
        static PyObject *t_Lexer_get__token(t_Lexer *self, void *data);
        static int t_Lexer_set__token(t_Lexer *self, PyObject *arg, void *data);
        static PyObject *t_Lexer_get__tokenFactory(t_Lexer *self, void *data);
        static int t_Lexer_set__tokenFactory(t_Lexer *self, PyObject *arg, void *data);
        static PyObject *t_Lexer_get__tokenNames(t_Lexer *self, void *data);
        static PyObject *t_Lexer_get__type(t_Lexer *self, void *data);
        static int t_Lexer_set__type(t_Lexer *self, PyObject *arg, void *data);
        static PyObject *t_Lexer_get__parameters_(t_Lexer *self, void *data);
        static PyGetSetDef t_Lexer__fields_[] = {
          DECLARE_GETSET_FIELD(t_Lexer, _channel),
          DECLARE_GETSET_FIELD(t_Lexer, _hitEOF),
          DECLARE_GETSET_FIELD(t_Lexer, _input),
          DECLARE_GETSET_FIELD(t_Lexer, _mode),
          DECLARE_GETSET_FIELD(t_Lexer, _text),
          DECLARE_GETSET_FIELD(t_Lexer, _token),
          DECLARE_GETSET_FIELD(t_Lexer, _tokenStartCharIndex),
          DECLARE_GETSET_FIELD(t_Lexer, _tokenStartCharPositionInLine),
          DECLARE_GETSET_FIELD(t_Lexer, _tokenStartLine),
          DECLARE_GETSET_FIELD(t_Lexer, _type),
          DECLARE_GET_FIELD(t_Lexer, allTokens),
          DECLARE_GETSET_FIELD(t_Lexer, channel),
          DECLARE_GET_FIELD(t_Lexer, channelNames),
          DECLARE_GET_FIELD(t_Lexer, charIndex),
          DECLARE_GETSET_FIELD(t_Lexer, charPositionInLine),
          DECLARE_GETSET_FIELD(t_Lexer, inputStream),
          DECLARE_GETSET_FIELD(t_Lexer, line),
          DECLARE_GET_FIELD(t_Lexer, modeNames),
          DECLARE_GET_FIELD(t_Lexer, sourceName),
          DECLARE_GETSET_FIELD(t_Lexer, text),
          DECLARE_GETSET_FIELD(t_Lexer, token),
          DECLARE_GETSET_FIELD(t_Lexer, tokenFactory),
          DECLARE_GET_FIELD(t_Lexer, tokenNames),
          DECLARE_GETSET_FIELD(t_Lexer, type),
          DECLARE_GET_FIELD(t_Lexer, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Lexer__methods_[] = {
          DECLARE_METHOD(t_Lexer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Lexer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Lexer, of_, METH_VARARGS),
          DECLARE_METHOD(t_Lexer, emit, METH_VARARGS),
          DECLARE_METHOD(t_Lexer, emitEOF, METH_NOARGS),
          DECLARE_METHOD(t_Lexer, getAllTokens, METH_NOARGS),
          DECLARE_METHOD(t_Lexer, getChannel, METH_NOARGS),
          DECLARE_METHOD(t_Lexer, getChannelNames, METH_NOARGS),
          DECLARE_METHOD(t_Lexer, getCharErrorDisplay, METH_O),
          DECLARE_METHOD(t_Lexer, getCharIndex, METH_NOARGS),
          DECLARE_METHOD(t_Lexer, getCharPositionInLine, METH_NOARGS),
          DECLARE_METHOD(t_Lexer, getErrorDisplay, METH_VARARGS),
          DECLARE_METHOD(t_Lexer, getInputStream, METH_VARARGS),
          DECLARE_METHOD(t_Lexer, getLine, METH_NOARGS),
          DECLARE_METHOD(t_Lexer, getModeNames, METH_NOARGS),
          DECLARE_METHOD(t_Lexer, getSourceName, METH_NOARGS),
          DECLARE_METHOD(t_Lexer, getText, METH_NOARGS),
          DECLARE_METHOD(t_Lexer, getToken, METH_NOARGS),
          DECLARE_METHOD(t_Lexer, getTokenFactory, METH_VARARGS),
          DECLARE_METHOD(t_Lexer, getTokenNames, METH_VARARGS),
          DECLARE_METHOD(t_Lexer, getType, METH_NOARGS),
          DECLARE_METHOD(t_Lexer, mode, METH_O),
          DECLARE_METHOD(t_Lexer, more, METH_NOARGS),
          DECLARE_METHOD(t_Lexer, nextToken, METH_NOARGS),
          DECLARE_METHOD(t_Lexer, notifyListeners, METH_O),
          DECLARE_METHOD(t_Lexer, popMode, METH_NOARGS),
          DECLARE_METHOD(t_Lexer, pushMode, METH_O),
          DECLARE_METHOD(t_Lexer, recover, METH_VARARGS),
          DECLARE_METHOD(t_Lexer, reset, METH_NOARGS),
          DECLARE_METHOD(t_Lexer, setChannel, METH_O),
          DECLARE_METHOD(t_Lexer, setCharPositionInLine, METH_O),
          DECLARE_METHOD(t_Lexer, setInputStream, METH_VARARGS),
          DECLARE_METHOD(t_Lexer, setLine, METH_O),
          DECLARE_METHOD(t_Lexer, setText, METH_O),
          DECLARE_METHOD(t_Lexer, setToken, METH_O),
          DECLARE_METHOD(t_Lexer, setTokenFactory, METH_VARARGS),
          DECLARE_METHOD(t_Lexer, setType, METH_O),
          DECLARE_METHOD(t_Lexer, skip, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Lexer)[] = {
          { Py_tp_methods, t_Lexer__methods_ },
          { Py_tp_init, (void *) t_Lexer_init_ },
          { Py_tp_getset, t_Lexer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Lexer)[] = {
          &PY_TYPE_DEF(::org::antlr::v4::runtime::Recognizer),
          NULL
        };

        DEFINE_TYPE(Lexer, t_Lexer, Lexer);
        PyObject *t_Lexer::wrap_Object(const Lexer& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_Lexer::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Lexer *self = (t_Lexer *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_Lexer::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_Lexer::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Lexer *self = (t_Lexer *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_Lexer::install(PyObject *module)
        {
          installType(&PY_TYPE(Lexer), &PY_TYPE_DEF(Lexer), module, "Lexer", 0);
        }

        void t_Lexer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Lexer), "class_", make_descriptor(Lexer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Lexer), "wrapfn_", make_descriptor(t_Lexer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Lexer), "boxfn_", make_descriptor(boxObject));
          env->getClass(Lexer::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Lexer), "DEFAULT_MODE", make_descriptor(Lexer::DEFAULT_MODE));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Lexer), "DEFAULT_TOKEN_CHANNEL", make_descriptor(Lexer::DEFAULT_TOKEN_CHANNEL));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Lexer), "HIDDEN", make_descriptor(Lexer::HIDDEN));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Lexer), "MAX_CHAR_VALUE", make_descriptor(Lexer::MAX_CHAR_VALUE));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Lexer), "MIN_CHAR_VALUE", make_descriptor(Lexer::MIN_CHAR_VALUE));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Lexer), "MORE", make_descriptor(Lexer::MORE));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Lexer), "SKIP", make_descriptor(Lexer::SKIP));
        }

        static PyObject *t_Lexer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Lexer::initializeClass, 1)))
            return NULL;
          return t_Lexer::wrap_Object(Lexer(((t_Lexer *) arg)->object.this$));
        }
        static PyObject *t_Lexer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Lexer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Lexer_of_(t_Lexer *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_Lexer_init_(t_Lexer *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              Lexer object((jobject) NULL);

              INT_CALL(object = Lexer());
              self->object = object;
              self->parameters[0] = ::java::lang::PY_TYPE(Integer);
              self->parameters[1] = ::org::antlr::v4::runtime::atn::PY_TYPE(LexerATNSimulator);
              break;
            }
           case 1:
            {
              ::org::antlr::v4::runtime::CharStream a0((jobject) NULL);
              Lexer object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::antlr::v4::runtime::CharStream::initializeClass, &a0))
              {
                INT_CALL(object = Lexer(a0));
                self->object = object;
                self->parameters[0] = ::java::lang::PY_TYPE(Integer);
                self->parameters[1] = ::org::antlr::v4::runtime::atn::PY_TYPE(LexerATNSimulator);
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Lexer_emit(t_Lexer *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::antlr::v4::runtime::Token result((jobject) NULL);
              OBJ_CALL(result = self->object.emit());
              return ::org::antlr::v4::runtime::t_Token::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::antlr::v4::runtime::Token a0((jobject) NULL);

              if (!parseArgs(args, "k", ::org::antlr::v4::runtime::Token::initializeClass, &a0))
              {
                OBJ_CALL(self->object.emit(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "emit", args);
          return NULL;
        }

        static PyObject *t_Lexer_emitEOF(t_Lexer *self)
        {
          ::org::antlr::v4::runtime::Token result((jobject) NULL);
          OBJ_CALL(result = self->object.emitEOF());
          return ::org::antlr::v4::runtime::t_Token::wrap_Object(result);
        }

        static PyObject *t_Lexer_getAllTokens(t_Lexer *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAllTokens());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_Lexer_getChannel(t_Lexer *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getChannel());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Lexer_getChannelNames(t_Lexer *self)
        {
          JArray< ::java::lang::String > result((jobject) NULL);
          OBJ_CALL(result = self->object.getChannelNames());
          return JArray<jstring>(result.this$).wrap();
        }

        static PyObject *t_Lexer_getCharErrorDisplay(t_Lexer *self, PyObject *arg)
        {
          jint a0;
          ::java::lang::String result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getCharErrorDisplay(a0));
            return j2p(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getCharErrorDisplay", arg);
          return NULL;
        }

        static PyObject *t_Lexer_getCharIndex(t_Lexer *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCharIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Lexer_getCharPositionInLine(t_Lexer *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCharPositionInLine());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Lexer_getErrorDisplay(t_Lexer *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = self->object.getErrorDisplay(a0));
                return j2p(result);
              }
            }
            {
              jint a0;
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.getErrorDisplay(a0));
                return j2p(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getErrorDisplay", args);
          return NULL;
        }

        static PyObject *t_Lexer_getInputStream(t_Lexer *self, PyObject *args)
        {
          ::org::antlr::v4::runtime::CharStream result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getInputStream());
            return ::org::antlr::v4::runtime::t_CharStream::wrap_Object(result);
          }

          return callSuper(PY_TYPE(Lexer), (PyObject *) self, "getInputStream", args, 2);
        }

        static PyObject *t_Lexer_getLine(t_Lexer *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getLine());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Lexer_getModeNames(t_Lexer *self)
        {
          JArray< ::java::lang::String > result((jobject) NULL);
          OBJ_CALL(result = self->object.getModeNames());
          return JArray<jstring>(result.this$).wrap();
        }

        static PyObject *t_Lexer_getSourceName(t_Lexer *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSourceName());
          return j2p(result);
        }

        static PyObject *t_Lexer_getText(t_Lexer *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getText());
          return j2p(result);
        }

        static PyObject *t_Lexer_getToken(t_Lexer *self)
        {
          ::org::antlr::v4::runtime::Token result((jobject) NULL);
          OBJ_CALL(result = self->object.getToken());
          return ::org::antlr::v4::runtime::t_Token::wrap_Object(result);
        }

        static PyObject *t_Lexer_getTokenFactory(t_Lexer *self, PyObject *args)
        {
          ::org::antlr::v4::runtime::TokenFactory result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getTokenFactory());
            return ::org::antlr::v4::runtime::t_TokenFactory::wrap_Object(result);
          }

          return callSuper(PY_TYPE(Lexer), (PyObject *) self, "getTokenFactory", args, 2);
        }

        static PyObject *t_Lexer_getTokenNames(t_Lexer *self, PyObject *args)
        {
          JArray< ::java::lang::String > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getTokenNames());
            return JArray<jstring>(result.this$).wrap();
          }

          return callSuper(PY_TYPE(Lexer), (PyObject *) self, "getTokenNames", args, 2);
        }

        static PyObject *t_Lexer_getType(t_Lexer *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getType());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Lexer_mode(t_Lexer *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.mode(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "mode", arg);
          return NULL;
        }

        static PyObject *t_Lexer_more(t_Lexer *self)
        {
          OBJ_CALL(self->object.more());
          Py_RETURN_NONE;
        }

        static PyObject *t_Lexer_nextToken(t_Lexer *self)
        {
          ::org::antlr::v4::runtime::Token result((jobject) NULL);
          OBJ_CALL(result = self->object.nextToken());
          return ::org::antlr::v4::runtime::t_Token::wrap_Object(result);
        }

        static PyObject *t_Lexer_notifyListeners(t_Lexer *self, PyObject *arg)
        {
          ::org::antlr::v4::runtime::LexerNoViableAltException a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::antlr::v4::runtime::LexerNoViableAltException::initializeClass, &a0))
          {
            OBJ_CALL(self->object.notifyListeners(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "notifyListeners", arg);
          return NULL;
        }

        static PyObject *t_Lexer_popMode(t_Lexer *self)
        {
          jint result;
          OBJ_CALL(result = self->object.popMode());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Lexer_pushMode(t_Lexer *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.pushMode(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "pushMode", arg);
          return NULL;
        }

        static PyObject *t_Lexer_recover(t_Lexer *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::antlr::v4::runtime::LexerNoViableAltException a0((jobject) NULL);

              if (!parseArgs(args, "k", ::org::antlr::v4::runtime::LexerNoViableAltException::initializeClass, &a0))
              {
                OBJ_CALL(self->object.recover(a0));
                Py_RETURN_NONE;
              }
            }
            {
              ::org::antlr::v4::runtime::RecognitionException a0((jobject) NULL);

              if (!parseArgs(args, "k", ::org::antlr::v4::runtime::RecognitionException::initializeClass, &a0))
              {
                OBJ_CALL(self->object.recover(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "recover", args);
          return NULL;
        }

        static PyObject *t_Lexer_reset(t_Lexer *self)
        {
          OBJ_CALL(self->object.reset());
          Py_RETURN_NONE;
        }

        static PyObject *t_Lexer_setChannel(t_Lexer *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setChannel(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setChannel", arg);
          return NULL;
        }

        static PyObject *t_Lexer_setCharPositionInLine(t_Lexer *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setCharPositionInLine(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setCharPositionInLine", arg);
          return NULL;
        }

        static PyObject *t_Lexer_setInputStream(t_Lexer *self, PyObject *args)
        {
          ::org::antlr::v4::runtime::IntStream a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::antlr::v4::runtime::IntStream::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setInputStream(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(Lexer), (PyObject *) self, "setInputStream", args, 2);
        }

        static PyObject *t_Lexer_setLine(t_Lexer *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setLine(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setLine", arg);
          return NULL;
        }

        static PyObject *t_Lexer_setText(t_Lexer *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setText(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setText", arg);
          return NULL;
        }

        static PyObject *t_Lexer_setToken(t_Lexer *self, PyObject *arg)
        {
          ::org::antlr::v4::runtime::Token a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::antlr::v4::runtime::Token::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setToken(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setToken", arg);
          return NULL;
        }

        static PyObject *t_Lexer_setTokenFactory(t_Lexer *self, PyObject *args)
        {
          ::org::antlr::v4::runtime::TokenFactory a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "K", ::org::antlr::v4::runtime::TokenFactory::initializeClass, &a0, &p0, ::org::antlr::v4::runtime::t_TokenFactory::parameters_))
          {
            OBJ_CALL(self->object.setTokenFactory(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(Lexer), (PyObject *) self, "setTokenFactory", args, 2);
        }

        static PyObject *t_Lexer_setType(t_Lexer *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setType", arg);
          return NULL;
        }

        static PyObject *t_Lexer_skip(t_Lexer *self)
        {
          OBJ_CALL(self->object.skip());
          Py_RETURN_NONE;
        }
        static PyObject *t_Lexer_get__parameters_(t_Lexer *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_Lexer_get___channel(t_Lexer *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object._get__channel());
          return PyLong_FromLong((long) value);
        }
        static int t_Lexer_set___channel(t_Lexer *self, PyObject *arg, void *data)
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object._set__channel(value));
            return 0;
          }
          PyErr_SetArgsError((PyObject *) self, "_channel", arg);
          return -1;
        }

        static PyObject *t_Lexer_get___hitEOF(t_Lexer *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object._get__hitEOF());
          Py_RETURN_BOOL(value);
        }
        static int t_Lexer_set___hitEOF(t_Lexer *self, PyObject *arg, void *data)
        {
          jboolean value;
          if (!parseArg(arg, "Z", &value))
          {
            INT_CALL(self->object._set__hitEOF(value));
            return 0;
          }
          PyErr_SetArgsError((PyObject *) self, "_hitEOF", arg);
          return -1;
        }

        static PyObject *t_Lexer_get___input(t_Lexer *self, void *data)
        {
          ::org::antlr::v4::runtime::CharStream value((jobject) NULL);
          OBJ_CALL(value = self->object._get__input());
          return ::org::antlr::v4::runtime::t_CharStream::wrap_Object(value);
        }
        static int t_Lexer_set___input(t_Lexer *self, PyObject *arg, void *data)
        {
          ::org::antlr::v4::runtime::CharStream value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::antlr::v4::runtime::CharStream::initializeClass, &value))
          {
            INT_CALL(self->object._set__input(value));
            return 0;
          }
          PyErr_SetArgsError((PyObject *) self, "_input", arg);
          return -1;
        }

        static PyObject *t_Lexer_get___mode(t_Lexer *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object._get__mode());
          return PyLong_FromLong((long) value);
        }
        static int t_Lexer_set___mode(t_Lexer *self, PyObject *arg, void *data)
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object._set__mode(value));
            return 0;
          }
          PyErr_SetArgsError((PyObject *) self, "_mode", arg);
          return -1;
        }

        static PyObject *t_Lexer_get___text(t_Lexer *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object._get__text());
          return j2p(value);
        }
        static int t_Lexer_set___text(t_Lexer *self, PyObject *arg, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          if (!parseArg(arg, "s", &value))
          {
            INT_CALL(self->object._set__text(value));
            return 0;
          }
          PyErr_SetArgsError((PyObject *) self, "_text", arg);
          return -1;
        }

        static PyObject *t_Lexer_get___token(t_Lexer *self, void *data)
        {
          ::org::antlr::v4::runtime::Token value((jobject) NULL);
          OBJ_CALL(value = self->object._get__token());
          return ::org::antlr::v4::runtime::t_Token::wrap_Object(value);
        }
        static int t_Lexer_set___token(t_Lexer *self, PyObject *arg, void *data)
        {
          ::org::antlr::v4::runtime::Token value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::antlr::v4::runtime::Token::initializeClass, &value))
          {
            INT_CALL(self->object._set__token(value));
            return 0;
          }
          PyErr_SetArgsError((PyObject *) self, "_token", arg);
          return -1;
        }

        static PyObject *t_Lexer_get___tokenStartCharIndex(t_Lexer *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object._get__tokenStartCharIndex());
          return PyLong_FromLong((long) value);
        }
        static int t_Lexer_set___tokenStartCharIndex(t_Lexer *self, PyObject *arg, void *data)
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object._set__tokenStartCharIndex(value));
            return 0;
          }
          PyErr_SetArgsError((PyObject *) self, "_tokenStartCharIndex", arg);
          return -1;
        }

        static PyObject *t_Lexer_get___tokenStartCharPositionInLine(t_Lexer *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object._get__tokenStartCharPositionInLine());
          return PyLong_FromLong((long) value);
        }
        static int t_Lexer_set___tokenStartCharPositionInLine(t_Lexer *self, PyObject *arg, void *data)
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object._set__tokenStartCharPositionInLine(value));
            return 0;
          }
          PyErr_SetArgsError((PyObject *) self, "_tokenStartCharPositionInLine", arg);
          return -1;
        }

        static PyObject *t_Lexer_get___tokenStartLine(t_Lexer *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object._get__tokenStartLine());
          return PyLong_FromLong((long) value);
        }
        static int t_Lexer_set___tokenStartLine(t_Lexer *self, PyObject *arg, void *data)
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object._set__tokenStartLine(value));
            return 0;
          }
          PyErr_SetArgsError((PyObject *) self, "_tokenStartLine", arg);
          return -1;
        }

        static PyObject *t_Lexer_get___type(t_Lexer *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object._get__type());
          return PyLong_FromLong((long) value);
        }
        static int t_Lexer_set___type(t_Lexer *self, PyObject *arg, void *data)
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object._set__type(value));
            return 0;
          }
          PyErr_SetArgsError((PyObject *) self, "_type", arg);
          return -1;
        }

        static PyObject *t_Lexer_get__allTokens(t_Lexer *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAllTokens());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_Lexer_get__channel(t_Lexer *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getChannel());
          return PyLong_FromLong((long) value);
        }
        static int t_Lexer_set__channel(t_Lexer *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setChannel(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "channel", arg);
          return -1;
        }

        static PyObject *t_Lexer_get__channelNames(t_Lexer *self, void *data)
        {
          JArray< ::java::lang::String > value((jobject) NULL);
          OBJ_CALL(value = self->object.getChannelNames());
          return JArray<jstring>(value.this$).wrap();
        }

        static PyObject *t_Lexer_get__charIndex(t_Lexer *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCharIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Lexer_get__charPositionInLine(t_Lexer *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCharPositionInLine());
          return PyLong_FromLong((long) value);
        }
        static int t_Lexer_set__charPositionInLine(t_Lexer *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setCharPositionInLine(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "charPositionInLine", arg);
          return -1;
        }

        static PyObject *t_Lexer_get__inputStream(t_Lexer *self, void *data)
        {
          ::org::antlr::v4::runtime::CharStream value((jobject) NULL);
          OBJ_CALL(value = self->object.getInputStream());
          return ::org::antlr::v4::runtime::t_CharStream::wrap_Object(value);
        }
        static int t_Lexer_set__inputStream(t_Lexer *self, PyObject *arg, void *data)
        {
          {
            ::org::antlr::v4::runtime::IntStream value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::antlr::v4::runtime::IntStream::initializeClass, &value))
            {
              INT_CALL(self->object.setInputStream(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "inputStream", arg);
          return -1;
        }

        static PyObject *t_Lexer_get__line(t_Lexer *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getLine());
          return PyLong_FromLong((long) value);
        }
        static int t_Lexer_set__line(t_Lexer *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setLine(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "line", arg);
          return -1;
        }

        static PyObject *t_Lexer_get__modeNames(t_Lexer *self, void *data)
        {
          JArray< ::java::lang::String > value((jobject) NULL);
          OBJ_CALL(value = self->object.getModeNames());
          return JArray<jstring>(value.this$).wrap();
        }

        static PyObject *t_Lexer_get__sourceName(t_Lexer *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSourceName());
          return j2p(value);
        }

        static PyObject *t_Lexer_get__text(t_Lexer *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getText());
          return j2p(value);
        }
        static int t_Lexer_set__text(t_Lexer *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setText(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "text", arg);
          return -1;
        }

        static PyObject *t_Lexer_get__token(t_Lexer *self, void *data)
        {
          ::org::antlr::v4::runtime::Token value((jobject) NULL);
          OBJ_CALL(value = self->object.getToken());
          return ::org::antlr::v4::runtime::t_Token::wrap_Object(value);
        }
        static int t_Lexer_set__token(t_Lexer *self, PyObject *arg, void *data)
        {
          {
            ::org::antlr::v4::runtime::Token value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::antlr::v4::runtime::Token::initializeClass, &value))
            {
              INT_CALL(self->object.setToken(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "token", arg);
          return -1;
        }

        static PyObject *t_Lexer_get__tokenFactory(t_Lexer *self, void *data)
        {
          ::org::antlr::v4::runtime::TokenFactory value((jobject) NULL);
          OBJ_CALL(value = self->object.getTokenFactory());
          return ::org::antlr::v4::runtime::t_TokenFactory::wrap_Object(value);
        }
        static int t_Lexer_set__tokenFactory(t_Lexer *self, PyObject *arg, void *data)
        {
          {
            ::org::antlr::v4::runtime::TokenFactory value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::antlr::v4::runtime::TokenFactory::initializeClass, &value))
            {
              INT_CALL(self->object.setTokenFactory(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "tokenFactory", arg);
          return -1;
        }

        static PyObject *t_Lexer_get__tokenNames(t_Lexer *self, void *data)
        {
          JArray< ::java::lang::String > value((jobject) NULL);
          OBJ_CALL(value = self->object.getTokenNames());
          return JArray<jstring>(value.this$).wrap();
        }

        static PyObject *t_Lexer_get__type(t_Lexer *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getType());
          return PyLong_FromLong((long) value);
        }
        static int t_Lexer_set__type(t_Lexer *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "type", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/antlr/v4/runtime/atn/ContextSensitivityInfo.h"
#include "org/antlr/v4/runtime/atn/ATNConfigSet.h"
#include "org/antlr/v4/runtime/TokenStream.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          ::java::lang::Class *ContextSensitivityInfo::class$ = NULL;
          jmethodID *ContextSensitivityInfo::mids$ = NULL;
          bool ContextSensitivityInfo::live$ = false;

          jclass ContextSensitivityInfo::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/antlr/v4/runtime/atn/ContextSensitivityInfo");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b229e29cbabeba75] = env->getMethodID(cls, "<init>", "(ILorg/antlr/v4/runtime/atn/ATNConfigSet;Lorg/antlr/v4/runtime/TokenStream;II)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ContextSensitivityInfo::ContextSensitivityInfo(jint a0, const ::org::antlr::v4::runtime::atn::ATNConfigSet & a1, const ::org::antlr::v4::runtime::TokenStream & a2, jint a3, jint a4) : ::org::antlr::v4::runtime::atn::DecisionEventInfo(env->newObject(initializeClass, &mids$, mid_init$_b229e29cbabeba75, a0, a1.this$, a2.this$, a3, a4)) {}
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          static PyObject *t_ContextSensitivityInfo_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ContextSensitivityInfo_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ContextSensitivityInfo_init_(t_ContextSensitivityInfo *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_ContextSensitivityInfo__methods_[] = {
            DECLARE_METHOD(t_ContextSensitivityInfo, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ContextSensitivityInfo, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ContextSensitivityInfo)[] = {
            { Py_tp_methods, t_ContextSensitivityInfo__methods_ },
            { Py_tp_init, (void *) t_ContextSensitivityInfo_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ContextSensitivityInfo)[] = {
            &PY_TYPE_DEF(::org::antlr::v4::runtime::atn::DecisionEventInfo),
            NULL
          };

          DEFINE_TYPE(ContextSensitivityInfo, t_ContextSensitivityInfo, ContextSensitivityInfo);

          void t_ContextSensitivityInfo::install(PyObject *module)
          {
            installType(&PY_TYPE(ContextSensitivityInfo), &PY_TYPE_DEF(ContextSensitivityInfo), module, "ContextSensitivityInfo", 0);
          }

          void t_ContextSensitivityInfo::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContextSensitivityInfo), "class_", make_descriptor(ContextSensitivityInfo::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContextSensitivityInfo), "wrapfn_", make_descriptor(t_ContextSensitivityInfo::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ContextSensitivityInfo), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ContextSensitivityInfo_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ContextSensitivityInfo::initializeClass, 1)))
              return NULL;
            return t_ContextSensitivityInfo::wrap_Object(ContextSensitivityInfo(((t_ContextSensitivityInfo *) arg)->object.this$));
          }
          static PyObject *t_ContextSensitivityInfo_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ContextSensitivityInfo::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ContextSensitivityInfo_init_(t_ContextSensitivityInfo *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            ::org::antlr::v4::runtime::atn::ATNConfigSet a1((jobject) NULL);
            ::org::antlr::v4::runtime::TokenStream a2((jobject) NULL);
            jint a3;
            jint a4;
            ContextSensitivityInfo object((jobject) NULL);

            if (!parseArgs(args, "IkkII", ::org::antlr::v4::runtime::atn::ATNConfigSet::initializeClass, ::org::antlr::v4::runtime::TokenStream::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = ContextSensitivityInfo(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/antlr/v4/runtime/atn/ATNConfigSet$AbstractConfigHashSet.h"
#include "org/antlr/v4/runtime/atn/ATNConfig.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          ::java::lang::Class *ATNConfigSet$AbstractConfigHashSet::class$ = NULL;
          jmethodID *ATNConfigSet$AbstractConfigHashSet::mids$ = NULL;
          bool ATNConfigSet$AbstractConfigHashSet::live$ = false;

          jclass ATNConfigSet$AbstractConfigHashSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/antlr/v4/runtime/atn/ATNConfigSet$AbstractConfigHashSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_asElementType_885db5265b891cd1] = env->getMethodID(cls, "asElementType", "(Ljava/lang/Object;)Lorg/antlr/v4/runtime/atn/ATNConfig;");
              mids$[mid_createBuckets_d3d9a773a074f41b] = env->getMethodID(cls, "createBuckets", "(I)[[Lorg/antlr/v4/runtime/atn/ATNConfig;");
              mids$[mid_createBucket_74a4f0089206237c] = env->getMethodID(cls, "createBucket", "(I)[Lorg/antlr/v4/runtime/atn/ATNConfig;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          static PyObject *t_ATNConfigSet$AbstractConfigHashSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ATNConfigSet$AbstractConfigHashSet_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ATNConfigSet$AbstractConfigHashSet_of_(t_ATNConfigSet$AbstractConfigHashSet *self, PyObject *args);
          static PyObject *t_ATNConfigSet$AbstractConfigHashSet_get__parameters_(t_ATNConfigSet$AbstractConfigHashSet *self, void *data);
          static PyGetSetDef t_ATNConfigSet$AbstractConfigHashSet__fields_[] = {
            DECLARE_GET_FIELD(t_ATNConfigSet$AbstractConfigHashSet, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ATNConfigSet$AbstractConfigHashSet__methods_[] = {
            DECLARE_METHOD(t_ATNConfigSet$AbstractConfigHashSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ATNConfigSet$AbstractConfigHashSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ATNConfigSet$AbstractConfigHashSet, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ATNConfigSet$AbstractConfigHashSet)[] = {
            { Py_tp_methods, t_ATNConfigSet$AbstractConfigHashSet__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_ATNConfigSet$AbstractConfigHashSet__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ATNConfigSet$AbstractConfigHashSet)[] = {
            &PY_TYPE_DEF(::org::antlr::v4::runtime::misc::Array2DHashSet),
            NULL
          };

          DEFINE_TYPE(ATNConfigSet$AbstractConfigHashSet, t_ATNConfigSet$AbstractConfigHashSet, ATNConfigSet$AbstractConfigHashSet);
          PyObject *t_ATNConfigSet$AbstractConfigHashSet::wrap_Object(const ATNConfigSet$AbstractConfigHashSet& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ATNConfigSet$AbstractConfigHashSet::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ATNConfigSet$AbstractConfigHashSet *self = (t_ATNConfigSet$AbstractConfigHashSet *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_ATNConfigSet$AbstractConfigHashSet::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ATNConfigSet$AbstractConfigHashSet::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ATNConfigSet$AbstractConfigHashSet *self = (t_ATNConfigSet$AbstractConfigHashSet *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_ATNConfigSet$AbstractConfigHashSet::install(PyObject *module)
          {
            installType(&PY_TYPE(ATNConfigSet$AbstractConfigHashSet), &PY_TYPE_DEF(ATNConfigSet$AbstractConfigHashSet), module, "ATNConfigSet$AbstractConfigHashSet", 0);
          }

          void t_ATNConfigSet$AbstractConfigHashSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ATNConfigSet$AbstractConfigHashSet), "class_", make_descriptor(ATNConfigSet$AbstractConfigHashSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ATNConfigSet$AbstractConfigHashSet), "wrapfn_", make_descriptor(t_ATNConfigSet$AbstractConfigHashSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ATNConfigSet$AbstractConfigHashSet), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ATNConfigSet$AbstractConfigHashSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ATNConfigSet$AbstractConfigHashSet::initializeClass, 1)))
              return NULL;
            return t_ATNConfigSet$AbstractConfigHashSet::wrap_Object(ATNConfigSet$AbstractConfigHashSet(((t_ATNConfigSet$AbstractConfigHashSet *) arg)->object.this$));
          }
          static PyObject *t_ATNConfigSet$AbstractConfigHashSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ATNConfigSet$AbstractConfigHashSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ATNConfigSet$AbstractConfigHashSet_of_(t_ATNConfigSet$AbstractConfigHashSet *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }
          static PyObject *t_ATNConfigSet$AbstractConfigHashSet_get__parameters_(t_ATNConfigSet$AbstractConfigHashSet *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/antlr/v4/runtime/LexerNoViableAltException.h"
#include "org/antlr/v4/runtime/CharStream.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/antlr/v4/runtime/atn/ATNConfigSet.h"
#include "org/antlr/v4/runtime/Lexer.h"
#include "JArray.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {

        ::java::lang::Class *LexerNoViableAltException::class$ = NULL;
        jmethodID *LexerNoViableAltException::mids$ = NULL;
        bool LexerNoViableAltException::live$ = false;

        jclass LexerNoViableAltException::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/antlr/v4/runtime/LexerNoViableAltException");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_12ff470fd131a0d9] = env->getMethodID(cls, "<init>", "(Lorg/antlr/v4/runtime/Lexer;Lorg/antlr/v4/runtime/CharStream;ILorg/antlr/v4/runtime/atn/ATNConfigSet;)V");
            mids$[mid_getDeadEndConfigs_c7ac6b3f4d432cfe] = env->getMethodID(cls, "getDeadEndConfigs", "()Lorg/antlr/v4/runtime/atn/ATNConfigSet;");
            mids$[mid_getInputStream_b461eccf8f9c2fcc] = env->getMethodID(cls, "getInputStream", "()Lorg/antlr/v4/runtime/CharStream;");
            mids$[mid_getStartIndex_20fbf7565993c3d7] = env->getMethodID(cls, "getStartIndex", "()I");
            mids$[mid_toString_09a7afff1868fc5e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LexerNoViableAltException::LexerNoViableAltException(const ::org::antlr::v4::runtime::Lexer & a0, const ::org::antlr::v4::runtime::CharStream & a1, jint a2, const ::org::antlr::v4::runtime::atn::ATNConfigSet & a3) : ::org::antlr::v4::runtime::RecognitionException(env->newObject(initializeClass, &mids$, mid_init$_12ff470fd131a0d9, a0.this$, a1.this$, a2, a3.this$)) {}

        ::org::antlr::v4::runtime::atn::ATNConfigSet LexerNoViableAltException::getDeadEndConfigs() const
        {
          return ::org::antlr::v4::runtime::atn::ATNConfigSet(env->callObjectMethod(this$, mids$[mid_getDeadEndConfigs_c7ac6b3f4d432cfe]));
        }

        ::org::antlr::v4::runtime::CharStream LexerNoViableAltException::getInputStream() const
        {
          return ::org::antlr::v4::runtime::CharStream(env->callObjectMethod(this$, mids$[mid_getInputStream_b461eccf8f9c2fcc]));
        }

        jint LexerNoViableAltException::getStartIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getStartIndex_20fbf7565993c3d7]);
        }

        ::java::lang::String LexerNoViableAltException::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_09a7afff1868fc5e]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        static PyObject *t_LexerNoViableAltException_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LexerNoViableAltException_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LexerNoViableAltException_init_(t_LexerNoViableAltException *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LexerNoViableAltException_getDeadEndConfigs(t_LexerNoViableAltException *self);
        static PyObject *t_LexerNoViableAltException_getInputStream(t_LexerNoViableAltException *self, PyObject *args);
        static PyObject *t_LexerNoViableAltException_getStartIndex(t_LexerNoViableAltException *self);
        static PyObject *t_LexerNoViableAltException_toString(t_LexerNoViableAltException *self, PyObject *args);
        static PyObject *t_LexerNoViableAltException_get__deadEndConfigs(t_LexerNoViableAltException *self, void *data);
        static PyObject *t_LexerNoViableAltException_get__inputStream(t_LexerNoViableAltException *self, void *data);
        static PyObject *t_LexerNoViableAltException_get__startIndex(t_LexerNoViableAltException *self, void *data);
        static PyGetSetDef t_LexerNoViableAltException__fields_[] = {
          DECLARE_GET_FIELD(t_LexerNoViableAltException, deadEndConfigs),
          DECLARE_GET_FIELD(t_LexerNoViableAltException, inputStream),
          DECLARE_GET_FIELD(t_LexerNoViableAltException, startIndex),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LexerNoViableAltException__methods_[] = {
          DECLARE_METHOD(t_LexerNoViableAltException, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LexerNoViableAltException, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LexerNoViableAltException, getDeadEndConfigs, METH_NOARGS),
          DECLARE_METHOD(t_LexerNoViableAltException, getInputStream, METH_VARARGS),
          DECLARE_METHOD(t_LexerNoViableAltException, getStartIndex, METH_NOARGS),
          DECLARE_METHOD(t_LexerNoViableAltException, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LexerNoViableAltException)[] = {
          { Py_tp_methods, t_LexerNoViableAltException__methods_ },
          { Py_tp_init, (void *) t_LexerNoViableAltException_init_ },
          { Py_tp_getset, t_LexerNoViableAltException__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LexerNoViableAltException)[] = {
          &PY_TYPE_DEF(::org::antlr::v4::runtime::RecognitionException),
          NULL
        };

        DEFINE_TYPE(LexerNoViableAltException, t_LexerNoViableAltException, LexerNoViableAltException);

        void t_LexerNoViableAltException::install(PyObject *module)
        {
          installType(&PY_TYPE(LexerNoViableAltException), &PY_TYPE_DEF(LexerNoViableAltException), module, "LexerNoViableAltException", 0);
        }

        void t_LexerNoViableAltException::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LexerNoViableAltException), "class_", make_descriptor(LexerNoViableAltException::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LexerNoViableAltException), "wrapfn_", make_descriptor(t_LexerNoViableAltException::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LexerNoViableAltException), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LexerNoViableAltException_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LexerNoViableAltException::initializeClass, 1)))
            return NULL;
          return t_LexerNoViableAltException::wrap_Object(LexerNoViableAltException(((t_LexerNoViableAltException *) arg)->object.this$));
        }
        static PyObject *t_LexerNoViableAltException_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LexerNoViableAltException::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LexerNoViableAltException_init_(t_LexerNoViableAltException *self, PyObject *args, PyObject *kwds)
        {
          ::org::antlr::v4::runtime::Lexer a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::antlr::v4::runtime::CharStream a1((jobject) NULL);
          jint a2;
          ::org::antlr::v4::runtime::atn::ATNConfigSet a3((jobject) NULL);
          LexerNoViableAltException object((jobject) NULL);

          if (!parseArgs(args, "KkIk", ::org::antlr::v4::runtime::Lexer::initializeClass, ::org::antlr::v4::runtime::CharStream::initializeClass, ::org::antlr::v4::runtime::atn::ATNConfigSet::initializeClass, &a0, &p0, ::org::antlr::v4::runtime::t_Lexer::parameters_, &a1, &a2, &a3))
          {
            INT_CALL(object = LexerNoViableAltException(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LexerNoViableAltException_getDeadEndConfigs(t_LexerNoViableAltException *self)
        {
          ::org::antlr::v4::runtime::atn::ATNConfigSet result((jobject) NULL);
          OBJ_CALL(result = self->object.getDeadEndConfigs());
          return ::org::antlr::v4::runtime::atn::t_ATNConfigSet::wrap_Object(result);
        }

        static PyObject *t_LexerNoViableAltException_getInputStream(t_LexerNoViableAltException *self, PyObject *args)
        {
          ::org::antlr::v4::runtime::CharStream result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getInputStream());
            return ::org::antlr::v4::runtime::t_CharStream::wrap_Object(result);
          }

          return callSuper(PY_TYPE(LexerNoViableAltException), (PyObject *) self, "getInputStream", args, 2);
        }

        static PyObject *t_LexerNoViableAltException_getStartIndex(t_LexerNoViableAltException *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getStartIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_LexerNoViableAltException_toString(t_LexerNoViableAltException *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(LexerNoViableAltException), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_LexerNoViableAltException_get__deadEndConfigs(t_LexerNoViableAltException *self, void *data)
        {
          ::org::antlr::v4::runtime::atn::ATNConfigSet value((jobject) NULL);
          OBJ_CALL(value = self->object.getDeadEndConfigs());
          return ::org::antlr::v4::runtime::atn::t_ATNConfigSet::wrap_Object(value);
        }

        static PyObject *t_LexerNoViableAltException_get__inputStream(t_LexerNoViableAltException *self, void *data)
        {
          ::org::antlr::v4::runtime::CharStream value((jobject) NULL);
          OBJ_CALL(value = self->object.getInputStream());
          return ::org::antlr::v4::runtime::t_CharStream::wrap_Object(value);
        }

        static PyObject *t_LexerNoViableAltException_get__startIndex(t_LexerNoViableAltException *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getStartIndex());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/antlr/v4/runtime/atn/LexerATNSimulator.h"
#include "org/antlr/v4/runtime/CharStream.h"
#include "org/antlr/v4/runtime/atn/ATN.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/antlr/v4/runtime/atn/LexerATNSimulator.h"
#include "org/antlr/v4/runtime/Lexer.h"
#include "JArray.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          ::java::lang::Class *LexerATNSimulator::class$ = NULL;
          jmethodID *LexerATNSimulator::mids$ = NULL;
          bool LexerATNSimulator::live$ = false;
          jint LexerATNSimulator::MAX_DFA_EDGE = (jint) 0;
          jint LexerATNSimulator::MIN_DFA_EDGE = (jint) 0;
          jboolean LexerATNSimulator::debug = (jboolean) 0;
          jboolean LexerATNSimulator::dfa_debug = (jboolean) 0;

          jclass LexerATNSimulator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/antlr/v4/runtime/atn/LexerATNSimulator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_clearDFA_3720c61b0679eb3e] = env->getMethodID(cls, "clearDFA", "()V");
              mids$[mid_consume_4d3fc62038ae73ec] = env->getMethodID(cls, "consume", "(Lorg/antlr/v4/runtime/CharStream;)V");
              mids$[mid_copyState_e454e5aba5dc644f] = env->getMethodID(cls, "copyState", "(Lorg/antlr/v4/runtime/atn/LexerATNSimulator;)V");
              mids$[mid_getCharPositionInLine_20fbf7565993c3d7] = env->getMethodID(cls, "getCharPositionInLine", "()I");
              mids$[mid_getLine_20fbf7565993c3d7] = env->getMethodID(cls, "getLine", "()I");
              mids$[mid_getText_39e8c9c1fd82927b] = env->getMethodID(cls, "getText", "(Lorg/antlr/v4/runtime/CharStream;)Ljava/lang/String;");
              mids$[mid_getTokenName_cd8436557ab831f9] = env->getMethodID(cls, "getTokenName", "(I)Ljava/lang/String;");
              mids$[mid_match_ffc671cfc0f0bc94] = env->getMethodID(cls, "match", "(Lorg/antlr/v4/runtime/CharStream;I)I");
              mids$[mid_reset_3720c61b0679eb3e] = env->getMethodID(cls, "reset", "()V");
              mids$[mid_setCharPositionInLine_540b2b23d51b1efd] = env->getMethodID(cls, "setCharPositionInLine", "(I)V");
              mids$[mid_setLine_540b2b23d51b1efd] = env->getMethodID(cls, "setLine", "(I)V");
              mids$[mid_getExistingTargetState_921945ff8f30a545] = env->getMethodID(cls, "getExistingTargetState", "(Lorg/antlr/v4/runtime/dfa/DFAState;I)Lorg/antlr/v4/runtime/dfa/DFAState;");
              mids$[mid_computeTargetState_43da49cba1060e13] = env->getMethodID(cls, "computeTargetState", "(Lorg/antlr/v4/runtime/CharStream;Lorg/antlr/v4/runtime/dfa/DFAState;I)Lorg/antlr/v4/runtime/dfa/DFAState;");
              mids$[mid_execATN_502887b793079899] = env->getMethodID(cls, "execATN", "(Lorg/antlr/v4/runtime/CharStream;Lorg/antlr/v4/runtime/dfa/DFAState;)I");
              mids$[mid_computeStartState_ced8467f8ec33fd3] = env->getMethodID(cls, "computeStartState", "(Lorg/antlr/v4/runtime/CharStream;Lorg/antlr/v4/runtime/atn/ATNState;)Lorg/antlr/v4/runtime/atn/ATNConfigSet;");
              mids$[mid_getReachableTarget_23bdb8817045ffec] = env->getMethodID(cls, "getReachableTarget", "(Lorg/antlr/v4/runtime/atn/Transition;I)Lorg/antlr/v4/runtime/atn/ATNState;");
              mids$[mid_getEpsilonTarget_dc1fe48242bb7cda] = env->getMethodID(cls, "getEpsilonTarget", "(Lorg/antlr/v4/runtime/CharStream;Lorg/antlr/v4/runtime/atn/LexerATNConfig;Lorg/antlr/v4/runtime/atn/Transition;Lorg/antlr/v4/runtime/atn/ATNConfigSet;ZZ)Lorg/antlr/v4/runtime/atn/LexerATNConfig;");
              mids$[mid_addDFAEdge_e1dc52fd322d25a5] = env->getMethodID(cls, "addDFAEdge", "(Lorg/antlr/v4/runtime/dfa/DFAState;ILorg/antlr/v4/runtime/dfa/DFAState;)V");
              mids$[mid_addDFAEdge_5f46a33733047e4b] = env->getMethodID(cls, "addDFAEdge", "(Lorg/antlr/v4/runtime/dfa/DFAState;ILorg/antlr/v4/runtime/atn/ATNConfigSet;)Lorg/antlr/v4/runtime/dfa/DFAState;");
              mids$[mid_addDFAState_283e23c341a39258] = env->getMethodID(cls, "addDFAState", "(Lorg/antlr/v4/runtime/atn/ATNConfigSet;)Lorg/antlr/v4/runtime/dfa/DFAState;");
              mids$[mid_matchATN_f2e5621661cba8da] = env->getMethodID(cls, "matchATN", "(Lorg/antlr/v4/runtime/CharStream;)I");
              mids$[mid_failOrAccept_981810e10bc022c8] = env->getMethodID(cls, "failOrAccept", "(Lorg/antlr/v4/runtime/atn/LexerATNSimulator$SimState;Lorg/antlr/v4/runtime/CharStream;Lorg/antlr/v4/runtime/atn/ATNConfigSet;I)I");
              mids$[mid_getReachableConfigSet_7de50beed3c56417] = env->getMethodID(cls, "getReachableConfigSet", "(Lorg/antlr/v4/runtime/CharStream;Lorg/antlr/v4/runtime/atn/ATNConfigSet;Lorg/antlr/v4/runtime/atn/ATNConfigSet;I)V");
              mids$[mid_evaluatePredicate_91ec85596161cb9d] = env->getMethodID(cls, "evaluatePredicate", "(Lorg/antlr/v4/runtime/CharStream;IIZ)Z");
              mids$[mid_captureSimState_389dab788e20d405] = env->getMethodID(cls, "captureSimState", "(Lorg/antlr/v4/runtime/atn/LexerATNSimulator$SimState;Lorg/antlr/v4/runtime/CharStream;Lorg/antlr/v4/runtime/dfa/DFAState;)V");
              mids$[mid_accept_1688fcfec2cfe118] = env->getMethodID(cls, "accept", "(Lorg/antlr/v4/runtime/CharStream;Lorg/antlr/v4/runtime/atn/LexerActionExecutor;IIII)V");
              mids$[mid_closure_a6bec957908fb1fc] = env->getMethodID(cls, "closure", "(Lorg/antlr/v4/runtime/CharStream;Lorg/antlr/v4/runtime/atn/LexerATNConfig;Lorg/antlr/v4/runtime/atn/ATNConfigSet;ZZZ)Z");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              MAX_DFA_EDGE = env->getStaticIntField(cls, "MAX_DFA_EDGE");
              MIN_DFA_EDGE = env->getStaticIntField(cls, "MIN_DFA_EDGE");
              debug = env->getStaticBooleanField(cls, "debug");
              dfa_debug = env->getStaticBooleanField(cls, "dfa_debug");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void LexerATNSimulator::clearDFA() const
          {
            env->callVoidMethod(this$, mids$[mid_clearDFA_3720c61b0679eb3e]);
          }

          void LexerATNSimulator::consume(const ::org::antlr::v4::runtime::CharStream & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_consume_4d3fc62038ae73ec], a0.this$);
          }

          void LexerATNSimulator::copyState(const LexerATNSimulator & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_copyState_e454e5aba5dc644f], a0.this$);
          }

          jint LexerATNSimulator::getCharPositionInLine() const
          {
            return env->callIntMethod(this$, mids$[mid_getCharPositionInLine_20fbf7565993c3d7]);
          }

          jint LexerATNSimulator::getLine() const
          {
            return env->callIntMethod(this$, mids$[mid_getLine_20fbf7565993c3d7]);
          }

          ::java::lang::String LexerATNSimulator::getText(const ::org::antlr::v4::runtime::CharStream & a0) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getText_39e8c9c1fd82927b], a0.this$));
          }

          ::java::lang::String LexerATNSimulator::getTokenName(jint a0) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTokenName_cd8436557ab831f9], a0));
          }

          jint LexerATNSimulator::match(const ::org::antlr::v4::runtime::CharStream & a0, jint a1) const
          {
            return env->callIntMethod(this$, mids$[mid_match_ffc671cfc0f0bc94], a0.this$, a1);
          }

          void LexerATNSimulator::reset() const
          {
            env->callVoidMethod(this$, mids$[mid_reset_3720c61b0679eb3e]);
          }

          void LexerATNSimulator::setCharPositionInLine(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCharPositionInLine_540b2b23d51b1efd], a0);
          }

          void LexerATNSimulator::setLine(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setLine_540b2b23d51b1efd], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          static PyObject *t_LexerATNSimulator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LexerATNSimulator_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LexerATNSimulator_clearDFA(t_LexerATNSimulator *self, PyObject *args);
          static PyObject *t_LexerATNSimulator_consume(t_LexerATNSimulator *self, PyObject *arg);
          static PyObject *t_LexerATNSimulator_copyState(t_LexerATNSimulator *self, PyObject *arg);
          static PyObject *t_LexerATNSimulator_getCharPositionInLine(t_LexerATNSimulator *self);
          static PyObject *t_LexerATNSimulator_getLine(t_LexerATNSimulator *self);
          static PyObject *t_LexerATNSimulator_getText(t_LexerATNSimulator *self, PyObject *arg);
          static PyObject *t_LexerATNSimulator_getTokenName(t_LexerATNSimulator *self, PyObject *arg);
          static PyObject *t_LexerATNSimulator_match(t_LexerATNSimulator *self, PyObject *args);
          static PyObject *t_LexerATNSimulator_reset(t_LexerATNSimulator *self, PyObject *args);
          static PyObject *t_LexerATNSimulator_setCharPositionInLine(t_LexerATNSimulator *self, PyObject *arg);
          static PyObject *t_LexerATNSimulator_setLine(t_LexerATNSimulator *self, PyObject *arg);
          static PyObject *t_LexerATNSimulator_get__charPositionInLine(t_LexerATNSimulator *self, void *data);
          static int t_LexerATNSimulator_set__charPositionInLine(t_LexerATNSimulator *self, PyObject *arg, void *data);
          static PyObject *t_LexerATNSimulator_get__line(t_LexerATNSimulator *self, void *data);
          static int t_LexerATNSimulator_set__line(t_LexerATNSimulator *self, PyObject *arg, void *data);
          static PyGetSetDef t_LexerATNSimulator__fields_[] = {
            DECLARE_GETSET_FIELD(t_LexerATNSimulator, charPositionInLine),
            DECLARE_GETSET_FIELD(t_LexerATNSimulator, line),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_LexerATNSimulator__methods_[] = {
            DECLARE_METHOD(t_LexerATNSimulator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LexerATNSimulator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LexerATNSimulator, clearDFA, METH_VARARGS),
            DECLARE_METHOD(t_LexerATNSimulator, consume, METH_O),
            DECLARE_METHOD(t_LexerATNSimulator, copyState, METH_O),
            DECLARE_METHOD(t_LexerATNSimulator, getCharPositionInLine, METH_NOARGS),
            DECLARE_METHOD(t_LexerATNSimulator, getLine, METH_NOARGS),
            DECLARE_METHOD(t_LexerATNSimulator, getText, METH_O),
            DECLARE_METHOD(t_LexerATNSimulator, getTokenName, METH_O),
            DECLARE_METHOD(t_LexerATNSimulator, match, METH_VARARGS),
            DECLARE_METHOD(t_LexerATNSimulator, reset, METH_VARARGS),
            DECLARE_METHOD(t_LexerATNSimulator, setCharPositionInLine, METH_O),
            DECLARE_METHOD(t_LexerATNSimulator, setLine, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LexerATNSimulator)[] = {
            { Py_tp_methods, t_LexerATNSimulator__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_LexerATNSimulator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LexerATNSimulator)[] = {
            &PY_TYPE_DEF(::org::antlr::v4::runtime::atn::ATNSimulator),
            NULL
          };

          DEFINE_TYPE(LexerATNSimulator, t_LexerATNSimulator, LexerATNSimulator);

          void t_LexerATNSimulator::install(PyObject *module)
          {
            installType(&PY_TYPE(LexerATNSimulator), &PY_TYPE_DEF(LexerATNSimulator), module, "LexerATNSimulator", 0);
          }

          void t_LexerATNSimulator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LexerATNSimulator), "class_", make_descriptor(LexerATNSimulator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LexerATNSimulator), "wrapfn_", make_descriptor(t_LexerATNSimulator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LexerATNSimulator), "boxfn_", make_descriptor(boxObject));
            env->getClass(LexerATNSimulator::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(LexerATNSimulator), "MAX_DFA_EDGE", make_descriptor(LexerATNSimulator::MAX_DFA_EDGE));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LexerATNSimulator), "MIN_DFA_EDGE", make_descriptor(LexerATNSimulator::MIN_DFA_EDGE));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LexerATNSimulator), "debug", make_descriptor(LexerATNSimulator::debug));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LexerATNSimulator), "dfa_debug", make_descriptor(LexerATNSimulator::dfa_debug));
          }

          static PyObject *t_LexerATNSimulator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LexerATNSimulator::initializeClass, 1)))
              return NULL;
            return t_LexerATNSimulator::wrap_Object(LexerATNSimulator(((t_LexerATNSimulator *) arg)->object.this$));
          }
          static PyObject *t_LexerATNSimulator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LexerATNSimulator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_LexerATNSimulator_clearDFA(t_LexerATNSimulator *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clearDFA());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(LexerATNSimulator), (PyObject *) self, "clearDFA", args, 2);
          }

          static PyObject *t_LexerATNSimulator_consume(t_LexerATNSimulator *self, PyObject *arg)
          {
            ::org::antlr::v4::runtime::CharStream a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::antlr::v4::runtime::CharStream::initializeClass, &a0))
            {
              OBJ_CALL(self->object.consume(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "consume", arg);
            return NULL;
          }

          static PyObject *t_LexerATNSimulator_copyState(t_LexerATNSimulator *self, PyObject *arg)
          {
            LexerATNSimulator a0((jobject) NULL);

            if (!parseArg(arg, "k", LexerATNSimulator::initializeClass, &a0))
            {
              OBJ_CALL(self->object.copyState(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "copyState", arg);
            return NULL;
          }

          static PyObject *t_LexerATNSimulator_getCharPositionInLine(t_LexerATNSimulator *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getCharPositionInLine());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_LexerATNSimulator_getLine(t_LexerATNSimulator *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLine());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_LexerATNSimulator_getText(t_LexerATNSimulator *self, PyObject *arg)
          {
            ::org::antlr::v4::runtime::CharStream a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::antlr::v4::runtime::CharStream::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getText(a0));
              return j2p(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getText", arg);
            return NULL;
          }

          static PyObject *t_LexerATNSimulator_getTokenName(t_LexerATNSimulator *self, PyObject *arg)
          {
            jint a0;
            ::java::lang::String result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getTokenName(a0));
              return j2p(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getTokenName", arg);
            return NULL;
          }

          static PyObject *t_LexerATNSimulator_match(t_LexerATNSimulator *self, PyObject *args)
          {
            ::org::antlr::v4::runtime::CharStream a0((jobject) NULL);
            jint a1;
            jint result;

            if (!parseArgs(args, "kI", ::org::antlr::v4::runtime::CharStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.match(a0, a1));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError((PyObject *) self, "match", args);
            return NULL;
          }

          static PyObject *t_LexerATNSimulator_reset(t_LexerATNSimulator *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.reset());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(LexerATNSimulator), (PyObject *) self, "reset", args, 2);
          }

          static PyObject *t_LexerATNSimulator_setCharPositionInLine(t_LexerATNSimulator *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setCharPositionInLine(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setCharPositionInLine", arg);
            return NULL;
          }

          static PyObject *t_LexerATNSimulator_setLine(t_LexerATNSimulator *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setLine(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setLine", arg);
            return NULL;
          }

          static PyObject *t_LexerATNSimulator_get__charPositionInLine(t_LexerATNSimulator *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getCharPositionInLine());
            return PyLong_FromLong((long) value);
          }
          static int t_LexerATNSimulator_set__charPositionInLine(t_LexerATNSimulator *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setCharPositionInLine(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "charPositionInLine", arg);
            return -1;
          }

          static PyObject *t_LexerATNSimulator_get__line(t_LexerATNSimulator *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLine());
            return PyLong_FromLong((long) value);
          }
          static int t_LexerATNSimulator_set__line(t_LexerATNSimulator *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setLine(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "line", arg);
            return -1;
          }
        }
      }
    }
  }
}
