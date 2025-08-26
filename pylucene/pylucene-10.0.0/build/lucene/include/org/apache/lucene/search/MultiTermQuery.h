#ifndef org_apache_lucene_search_MultiTermQuery_H
#define org_apache_lucene_search_MultiTermQuery_H

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
      namespace index {
        class Terms;
        class TermsEnum;
      }
      namespace search {
        class MultiTermQuery$RewriteMethod;
        class IndexSearcher;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class MultiTermQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_init$_4d710c70561a9b13,
            mid_equals_00d17418847797d4,
            mid_getField_e7df854526d67fa3,
            mid_getRewriteMethod_cdae28086b3bbe9c,
            mid_getTermsCount_0f176418e3e16541,
            mid_getTermsEnum_46ef391d247cbb49,
            mid_hashCode_bd89ce15dad49192,
            mid_rewrite_25984111320dbe39,
            mid_getTermsEnum_05b4875ff8d0c914,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiTermQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiTermQuery(const MultiTermQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          static ::org::apache::lucene::search::MultiTermQuery$RewriteMethod *CONSTANT_SCORE_BLENDED_REWRITE;
          static ::org::apache::lucene::search::MultiTermQuery$RewriteMethod *CONSTANT_SCORE_BOOLEAN_REWRITE;
          static ::org::apache::lucene::search::MultiTermQuery$RewriteMethod *CONSTANT_SCORE_REWRITE;
          static ::org::apache::lucene::search::MultiTermQuery$RewriteMethod *DOC_VALUES_REWRITE;
          static ::org::apache::lucene::search::MultiTermQuery$RewriteMethod *SCORING_BOOLEAN_REWRITE;

          MultiTermQuery(const ::java::lang::String &, const ::org::apache::lucene::search::MultiTermQuery$RewriteMethod &);

          jboolean equals(const ::java::lang::Object &) const;
          ::java::lang::String getField() const;
          ::org::apache::lucene::search::MultiTermQuery$RewriteMethod getRewriteMethod() const;
          jlong getTermsCount() const;
          ::org::apache::lucene::index::TermsEnum getTermsEnum(const ::org::apache::lucene::index::Terms &) const;
          jint hashCode() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::search::IndexSearcher &) const;
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
        extern PyType_Def PY_TYPE_DEF(MultiTermQuery);
        extern PyTypeObject *PY_TYPE(MultiTermQuery);

        class t_MultiTermQuery {
        public:
          PyObject_HEAD
          MultiTermQuery object;
          static PyObject *wrap_Object(const MultiTermQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
