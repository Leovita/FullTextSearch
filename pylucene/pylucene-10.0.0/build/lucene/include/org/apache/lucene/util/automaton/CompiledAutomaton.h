#ifndef org_apache_lucene_util_automaton_CompiledAutomaton_H
#define org_apache_lucene_util_automaton_CompiledAutomaton_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class ByteRunAutomaton;
          class TransitionAccessor;
          class Automaton;
          class ByteRunnable;
          class CompiledAutomaton$AUTOMATON_TYPE;
        }
        class Accountable;
        class BytesRef;
        class BytesRefBuilder;
      }
      namespace index {
        class Terms;
        class TermsEnum;
      }
      namespace search {
        class QueryVisitor;
        class Query;
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
              mid_init$_7350cbdcd883df0a,
              mid_init$_fe89e4b488e93146,
              mid_init$_37b62ad7a872d99b,
              mid_equals_00d17418847797d4,
              mid_floor_7dcdd9813c207136,
              mid_getByteRunnable_a3fc7a69a9161d8b,
              mid_getTermsEnum_46ef391d247cbb49,
              mid_getTransitionAccessor_161c7a50777b799a,
              mid_hashCode_bd89ce15dad49192,
              mid_ramBytesUsed_0f176418e3e16541,
              mid_visit_5056b36406fe33c2,
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
