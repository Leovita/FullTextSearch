#ifndef org_apache_lucene_search_NGramPhraseQuery_H
#define org_apache_lucene_search_NGramPhraseQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class PhraseQuery;
        class QueryVisitor;
        class IndexSearcher;
      }
      namespace index {
        class Term;
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

        class NGramPhraseQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_cc7f938550846a8f,
            mid_equals_570b5248a6da3ef6,
            mid_getN_20fbf7565993c3d7,
            mid_getPositions_623cd4a044ba647a,
            mid_getTerms_3d8a8db60207da00,
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
