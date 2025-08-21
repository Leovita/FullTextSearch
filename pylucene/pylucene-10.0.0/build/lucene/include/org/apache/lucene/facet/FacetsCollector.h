#ifndef org_apache_lucene_facet_FacetsCollector_H
#define org_apache_lucene_facet_FacetsCollector_H

#include "org/apache/lucene/search/SimpleCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Scorable;
        class ScoreMode;
      }
      namespace facet {
        class FacetsCollector$MatchingDocs;
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
            mid_init$_3720c61b0679eb3e,
            mid_init$_b110fc3a58c081ab,
            mid_collect_540b2b23d51b1efd,
            mid_finish_3720c61b0679eb3e,
            mid_getKeepScores_947277eca0748c4e,
            mid_getMatchingDocs_36830460e10839eb,
            mid_scoreMode_45dfdcf7e901559d,
            mid_setScorer_dd42dde4c0a7db1e,
            mid_doSetNextReader_b7b06dce0a4097ed,
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
