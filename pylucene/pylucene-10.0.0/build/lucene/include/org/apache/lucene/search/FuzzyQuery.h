#ifndef org_apache_lucene_search_FuzzyQuery_H
#define org_apache_lucene_search_FuzzyQuery_H

#include "org/apache/lucene/search/MultiTermQuery.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace automaton {
          class CompiledAutomaton;
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

        class FuzzyQuery : public ::org::apache::lucene::search::MultiTermQuery {
         public:
          enum {
            mid_init$_3b0982cb6e1bfb9d,
            mid_init$_52d849eb23739642,
            mid_init$_25675dcc7619f110,
            mid_init$_0b17c44c3962ce96,
            mid_init$_1805a994e9e4ba94,
            mid_defaultRewriteMethod_c13426f2e4453b6d,
            mid_equals_570b5248a6da3ef6,
            mid_floatToEdits_26c03548912d2f47,
            mid_getAutomata_667c3f67aa7a3aa5,
            mid_getFuzzyAutomaton_991123f3daf66b45,
            mid_getMaxEdits_20fbf7565993c3d7,
            mid_getPrefixLength_20fbf7565993c3d7,
            mid_getTerm_8b5614d1be154430,
            mid_getTranspositions_947277eca0748c4e,
            mid_hashCode_20fbf7565993c3d7,
            mid_toString_cb0eb1432185fc94,
            mid_visit_1b22ec612b613eea,
            mid_getTermsEnum_b346bdb4749db660,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FuzzyQuery(jobject obj) : ::org::apache::lucene::search::MultiTermQuery(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FuzzyQuery(const FuzzyQuery& obj) : ::org::apache::lucene::search::MultiTermQuery(obj) {}

          static jint defaultMaxEdits;
          static jint defaultMaxExpansions;
          static jint defaultPrefixLength;
          static jboolean defaultTranspositions;

          FuzzyQuery(const ::org::apache::lucene::index::Term &);
          FuzzyQuery(const ::org::apache::lucene::index::Term &, jint);
          FuzzyQuery(const ::org::apache::lucene::index::Term &, jint, jint);
          FuzzyQuery(const ::org::apache::lucene::index::Term &, jint, jint, jint, jboolean);
          FuzzyQuery(const ::org::apache::lucene::index::Term &, jint, jint, jint, jboolean, const ::org::apache::lucene::search::MultiTermQuery$RewriteMethod &);

          static ::org::apache::lucene::search::MultiTermQuery$RewriteMethod defaultRewriteMethod(jint);
          jboolean equals(const ::java::lang::Object &) const;
          static jint floatToEdits(jfloat, jint);
          ::org::apache::lucene::util::automaton::CompiledAutomaton getAutomata() const;
          static ::org::apache::lucene::util::automaton::CompiledAutomaton getFuzzyAutomaton(const ::java::lang::String &, jint, jint, jboolean);
          jint getMaxEdits() const;
          jint getPrefixLength() const;
          ::org::apache::lucene::index::Term getTerm() const;
          jboolean getTranspositions() const;
          jint hashCode() const;
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
        extern PyType_Def PY_TYPE_DEF(FuzzyQuery);
        extern PyTypeObject *PY_TYPE(FuzzyQuery);

        class t_FuzzyQuery {
        public:
          PyObject_HEAD
          FuzzyQuery object;
          static PyObject *wrap_Object(const FuzzyQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
