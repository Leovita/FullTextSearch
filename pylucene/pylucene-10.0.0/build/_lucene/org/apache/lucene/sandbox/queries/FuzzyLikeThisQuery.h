#ifndef org_apache_lucene_sandbox_queries_FuzzyLikeThisQuery_H
#define org_apache_lucene_sandbox_queries_FuzzyLikeThisQuery_H

#include "org/apache/lucene/search/Query.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class Analyzer;
      }
      namespace search {
        class QueryVisitor;
        class IndexSearcher;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace sandbox {
        namespace queries {

          class FuzzyLikeThisQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_init$_146afad05c543f3b,
              mid_addTerms_94f81bf67e896239,
              mid_equals_00d17418847797d4,
              mid_hashCode_bd89ce15dad49192,
              mid_isIgnoreTF_9aa4f33e82ea333f,
              mid_rewrite_25984111320dbe39,
              mid_setIgnoreTF_f5dd97eebf6a215a,
              mid_toString_fef9c036acf290a9,
              mid_visit_85475af8e8904ab4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FuzzyLikeThisQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FuzzyLikeThisQuery(const FuzzyLikeThisQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            FuzzyLikeThisQuery(jint, const ::org::apache::lucene::analysis::Analyzer &);

            void addTerms(const ::java::lang::String &, const ::java::lang::String &, jfloat, jint) const;
            jboolean equals(const ::java::lang::Object &) const;
            jint hashCode() const;
            jboolean isIgnoreTF() const;
            ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::search::IndexSearcher &) const;
            void setIgnoreTF(jboolean) const;
            ::java::lang::String toString(const ::java::lang::String &) const;
            void visit(const ::org::apache::lucene::search::QueryVisitor &) const;
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
      namespace sandbox {
        namespace queries {
          extern PyType_Def PY_TYPE_DEF(FuzzyLikeThisQuery);
          extern PyTypeObject *PY_TYPE(FuzzyLikeThisQuery);

          class t_FuzzyLikeThisQuery {
          public:
            PyObject_HEAD
            FuzzyLikeThisQuery object;
            static PyObject *wrap_Object(const FuzzyLikeThisQuery&);
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
