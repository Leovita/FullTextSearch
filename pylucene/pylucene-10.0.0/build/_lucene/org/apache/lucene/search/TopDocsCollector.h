#ifndef org_apache_lucene_search_TopDocsCollector_H
#define org_apache_lucene_search_TopDocsCollector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class TopDocs;
        class Collector;
      }
    }
  }
}
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

        class TopDocsCollector : public ::java::lang::Object {
         public:
          enum {
            mid_getTotalHits_bd89ce15dad49192,
            mid_topDocs_ff559ee576f938cf,
            mid_topDocs_552a19c992db15ff,
            mid_topDocs_7b9793241d89fc49,
            mid_topDocsSize_bd89ce15dad49192,
            mid_newTopDocs_d4fc5c39fd7326b6,
            mid_populateResults_d8cc3a50beb36d32,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TopDocsCollector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TopDocsCollector(const TopDocsCollector& obj) : ::java::lang::Object(obj) {}

          static ::org::apache::lucene::search::TopDocs *EMPTY_TOPDOCS;

          jint getTotalHits() const;
          ::org::apache::lucene::search::TopDocs topDocs() const;
          ::org::apache::lucene::search::TopDocs topDocs(jint) const;
          ::org::apache::lucene::search::TopDocs topDocs(jint, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(TopDocsCollector);
        extern PyTypeObject *PY_TYPE(TopDocsCollector);

        class t_TopDocsCollector {
        public:
          PyObject_HEAD
          TopDocsCollector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_TopDocsCollector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const TopDocsCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const TopDocsCollector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
