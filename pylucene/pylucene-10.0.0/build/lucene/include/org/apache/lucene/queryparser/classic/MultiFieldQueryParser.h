#ifndef org_apache_lucene_queryparser_classic_MultiFieldQueryParser_H
#define org_apache_lucene_queryparser_classic_MultiFieldQueryParser_H

#include "org/apache/lucene/queryparser/classic/QueryParser.h"

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
              mid_init$_afdc600c68811682,
              mid_init$_a23880a4d26ae13f,
              mid_parse_f09b03d871c55c8e,
              mid_parse_a485e2ab44d5b88a,
              mid_parse_fba9d889e8196901,
              mid_getFieldQuery_964b0b3626756a89,
              mid_getFieldQuery_a525af63bfcd652e,
              mid_getMultiFieldQuery_997498abbdceb67f,
              mid_getFuzzyQuery_5aabae9afa99de9b,
              mid_getPrefixQuery_550dcf54034665c0,
              mid_getWildcardQuery_550dcf54034665c0,
              mid_getRangeQuery_3a6923cec6886def,
              mid_getRegexpQuery_550dcf54034665c0,
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
