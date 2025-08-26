#ifndef org_apache_lucene_search_AutomatonQuery_H
#define org_apache_lucene_search_AutomatonQuery_H

#include "org/apache/lucene/search/MultiTermQuery.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class CompiledAutomaton;
          class Automaton;
        }
        class Accountable;
      }
      namespace search {
        class QueryVisitor;
        class MultiTermQuery$RewriteMethod;
      }
      namespace index {
        class Term;
      }
    }
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
            mid_init$_35582c417b31b833,
            mid_init$_2ba163ef12a89a37,
            mid_init$_6344b4a669bbc7ff,
            mid_equals_00d17418847797d4,
            mid_getAutomaton_d4cfa49a0a7bdead,
            mid_getCompiled_8fd87a038bf9e303,
            mid_hashCode_bd89ce15dad49192,
            mid_isAutomatonBinary_9aa4f33e82ea333f,
            mid_ramBytesUsed_0f176418e3e16541,
            mid_toString_fef9c036acf290a9,
            mid_visit_85475af8e8904ab4,
            mid_getTermsEnum_05b4875ff8d0c914,
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
