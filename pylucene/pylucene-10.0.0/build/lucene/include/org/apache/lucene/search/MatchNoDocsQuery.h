#ifndef org_apache_lucene_search_MatchNoDocsQuery_H
#define org_apache_lucene_search_MatchNoDocsQuery_H

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
            mid_init$_3720c61b0679eb3e,
            mid_init$_0d82408c6e55bc30,
            mid_createWeight_77fe52950093e704,
            mid_equals_570b5248a6da3ef6,
            mid_hashCode_20fbf7565993c3d7,
            mid_toString_cb0eb1432185fc94,
            mid_visit_1b22ec612b613eea,
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
