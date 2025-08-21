#ifndef org_apache_lucene_search_WildcardQuery_H
#define org_apache_lucene_search_WildcardQuery_H

#include "org/apache/lucene/search/AutomatonQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
      }
      namespace search {
        class MultiTermQuery$RewriteMethod;
      }
      namespace util {
        namespace automaton {
          class Automaton;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class WildcardQuery : public ::org::apache::lucene::search::AutomatonQuery {
         public:
          enum {
            mid_init$_3b0982cb6e1bfb9d,
            mid_init$_52d849eb23739642,
            mid_init$_80b7b22ee96eb2f5,
            mid_getTerm_8b5614d1be154430,
            mid_toAutomaton_43e110ca125f42b7,
            mid_toString_cb0eb1432185fc94,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit WildcardQuery(jobject obj) : ::org::apache::lucene::search::AutomatonQuery(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          WildcardQuery(const WildcardQuery& obj) : ::org::apache::lucene::search::AutomatonQuery(obj) {}

          static jchar WILDCARD_CHAR;
          static jchar WILDCARD_ESCAPE;
          static jchar WILDCARD_STRING;

          WildcardQuery(const ::org::apache::lucene::index::Term &);
          WildcardQuery(const ::org::apache::lucene::index::Term &, jint);
          WildcardQuery(const ::org::apache::lucene::index::Term &, jint, const ::org::apache::lucene::search::MultiTermQuery$RewriteMethod &);

          ::org::apache::lucene::index::Term getTerm() const;
          static ::org::apache::lucene::util::automaton::Automaton toAutomaton(const ::org::apache::lucene::index::Term &, jint);
          ::java::lang::String toString(const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(WildcardQuery);
        extern PyTypeObject *PY_TYPE(WildcardQuery);

        class t_WildcardQuery {
        public:
          PyObject_HEAD
          WildcardQuery object;
          static PyObject *wrap_Object(const WildcardQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
