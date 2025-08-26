#ifndef org_apache_lucene_search_FieldExistsQuery_H
#define org_apache_lucene_search_FieldExistsQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreMode;
        class Weight;
        class DocIdSetIterator;
        class QueryVisitor;
        class IndexSearcher;
      }
      namespace index {
        class LeafReader;
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

        class FieldExistsQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_ee46a189998009d6,
            mid_createWeight_dc54d493278607e4,
            mid_equals_00d17418847797d4,
            mid_getDocValuesDocIdSetIterator_7b507b4f405a2f44,
            mid_getField_e7df854526d67fa3,
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

          explicit FieldExistsQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldExistsQuery(const FieldExistsQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          FieldExistsQuery(const ::java::lang::String &);

          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
          jboolean equals(const ::java::lang::Object &) const;
          static ::org::apache::lucene::search::DocIdSetIterator getDocValuesDocIdSetIterator(const ::java::lang::String &, const ::org::apache::lucene::index::LeafReader &);
          ::java::lang::String getField() const;
          jint hashCode() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::search::IndexSearcher &) const;
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
      namespace search {
        extern PyType_Def PY_TYPE_DEF(FieldExistsQuery);
        extern PyTypeObject *PY_TYPE(FieldExistsQuery);

        class t_FieldExistsQuery {
        public:
          PyObject_HEAD
          FieldExistsQuery object;
          static PyObject *wrap_Object(const FieldExistsQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
