#ifndef org_apache_lucene_search_TermCollectingRewrite_H
#define org_apache_lucene_search_TermCollectingRewrite_H

#include "org/apache/lucene/search/MultiTermQuery$RewriteMethod.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class TermCollectingRewrite : public ::org::apache::lucene::search::MultiTermQuery$RewriteMethod {
         public:
          enum {
            mid_getTopLevelBuilder_4819806f62f1360a,
            mid_addClause_cec8bec8b987d074,
            mid_addClause_bd866db54389b1be,
            mid_build_ed45877c7a10d1ee,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermCollectingRewrite(jobject obj) : ::org::apache::lucene::search::MultiTermQuery$RewriteMethod(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TermCollectingRewrite(const TermCollectingRewrite& obj) : ::org::apache::lucene::search::MultiTermQuery$RewriteMethod(obj) {}
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
        extern PyType_Def PY_TYPE_DEF(TermCollectingRewrite);
        extern PyTypeObject *PY_TYPE(TermCollectingRewrite);

        class t_TermCollectingRewrite {
        public:
          PyObject_HEAD
          TermCollectingRewrite object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_TermCollectingRewrite *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const TermCollectingRewrite&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const TermCollectingRewrite&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
