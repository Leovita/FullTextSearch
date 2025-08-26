#ifndef org_apache_lucene_queryparser_flexible_standard_parser_EscapeQuerySyntaxImpl_H
#define org_apache_lucene_queryparser_flexible_standard_parser_EscapeQuerySyntaxImpl_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace standard {
            namespace parser {
              class ParseException;
            }
          }
          namespace core {
            namespace parser {
              class EscapeQuerySyntax$Type;
              class EscapeQuerySyntax;
            }
            namespace util {
              class UnescapedCharSequence;
            }
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class CharSequence;
  }
  namespace util {
    class Locale;
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

              class EscapeQuerySyntaxImpl : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_e7bdbe105ce1bafb,
                  mid_discardEscapeChar_2563a1c92ff0d5ee,
                  mid_escape_a0fb62e43f39fc8c,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit EscapeQuerySyntaxImpl(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                EscapeQuerySyntaxImpl(const EscapeQuerySyntaxImpl& obj) : ::java::lang::Object(obj) {}

                EscapeQuerySyntaxImpl();

                static ::org::apache::lucene::queryparser::flexible::core::util::UnescapedCharSequence discardEscapeChar(const ::java::lang::CharSequence &);
                ::java::lang::CharSequence escape(const ::java::lang::CharSequence &, const ::java::util::Locale &, const ::org::apache::lucene::queryparser::flexible::core::parser::EscapeQuerySyntax$Type &) const;
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
              extern PyType_Def PY_TYPE_DEF(EscapeQuerySyntaxImpl);
              extern PyTypeObject *PY_TYPE(EscapeQuerySyntaxImpl);

              class t_EscapeQuerySyntaxImpl {
              public:
                PyObject_HEAD
                EscapeQuerySyntaxImpl object;
                static PyObject *wrap_Object(const EscapeQuerySyntaxImpl&);
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
