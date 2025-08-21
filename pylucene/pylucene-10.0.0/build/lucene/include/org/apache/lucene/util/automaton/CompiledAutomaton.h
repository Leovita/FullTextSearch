#ifndef org_apache_lucene_util_automaton_CompiledAutomaton_H
#define org_apache_lucene_util_automaton_CompiledAutomaton_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class QueryVisitor;
      }
      namespace util {
        namespace automaton {
          class CompiledAutomaton$AUTOMATON_TYPE;
          class TransitionAccessor;
          class ByteRunAutomaton;
          class Automaton;
          class ByteRunnable;
        }
        class Accountable;
        class BytesRef;
        class BytesRefBuilder;
      }
      namespace index {
        class TermsEnum;
        class Terms;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {

          class CompiledAutomaton : public ::java::lang::Object {
           public:
            enum {
              mid_init$_71373fad5757dc3c,
              mid_init$_5267b4d772cc54d7,
              mid_init$_e4bcb1c4eea03e12,
              mid_equals_570b5248a6da3ef6,
              mid_floor_e612e9ea6cfad0ee,
              mid_getByteRunnable_66b586cef7445fef,
              mid_getTermsEnum_2c853141fa689f1e,
              mid_getTransitionAccessor_faee24901aeae303,
              mid_hashCode_20fbf7565993c3d7,
              mid_ramBytesUsed_16939d9d0a9a9721,
              mid_visit_f39f2b300307e8dd,
              max_mid
            };

            enum {
              fid_automaton,
              fid_commonSuffixRef,
              fid_finite,
              fid_runAutomaton,
              fid_sinkState,
              fid_term,
              fid_type,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CompiledAutomaton(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CompiledAutomaton(const CompiledAutomaton& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::util::automaton::Automaton _get_automaton() const;
            ::org::apache::lucene::util::BytesRef _get_commonSuffixRef() const;
            jboolean _get_finite() const;
            ::org::apache::lucene::util::automaton::ByteRunAutomaton _get_runAutomaton() const;
            jint _get_sinkState() const;
            ::org::apache::lucene::util::BytesRef _get_term() const;
            ::org::apache::lucene::util::automaton::CompiledAutomaton$AUTOMATON_TYPE _get_type() const;

            CompiledAutomaton(const ::org::apache::lucene::util::automaton::Automaton &);
            CompiledAutomaton(const ::org::apache::lucene::util::automaton::Automaton &, jboolean, jboolean);
            CompiledAutomaton(const ::org::apache::lucene::util::automaton::Automaton &, jboolean, jboolean, jboolean);

            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::util::BytesRef floor(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRefBuilder &) const;
            ::org::apache::lucene::util::automaton::ByteRunnable getByteRunnable() const;
            ::org::apache::lucene::index::TermsEnum getTermsEnum(const ::org::apache::lucene::index::Terms &) const;
            ::org::apache::lucene::util::automaton::TransitionAccessor getTransitionAccessor() const;
            jint hashCode() const;
            jlong ramBytesUsed() const;
            void visit(const ::org::apache::lucene::search::QueryVisitor &, const ::org::apache::lucene::search::Query &, const ::java::lang::String &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          extern PyType_Def PY_TYPE_DEF(CompiledAutomaton);
          extern PyTypeObject *PY_TYPE(CompiledAutomaton);

          class t_CompiledAutomaton {
          public:
            PyObject_HEAD
            CompiledAutomaton object;
            static PyObject *wrap_Object(const CompiledAutomaton&);
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
