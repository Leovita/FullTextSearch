#ifndef org_antlr_v4_runtime_atn_ATNConfigSet_H
#define org_antlr_v4_runtime_atn_ATNConfigSet_H

#include "java/lang/Object.h"

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class ATNState;
          class SemanticContext;
          class ATNSimulator;
          class ATNConfig;
          class ATNConfigSet$AbstractConfigHashSet;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class Iterator;
    class BitSet;
    class Collection;
    class List;
    class Set;
    class ArrayList;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {

          class ATNConfigSet : public ::java::lang::Object {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_b110fc3a58c081ab,
              mid_add_1274b529738a1c30,
              mid_addAll_f2a1f31c5865e20d,
              mid_clear_3720c61b0679eb3e,
              mid_contains_570b5248a6da3ef6,
              mid_containsAll_f2a1f31c5865e20d,
              mid_containsFast_1274b529738a1c30,
              mid_elements_36830460e10839eb,
              mid_equals_570b5248a6da3ef6,
              mid_get_30baa13de933d284,
              mid_getAlts_a3ae020b288cd028,
              mid_getPredicates_36830460e10839eb,
              mid_getStates_4df174295554d7bd,
              mid_hashCode_20fbf7565993c3d7,
              mid_isEmpty_947277eca0748c4e,
              mid_isReadonly_947277eca0748c4e,
              mid_iterator_0db4c76ff7ee995b,
              mid_optimizeConfigs_5cfb6c9fd627ce9e,
              mid_remove_570b5248a6da3ef6,
              mid_removeAll_f2a1f31c5865e20d,
              mid_retainAll_f2a1f31c5865e20d,
              mid_setReadonly_b110fc3a58c081ab,
              mid_size_20fbf7565993c3d7,
              mid_toArray_90cac70f3363a8e7,
              mid_toArray_1794d6b866766560,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            enum {
              fid_configLookup,
              fid_configs,
              fid_dipsIntoOuterContext,
              fid_fullCtx,
              fid_hasSemanticContext,
              fid_uniqueAlt,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ATNConfigSet(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ATNConfigSet(const ATNConfigSet& obj) : ::java::lang::Object(obj) {}

            ::org::antlr::v4::runtime::atn::ATNConfigSet$AbstractConfigHashSet _get_configLookup() const;
            void _set_configLookup(const ::org::antlr::v4::runtime::atn::ATNConfigSet$AbstractConfigHashSet &) const;
            ::java::util::ArrayList _get_configs() const;
            jboolean _get_dipsIntoOuterContext() const;
            void _set_dipsIntoOuterContext(jboolean) const;
            jboolean _get_fullCtx() const;
            jboolean _get_hasSemanticContext() const;
            void _set_hasSemanticContext(jboolean) const;
            jint _get_uniqueAlt() const;
            void _set_uniqueAlt(jint) const;

            ATNConfigSet();
            ATNConfigSet(jboolean);

            jboolean add(const ::org::antlr::v4::runtime::atn::ATNConfig &) const;
            jboolean addAll(const ::java::util::Collection &) const;
            void clear() const;
            jboolean contains(const ::java::lang::Object &) const;
            jboolean containsAll(const ::java::util::Collection &) const;
            jboolean containsFast(const ::org::antlr::v4::runtime::atn::ATNConfig &) const;
            ::java::util::List elements() const;
            jboolean equals(const ::java::lang::Object &) const;
            ::org::antlr::v4::runtime::atn::ATNConfig get(jint) const;
            ::java::util::BitSet getAlts() const;
            ::java::util::List getPredicates() const;
            ::java::util::Set getStates() const;
            jint hashCode() const;
            jboolean isEmpty() const;
            jboolean isReadonly() const;
            ::java::util::Iterator iterator() const;
            void optimizeConfigs(const ::org::antlr::v4::runtime::atn::ATNSimulator &) const;
            jboolean remove(const ::java::lang::Object &) const;
            jboolean removeAll(const ::java::util::Collection &) const;
            jboolean retainAll(const ::java::util::Collection &) const;
            void setReadonly(jboolean) const;
            jint size() const;
            JArray< ::org::antlr::v4::runtime::atn::ATNConfig > toArray() const;
            JArray< ::java::lang::Object > toArray(const JArray< ::java::lang::Object > &) const;
            ::java::lang::String toString() const;
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
          extern PyType_Def PY_TYPE_DEF(ATNConfigSet);
          extern PyTypeObject *PY_TYPE(ATNConfigSet);

          class t_ATNConfigSet {
          public:
            PyObject_HEAD
            ATNConfigSet object;
            static PyObject *wrap_Object(const ATNConfigSet&);
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
