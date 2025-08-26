#ifndef org_apache_lucene_facet_DrillDownQuery_H
#define org_apache_lucene_facet_DrillDownQuery_H

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
      namespace facet {
        class DrillDownQuery;
        class FacetsConfig;
      }
      namespace search {
        class QueryVisitor;
        class IndexSearcher;
      }
      namespace index {
        class Term;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        class DrillDownQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_1b022d839bcbba29,
            mid_init$_7a6bdc4c8935a389,
            mid_add_4c0d457b1588985f,
            mid_add_526f2ae9dd799047,
            mid_clone_423b61b51390b939,
            mid_equals_00d17418847797d4,
            mid_getBaseQuery_ffa7bd087b2a75aa,
            mid_getDrillDownQueries_bc7e56e884e8acce,
            mid_hashCode_bd89ce15dad49192,
            mid_rewrite_25984111320dbe39,
            mid_term_2723a9518c3fba11,
            mid_toString_fef9c036acf290a9,
            mid_visit_85475af8e8904ab4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DrillDownQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DrillDownQuery(const DrillDownQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          DrillDownQuery(const ::org::apache::lucene::facet::FacetsConfig &);
          DrillDownQuery(const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::search::Query &);

          void add(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
          void add(const ::java::lang::String &, const ::org::apache::lucene::search::Query &) const;
          DrillDownQuery clone() const;
          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::search::Query getBaseQuery() const;
          JArray< ::org::apache::lucene::search::Query > getDrillDownQueries() const;
          jint hashCode() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::search::IndexSearcher &) const;
          static ::org::apache::lucene::index::Term term(const ::java::lang::String &, const ::java::lang::String &, const JArray< ::java::lang::String > &);
          ::java::lang::String toString(const ::java::lang::String &) const;
          void visit(const ::org::apache::lucene::search::QueryVisitor &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        extern PyType_Def PY_TYPE_DEF(DrillDownQuery);
        extern PyTypeObject *PY_TYPE(DrillDownQuery);

        class t_DrillDownQuery {
        public:
          PyObject_HEAD
          DrillDownQuery object;
          static PyObject *wrap_Object(const DrillDownQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
