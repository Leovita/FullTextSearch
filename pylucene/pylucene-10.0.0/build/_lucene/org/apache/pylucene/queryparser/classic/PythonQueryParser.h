#ifndef org_apache_pylucene_queryparser_classic_PythonQueryParser_H
#define org_apache_pylucene_queryparser_classic_PythonQueryParser_H

#include "org/apache/lucene/queryparser/classic/QueryParser.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class BooleanClause;
      }
      namespace queryparser {
        namespace charstream {
          class CharStream;
        }
        namespace classic {
          class ParseException;
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
    class Class;
    class String;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace queryparser {
        namespace classic {

          class PythonQueryParser : public ::org::apache::lucene::queryparser::classic::QueryParser {
           public:
            enum {
              mid_init$_c2b02911839614e6,
              mid_init$_c50f2f6f1d850d13,
              mid_getBooleanQuery_cfa763d4712e8bc9,
              mid_getFieldQuery_0904a80daeba8529,
              mid_getFieldQuery_bf6a5f4bf27919ae,
              mid_getFieldQuery_quoted_0904a80daeba8529,
              mid_getFieldQuery_quoted_super_0904a80daeba8529,
              mid_getFieldQuery_slop_bf6a5f4bf27919ae,
              mid_getFieldQuery_slop_super_bf6a5f4bf27919ae,
              mid_getFuzzyQuery_afdd0007c4927190,
              mid_getPrefixQuery_9c67907ed0ac8b67,
              mid_getRangeQuery_5d2f96a769d522a4,
              mid_getWildcardQuery_9c67907ed0ac8b67,
              mid_pythonExtension_16939d9d0a9a9721,
              mid_pythonExtension_8b3d46852b435a94,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonQueryParser(jobject obj) : ::org::apache::lucene::queryparser::classic::QueryParser(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonQueryParser(const PythonQueryParser& obj) : ::org::apache::lucene::queryparser::classic::QueryParser(obj) {}

            PythonQueryParser(const ::org::apache::lucene::queryparser::charstream::CharStream &);
            PythonQueryParser(const ::java::lang::String &, const ::org::apache::lucene::analysis::Analyzer &);

            ::org::apache::lucene::search::Query getBooleanQuery(const ::java::util::List &) const;
            ::org::apache::lucene::search::Query getFieldQuery(const ::java::lang::String &, const ::java::lang::String &, jboolean) const;
            ::org::apache::lucene::search::Query getFieldQuery(const ::java::lang::String &, const ::java::lang::String &, jint) const;
            ::org::apache::lucene::search::Query getFieldQuery_quoted(const ::java::lang::String &, const ::java::lang::String &, jboolean) const;
            ::org::apache::lucene::search::Query getFieldQuery_quoted_super(const ::java::lang::String &, const ::java::lang::String &, jboolean) const;
            ::org::apache::lucene::search::Query getFieldQuery_slop(const ::java::lang::String &, const ::java::lang::String &, jint) const;
            ::org::apache::lucene::search::Query getFieldQuery_slop_super(const ::java::lang::String &, const ::java::lang::String &, jint) const;
            ::org::apache::lucene::search::Query getFuzzyQuery(const ::java::lang::String &, const ::java::lang::String &, jfloat) const;
            ::org::apache::lucene::search::Query getPrefixQuery(const ::java::lang::String &, const ::java::lang::String &) const;
            ::org::apache::lucene::search::Query getRangeQuery(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, jboolean, jboolean) const;
            ::org::apache::lucene::search::Query getWildcardQuery(const ::java::lang::String &, const ::java::lang::String &) const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace queryparser {
        namespace classic {
          extern PyType_Def PY_TYPE_DEF(PythonQueryParser);
          extern PyTypeObject *PY_TYPE(PythonQueryParser);

          class t_PythonQueryParser {
          public:
            PyObject_HEAD
            PythonQueryParser object;
            static PyObject *wrap_Object(const PythonQueryParser&);
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
