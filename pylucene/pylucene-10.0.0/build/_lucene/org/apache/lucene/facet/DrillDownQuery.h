#ifndef org_apache_lucene_facet_DrillDownQuery_H
#define org_apache_lucene_facet_DrillDownQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
      }
      namespace search {
        class QueryVisitor;
        class IndexSearcher;
      }
      namespace facet {
        class FacetsConfig;
        class DrillDownQuery;
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
      namespace facet {

        class DrillDownQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_fc7569dcbe27fa06,
            mid_init$_58ed92cd6088b06b,
            mid_add_c16980b675f9738f,
            mid_add_3a7caebbff9089ff,
            mid_clone_d348727867614dc5,
            mid_equals_570b5248a6da3ef6,
            mid_getBaseQuery_a3eacfacada795d4,
            mid_getDrillDownQueries_5da868febe51e141,
            mid_hashCode_20fbf7565993c3d7,
            mid_rewrite_aeaa882ae5e96552,
            mid_term_a125477360b24a49,
            mid_toString_cb0eb1432185fc94,
            mid_visit_1b22ec612b613eea,
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
