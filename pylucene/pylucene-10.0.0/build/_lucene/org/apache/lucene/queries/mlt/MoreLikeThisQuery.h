#ifndef org_apache_lucene_queries_mlt_MoreLikeThisQuery_H
#define org_apache_lucene_queries_mlt_MoreLikeThisQuery_H

#include "org/apache/lucene/search/Query.h"

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
    class Set;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class Analyzer;
      }
      namespace search {
        class QueryVisitor;
        class IndexSearcher;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace mlt {

          class MoreLikeThisQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_init$_d38b51d5ca082375,
              mid_equals_00d17418847797d4,
              mid_getAnalyzer_7bc9b23f56937752,
              mid_getLikeText_e7df854526d67fa3,
              mid_getMaxQueryTerms_bd89ce15dad49192,
              mid_getMinDocFreq_bd89ce15dad49192,
              mid_getMinTermFrequency_bd89ce15dad49192,
              mid_getMoreLikeFields_970db9a2a49d840f,
              mid_getPercentTermsToMatch_8b62236f0e4d0dbc,
              mid_getStopWords_79131c6bbcf08916,
              mid_hashCode_bd89ce15dad49192,
              mid_rewrite_25984111320dbe39,
              mid_setAnalyzer_1aaca852402a5069,
              mid_setLikeText_ee46a189998009d6,
              mid_setMaxQueryTerms_8226bd0b0fc13dba,
              mid_setMinDocFreq_8226bd0b0fc13dba,
              mid_setMinTermFrequency_8226bd0b0fc13dba,
              mid_setMoreLikeFields_1f90f2fcbe43e50d,
              mid_setPercentTermsToMatch_675f4cb9a2529ee0,
              mid_setStopWords_478519f7d4301fc7,
              mid_toString_fef9c036acf290a9,
              mid_visit_85475af8e8904ab4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MoreLikeThisQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MoreLikeThisQuery(const MoreLikeThisQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            MoreLikeThisQuery(const ::java::lang::String &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::analysis::Analyzer &, const ::java::lang::String &);

            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::analysis::Analyzer getAnalyzer() const;
            ::java::lang::String getLikeText() const;
            jint getMaxQueryTerms() const;
            jint getMinDocFreq() const;
            jint getMinTermFrequency() const;
            JArray< ::java::lang::String > getMoreLikeFields() const;
            jfloat getPercentTermsToMatch() const;
            ::java::util::Set getStopWords() const;
            jint hashCode() const;
            ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::search::IndexSearcher &) const;
            void setAnalyzer(const ::org::apache::lucene::analysis::Analyzer &) const;
            void setLikeText(const ::java::lang::String &) const;
            void setMaxQueryTerms(jint) const;
            void setMinDocFreq(jint) const;
            void setMinTermFrequency(jint) const;
            void setMoreLikeFields(const JArray< ::java::lang::String > &) const;
            void setPercentTermsToMatch(jfloat) const;
            void setStopWords(const ::java::util::Set &) const;
            ::java::lang::String toString(const ::java::lang::String &) const;
            void visit(const ::org::apache::lucene::search::QueryVisitor &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queries {
        namespace mlt {
          extern PyType_Def PY_TYPE_DEF(MoreLikeThisQuery);
          extern PyTypeObject *PY_TYPE(MoreLikeThisQuery);

          class t_MoreLikeThisQuery {
          public:
            PyObject_HEAD
            MoreLikeThisQuery object;
            static PyObject *wrap_Object(const MoreLikeThisQuery&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
