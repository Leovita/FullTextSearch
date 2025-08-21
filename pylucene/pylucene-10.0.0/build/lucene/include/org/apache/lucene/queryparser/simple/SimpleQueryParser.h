#ifndef org_apache_lucene_queryparser_simple_SimpleQueryParser_H
#define org_apache_lucene_queryparser_simple_SimpleQueryParser_H

#include "org/apache/lucene/util/QueryBuilder.h"

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
    class Float;
    class Class;
    class String;
  }
  namespace util {
    class Map;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace simple {

          class SimpleQueryParser : public ::org::apache::lucene::util::QueryBuilder {
           public:
            enum {
              mid_init$_7afdd3ead5f9cb60,
              mid_init$_7385dc08a4c2e1b0,
              mid_init$_8a259b4dec96114e,
              mid_getDefaultOperator_75abc2b8d272b588,
              mid_parse_171433ef85015467,
              mid_setDefaultOperator_7f7397e7ca59ebe1,
              mid_newPhraseQuery_f6c055cd1516634d,
              mid_newDefaultQuery_171433ef85015467,
              mid_simplify_1a22d89e669e6e9a,
              mid_newPrefixQuery_171433ef85015467,
              mid_newFuzzyQuery_f6c055cd1516634d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleQueryParser(jobject obj) : ::org::apache::lucene::util::QueryBuilder(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleQueryParser(const SimpleQueryParser& obj) : ::org::apache::lucene::util::QueryBuilder(obj) {}

            static jint AND_OPERATOR;
            static jint ESCAPE_OPERATOR;
            static jint FUZZY_OPERATOR;
            static jint NEAR_OPERATOR;
            static jint NOT_OPERATOR;
            static jint OR_OPERATOR;
            static jint PHRASE_OPERATOR;
            static jint PRECEDENCE_OPERATORS;
            static jint PREFIX_OPERATOR;
            static jint WHITESPACE_OPERATOR;

            SimpleQueryParser(const ::org::apache::lucene::analysis::Analyzer &, const ::java::lang::String &);
            SimpleQueryParser(const ::org::apache::lucene::analysis::Analyzer &, const ::java::util::Map &);
            SimpleQueryParser(const ::org::apache::lucene::analysis::Analyzer &, const ::java::util::Map &, jint);

            ::org::apache::lucene::search::BooleanClause$Occur getDefaultOperator() const;
            ::org::apache::lucene::search::Query parse(const ::java::lang::String &) const;
            void setDefaultOperator(const ::org::apache::lucene::search::BooleanClause$Occur &) const;
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
      namespace queryparser {
        namespace simple {
          extern PyType_Def PY_TYPE_DEF(SimpleQueryParser);
          extern PyTypeObject *PY_TYPE(SimpleQueryParser);

          class t_SimpleQueryParser {
          public:
            PyObject_HEAD
            SimpleQueryParser object;
            static PyObject *wrap_Object(const SimpleQueryParser&);
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
