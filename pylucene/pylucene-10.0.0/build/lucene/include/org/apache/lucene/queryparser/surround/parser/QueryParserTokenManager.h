#ifndef org_apache_lucene_queryparser_surround_parser_QueryParserTokenManager_H
#define org_apache_lucene_queryparser_surround_parser_QueryParserTokenManager_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace parser {
            class QueryParserConstants;
            class Token;
          }
        }
        namespace charstream {
          class CharStream;
        }
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
        namespace surround {
          namespace parser {

            class QueryParserTokenManager : public ::java::lang::Object {
             public:
              enum {
                mid_init$_c2b02911839614e6,
                mid_init$_876a1399cff1cc40,
                mid_ReInit_c2b02911839614e6,
                mid_ReInit_876a1399cff1cc40,
                mid_SwitchTo_540b2b23d51b1efd,
                mid_getNextToken_d7b848889e5023e6,
                mid_jjFillToken_d7b848889e5023e6,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit QueryParserTokenManager(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              QueryParserTokenManager(const QueryParserTokenManager& obj) : ::java::lang::Object(obj) {}

              static JArray< jint > *jjnewLexState;
              static JArray< ::java::lang::String > *jjstrLiteralImages;
              static JArray< ::java::lang::String > *lexStateNames;

              QueryParserTokenManager(const ::org::apache::lucene::queryparser::charstream::CharStream &);
              QueryParserTokenManager(const ::org::apache::lucene::queryparser::charstream::CharStream &, jint);

              void ReInit(const ::org::apache::lucene::queryparser::charstream::CharStream &) const;
              void ReInit(const ::org::apache::lucene::queryparser::charstream::CharStream &, jint) const;
              void SwitchTo(jint) const;
              ::org::apache::lucene::queryparser::surround::parser::Token getNextToken() const;
            };
          }
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
        namespace surround {
          namespace parser {
            extern PyType_Def PY_TYPE_DEF(QueryParserTokenManager);
            extern PyTypeObject *PY_TYPE(QueryParserTokenManager);

            class t_QueryParserTokenManager {
            public:
              PyObject_HEAD
              QueryParserTokenManager object;
              static PyObject *wrap_Object(const QueryParserTokenManager&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
