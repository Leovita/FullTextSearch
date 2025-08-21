#ifndef org_apache_lucene_search_ScoreCachingWrappingScorer_H
#define org_apache_lucene_search_ScoreCachingWrappingScorer_H

#include "org/apache/lucene/search/Scorable.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class LeafCollector;
        class Scorable$ChildScorable;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class ScoreCachingWrappingScorer : public ::org::apache::lucene::search::Scorable {
         public:
          enum {
            mid_getChildren_aa58b3beec16cbbd,
            mid_score_9b6c3480dac00edf,
            mid_setMinCompetitiveScore_c771a95b0227fb6a,
            mid_wrap_384159add565dbed,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ScoreCachingWrappingScorer(jobject obj) : ::org::apache::lucene::search::Scorable(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ScoreCachingWrappingScorer(const ScoreCachingWrappingScorer& obj) : ::org::apache::lucene::search::Scorable(obj) {}

          ::java::util::Collection getChildren() const;
          jfloat score() const;
          void setMinCompetitiveScore(jfloat) const;
          static ::org::apache::lucene::search::LeafCollector wrap(const ::org::apache::lucene::search::LeafCollector &);
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
        extern PyType_Def PY_TYPE_DEF(ScoreCachingWrappingScorer);
        extern PyTypeObject *PY_TYPE(ScoreCachingWrappingScorer);

        class t_ScoreCachingWrappingScorer {
        public:
          PyObject_HEAD
          ScoreCachingWrappingScorer object;
          static PyObject *wrap_Object(const ScoreCachingWrappingScorer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
