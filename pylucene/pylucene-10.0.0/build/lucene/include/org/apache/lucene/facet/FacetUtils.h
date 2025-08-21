#ifndef org_apache_lucene_facet_FacetUtils_H
#define org_apache_lucene_facet_FacetUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
      }
      namespace search {
        class DocIdSetIterator;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        class FacetUtils : public ::java::lang::Object {
         public:
          enum {
            mid_liveDocsDISI_8dbec2142cf580e2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FacetUtils(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FacetUtils(const FacetUtils& obj) : ::java::lang::Object(obj) {}

          static ::org::apache::lucene::search::DocIdSetIterator liveDocsDISI(const ::org::apache::lucene::search::DocIdSetIterator &, const ::org::apache::lucene::util::Bits &);
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
        extern PyType_Def PY_TYPE_DEF(FacetUtils);
        extern PyTypeObject *PY_TYPE(FacetUtils);

        class t_FacetUtils {
        public:
          PyObject_HEAD
          FacetUtils object;
          static PyObject *wrap_Object(const FacetUtils&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
