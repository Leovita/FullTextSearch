#ifndef org_apache_lucene_queryparser_xml_CoreParser_H
#define org_apache_lucene_queryparser_xml_CoreParser_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace xml {
          namespace builders {
            class SpanQueryBuilder;
          }
          class ParserException;
          class QueryBuilder;
        }
        namespace classic {
          class QueryParser;
        }
      }
      namespace analysis {
        class Analyzer;
      }
      namespace search {
        class Query;
      }
      namespace queries {
        namespace spans {
          class SpanQuery;
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
  namespace io {
    class InputStream;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace xml {

          class CoreParser : public ::java::lang::Object {
           public:
            enum {
              mid_init$_33176810276667e4,
              mid_init$_cc97c286759ef3b4,
              mid_addQueryBuilder_29c210d86f5ad3ae,
              mid_addSpanBuilder_effb754fa1e32088,
              mid_addSpanQueryBuilder_effb754fa1e32088,
              mid_parse_f376b0e5b2357646,
              mid_getEntityResolver_3302dc7f5e4cb800,
              mid_getErrorHandler_b04fd9fbc4e4fa23,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CoreParser(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CoreParser(const CoreParser& obj) : ::java::lang::Object(obj) {}

            CoreParser(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::queryparser::classic::QueryParser &);
            CoreParser(const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);

            void addQueryBuilder(const ::java::lang::String &, const ::org::apache::lucene::queryparser::xml::QueryBuilder &) const;
            void addSpanBuilder(const ::java::lang::String &, const ::org::apache::lucene::queryparser::xml::builders::SpanQueryBuilder &) const;
            void addSpanQueryBuilder(const ::java::lang::String &, const ::org::apache::lucene::queryparser::xml::builders::SpanQueryBuilder &) const;
            ::org::apache::lucene::search::Query parse(const ::java::io::InputStream &) const;
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
        namespace xml {
          extern PyType_Def PY_TYPE_DEF(CoreParser);
          extern PyTypeObject *PY_TYPE(CoreParser);

          class t_CoreParser {
          public:
            PyObject_HEAD
            CoreParser object;
            static PyObject *wrap_Object(const CoreParser&);
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
