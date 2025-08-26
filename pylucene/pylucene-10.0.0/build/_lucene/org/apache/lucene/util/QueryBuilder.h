#ifndef org_apache_lucene_util_QueryBuilder_H
#define org_apache_lucene_util_QueryBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class BooleanClause$Occur;
        class Query;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class QueryBuilder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_1aaca852402a5069,
            mid_createBooleanQuery_550dcf54034665c0,
            mid_createBooleanQuery_aaf63fb4b05bfdc7,
            mid_createMinShouldMatchQuery_5aabae9afa99de9b,
            mid_createPhraseQuery_550dcf54034665c0,
            mid_createPhraseQuery_964b0b3626756a89,
            mid_getAnalyzer_7bc9b23f56937752,
            mid_getAutoGenerateMultiTermSynonymsPhraseQuery_9aa4f33e82ea333f,
            mid_getEnableGraphQueries_9aa4f33e82ea333f,
            mid_getEnablePositionIncrements_9aa4f33e82ea333f,
            mid_setAnalyzer_1aaca852402a5069,
            mid_setAutoGenerateMultiTermSynonymsPhraseQuery_f5dd97eebf6a215a,
            mid_setEnableGraphQueries_f5dd97eebf6a215a,
            mid_setEnablePositionIncrements_f5dd97eebf6a215a,
            mid_newSynonymQuery_d2e98e1358c7ca9c,
            mid_newTermQuery_4f5fd3e6026f769f,
            mid_newMultiPhraseQueryBuilder_700bfa64cd5ce84c,
            mid_newGraphSynonymQuery_7e1d2c391d9c07a4,
            mid_newBooleanQuery_5d4fe1bba074f5ec,
            mid_createFieldQuery_6845f5dfeef9580e,
            mid_createFieldQuery_c80b8755948b589f,
            mid_analyzeTerm_1acf485a3124c86e,
            mid_analyzeGraphPhrase_191c0c712230e104,
            mid_analyzeGraphBoolean_5bac8b807e05f6fb,
            mid_analyzeMultiPhrase_014c4df0d3174e20,
            mid_analyzePhrase_014c4df0d3174e20,
            mid_analyzeBoolean_1acf485a3124c86e,
            mid_analyzeMultiBoolean_5bac8b807e05f6fb,
            mid_add_98f87e73e9e1f8cc,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit QueryBuilder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          QueryBuilder(const QueryBuilder& obj) : ::java::lang::Object(obj) {}

          QueryBuilder(const ::org::apache::lucene::analysis::Analyzer &);

          ::org::apache::lucene::search::Query createBooleanQuery(const ::java::lang::String &, const ::java::lang::String &) const;
          ::org::apache::lucene::search::Query createBooleanQuery(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::search::BooleanClause$Occur &) const;
          ::org::apache::lucene::search::Query createMinShouldMatchQuery(const ::java::lang::String &, const ::java::lang::String &, jfloat) const;
          ::org::apache::lucene::search::Query createPhraseQuery(const ::java::lang::String &, const ::java::lang::String &) const;
          ::org::apache::lucene::search::Query createPhraseQuery(const ::java::lang::String &, const ::java::lang::String &, jint) const;
          ::org::apache::lucene::analysis::Analyzer getAnalyzer() const;
          jboolean getAutoGenerateMultiTermSynonymsPhraseQuery() const;
          jboolean getEnableGraphQueries() const;
          jboolean getEnablePositionIncrements() const;
          void setAnalyzer(const ::org::apache::lucene::analysis::Analyzer &) const;
          void setAutoGenerateMultiTermSynonymsPhraseQuery(jboolean) const;
          void setEnableGraphQueries(jboolean) const;
          void setEnablePositionIncrements(jboolean) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(QueryBuilder);
        extern PyTypeObject *PY_TYPE(QueryBuilder);

        class t_QueryBuilder {
        public:
          PyObject_HEAD
          QueryBuilder object;
          static PyObject *wrap_Object(const QueryBuilder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
