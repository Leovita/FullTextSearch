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
        class DocIdSetIterator;
        class TwoPhaseIterator;
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
            mid_init$_3720c61b0679eb3e,
            mid_advanceShallow_3c9bba330f083871,
            mid_docID_20fbf7565993c3d7,
            mid_getMaxScore_29cfa01aaad92564,
            mid_iterator_fc644a826c65d236,
            mid_twoPhaseIterator_28c4f2cd9e5f8da7,
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
