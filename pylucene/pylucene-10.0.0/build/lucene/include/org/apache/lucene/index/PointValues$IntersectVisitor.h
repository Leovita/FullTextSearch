#ifndef org_apache_lucene_index_PointValues$IntersectVisitor_H
#define org_apache_lucene_index_PointValues$IntersectVisitor_H

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
      }
      namespace util {
        class IntsRef;
      }
      namespace index {
        class PointValues$Relation;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class PointValues$IntersectVisitor : public ::java::lang::Object {
         public:
          enum {
            mid_compare_ede9f74e83c55eff,
            mid_grow_8226bd0b0fc13dba,
            mid_visit_3bae9c6463463f0d,
            mid_visit_9b114e5af4494a53,
            mid_visit_8226bd0b0fc13dba,
            mid_visit_a4bc38e9c023b32a,
            mid_visit_027bd37cec7676d5,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PointValues$IntersectVisitor(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PointValues$IntersectVisitor(const PointValues$IntersectVisitor& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::index::PointValues$Relation compare(const JArray< jbyte > &, const JArray< jbyte > &) const;
          void grow(jint) const;
          void visit(const ::org::apache::lucene::search::DocIdSetIterator &) const;
          void visit(const ::org::apache::lucene::util::IntsRef &) const;
          void visit(jint) const;
          void visit(const ::org::apache::lucene::search::DocIdSetIterator &, const JArray< jbyte > &) const;
          void visit(jint, const JArray< jbyte > &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(PointValues$IntersectVisitor);
        extern PyTypeObject *PY_TYPE(PointValues$IntersectVisitor);

        class t_PointValues$IntersectVisitor {
        public:
          PyObject_HEAD
          PointValues$IntersectVisitor object;
          static PyObject *wrap_Object(const PointValues$IntersectVisitor&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
