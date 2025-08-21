#ifndef org_apache_lucene_search_TermRangeQuery_H
#define org_apache_lucene_search_TermRangeQuery_H

#include "org/apache/lucene/search/AutomatonQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        namespace automaton {
          class Automaton;
        }
      }
      namespace search {
        class TermRangeQuery;
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

        class TermRangeQuery : public ::org::apache::lucene::search::AutomatonQuery {
         public:
          enum {
            mid_init$_b3e0920f2459295e,
            mid_init$_0ba1fe1bffa6bb67,
            mid_equals_570b5248a6da3ef6,
            mid_getLowerTerm_9740fddd1c7df148,
            mid_getUpperTerm_9740fddd1c7df148,
            mid_hashCode_20fbf7565993c3d7,
            mid_includesLower_947277eca0748c4e,
            mid_includesUpper_947277eca0748c4e,
            mid_newStringRange_a1865f09993cf795,
            mid_newStringRange_3d2ca19aca46fa96,
            mid_toAutomaton_5dd222cdb6dee880,
            mid_toString_cb0eb1432185fc94,
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
