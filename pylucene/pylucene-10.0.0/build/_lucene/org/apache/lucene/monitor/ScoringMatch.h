#ifndef org_apache_lucene_monitor_ScoringMatch_H
#define org_apache_lucene_monitor_ScoringMatch_H

#include "org/apache/lucene/monitor/QueryMatch.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        class MatcherFactory;
        class ScoringMatch;
      }
      namespace search {
        namespace similarities {
          class Similarity;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {

        class ScoringMatch : public ::org::apache::lucene::monitor::QueryMatch {
         public:
          enum {
            mid_equals_00d17418847797d4,
            mid_getScore_8b62236f0e4d0dbc,
            mid_hashCode_bd89ce15dad49192,
            mid_matchWithSimilarity_405e59b4c9d5608c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ScoringMatch(jobject obj) : ::org::apache::lucene::monitor::QueryMatch(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ScoringMatch(const ScoringMatch& obj) : ::org::apache::lucene::monitor::QueryMatch(obj) {}

          static ::org::apache::lucene::monitor::MatcherFactory *DEFAULT_MATCHER;

          jboolean equals(const ::java::lang::Object &) const;
          jfloat getScore() const;
          jint hashCode() const;
          static ::org::apache::lucene::monitor::MatcherFactory matchWithSimilarity(const ::org::apache::lucene::search::similarities::Similarity &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        extern PyType_Def PY_TYPE_DEF(ScoringMatch);
        extern PyTypeObject *PY_TYPE(ScoringMatch);

        class t_ScoringMatch {
        public:
          PyObject_HEAD
          ScoringMatch object;
          static PyObject *wrap_Object(const ScoringMatch&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
