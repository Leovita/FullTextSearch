#ifndef org_apache_lucene_search_FuzzyQuery_H
#define org_apache_lucene_search_FuzzyQuery_H

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
        }
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

        class FuzzyQuery : public ::org::apache::lucene::search::MultiTermQuery {
         public:
          enum {
            mid_init$_ed33f9e055f7213d,
            mid_init$_2d74cc249afcbb53,
            mid_init$_1b09428e23ab13c1,
            mid_init$_69f31b02a0c90005,
            mid_init$_ad1c30cd11533d44,
            mid_defaultRewriteMethod_8625a26adbc6799d,
            mid_equals_00d17418847797d4,
            mid_floatToEdits_29d0898bb5fe94ba,
            mid_getAutomata_8fd87a038bf9e303,
            mid_getFuzzyAutomaton_a77dbdd21c9dbd01,
            mid_getMaxEdits_bd89ce15dad49192,
            mid_getPrefixLength_bd89ce15dad49192,
            mid_getTerm_b549eaec39b02d52,
            mid_getTranspositions_9aa4f33e82ea333f,
            mid_hashCode_bd89ce15dad49192,
            mid_toString_fef9c036acf290a9,
            mid_visit_85475af8e8904ab4,
            mid_getTermsEnum_05b4875ff8d0c914,
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
