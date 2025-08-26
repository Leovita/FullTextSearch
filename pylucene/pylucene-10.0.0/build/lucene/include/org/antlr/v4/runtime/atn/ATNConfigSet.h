#ifndef org_antlr_v4_runtime_atn_ATNConfigSet_H
#define org_antlr_v4_runtime_atn_ATNConfigSet_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    class ArrayList;
    class BitSet;
    class Collection;
    class Set;
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace antlr {
    namespace v4 {
      namespace runtime {
        namespace atn {
          class ATNConfigSet$AbstractConfigHashSet;
          class SemanticContext;
          class ATNConfig;
          class ATNSimulator;
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

          class ATNConfigSet : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_f5dd97eebf6a215a,
              mid_add_4291e6f193a35bdb,
              mid_addAll_155d0ed876869448,
              mid_clear_e7bdbe105ce1bafb,
              mid_contains_00d17418847797d4,
              mid_containsAll_155d0ed876869448,
              mid_containsFast_4291e6f193a35bdb,
              mid_elements_1387e1e2702ac173,
              mid_equals_00d17418847797d4,
              mid_get_8febd6f08279ef6c,
              mid_getAlts_c2733845efaa53a6,
              mid_getPredicates_1387e1e2702ac173,
              mid_getStates_79131c6bbcf08916,
              mid_hashCode_bd89ce15dad49192,
              mid_isEmpty_9aa4f33e82ea333f,
              mid_isReadonly_9aa4f33e82ea333f,
              mid_iterator_c7985fafdcf40e83,
              mid_optimizeConfigs_7292166fd6e58e13,
              mid_remove_00d17418847797d4,
              mid_removeAll_155d0ed876869448,
              mid_retainAll_155d0ed876869448,
              mid_setReadonly_f5dd97eebf6a215a,
              mid_size_bd89ce15dad49192,
              mid_toArray_f9ed0a0a7a45f79c,
              mid_toArray_0b4a993b49b6d8e8,
              mid_toString_e7df854526d67fa3,
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
