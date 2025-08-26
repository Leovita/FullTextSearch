#ifndef org_apache_lucene_queryparser_simple_SimpleQueryParser_H
#define org_apache_lucene_queryparser_simple_SimpleQueryParser_H

#include "org/apache/lucene/util/QueryBuilder.h"

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
              mid_init$_18cc808c0f0bca84,
              mid_init$_7adc1cea6a894907,
              mid_init$_6cdda89bcf3da8bd,
              mid_getDefaultOperator_285e02dfd9c0e1d9,
              mid_parse_9b1de8e0d58e515c,
              mid_setDefaultOperator_fc73768d22ac21a5,
              mid_simplify_5ba42f01ec05bd9c,
              mid_newPrefixQuery_9b1de8e0d58e515c,
              mid_newFuzzyQuery_5b565b82a300465b,
              mid_newPhraseQuery_5b565b82a300465b,
              mid_newDefaultQuery_9b1de8e0d58e515c,
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
