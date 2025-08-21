#ifndef org_apache_lucene_sandbox_queries_FuzzyLikeThisQuery_H
#define org_apache_lucene_sandbox_queries_FuzzyLikeThisQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class QueryVisitor;
        class IndexSearcher;
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
    class Object;
  }
  namespace io {
    class IOException;
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
              mid_init$_6a9ad2be34fa4e73,
              mid_addTerms_bdd6673dfb1039a7,
              mid_equals_570b5248a6da3ef6,
              mid_hashCode_20fbf7565993c3d7,
              mid_isIgnoreTF_947277eca0748c4e,
              mid_rewrite_aeaa882ae5e96552,
              mid_setIgnoreTF_b110fc3a58c081ab,
              mid_toString_cb0eb1432185fc94,
              mid_visit_1b22ec612b613eea,
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
