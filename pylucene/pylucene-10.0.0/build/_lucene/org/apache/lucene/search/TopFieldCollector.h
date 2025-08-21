#ifndef org_apache_lucene_search_TopFieldCollector_H
#define org_apache_lucene_search_TopFieldCollector_H

#include "org/apache/lucene/search/TopDocsCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class ScoreMode;
        class ScoreDoc;
        class FieldValueHitQueue$Entry;
        class TopFieldDocs;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class TopFieldCollector : public ::org::apache::lucene::search::TopDocsCollector {
         public:
          enum {
            mid_isEarlyTerminated_947277eca0748c4e,
            mid_populateScores_2562119f0be94df5,
            mid_scoreMode_45dfdcf7e901559d,
            mid_topDocs_5b3f934d4a617545,
            mid_updateGlobalMinCompetitiveScore_dd42dde4c0a7db1e,
            mid_updateMinCompetitiveScore_dd42dde4c0a7db1e,
            mid_newTopDocs_f6010540414086f3,
            mid_populateResults_de6fa2c5d78c15b6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TopFieldCollector(jobject obj) : ::org::apache::lucene::search::TopDocsCollector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TopFieldCollector(const TopFieldCollector& obj) : ::org::apache::lucene::search::TopDocsCollector(obj) {}

          jboolean isEarlyTerminated() const;
          static void populateScores(const JArray< ::org::apache::lucene::search::ScoreDoc > &, const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::Query &);
          ::org::apache::lucene::search::ScoreMode scoreMode() const;
          ::org::apache::lucene::search::TopFieldDocs topDocs() const;
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
        extern PyType_Def PY_TYPE_DEF(TopFieldCollector);
        extern PyTypeObject *PY_TYPE(TopFieldCollector);

        class t_TopFieldCollector {
        public:
          PyObject_HEAD
          TopFieldCollector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_TopFieldCollector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const TopFieldCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const TopFieldCollector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
