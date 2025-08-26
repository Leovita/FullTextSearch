#ifndef org_apache_lucene_search_TermRangeQuery_H
#define org_apache_lucene_search_TermRangeQuery_H

#include "org/apache/lucene/search/AutomatonQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class TermRangeQuery;
        class MultiTermQuery$RewriteMethod;
      }
      namespace util {
        class BytesRef;
        namespace automaton {
          class Automaton;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class TermRangeQuery : public ::org::apache::lucene::search::AutomatonQuery {
         public:
          enum {
            mid_init$_e70b959b2a39cc9b,
            mid_init$_a07320d41df9dd03,
            mid_equals_00d17418847797d4,
            mid_getLowerTerm_adbedbc1fa61c358,
            mid_getUpperTerm_adbedbc1fa61c358,
            mid_hashCode_bd89ce15dad49192,
            mid_includesLower_9aa4f33e82ea333f,
            mid_includesUpper_9aa4f33e82ea333f,
            mid_newStringRange_a1142b95c58a918c,
            mid_newStringRange_e6764ed3149b7ddb,
            mid_toAutomaton_2d1d678c1dde0803,
            mid_toString_fef9c036acf290a9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermRangeQuery(jobject obj) : ::org::apache::lucene::search::AutomatonQuery(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TermRangeQuery(const TermRangeQuery& obj) : ::org::apache::lucene::search::AutomatonQuery(obj) {}

          TermRangeQuery(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &, jboolean, jboolean);
          TermRangeQuery(const ::java::lang::String &, const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &, jboolean, jboolean, const ::org::apache::lucene::search::MultiTermQuery$RewriteMethod &);

          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::util::BytesRef getLowerTerm() const;
          ::org::apache::lucene::util::BytesRef getUpperTerm() const;
          jint hashCode() const;
          jboolean includesLower() const;
          jboolean includesUpper() const;
          static TermRangeQuery newStringRange(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, jboolean, jboolean);
          static TermRangeQuery newStringRange(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, jboolean, jboolean, const ::org::apache::lucene::search::MultiTermQuery$RewriteMethod &);
          static ::org::apache::lucene::util::automaton::Automaton toAutomaton(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &, jboolean, jboolean);
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
        extern PyType_Def PY_TYPE_DEF(TermRangeQuery);
        extern PyTypeObject *PY_TYPE(TermRangeQuery);

        class t_TermRangeQuery {
        public:
          PyObject_HEAD
          TermRangeQuery object;
          static PyObject *wrap_Object(const TermRangeQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
