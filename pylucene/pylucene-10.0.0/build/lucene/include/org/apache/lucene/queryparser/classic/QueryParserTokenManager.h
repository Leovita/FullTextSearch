#ifndef org_apache_lucene_queryparser_classic_QueryParserTokenManager_H
#define org_apache_lucene_queryparser_classic_QueryParserTokenManager_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace classic {
          class Token;
          class QueryParserConstants;
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
        namespace classic {

          class QueryParserTokenManager : public ::java::lang::Object {
           public:
            enum {
              mid_init$_e62548278c2da79e,
              mid_init$_41ba174bb093a9c8,
              mid_ReInit_e62548278c2da79e,
              mid_ReInit_41ba174bb093a9c8,
              mid_SwitchTo_8226bd0b0fc13dba,
              mid_getNextToken_8878d7ea08e37e5f,
              mid_jjFillToken_8878d7ea08e37e5f,
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
            ::org::apache::lucene::queryparser::classic::Token getNextToken() const;
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

#endif
