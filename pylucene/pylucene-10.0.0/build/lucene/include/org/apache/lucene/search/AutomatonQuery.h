#ifndef org_apache_lucene_search_AutomatonQuery_H
#define org_apache_lucene_search_AutomatonQuery_H

#include "org/apache/lucene/search/MultiTermQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        namespace automaton {
          class CompiledAutomaton;
          class Automaton;
        }
      }
      namespace index {
        class Term;
      }
      namespace search {
        class QueryVisitor;
        class MultiTermQuery$RewriteMethod;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class AutomatonQuery : public ::org::apache::lucene::search::MultiTermQuery {
         public:
          enum {
            mid_init$_afc18e95601e7baa,
            mid_init$_12abd3414ad09af0,
            mid_init$_1638a45376d95b79,
            mid_equals_570b5248a6da3ef6,
            mid_getAutomaton_275570da72a90658,
            mid_getCompiled_667c3f67aa7a3aa5,
            mid_hashCode_20fbf7565993c3d7,
            mid_isAutomatonBinary_947277eca0748c4e,
            mid_ramBytesUsed_16939d9d0a9a9721,
            mid_toString_cb0eb1432185fc94,
            mid_visit_1b22ec612b613eea,
            mid_getTermsEnum_b346bdb4749db660,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AutomatonQuery(jobject obj) : ::org::apache::lucene::search::MultiTermQuery(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AutomatonQuery(const AutomatonQuery& obj) : ::org::apache::lucene::search::MultiTermQuery(obj) {}

          AutomatonQuery(const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::util::automaton::Automaton &);
          AutomatonQuery(const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::util::automaton::Automaton &, jboolean);
          AutomatonQuery(const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::util::automaton::Automaton &, jboolean, const ::org::apache::lucene::search::MultiTermQuery$RewriteMethod &);

          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::util::automaton::Automaton getAutomaton() const;
          ::org::apache::lucene::util::automaton::CompiledAutomaton getCompiled() const;
          jint hashCode() const;
          jboolean isAutomatonBinary() const;
          jlong ramBytesUsed() const;
          ::java::lang::String toString(const ::java::lang::String &) const;
          void visit(const ::org::apache::lucene::search::QueryVisitor &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(AutomatonQuery);
        extern PyTypeObject *PY_TYPE(AutomatonQuery);

        class t_AutomatonQuery {
        public:
          PyObject_HEAD
          AutomatonQuery object;
          static PyObject *wrap_Object(const AutomatonQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
