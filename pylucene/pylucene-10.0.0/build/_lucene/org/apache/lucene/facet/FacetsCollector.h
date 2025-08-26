#ifndef org_apache_lucene_facet_FacetsCollector_H
#define org_apache_lucene_facet_FacetsCollector_H

#include "org/apache/lucene/search/SimpleCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class ScoreMode;
        class Scorable;
      }
      namespace facet {
        class FacetsCollector$MatchingDocs;
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
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        class FacetsCollector : public ::org::apache::lucene::search::SimpleCollector {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_init$_f5dd97eebf6a215a,
            mid_collect_8226bd0b0fc13dba,
            mid_finish_e7bdbe105ce1bafb,
            mid_getKeepScores_9aa4f33e82ea333f,
            mid_getMatchingDocs_1387e1e2702ac173,
            mid_scoreMode_23e7061dcdc84768,
            mid_setScorer_c06bdf7d53c6460a,
            mid_doSetNextReader_32243afefe6b151f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FacetsCollector(jobject obj) : ::org::apache::lucene::search::SimpleCollector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FacetsCollector(const FacetsCollector& obj) : ::org::apache::lucene::search::SimpleCollector(obj) {}

          FacetsCollector();
          FacetsCollector(jboolean);

          void collect(jint) const;
          void finish() const;
          jboolean getKeepScores() const;
          ::java::util::List getMatchingDocs() const;
          ::org::apache::lucene::search::ScoreMode scoreMode() const;
          void setScorer(const ::org::apache::lucene::search::Scorable &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        extern PyType_Def PY_TYPE_DEF(FacetsCollector);
        extern PyTypeObject *PY_TYPE(FacetsCollector);

        class t_FacetsCollector {
        public:
          PyObject_HEAD
          FacetsCollector object;
          static PyObject *wrap_Object(const FacetsCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
