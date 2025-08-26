#ifndef org_apache_lucene_queries_CommonTermsQuery_H
#define org_apache_lucene_queries_CommonTermsQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class BooleanClause$Occur;
        class QueryVisitor;
        class IndexSearcher;
      }
      namespace index {
        class TermStates;
        class IndexReader;
        class Term;
        class LeafReaderContext;
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
  namespace io {
    class IOException;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {

        class CommonTermsQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_22e935421821be09,
            mid_add_ed33f9e055f7213d,
            mid_collectTermStates_f2ea78062ac6d9b5,
            mid_equals_00d17418847797d4,
            mid_getHighFreqBoost_8b62236f0e4d0dbc,
            mid_getHighFreqMinimumNumberShouldMatch_8b62236f0e4d0dbc,
            mid_getHighFreqOccur_285e02dfd9c0e1d9,
            mid_getLowFreqBoost_8b62236f0e4d0dbc,
            mid_getLowFreqMinimumNumberShouldMatch_8b62236f0e4d0dbc,
            mid_getLowFreqOccur_285e02dfd9c0e1d9,
            mid_getMaxTermFrequency_8b62236f0e4d0dbc,
            mid_getTerms_1387e1e2702ac173,
            mid_hashCode_bd89ce15dad49192,
            mid_rewrite_25984111320dbe39,
            mid_setHighFreqMinimumNumberShouldMatch_675f4cb9a2529ee0,
            mid_setLowFreqMinimumNumberShouldMatch_675f4cb9a2529ee0,
            mid_toString_fef9c036acf290a9,
            mid_visit_85475af8e8904ab4,
            mid_newTermQuery_8dbb46f1aae46c36,
            mid_buildQuery_d0cf945a19236f68,
            mid_calcLowFreqMinimumNumberShouldMatch_a3904e10f5bb9437,
            mid_calcHighFreqMinimumNumberShouldMatch_a3904e10f5bb9437,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CommonTermsQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CommonTermsQuery(const CommonTermsQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          CommonTermsQuery(const ::org::apache::lucene::search::BooleanClause$Occur &, const ::org::apache::lucene::search::BooleanClause$Occur &, jfloat);

          void add(const ::org::apache::lucene::index::Term &) const;
          void collectTermStates(const ::org::apache::lucene::index::IndexReader &, const ::java::util::List &, const JArray< ::org::apache::lucene::index::TermStates > &, const JArray< ::org::apache::lucene::index::Term > &) const;
          jboolean equals(const ::java::lang::Object &) const;
          jfloat getHighFreqBoost() const;
          jfloat getHighFreqMinimumNumberShouldMatch() const;
          ::org::apache::lucene::search::BooleanClause$Occur getHighFreqOccur() const;
          jfloat getLowFreqBoost() const;
          jfloat getLowFreqMinimumNumberShouldMatch() const;
          ::org::apache::lucene::search::BooleanClause$Occur getLowFreqOccur() const;
          jfloat getMaxTermFrequency() const;
          ::java::util::List getTerms() const;
          jint hashCode() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::search::IndexSearcher &) const;
          void setHighFreqMinimumNumberShouldMatch(jfloat) const;
          void setLowFreqMinimumNumberShouldMatch(jfloat) const;
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
      namespace queries {
        extern PyType_Def PY_TYPE_DEF(CommonTermsQuery);
        extern PyTypeObject *PY_TYPE(CommonTermsQuery);

        class t_CommonTermsQuery {
        public:
          PyObject_HEAD
          CommonTermsQuery object;
          static PyObject *wrap_Object(const CommonTermsQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
