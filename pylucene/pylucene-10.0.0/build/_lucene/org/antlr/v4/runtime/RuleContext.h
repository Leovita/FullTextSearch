#ifndef org_antlr_v4_runtime_RuleContext_H
#define org_antlr_v4_runtime_RuleContext_H

#include "java/lang/Object.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class Parser;
        class Recognizer;
        class RuleContext;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {

        class RuleContext : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_init$_18e6ea53c0e2e256,
            mid_depth_20fbf7565993c3d7,
            mid_getAltNumber_20fbf7565993c3d7,
            mid_getChildCount_20fbf7565993c3d7,
            mid_getParent_f6417995d6af4905,
            mid_getPayload_f6417995d6af4905,
            mid_getRuleContext_f6417995d6af4905,
            mid_getRuleIndex_20fbf7565993c3d7,
            mid_getText_09a7afff1868fc5e,
            mid_isEmpty_947277eca0748c4e,
            mid_setAltNumber_540b2b23d51b1efd,
            mid_setParent_a326b46395b688bc,
            mid_toString_09a7afff1868fc5e,
            mid_toString_27d32a9d9f7020a0,
            mid_toString_df3233aa43e74519,
            mid_toString_3cff27882a5456c4,
            mid_toString_9f559045e1ec72e5,
            mid_toStringTree_09a7afff1868fc5e,
            mid_toStringTree_c4224bf0e7356c60,
            mid_toStringTree_df3233aa43e74519,
            max_mid
          };

          enum {
            fid_invokingState,
            fid_parent,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RuleContext(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RuleContext(const RuleContext& obj) : ::java::lang::Object(obj) {}

          jint _get_invokingState() const;
          void _set_invokingState(jint) const;
          RuleContext _get_parent() const;
          void _set_parent(const RuleContext &) const;

          RuleContext();
          RuleContext(const RuleContext &, jint);

          jint depth() const;
          jint getAltNumber() const;
          jint getChildCount() const;
          RuleContext getParent() const;
          RuleContext getPayload() const;
          RuleContext getRuleContext() const;
          jint getRuleIndex() const;
          ::java::lang::String getText() const;
          jboolean isEmpty() const;
          void setAltNumber(jint) const;
          void setParent(const RuleContext &) const;
          ::java::lang::String toString() const;
          ::java::lang::String toString(const ::org::antlr::v4::runtime::Recognizer &) const;
          ::java::lang::String toString(const ::java::util::List &) const;
          ::java::lang::String toString(const ::org::antlr::v4::runtime::Recognizer &, const RuleContext &) const;
          ::java::lang::String toString(const ::java::util::List &, const RuleContext &) const;
          ::java::lang::String toStringTree() const;
          ::java::lang::String toStringTree(const ::org::antlr::v4::runtime::Parser &) const;
          ::java::lang::String toStringTree(const ::java::util::List &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        extern PyType_Def PY_TYPE_DEF(RuleContext);
        extern PyTypeObject *PY_TYPE(RuleContext);

        class t_RuleContext {
        public:
          PyObject_HEAD
          RuleContext object;
          static PyObject *wrap_Object(const RuleContext&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
