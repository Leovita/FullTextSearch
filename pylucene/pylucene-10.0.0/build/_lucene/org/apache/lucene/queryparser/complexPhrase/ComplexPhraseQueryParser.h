#ifndef org_apache_lucene_queryparser_complexPhrase_ComplexPhraseQueryParser_H
#define org_apache_lucene_queryparser_complexPhrase_ComplexPhraseQueryParser_H

#include "org/apache/lucene/queryparser/classic/QueryParser.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class Analyzer;
      }
      namespace search {
        class Query;
      }
      namespace queryparser {
        namespace classic {
          class ParseException;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace complexPhrase {

          class ComplexPhraseQueryParser : public ::org::apache::lucene::queryparser::classic::QueryParser {
           public:
            enum {
              mid_init$_cc97c286759ef3b4,
              mid_parse_9b1de8e0d58e515c,
              mid_setInOrder_f5dd97eebf6a215a,
              mid_newRangeQuery_3a6923cec6886def,
              mid_newTermQuery_4f5fd3e6026f769f,
              mid_getFieldQuery_964b0b3626756a89,
              mid_getFuzzyQuery_5aabae9afa99de9b,
              mid_getWildcardQuery_550dcf54034665c0,
              mid_getRangeQuery_3a6923cec6886def,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ComplexPhraseQueryParser(jobject obj) : ::org::apache::lucene::queryparser::classic::QueryParser(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ComplexPhraseQueryParser(const ComplexPhraseQueryParser& obj) : ::org::apache::lucene::queryparser::classic::QueryParser(obj) {}

            ComplexPhraseQueryParser(const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);

            ::org::apache::lucene::search::Query parse(const ::java::lang::String &) const;
            void setInOrder(jboolean) const;
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
        namespace complexPhrase {
          extern PyType_Def PY_TYPE_DEF(ComplexPhraseQueryParser);
          extern PyTypeObject *PY_TYPE(ComplexPhraseQueryParser);

          class t_ComplexPhraseQueryParser {
          public:
            PyObject_HEAD
            ComplexPhraseQueryParser object;
            static PyObject *wrap_Object(const ComplexPhraseQueryParser&);
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
