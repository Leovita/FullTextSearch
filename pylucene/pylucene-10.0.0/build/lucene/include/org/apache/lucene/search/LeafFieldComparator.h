#ifndef org_apache_lucene_search_LeafFieldComparator_H
#define org_apache_lucene_search_LeafFieldComparator_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Scorable;
        class DocIdSetIterator;
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

        class LeafFieldComparator : public ::java::lang::Object {
         public:
          enum {
            mid_compareBottom_3c9bba330f083871,
            mid_compareTop_3c9bba330f083871,
            mid_competitiveIterator_fc644a826c65d236,
            mid_copy_e13cff512ebda969,
            mid_setBottom_540b2b23d51b1efd,
            mid_setHitsThresholdReached_3720c61b0679eb3e,
            mid_setScorer_dd42dde4c0a7db1e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LeafFieldComparator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LeafFieldComparator(const LeafFieldComparator& obj) : ::java::lang::Object(obj) {}

          jint compareBottom(jint) const;
          jint compareTop(jint) const;
          ::org::apache::lucene::search::DocIdSetIterator competitiveIterator() const;
          void copy(jint, jint) const;
          void setBottom(jint) const;
          void setHitsThresholdReached() const;
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
        extern PyType_Def PY_TYPE_DEF(LeafFieldComparator);
        extern PyTypeObject *PY_TYPE(LeafFieldComparator);

        class t_LeafFieldComparator {
        public:
          PyObject_HEAD
          LeafFieldComparator object;
          static PyObject *wrap_Object(const LeafFieldComparator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
