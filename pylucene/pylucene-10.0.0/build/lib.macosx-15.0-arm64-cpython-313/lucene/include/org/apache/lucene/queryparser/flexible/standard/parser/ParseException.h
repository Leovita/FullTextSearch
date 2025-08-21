#ifndef org_apache_lucene_queryparser_flexible_standard_parser_ParseException_H
#define org_apache_lucene_queryparser_flexible_standard_parser_ParseException_H

#include "org/apache/lucene/queryparser/flexible/core/QueryNodeParseException.h"

namespace java {
  namespace lang {
    class String;
    class Class;
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
            }
          }
          namespace messages {
            class Message;
          }
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

              class ParseException : public ::org::apache::lucene::queryparser::flexible::core::QueryNodeParseException {
               public:
                enum {
                  mid_init$_3720c61b0679eb3e,
                  mid_init$_4c499563a04682ba,
                  mid_init$_8000bcc4f12e48bf,
                  max_mid
                };

                enum {
                  fid_currentToken,
                  fid_expectedTokenSequences,
                  fid_tokenImage,
                  max_fid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static jfieldID *fids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit ParseException(jobject obj) : ::org::apache::lucene::queryparser::flexible::core::QueryNodeParseException(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                ParseException(const ParseException& obj) : ::org::apache::lucene::queryparser::flexible::core::QueryNodeParseException(obj) {}

                ::org::apache::lucene::queryparser::flexible::standard::parser::Token _get_currentToken() const;
                void _set_currentToken(const ::org::apache::lucene::queryparser::flexible::standard::parser::Token &) const;
                JArray< JArray< jint > > _get_expectedTokenSequences() const;
                void _set_expectedTokenSequences(const JArray< JArray< jint > > &) const;
                JArray< ::java::lang::String > _get_tokenImage() const;
                void _set_tokenImage(const JArray< ::java::lang::String > &) const;

                ParseException();
                ParseException(const ::org::apache::lucene::queryparser::flexible::messages::Message &);
                ParseException(const ::org::apache::lucene::queryparser::flexible::standard::parser::Token &, const JArray< JArray< jint > > &, const JArray< ::java::lang::String > &);
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
              extern PyType_Def PY_TYPE_DEF(ParseException);
              extern PyTypeObject *PY_TYPE(ParseException);

              class t_ParseException {
              public:
                PyObject_HEAD
                ParseException object;
                static PyObject *wrap_Object(const ParseException&);
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
