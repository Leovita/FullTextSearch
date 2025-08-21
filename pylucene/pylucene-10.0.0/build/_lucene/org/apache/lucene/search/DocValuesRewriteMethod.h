#ifndef org_apache_lucene_search_DocValuesRewriteMethod_H
#define org_apache_lucene_search_DocValuesRewriteMethod_H

#include "org/apache/lucene/search/MultiTermQuery$RewriteMethod.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class MultiTermQuery;
        class IndexSearcher;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class DocValuesRewriteMethod : public ::org::apache::lucene::search::MultiTermQuery$RewriteMethod {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_equals_570b5248a6da3ef6,
            mid_hashCode_20fbf7565993c3d7,
            mid_rewrite_dcf1727ad038e63a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocValuesRewriteMethod(jobject obj) : ::org::apache::lucene::search::MultiTermQuery$RewriteMethod(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocValuesRewriteMethod(const DocValuesRewriteMethod& obj) : ::org::apache::lucene::search::MultiTermQuery$RewriteMethod(obj) {}

          DocValuesRewriteMethod();

          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          ::org::apache::lucene::search::Query rewrite(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::MultiTermQuery &) const;
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
        extern PyType_Def PY_TYPE_DEF(DocValuesRewriteMethod);
        extern PyTypeObject *PY_TYPE(DocValuesRewriteMethod);

        class t_DocValuesRewriteMethod {
        public:
          PyObject_HEAD
          DocValuesRewriteMethod object;
          static PyObject *wrap_Object(const DocValuesRewriteMethod&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
