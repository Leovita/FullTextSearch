#ifndef org_apache_lucene_search_BlendedTermQuery_H
#define org_apache_lucene_search_BlendedTermQuery_H

#include "org/apache/lucene/search/Query.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class QueryVisitor;
        class BlendedTermQuery$RewriteMethod;
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

        class BlendedTermQuery : public ::org::apache::lucene::search::Query {
         public:
          enum {
            mid_equals_570b5248a6da3ef6,
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

          explicit BlendedTermQuery(jobject obj) : ::org::apache::lucene::search::Query(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BlendedTermQuery(const BlendedTermQuery& obj) : ::org::apache::lucene::search::Query(obj) {}

          static ::org::apache::lucene::search::BlendedTermQuery$RewriteMethod *BOOLEAN_REWRITE;
          static ::org::apache::lucene::search::BlendedTermQuery$RewriteMethod *DISJUNCTION_MAX_REWRITE;

          jboolean equals(const ::java::lang::Object &) const;
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
        extern PyType_Def PY_TYPE_DEF(BlendedTermQuery);
        extern PyTypeObject *PY_TYPE(BlendedTermQuery);

        class t_BlendedTermQuery {
        public:
          PyObject_HEAD
          BlendedTermQuery object;
          static PyObject *wrap_Object(const BlendedTermQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
