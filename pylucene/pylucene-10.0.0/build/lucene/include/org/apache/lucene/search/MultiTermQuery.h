#ifndef org_apache_lucene_search_MultiTermQuery_H
#define org_apache_lucene_search_MultiTermQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermsEnum;
        class Terms;
      }
      namespace search {
        class MultiTermQuery$RewriteMethod;
        class IndexSearcher;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
    class Object;
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
            mid_init$_93b454caa66da7ff,
            mid_equals_570b5248a6da3ef6,
            mid_getField_09a7afff1868fc5e,
            mid_getRewriteMethod_69f9b567563cc3af,
            mid_getTermsCount_16939d9d0a9a9721,
            mid_getTermsEnum_2c853141fa689f1e,
            mid_hashCode_20fbf7565993c3d7,
            mid_rewrite_aeaa882ae5e96552,
            mid_getTermsEnum_b346bdb4749db660,
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
