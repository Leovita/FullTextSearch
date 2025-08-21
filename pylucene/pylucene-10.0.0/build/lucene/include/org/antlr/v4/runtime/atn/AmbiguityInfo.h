#ifndef org_antlr_v4_runtime_atn_AmbiguityInfo_H
#define org_antlr_v4_runtime_atn_AmbiguityInfo_H

#include "org/antlr/v4/runtime/atn/DecisionEventInfo.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class ATNConfigSet;
        }
        class TokenStream;
      }
    }
  }
}
namespace java {
  namespace util {
    class BitSet;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          class AmbiguityInfo : public ::org::antlr::v4::runtime::atn::DecisionEventInfo {
           public:
            enum {
              mid_init$_b742548cb82e58e9,
              max_mid
            };

            enum {
              fid_ambigAlts,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AmbiguityInfo(jobject obj) : ::org::antlr::v4::runtime::atn::DecisionEventInfo(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AmbiguityInfo(const AmbiguityInfo& obj) : ::org::antlr::v4::runtime::atn::DecisionEventInfo(obj) {}

            ::java::util::BitSet _get_ambigAlts() const;
            void _set_ambigAlts(const ::java::util::BitSet &) const;

            AmbiguityInfo(jint, const ::org::antlr::v4::runtime::atn::ATNConfigSet &, const ::java::util::BitSet &, const ::org::antlr::v4::runtime::TokenStream &, jint, jint, jboolean);
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
          extern PyType_Def PY_TYPE_DEF(AmbiguityInfo);
          extern PyTypeObject *PY_TYPE(AmbiguityInfo);

          class t_AmbiguityInfo {
          public:
            PyObject_HEAD
            AmbiguityInfo object;
            static PyObject *wrap_Object(const AmbiguityInfo&);
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
