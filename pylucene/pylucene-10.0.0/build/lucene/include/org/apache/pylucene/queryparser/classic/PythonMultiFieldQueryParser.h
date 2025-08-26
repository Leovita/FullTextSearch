#ifndef org_apache_pylucene_queryparser_classic_PythonMultiFieldQueryParser_H
#define org_apache_pylucene_queryparser_classic_PythonMultiFieldQueryParser_H

#include "org/apache/lucene/queryparser/classic/MultiFieldQueryParser.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class Analyzer;
      }
      namespace search {
        class Query;
        class BooleanClause;
      }
      namespace queryparser {
        namespace classic {
          class ParseException;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace queryparser {
        namespace classic {

          class PythonMultiFieldQueryParser : public ::org::apache::lucene::queryparser::classic::MultiFieldQueryParser {
           public:
            enum {
              mid_init$_afdc600c68811682,
              mid_getBooleanQuery_997498abbdceb67f,
              mid_getFieldQuery_a525af63bfcd652e,
              mid_getFieldQuery_964b0b3626756a89,
              mid_getFieldQuery_quoted_a525af63bfcd652e,
              mid_getFieldQuery_quoted_super_a525af63bfcd652e,
              mid_getFieldQuery_slop_964b0b3626756a89,
              mid_getFieldQuery_slop_super_964b0b3626756a89,
              mid_getFuzzyQuery_5aabae9afa99de9b,
              mid_getPrefixQuery_550dcf54034665c0,
              mid_getRangeQuery_3a6923cec6886def,
              mid_getWildcardQuery_550dcf54034665c0,
              mid_pythonExtension_0f176418e3e16541,
              mid_pythonExtension_1d3149fac12f2af3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonMultiFieldQueryParser(jobject obj) : ::org::apache::lucene::queryparser::classic::MultiFieldQueryParser(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonMultiFieldQueryParser(const PythonMultiFieldQueryParser& obj) : ::org::apache::lucene::queryparser::classic::MultiFieldQueryParser(obj) {}

            PythonMultiFieldQueryParser(const JArray< ::java::lang::String > &, const ::org::apache::lucene::analysis::Analyzer &);

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
          extern PyType_Def PY_TYPE_DEF(PythonMultiFieldQueryParser);
          extern PyTypeObject *PY_TYPE(PythonMultiFieldQueryParser);

          class t_PythonMultiFieldQueryParser {
          public:
            PyObject_HEAD
            PythonMultiFieldQueryParser object;
            static PyObject *wrap_Object(const PythonMultiFieldQueryParser&);
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
