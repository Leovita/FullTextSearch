#ifndef org_apache_lucene_queryparser_classic_MultiFieldQueryParser_H
#define org_apache_lucene_queryparser_classic_MultiFieldQueryParser_H

#include "org/apache/lucene/queryparser/classic/QueryParser.h"

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
      namespace queryparser {
        namespace classic {
          class ParseException;
        }
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
        namespace classic {

          class MultiFieldQueryParser : public ::org::apache::lucene::queryparser::classic::QueryParser {
           public:
            enum {
              mid_init$_de044ff3d28f5668,
              mid_init$_62ba45a111748a97,
              mid_parse_251be478ca716343,
              mid_parse_ad8cdb64c707bce6,
              mid_parse_84ab5382023ec362,
              mid_getFieldQuery_bf6a5f4bf27919ae,
              mid_getFieldQuery_0904a80daeba8529,
              mid_getFuzzyQuery_afdd0007c4927190,
              mid_getPrefixQuery_9c67907ed0ac8b67,
              mid_getRangeQuery_5d2f96a769d522a4,
              mid_getWildcardQuery_9c67907ed0ac8b67,
              mid_getMultiFieldQuery_cfa763d4712e8bc9,
              mid_getRegexpQuery_9c67907ed0ac8b67,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MultiFieldQueryParser(jobject obj) : ::org::apache::lucene::queryparser::classic::QueryParser(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MultiFieldQueryParser(const MultiFieldQueryParser& obj) : ::org::apache::lucene::queryparser::classic::QueryParser(obj) {}

            MultiFieldQueryParser(const JArray< ::java::lang::String > &, const ::org::apache::lucene::analysis::Analyzer &);
            MultiFieldQueryParser(const JArray< ::java::lang::String > &, const ::org::apache::lucene::analysis::Analyzer &, const ::java::util::Map &);

            static ::org::apache::lucene::search::Query parse(const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const ::org::apache::lucene::analysis::Analyzer &);
            static ::org::apache::lucene::search::Query parse(const JArray< ::java::lang::String > &, const JArray< ::java::lang::String > &, const JArray< ::org::apache::lucene::search::BooleanClause$Occur > &, const ::org::apache::lucene::analysis::Analyzer &);
            static ::org::apache::lucene::search::Query parse(const ::java::lang::String &, const JArray< ::java::lang::String > &, const JArray< ::org::apache::lucene::search::BooleanClause$Occur > &, const ::org::apache::lucene::analysis::Analyzer &);
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
        namespace classic {
          extern PyType_Def PY_TYPE_DEF(MultiFieldQueryParser);
          extern PyTypeObject *PY_TYPE(MultiFieldQueryParser);

          class t_MultiFieldQueryParser {
          public:
            PyObject_HEAD
            MultiFieldQueryParser object;
            static PyObject *wrap_Object(const MultiFieldQueryParser&);
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
