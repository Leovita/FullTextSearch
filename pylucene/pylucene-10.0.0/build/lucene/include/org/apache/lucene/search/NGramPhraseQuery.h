#ifndef org_apache_lucene_search_NGramPhraseQuery_H
#define org_apache_lucene_search_NGramPhraseQuery_H

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
      namespace search {
        class QueryVisitor;
        class PhraseQuery;
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
      namespace search {

        class NGramPhraseQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_ed58ad63e3e61a81,
            mid_equals_00d17418847797d4,
            mid_getN_bd89ce15dad49192,
            mid_getPositions_4b72a28a860ae838,
            mid_getTerms_4213a6ccf77ca299,
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

          explicit NGramPhraseQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NGramPhraseQuery(const NGramPhraseQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          NGramPhraseQuery(jint, const ::org::apache::lucene::search::PhraseQuery &);

          jboolean equals(const ::java::lang::Object &) const;
          jint getN() const;
          JArray< jint > getPositions() const;
          JArray< ::org::apache::lucene::index::Term > getTerms() const;
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
        extern PyType_Def PY_TYPE_DEF(NGramPhraseQuery);
        extern PyTypeObject *PY_TYPE(NGramPhraseQuery);

        class t_NGramPhraseQuery {
        public:
          PyObject_HEAD
          NGramPhraseQuery object;
          static PyObject *wrap_Object(const NGramPhraseQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
