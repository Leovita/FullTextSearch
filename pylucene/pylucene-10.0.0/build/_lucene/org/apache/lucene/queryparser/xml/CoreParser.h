#ifndef org_apache_lucene_queryparser_xml_CoreParser_H
#define org_apache_lucene_queryparser_xml_CoreParser_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace queryparser {
        namespace xml {
          class QueryBuilder;
          class ParserException;
          namespace builders {
            class SpanQueryBuilder;
          }
        }
        namespace classic {
          class QueryParser;
        }
      }
      namespace analysis {
        class Analyzer;
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
  namespace io {
    class InputStream;
  }
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
        namespace xml {

          class CoreParser : public ::java::lang::Object {
           public:
            enum {
              mid_init$_5ad8a03860372cd3,
              mid_init$_c50f2f6f1d850d13,
              mid_addQueryBuilder_4c407e9e3997ffc4,
              mid_addSpanBuilder_2c6d0463560b6b66,
              mid_addSpanQueryBuilder_2c6d0463560b6b66,
              mid_parse_87833bd37e939f1f,
              mid_getEntityResolver_1de2bd4ff8ce381e,
              mid_getErrorHandler_0c92ac79b7c75d20,
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
