#ifndef org_antlr_v4_runtime_ParserRuleContext_H
#define org_antlr_v4_runtime_ParserRuleContext_H

#include "org/antlr/v4/runtime/RuleContext.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class Parser;
        class ParserRuleContext;
        class RecognitionException;
        class Token;
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

        class ParserRuleContext : public ::org::antlr::v4::runtime::RuleContext {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_init$_edeb232e399334f6,
            mid_addChild_03e1ac07ee008923,
            mid_copyFrom_b66b11bc03bfbb06,
            mid_getChildCount_20fbf7565993c3d7,
            mid_getParent_34f9e24cfd279b36,
            mid_getRuleContext_4b5b9259948a32aa,
            mid_getRuleContexts_181a2d12d2889453,
            mid_getStart_9ddaacaf798f5cf6,
            mid_getStop_9ddaacaf798f5cf6,
            mid_removeLastChild_3720c61b0679eb3e,
            mid_toInfoString_c4224bf0e7356c60,
            max_mid
          };

          enum {
            fid_exception,
            fid_start,
            fid_stop,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ParserRuleContext(jobject obj) : ::org::antlr::v4::runtime::RuleContext(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ParserRuleContext(const ParserRuleContext& obj) : ::org::antlr::v4::runtime::RuleContext(obj) {}

          static ParserRuleContext *EMPTY;

          ::org::antlr::v4::runtime::RecognitionException _get_exception() const;
          void _set_exception(const ::org::antlr::v4::runtime::RecognitionException &) const;
          ::org::antlr::v4::runtime::Token _get_start() const;
          void _set_start(const ::org::antlr::v4::runtime::Token &) const;
          ::org::antlr::v4::runtime::Token _get_stop() const;
          void _set_stop(const ::org::antlr::v4::runtime::Token &) const;

          ParserRuleContext();
          ParserRuleContext(const ParserRuleContext &, jint);

          ::org::antlr::v4::runtime::RuleContext addChild(const ::org::antlr::v4::runtime::RuleContext &) const;
          void copyFrom(const ParserRuleContext &) const;
          jint getChildCount() const;
          ParserRuleContext getParent() const;
          ParserRuleContext getRuleContext(const ::java::lang::Class &, jint) const;
          ::java::util::List getRuleContexts(const ::java::lang::Class &) const;
          ::org::antlr::v4::runtime::Token getStart() const;
          ::org::antlr::v4::runtime::Token getStop() const;
          void removeLastChild() const;
          ::java::lang::String toInfoString(const ::org::antlr::v4::runtime::Parser &) const;
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
        extern PyType_Def PY_TYPE_DEF(ParserRuleContext);
        extern PyTypeObject *PY_TYPE(ParserRuleContext);

        class t_ParserRuleContext {
        public:
          PyObject_HEAD
          ParserRuleContext object;
          static PyObject *wrap_Object(const ParserRuleContext&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
