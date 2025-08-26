#ifndef org_apache_lucene_search_MultiTermQuery$RewriteMethod_H
#define org_apache_lucene_search_MultiTermQuery$RewriteMethod_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class MultiTermQuery$RewriteMethod : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_rewrite_ea36ecc6891147cc,
            mid_getTermsEnum_44a83075a71ed746,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiTermQuery$RewriteMethod(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiTermQuery$RewriteMethod(const MultiTermQuery$RewriteMethod& obj) : ::java::lang::Object(obj) {}

          MultiTermQuery$RewriteMethod();

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
        extern PyType_Def PY_TYPE_DEF(MultiTermQuery$RewriteMethod);
        extern PyTypeObject *PY_TYPE(MultiTermQuery$RewriteMethod);

        class t_MultiTermQuery$RewriteMethod {
        public:
          PyObject_HEAD
          MultiTermQuery$RewriteMethod object;
          static PyObject *wrap_Object(const MultiTermQuery$RewriteMethod&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
