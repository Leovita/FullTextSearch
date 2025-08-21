#ifndef org_apache_lucene_search_RegexpQuery_H
#define org_apache_lucene_search_RegexpQuery_H

#include "org/apache/lucene/search/AutomatonQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class AutomatonProvider;
        }
      }
      namespace index {
        class Term;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class RegexpQuery : public ::org::apache::lucene::search::AutomatonQuery {
         public:
          enum {
            mid_init$_3b0982cb6e1bfb9d,
            mid_init$_52d849eb23739642,
            mid_init$_25675dcc7619f110,
            mid_init$_a541e5f4e8b31a2c,
            mid_init$_c90214f5dfb015b1,
            mid_init$_99828a7194a1982d,
            mid_init$_a9dcf2f3c4e759e5,
            mid_getRegexp_8b5614d1be154430,
            mid_toString_cb0eb1432185fc94,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RegexpQuery(jobject obj) : ::org::apache::lucene::search::AutomatonQuery(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RegexpQuery(const RegexpQuery& obj) : ::org::apache::lucene::search::AutomatonQuery(obj) {}

          static ::org::apache::lucene::util::automaton::AutomatonProvider *DEFAULT_PROVIDER;

          RegexpQuery(const ::org::apache::lucene::index::Term &);
          RegexpQuery(const ::org::apache::lucene::index::Term &, jint);
          RegexpQuery(const ::org::apache::lucene::index::Term &, jint, jint);
          RegexpQuery(const ::org::apache::lucene::index::Term &, jint, jint, jint);
          RegexpQuery(const ::org::apache::lucene::index::Term &, jint, const ::org::apache::lucene::util::automaton::AutomatonProvider &, jint);
          RegexpQuery(const ::org::apache::lucene::index::Term &, jint, jint, const ::org::apache::lucene::util::automaton::AutomatonProvider &, jint, const ::org::apache::lucene::search::MultiTermQuery$RewriteMethod &);
          RegexpQuery(const ::org::apache::lucene::index::Term &, jint, jint, const ::org::apache::lucene::util::automaton::AutomatonProvider &, jint, const ::org::apache::lucene::search::MultiTermQuery$RewriteMethod &, jboolean);

          ::org::apache::lucene::index::Term getRegexp() const;
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
        extern PyType_Def PY_TYPE_DEF(RegexpQuery);
        extern PyTypeObject *PY_TYPE(RegexpQuery);

        class t_RegexpQuery {
        public:
          PyObject_HEAD
          RegexpQuery object;
          static PyObject *wrap_Object(const RegexpQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
