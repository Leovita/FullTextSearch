#ifndef org_apache_lucene_util_QueryBuilder_H
#define org_apache_lucene_util_QueryBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class BooleanClause$Occur;
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
            mid_init$_07cd0f76cabcf75a,
            mid_createBooleanQuery_9c67907ed0ac8b67,
            mid_createBooleanQuery_1d575fec14991bb3,
            mid_createMinShouldMatchQuery_afdd0007c4927190,
            mid_createPhraseQuery_9c67907ed0ac8b67,
            mid_createPhraseQuery_bf6a5f4bf27919ae,
            mid_getAnalyzer_6755ba003d984513,
            mid_getAutoGenerateMultiTermSynonymsPhraseQuery_947277eca0748c4e,
            mid_getEnableGraphQueries_947277eca0748c4e,
            mid_getEnablePositionIncrements_947277eca0748c4e,
            mid_setAnalyzer_07cd0f76cabcf75a,
            mid_setAutoGenerateMultiTermSynonymsPhraseQuery_b110fc3a58c081ab,
            mid_setEnableGraphQueries_b110fc3a58c081ab,
            mid_setEnablePositionIncrements_b110fc3a58c081ab,
            mid_analyzeTerm_f4507eac21fef8da,
            mid_analyzeGraphPhrase_d8a5c2a645ae5b57,
            mid_analyzeGraphBoolean_3a3586ac6f4a5915,
            mid_analyzeMultiPhrase_47b0066d3cc9f726,
            mid_analyzePhrase_47b0066d3cc9f726,
            mid_analyzeBoolean_f4507eac21fef8da,
            mid_analyzeMultiBoolean_3a3586ac6f4a5915,
            mid_newTermQuery_526dfe420434a962,
            mid_newSynonymQuery_df67e7b99804a73c,
            mid_newMultiPhraseQueryBuilder_89344691f7c712f2,
            mid_newGraphSynonymQuery_93fd1e9e11dfd100,
            mid_newBooleanQuery_3cf10685dab365aa,
            mid_createFieldQuery_1f09db2030fa1ba6,
            mid_createFieldQuery_1fb8846fbffec0ef,
            mid_add_ab184fccf5c367d8,
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
