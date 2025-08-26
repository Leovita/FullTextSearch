#ifndef org_apache_lucene_search_PhraseQuery_H
#define org_apache_lucene_search_PhraseQuery_H

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
      namespace index {
        class Term;
        class TermsEnum;
      }
      namespace util {
        class BytesRef;
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

        class PhraseQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_4c0d457b1588985f,
            mid_init$_d90c6db0e69d64bf,
            mid_init$_12e51b49211516c8,
            mid_init$_0d30a49ec38981a5,
            mid_createWeight_dc54d493278607e4,
            mid_equals_00d17418847797d4,
            mid_getField_e7df854526d67fa3,
            mid_getPositions_4b72a28a860ae838,
            mid_getSlop_bd89ce15dad49192,
            mid_getTerms_4213a6ccf77ca299,
            mid_hashCode_bd89ce15dad49192,
            mid_rewrite_25984111320dbe39,
            mid_termPositionsCost_2707a5e2c4ba5178,
            mid_toString_fef9c036acf290a9,
            mid_visit_85475af8e8904ab4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PhraseQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PhraseQuery(const PhraseQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          PhraseQuery(const ::java::lang::String &, const JArray< ::java::lang::String > &);
          PhraseQuery(const ::java::lang::String &, const JArray< ::org::apache::lucene::util::BytesRef > &);
          PhraseQuery(jint, const ::java::lang::String &, const JArray< ::java::lang::String > &);
          PhraseQuery(jint, const ::java::lang::String &, const JArray< ::org::apache::lucene::util::BytesRef > &);

          ::org::apache::lucene::search::Weight createWeight(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::ScoreMode &, jfloat) const;
          jboolean equals(const ::java::lang::Object &) const;
          ::java::lang::String getField() const;
          JArray< jint > getPositions() const;
          jint getSlop() const;
          JArray< ::org::apache::lucene::index::Term > getTerms() const;
          jint hashCode() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::search::IndexSearcher &) const;
          static jfloat termPositionsCost(const ::org::apache::lucene::index::TermsEnum &);
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
        extern PyType_Def PY_TYPE_DEF(PhraseQuery);
        extern PyTypeObject *PY_TYPE(PhraseQuery);

        class t_PhraseQuery {
        public:
          PyObject_HEAD
          PhraseQuery object;
          static PyObject *wrap_Object(const PhraseQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
