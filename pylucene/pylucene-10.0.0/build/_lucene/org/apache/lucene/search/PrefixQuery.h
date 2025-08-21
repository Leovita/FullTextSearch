#ifndef org_apache_lucene_search_PrefixQuery_H
#define org_apache_lucene_search_PrefixQuery_H

#include "org/apache/lucene/search/AutomatonQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
      }
      namespace util {
        class BytesRef;
        namespace automaton {
          class Automaton;
        }
      }
      namespace search {
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

        class PrefixQuery : public ::org::apache::lucene::search::AutomatonQuery {
         public:
          enum {
            mid_init$_3b0982cb6e1bfb9d,
            mid_init$_10e3883d695612f2,
            mid_equals_570b5248a6da3ef6,
            mid_getPrefix_8b5614d1be154430,
            mid_hashCode_20fbf7565993c3d7,
            mid_toAutomaton_742f04198c20516e,
            mid_toString_cb0eb1432185fc94,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PrefixQuery(jobject obj) : ::org::apache::lucene::search::AutomatonQuery(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PrefixQuery(const PrefixQuery& obj) : ::org::apache::lucene::search::AutomatonQuery(obj) {}

          PrefixQuery(const ::org::apache::lucene::index::Term &);
          PrefixQuery(const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::search::MultiTermQuery$RewriteMethod &);

          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::index::Term getPrefix() const;
          jint hashCode() const;
          static ::org::apache::lucene::util::automaton::Automaton toAutomaton(const ::org::apache::lucene::util::BytesRef &);
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
        extern PyType_Def PY_TYPE_DEF(PrefixQuery);
        extern PyTypeObject *PY_TYPE(PrefixQuery);

        class t_PrefixQuery {
        public:
          PyObject_HEAD
          PrefixQuery object;
          static PyObject *wrap_Object(const PrefixQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
