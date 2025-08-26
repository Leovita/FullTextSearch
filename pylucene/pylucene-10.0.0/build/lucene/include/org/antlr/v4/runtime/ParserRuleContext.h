#ifndef org_antlr_v4_runtime_ParserRuleContext_H
#define org_antlr_v4_runtime_ParserRuleContext_H

#include "org/antlr/v4/runtime/RuleContext.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        class Parser;
        class RecognitionException;
        class ParserRuleContext;
        class Token;
      }
    }
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
            mid_init$_e7bdbe105ce1bafb,
            mid_init$_f840f8abb19811a0,
            mid_addChild_a7acc939bb384fb7,
            mid_copyFrom_d06f00f6bac2ff6a,
            mid_getChildCount_bd89ce15dad49192,
            mid_getParent_66f2a0a97f4f532a,
            mid_getRuleContext_b2ee1e45bfce989b,
            mid_getRuleContexts_e76a1deb9b5b5da2,
            mid_getStart_91a9980574ecdd91,
            mid_getStop_91a9980574ecdd91,
            mid_removeLastChild_e7bdbe105ce1bafb,
            mid_toInfoString_60bb3b0ffd4d3fdf,
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
