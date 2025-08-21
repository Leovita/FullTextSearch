#ifndef org_apache_lucene_search_TwoPhaseIterator_H
#define org_apache_lucene_search_TwoPhaseIterator_H

#include "java/lang/Object.h"

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

        class TwoPhaseIterator : public ::java::lang::Object {
         public:
          enum {
            mid_approximation_fc644a826c65d236,
            mid_asDocIdSetIterator_41b26b2cf0aa4f6f,
            mid_matchCost_9b6c3480dac00edf,
            mid_matches_947277eca0748c4e,
            mid_unwrap_425d022e5dc1dcd9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TwoPhaseIterator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TwoPhaseIterator(const TwoPhaseIterator& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::search::DocIdSetIterator approximation() const;
          static ::org::apache::lucene::search::DocIdSetIterator asDocIdSetIterator(const TwoPhaseIterator &);
          jfloat matchCost() const;
          jboolean matches() const;
          static TwoPhaseIterator unwrap(const ::org::apache::lucene::search::DocIdSetIterator &);
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
        extern PyType_Def PY_TYPE_DEF(TwoPhaseIterator);
        extern PyTypeObject *PY_TYPE(TwoPhaseIterator);

        class t_TwoPhaseIterator {
        public:
          PyObject_HEAD
          TwoPhaseIterator object;
          static PyObject *wrap_Object(const TwoPhaseIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
