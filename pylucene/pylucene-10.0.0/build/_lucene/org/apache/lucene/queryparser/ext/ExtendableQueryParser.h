#ifndef org_apache_lucene_queryparser_ext_ExtendableQueryParser_H
#define org_apache_lucene_queryparser_ext_ExtendableQueryParser_H

#include "org/apache/lucene/queryparser/classic/QueryParser.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace ext {
          class Extensions;
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
        namespace ext {

          class ExtendableQueryParser : public ::org::apache::lucene::queryparser::classic::QueryParser {
           public:
            enum {
              mid_init$_cc97c286759ef3b4,
              mid_init$_6ce6af21178caf67,
              mid_getExtensionFieldDelimiter_15a06771db8cb866,
              mid_getFieldQuery_a525af63bfcd652e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ExtendableQueryParser(jobject obj) : ::org::apache::lucene::queryparser::classic::QueryParser(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ExtendableQueryParser(const ExtendableQueryParser& obj) : ::org::apache::lucene::queryparser::classic::QueryParser(obj) {}

            ExtendableQueryParser(const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);
            ExtendableQueryParser(const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::queryparser::ext::Extensions &);

            jchar getExtensionFieldDelimiter() const;
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
        namespace ext {
          extern PyType_Def PY_TYPE_DEF(ExtendableQueryParser);
          extern PyTypeObject *PY_TYPE(ExtendableQueryParser);

          class t_ExtendableQueryParser {
          public:
            PyObject_HEAD
            ExtendableQueryParser object;
            static PyObject *wrap_Object(const ExtendableQueryParser&);
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
