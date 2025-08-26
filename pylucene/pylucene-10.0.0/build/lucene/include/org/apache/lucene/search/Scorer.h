#ifndef org_apache_lucene_search_Scorer_H
#define org_apache_lucene_search_Scorer_H

#include "org/apache/lucene/search/Scorable.h"

namespace java {
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
        class TwoPhaseIterator;
        class DocIdSetIterator;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class Scorer : public ::org::apache::lucene::search::Scorable {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_advanceShallow_a3904e10f5bb9437,
            mid_docID_bd89ce15dad49192,
            mid_getMaxScore_5873a23b935a9d49,
            mid_iterator_b78969502cbf4939,
            mid_twoPhaseIterator_c827d3ab11221e86,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Scorer(jobject obj) : ::org::apache::lucene::search::Scorable(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Scorer(const Scorer& obj) : ::org::apache::lucene::search::Scorable(obj) {}

          Scorer();

          jint advanceShallow(jint) const;
          jint docID() const;
          jfloat getMaxScore(jint) const;
          ::org::apache::lucene::search::DocIdSetIterator iterator() const;
          ::org::apache::lucene::search::TwoPhaseIterator twoPhaseIterator() const;
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
        extern PyType_Def PY_TYPE_DEF(Scorer);
        extern PyTypeObject *PY_TYPE(Scorer);

        class t_Scorer {
        public:
          PyObject_HEAD
          Scorer object;
          static PyObject *wrap_Object(const Scorer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
