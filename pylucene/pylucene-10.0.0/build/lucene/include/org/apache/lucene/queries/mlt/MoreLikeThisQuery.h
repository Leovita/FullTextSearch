#ifndef org_apache_lucene_queries_mlt_MoreLikeThisQuery_H
#define org_apache_lucene_queries_mlt_MoreLikeThisQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class QueryVisitor;
        class IndexSearcher;
      }
      namespace analysis {
        class Analyzer;
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
  namespace io {
    class IOException;
  }
  namespace util {
    class Set;
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
              mid_init$_7d60edbea360c24f,
              mid_equals_570b5248a6da3ef6,
              mid_getAnalyzer_6755ba003d984513,
              mid_getLikeText_09a7afff1868fc5e,
              mid_getMaxQueryTerms_20fbf7565993c3d7,
              mid_getMinDocFreq_20fbf7565993c3d7,
              mid_getMinTermFrequency_20fbf7565993c3d7,
              mid_getMoreLikeFields_6da8f3ea65e22733,
              mid_getPercentTermsToMatch_9b6c3480dac00edf,
              mid_getStopWords_4df174295554d7bd,
              mid_hashCode_20fbf7565993c3d7,
              mid_rewrite_aeaa882ae5e96552,
              mid_setAnalyzer_07cd0f76cabcf75a,
              mid_setLikeText_0d82408c6e55bc30,
              mid_setMaxQueryTerms_540b2b23d51b1efd,
              mid_setMinDocFreq_540b2b23d51b1efd,
              mid_setMinTermFrequency_540b2b23d51b1efd,
              mid_setMoreLikeFields_ce41e621b30e91b1,
              mid_setPercentTermsToMatch_c771a95b0227fb6a,
              mid_setStopWords_1d5d4c6f11d1b2ab,
              mid_toString_cb0eb1432185fc94,
              mid_visit_1b22ec612b613eea,
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
