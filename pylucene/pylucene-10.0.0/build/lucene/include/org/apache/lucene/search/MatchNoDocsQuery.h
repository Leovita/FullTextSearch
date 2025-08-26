#ifndef org_apache_lucene_search_MatchNoDocsQuery_H
#define org_apache_lucene_search_MatchNoDocsQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreMode;
        class Weight;
        class QueryVisitor;
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

        class MatchNoDocsQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_init$_ee46a189998009d6,
            mid_createWeight_dc54d493278607e4,
            mid_equals_00d17418847797d4,
            mid_hashCode_bd89ce15dad49192,
            mid_toString_fef9c036acf290a9,
            mid_visit_85475af8e8904ab4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MatchNoDocsQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MatchNoDocsQuery(const MatchNoDocsQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          MatchNoDocsQuery();
          MatchNoDocsQuery(const ::java::lang::String &);

          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
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
        extern PyType_Def PY_TYPE_DEF(MatchNoDocsQuery);
        extern PyTypeObject *PY_TYPE(MatchNoDocsQuery);

        class t_MatchNoDocsQuery {
        public:
          PyObject_HEAD
          MatchNoDocsQuery object;
          static PyObject *wrap_Object(const MatchNoDocsQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
