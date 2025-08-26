#ifndef org_apache_lucene_search_TopScoreDocCollector_H
#define org_apache_lucene_search_TopScoreDocCollector_H

#include "org/apache/lucene/search/TopDocsCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreMode;
        class ScoreDoc;
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

        class TopScoreDocCollector : public ::org::apache::lucene::search::TopDocsCollector {
         public:
          enum {
            mid_scoreMode_23e7061dcdc84768,
            mid_updateGlobalMinCompetitiveScore_c06bdf7d53c6460a,
            mid_updateMinCompetitiveScore_c06bdf7d53c6460a,
            mid_newTopDocs_d4fc5c39fd7326b6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TopScoreDocCollector(jobject obj) : ::org::apache::lucene::search::TopDocsCollector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TopScoreDocCollector(const TopScoreDocCollector& obj) : ::org::apache::lucene::search::TopDocsCollector(obj) {}

          ::org::apache::lucene::search::ScoreMode scoreMode() const;
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
        extern PyType_Def PY_TYPE_DEF(TopScoreDocCollector);
        extern PyTypeObject *PY_TYPE(TopScoreDocCollector);

        class t_TopScoreDocCollector {
        public:
          PyObject_HEAD
          TopScoreDocCollector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_TopScoreDocCollector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const TopScoreDocCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const TopScoreDocCollector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
