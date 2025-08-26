#ifndef org_apache_lucene_queryparser_flexible_standard_parser_StandardSyntaxParserTokenManager_H
#define org_apache_lucene_queryparser_flexible_standard_parser_StandardSyntaxParserTokenManager_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace parser {
              class Token;
              class StandardSyntaxParserConstants;
            }
          }
        }
        namespace charstream {
          class CharStream;
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
        namespace flexible {
          namespace standard {
            namespace parser {

              class StandardSyntaxParserTokenManager : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_e62548278c2da79e,
                  mid_init$_41ba174bb093a9c8,
                  mid_ReInit_e62548278c2da79e,
                  mid_ReInit_41ba174bb093a9c8,
                  mid_SwitchTo_8226bd0b0fc13dba,
                  mid_getNextToken_e442c4726cb124e9,
                  mid_jjFillToken_e442c4726cb124e9,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit StandardSyntaxParserTokenManager(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                StandardSyntaxParserTokenManager(const StandardSyntaxParserTokenManager& obj) : ::java::lang::Object(obj) {}

                static JArray< jint > *jjnewLexState;
                static JArray< ::java::lang::String > *jjstrLiteralImages;
                static JArray< ::java::lang::String > *lexStateNames;

                StandardSyntaxParserTokenManager(const ::org::apache::lucene::queryparser::charstream::CharStream &);
                StandardSyntaxParserTokenManager(const ::org::apache::lucene::queryparser::charstream::CharStream &, jint);

                void ReInit(const ::org::apache::lucene::queryparser::charstream::CharStream &) const;
                void ReInit(const ::org::apache::lucene::queryparser::charstream::CharStream &, jint) const;
                void SwitchTo(jint) const;
                ::org::apache::lucene::queryparser::flexible::standard::parser::Token getNextToken() const;
              };
            }
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
        namespace flexible {
          namespace standard {
            namespace parser {
              extern PyType_Def PY_TYPE_DEF(StandardSyntaxParserTokenManager);
              extern PyTypeObject *PY_TYPE(StandardSyntaxParserTokenManager);

              class t_StandardSyntaxParserTokenManager {
              public:
                PyObject_HEAD
                StandardSyntaxParserTokenManager object;
                static PyObject *wrap_Object(const StandardSyntaxParserTokenManager&);
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
}

#endif
