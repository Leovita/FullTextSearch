#ifndef org_apache_lucene_search_join_ToParentBlockJoinQuery_H
#define org_apache_lucene_search_join_ToParentBlockJoinQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreMode;
        class Weight;
        class QueryVisitor;
        namespace join {
          class BitSetProducer;
          class ScoreMode;
        }
        class IndexSearcher;
      }
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace join {

          class ToParentBlockJoinQuery : public ::org::apache::lucene::search::Query {
           public:
            enum {
              mid_init$_8ac153ce582699aa,
              mid_createWeight_dc54d493278607e4,
              mid_equals_00d17418847797d4,
              mid_getChildQuery_ffa7bd087b2a75aa,
              mid_hashCode_bd89ce15dad49192,
              mid_rewrite_25984111320dbe39,
              mid_toString_fef9c036acf290a9,
              mid_visit_85475af8e8904ab4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ToParentBlockJoinQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ToParentBlockJoinQuery(const ToParentBlockJoinQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

            ToParentBlockJoinQuery(const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::join::BitSetProducer &, const ::org::apache::lucene::search::join::ScoreMode &);

            ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::search::Query getChildQuery() const;
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
          extern PyType_Def PY_TYPE_DEF(ToParentBlockJoinQuery);
          extern PyTypeObject *PY_TYPE(ToParentBlockJoinQuery);

          class t_ToParentBlockJoinQuery {
          public:
            PyObject_HEAD
            ToParentBlockJoinQuery object;
            static PyObject *wrap_Object(const ToParentBlockJoinQuery&);
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
