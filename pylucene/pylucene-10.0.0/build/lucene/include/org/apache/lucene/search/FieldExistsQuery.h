#ifndef org_apache_lucene_search_FieldExistsQuery_H
#define org_apache_lucene_search_FieldExistsQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class QueryVisitor;
        class ScoreMode;
        class DocIdSetIterator;
        class Weight;
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

        class FieldExistsQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_0d82408c6e55bc30,
            mid_createWeight_77fe52950093e704,
            mid_equals_570b5248a6da3ef6,
            mid_getDocValuesDocIdSetIterator_f4e5088dd6c7f34e,
            mid_getField_09a7afff1868fc5e,
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
