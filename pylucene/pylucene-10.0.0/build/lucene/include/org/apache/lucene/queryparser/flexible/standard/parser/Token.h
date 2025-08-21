#ifndef org_apache_lucene_queryparser_flexible_standard_parser_Token_H
#define org_apache_lucene_queryparser_flexible_standard_parser_Token_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class Serializable;
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

              class Token : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_3720c61b0679eb3e,
                  mid_init$_540b2b23d51b1efd,
                  mid_init$_31f7ce1c11bbaf5e,
                  mid_getValue_5655ed8670534604,
                  mid_newToken_919c1fd6bacb7fca,
                  mid_newToken_4cbc16d3cca126c8,
                  mid_toString_09a7afff1868fc5e,
                  max_mid
                };

                enum {
                  fid_beginColumn,
                  fid_beginLine,
                  fid_endColumn,
                  fid_endLine,
                  fid_image,
                  fid_kind,
                  fid_next,
                  fid_specialToken,
                  max_fid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static jfieldID *fids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit Token(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                Token(const Token& obj) : ::java::lang::Object(obj) {}

                jint _get_beginColumn() const;
                void _set_beginColumn(jint) const;
                jint _get_beginLine() const;
                void _set_beginLine(jint) const;
                jint _get_endColumn() const;
                void _set_endColumn(jint) const;
                jint _get_endLine() const;
                void _set_endLine(jint) const;
                ::java::lang::String _get_image() const;
                void _set_image(const ::java::lang::String &) const;
                jint _get_kind() const;
                void _set_kind(jint) const;
                Token _get_next() const;
                void _set_next(const Token &) const;
                Token _get_specialToken() const;
                void _set_specialToken(const Token &) const;

                Token();
                Token(jint);
                Token(jint, const ::java::lang::String &);

                ::java::lang::Object getValue() const;
                static Token newToken(jint);
                static Token newToken(jint, const ::java::lang::String &);
                ::java::lang::String toString() const;
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
              extern PyType_Def PY_TYPE_DEF(Token);
              extern PyTypeObject *PY_TYPE(Token);

              class t_Token {
              public:
                PyObject_HEAD
                Token object;
                static PyObject *wrap_Object(const Token&);
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
