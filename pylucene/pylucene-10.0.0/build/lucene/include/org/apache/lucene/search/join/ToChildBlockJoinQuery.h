#ifndef org_apache_lucene_search_join_ToChildBlockJoinQuery_H
#define org_apache_lucene_search_join_ToChildBlockJoinQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class QueryVisitor;
        namespace join {
          class BitSetProducer;
        }
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
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace join {

          class ToChildBlockJoinQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_init$_3e9021f516d8aa52,
              mid_createWeight_77fe52950093e704,
              mid_equals_570b5248a6da3ef6,
              mid_getParentQuery_a3eacfacada795d4,
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

            explicit ToChildBlockJoinQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ToChildBlockJoinQuery(const ToChildBlockJoinQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            ToChildBlockJoinQuery(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::join::BitSetProducer &);

            ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::search::Query getParentQuery() const;
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
      namespace search {
        namespace join {
          extern PyType_Def PY_TYPE_DEF(ToChildBlockJoinQuery);
          extern PyTypeObject *PY_TYPE(ToChildBlockJoinQuery);

          class t_ToChildBlockJoinQuery {
          public:
            PyObject_HEAD
            ToChildBlockJoinQuery object;
            static PyObject *wrap_Object(const ToChildBlockJoinQuery&);
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
