#ifndef org_apache_lucene_queryparser_complexPhrase_ComplexPhraseQueryParser_H
#define org_apache_lucene_queryparser_complexPhrase_ComplexPhraseQueryParser_H

#include "org/apache/lucene/queryparser/classic/QueryParser.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace queryparser {
        namespace classic {
          class ParseException;
        }
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
      namespace queryparser {
        namespace complexPhrase {

          class ComplexPhraseQueryParser : public ::org::apache::lucene::queryparser::classic::QueryParser {
           public:
            enum {
              mid_init$_c50f2f6f1d850d13,
              mid_parse_171433ef85015467,
              mid_setInOrder_b110fc3a58c081ab,
              mid_newTermQuery_526dfe420434a962,
              mid_newRangeQuery_5d2f96a769d522a4,
              mid_getFieldQuery_bf6a5f4bf27919ae,
              mid_getFuzzyQuery_afdd0007c4927190,
              mid_getRangeQuery_5d2f96a769d522a4,
              mid_getWildcardQuery_9c67907ed0ac8b67,
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
