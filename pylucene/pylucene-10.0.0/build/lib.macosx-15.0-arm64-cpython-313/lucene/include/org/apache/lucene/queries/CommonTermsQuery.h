#ifndef org_apache_lucene_queries_CommonTermsQuery_H
#define org_apache_lucene_queries_CommonTermsQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
        class IndexReader;
        class TermStates;
        class LeafReaderContext;
      }
      namespace search {
        class QueryVisitor;
        class BooleanClause$Occur;
        class IndexSearcher;
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
  namespace util {
    class List;
  }
  namespace io {
    class IOException;
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
            mid_init$_515940149b7f69fc,
            mid_add_3b0982cb6e1bfb9d,
            mid_collectTermStates_12d97c4285b19e0d,
            mid_equals_570b5248a6da3ef6,
            mid_getHighFreqBoost_9b6c3480dac00edf,
            mid_getHighFreqMinimumNumberShouldMatch_9b6c3480dac00edf,
            mid_getHighFreqOccur_75abc2b8d272b588,
            mid_getLowFreqBoost_9b6c3480dac00edf,
            mid_getLowFreqMinimumNumberShouldMatch_9b6c3480dac00edf,
            mid_getLowFreqOccur_75abc2b8d272b588,
            mid_getMaxTermFrequency_9b6c3480dac00edf,
            mid_getTerms_36830460e10839eb,
            mid_hashCode_20fbf7565993c3d7,
            mid_rewrite_aeaa882ae5e96552,
            mid_setHighFreqMinimumNumberShouldMatch_c771a95b0227fb6a,
            mid_setLowFreqMinimumNumberShouldMatch_c771a95b0227fb6a,
            mid_toString_cb0eb1432185fc94,
            mid_visit_1b22ec612b613eea,
            mid_newTermQuery_c16b5012c73d3e7d,
            mid_calcLowFreqMinimumNumberShouldMatch_3c9bba330f083871,
            mid_calcHighFreqMinimumNumberShouldMatch_3c9bba330f083871,
            mid_buildQuery_c853f83e3bbf096d,
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
