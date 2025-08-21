#ifndef org_apache_lucene_search_PhraseQuery_H
#define org_apache_lucene_search_PhraseQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermsEnum;
        class Term;
      }
      namespace util {
        class BytesRef;
      }
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

        class PhraseQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_c16980b675f9738f,
            mid_init$_91fb4805033eaf87,
            mid_init$_771dcbf8f22dfb08,
            mid_init$_349fcd4eea9b1239,
            mid_createWeight_77fe52950093e704,
            mid_equals_570b5248a6da3ef6,
            mid_getField_09a7afff1868fc5e,
            mid_getPositions_623cd4a044ba647a,
            mid_getSlop_20fbf7565993c3d7,
            mid_getTerms_3d8a8db60207da00,
            mid_hashCode_20fbf7565993c3d7,
            mid_rewrite_aeaa882ae5e96552,
            mid_termPositionsCost_98742afaded99d0f,
            mid_toString_cb0eb1432185fc94,
            mid_visit_1b22ec612b613eea,
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
