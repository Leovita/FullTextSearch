#ifndef org_apache_lucene_misc_search_HumanReadableQuery_H
#define org_apache_lucene_misc_search_HumanReadableQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class QueryVisitor;
        class ScoreMode;
        class Weight;
        class IndexSearcher;
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace misc {
        namespace search {

          class HumanReadableQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_init$_8848e7ccd8e9c62a,
              mid_createWeight_77fe52950093e704,
              mid_equals_570b5248a6da3ef6,
              mid_getDescription_09a7afff1868fc5e,
              mid_getWrappedQuery_a3eacfacada795d4,
              mid_hashCode_20fbf7565993c3d7,
              mid_rewrite_aeaa882ae5e96552,
              mid_toString_cb0eb1432185fc94,
              mid_visit_1b22ec612b613eea,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HumanReadableQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HumanReadableQuery(const HumanReadableQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            HumanReadableQuery(const ::org::apache::lucene::search::Query &, const ::java::lang::String &);

            ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::java::lang::String getDescription() const;
            ::org::apache::lucene::search::Query getWrappedQuery() const;
            jint hashCode() const;
            ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::search::IndexSearcher &) const;
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
      namespace misc {
        namespace search {
          extern PyType_Def PY_TYPE_DEF(HumanReadableQuery);
          extern PyTypeObject *PY_TYPE(HumanReadableQuery);

          class t_HumanReadableQuery {
          public:
            PyObject_HEAD
            HumanReadableQuery object;
            static PyObject *wrap_Object(const HumanReadableQuery&);
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
