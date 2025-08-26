#ifndef org_antlr_v4_runtime_RuleContext_H
#define org_antlr_v4_runtime_RuleContext_H

#include "java/lang/Object.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class Recognizer;
        class Parser;
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
            mid_init$_e7bdbe105ce1bafb,
            mid_init$_8ddad557c20384c8,
            mid_depth_bd89ce15dad49192,
            mid_getAltNumber_bd89ce15dad49192,
            mid_getChildCount_bd89ce15dad49192,
            mid_getParent_5527f90c6ec01d1c,
            mid_getPayload_5527f90c6ec01d1c,
            mid_getRuleContext_5527f90c6ec01d1c,
            mid_getRuleIndex_bd89ce15dad49192,
            mid_getText_e7df854526d67fa3,
            mid_isEmpty_9aa4f33e82ea333f,
            mid_setAltNumber_8226bd0b0fc13dba,
            mid_setParent_6a1d338ff70fc4fc,
            mid_toString_e7df854526d67fa3,
            mid_toString_cfa77efb606b3992,
            mid_toString_e4dc3c0083901688,
            mid_toString_536b0b0cd0a2c8f3,
            mid_toString_28222f1e81764da2,
            mid_toStringTree_e7df854526d67fa3,
            mid_toStringTree_60bb3b0ffd4d3fdf,
            mid_toStringTree_e4dc3c0083901688,
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
