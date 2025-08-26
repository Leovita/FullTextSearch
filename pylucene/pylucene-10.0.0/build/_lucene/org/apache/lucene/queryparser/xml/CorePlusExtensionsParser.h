#ifndef org_apache_lucene_queryparser_xml_CorePlusExtensionsParser_H
#define org_apache_lucene_queryparser_xml_CorePlusExtensionsParser_H

#include "org/apache/lucene/queryparser/xml/CorePlusQueriesParser.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace classic {
          class QueryParser;
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
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace xml {

          class CorePlusExtensionsParser : public ::org::apache::lucene::queryparser::xml::CorePlusQueriesParser {
           public:
            enum {
              mid_init$_33176810276667e4,
              mid_init$_cc97c286759ef3b4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CorePlusExtensionsParser(jobject obj) : ::org::apache::lucene::queryparser::xml::CorePlusQueriesParser(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CorePlusExtensionsParser(const CorePlusExtensionsParser& obj) : ::org::apache::lucene::queryparser::xml::CorePlusQueriesParser(obj) {}

            CorePlusExtensionsParser(const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::queryparser::classic::QueryParser &);
            CorePlusExtensionsParser(const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);
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
          extern PyType_Def PY_TYPE_DEF(CorePlusExtensionsParser);
          extern PyTypeObject *PY_TYPE(CorePlusExtensionsParser);

          class t_CorePlusExtensionsParser {
          public:
            PyObject_HEAD
            CorePlusExtensionsParser object;
            static PyObject *wrap_Object(const CorePlusExtensionsParser&);
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
