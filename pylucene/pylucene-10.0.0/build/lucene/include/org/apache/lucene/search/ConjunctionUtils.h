#ifndef org_apache_lucene_search_ConjunctionUtils_H
#define org_apache_lucene_search_ConjunctionUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class TwoPhaseIterator;
        class DocIdSetIterator;
        class Scorer;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace util {
    class Collection;
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class ConjunctionUtils : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_addIterator_61a440c79d5b3509,
            mid_addTwoPhaseIterator_8ee69a1603a205de,
            mid_createConjunction_7a5917f2521a684b,
            mid_intersectIterators_a4411f409ce3243a,
            mid_intersectScorers_2a88249bbaa58eff,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ConjunctionUtils(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ConjunctionUtils(const ConjunctionUtils& obj) : ::java::lang::Object(obj) {}

          ConjunctionUtils();

          static void addIterator(const ::org::apache::lucene::search::DocIdSetIterator &, const ::java::util::List &, const ::java::util::List &);
          static void addTwoPhaseIterator(const ::org::apache::lucene::search::TwoPhaseIterator &, const ::java::util::List &, const ::java::util::List &);
          static ::org::apache::lucene::search::DocIdSetIterator createConjunction(const ::java::util::List &, const ::java::util::List &);
          static ::org::apache::lucene::search::DocIdSetIterator intersectIterators(const ::java::util::List &);
          static ::org::apache::lucene::search::DocIdSetIterator intersectScorers(const ::java::util::Collection &);
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
        extern PyType_Def PY_TYPE_DEF(ConjunctionUtils);
        extern PyTypeObject *PY_TYPE(ConjunctionUtils);

        class t_ConjunctionUtils {
        public:
          PyObject_HEAD
          ConjunctionUtils object;
          static PyObject *wrap_Object(const ConjunctionUtils&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
