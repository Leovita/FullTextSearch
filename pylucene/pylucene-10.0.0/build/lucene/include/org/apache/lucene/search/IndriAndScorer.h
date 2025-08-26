#ifndef org_apache_lucene_search_IndriAndScorer_H
#define org_apache_lucene_search_IndriAndScorer_H

#include "org/apache/lucene/search/IndriDisjunctionScorer.h"

namespace java {
  namespace util {
    class List;
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Scorer;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class IndriAndScorer : public ::org::apache::lucene::search::IndriDisjunctionScorer {
         public:
          enum {
            mid_score_cb72f93a172ed17a,
            mid_smoothingScore_87b6b571ca6f70bb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndriAndScorer(jobject obj) : ::org::apache::lucene::search::IndriDisjunctionScorer(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndriAndScorer(const IndriAndScorer& obj) : ::org::apache::lucene::search::IndriDisjunctionScorer(obj) {}

          jfloat score(const ::java::util::List &) const;
          jfloat smoothingScore(const ::java::util::List &, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(IndriAndScorer);
        extern PyTypeObject *PY_TYPE(IndriAndScorer);

        class t_IndriAndScorer {
        public:
          PyObject_HEAD
          IndriAndScorer object;
          static PyObject *wrap_Object(const IndriAndScorer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
