#ifndef org_apache_lucene_search_RegexpQuery_H
#define org_apache_lucene_search_RegexpQuery_H

#include "org/apache/lucene/search/AutomatonQuery.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
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
          class AutomatonProvider;
        }
      }
    }
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
            mid_init$_ed33f9e055f7213d,
            mid_init$_2d74cc249afcbb53,
            mid_init$_1b09428e23ab13c1,
            mid_init$_3b87bea0b63695d2,
            mid_init$_589d67666d650304,
            mid_init$_ff621831bae03309,
            mid_init$_0d9ffe1f0d392a72,
            mid_getRegexp_b549eaec39b02d52,
            mid_toString_fef9c036acf290a9,
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
