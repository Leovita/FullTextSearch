#ifndef org_apache_lucene_queryparser_ext_ExtendableQueryParser_H
#define org_apache_lucene_queryparser_ext_ExtendableQueryParser_H

#include "org/apache/lucene/queryparser/classic/QueryParser.h"

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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace ext {

          class ExtendableQueryParser : public ::org::apache::lucene::queryparser::classic::QueryParser {
           public:
            enum {
              mid_init$_c50f2f6f1d850d13,
              mid_init$_610c55da7df304bf,
              mid_getExtensionFieldDelimiter_6c956faefc706166,
              mid_getFieldQuery_0904a80daeba8529,
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
