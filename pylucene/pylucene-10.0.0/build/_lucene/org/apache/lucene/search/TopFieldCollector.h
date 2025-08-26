#ifndef org_apache_lucene_search_TopFieldCollector_H
#define org_apache_lucene_search_TopFieldCollector_H

#include "org/apache/lucene/search/TopDocsCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreMode;
        class TopFieldDocs;
        class Query;
        class FieldValueHitQueue$Entry;
        class ScoreDoc;
        class IndexSearcher;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
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

        class TopFieldCollector : public ::org::apache::lucene::search::TopDocsCollector {
         public:
          enum {
            mid_isEarlyTerminated_9aa4f33e82ea333f,
            mid_populateScores_21492d2db431dbd2,
            mid_scoreMode_23e7061dcdc84768,
            mid_topDocs_15785802cb19c314,
            mid_updateGlobalMinCompetitiveScore_c06bdf7d53c6460a,
            mid_updateMinCompetitiveScore_c06bdf7d53c6460a,
            mid_newTopDocs_d4fc5c39fd7326b6,
            mid_populateResults_d8cc3a50beb36d32,
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
