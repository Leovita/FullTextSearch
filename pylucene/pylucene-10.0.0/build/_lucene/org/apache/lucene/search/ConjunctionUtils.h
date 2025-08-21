#ifndef org_apache_lucene_search_ConjunctionUtils_H
#define org_apache_lucene_search_ConjunctionUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Scorer;
        class DocIdSetIterator;
        class TwoPhaseIterator;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
    class List;
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

        class ConjunctionUtils : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_addIterator_3e0a9656970b7746,
            mid_addTwoPhaseIterator_aa5dccdeebcee872,
            mid_createConjunction_1724434e8298b8ea,
            mid_intersectIterators_fa61acd4fe763fe4,
            mid_intersectScorers_0bec4b4e3b62bc41,
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
