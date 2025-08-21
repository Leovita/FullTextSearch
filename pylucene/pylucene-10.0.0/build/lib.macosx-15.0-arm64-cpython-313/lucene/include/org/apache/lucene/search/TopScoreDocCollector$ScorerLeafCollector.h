#ifndef org_apache_lucene_search_TopScoreDocCollector$ScorerLeafCollector_H
#define org_apache_lucene_search_TopScoreDocCollector$ScorerLeafCollector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Scorable;
        class LeafCollector;
        class ScoreDoc;
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

        class TopScoreDocCollector$ScorerLeafCollector : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_setScorer_dd42dde4c0a7db1e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TopScoreDocCollector$ScorerLeafCollector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TopScoreDocCollector$ScorerLeafCollector(const TopScoreDocCollector$ScorerLeafCollector& obj) : ::java::lang::Object(obj) {}

          TopScoreDocCollector$ScorerLeafCollector();

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
      namespace search {
        extern PyType_Def PY_TYPE_DEF(TopScoreDocCollector$ScorerLeafCollector);
        extern PyTypeObject *PY_TYPE(TopScoreDocCollector$ScorerLeafCollector);

        class t_TopScoreDocCollector$ScorerLeafCollector {
        public:
          PyObject_HEAD
          TopScoreDocCollector$ScorerLeafCollector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_TopScoreDocCollector$ScorerLeafCollector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const TopScoreDocCollector$ScorerLeafCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const TopScoreDocCollector$ScorerLeafCollector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
