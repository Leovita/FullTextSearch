#ifndef org_apache_lucene_index_PointValues$PointTree_H
#define org_apache_lucene_index_PointValues$PointTree_H

#include "java/lang/Cloneable.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class PointValues$IntersectVisitor;
        class PointValues$PointTree;
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
      namespace index {

        class PointValues$PointTree : public ::java::lang::Cloneable {
         public:
          enum {
            mid_clone_105acb8614b902b9,
            mid_getMaxPackedValue_44e916dc40fc04cb,
            mid_getMinPackedValue_44e916dc40fc04cb,
            mid_moveToChild_9aa4f33e82ea333f,
            mid_moveToParent_9aa4f33e82ea333f,
            mid_moveToSibling_9aa4f33e82ea333f,
            mid_size_0f176418e3e16541,
            mid_visitDocIDs_0ccbfe2d8ea647b2,
            mid_visitDocValues_0ccbfe2d8ea647b2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PointValues$PointTree(jobject obj) : ::java::lang::Cloneable(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PointValues$PointTree(const PointValues$PointTree& obj) : ::java::lang::Cloneable(obj) {}

          PointValues$PointTree clone() const;
          JArray< jbyte > getMaxPackedValue() const;
          JArray< jbyte > getMinPackedValue() const;
          jboolean moveToChild() const;
          jboolean moveToParent() const;
          jboolean moveToSibling() const;
          jlong size() const;
          void visitDocIDs(const ::org::apache::lucene::index::PointValues$IntersectVisitor &) const;
          void visitDocValues(const ::org::apache::lucene::index::PointValues$IntersectVisitor &) const;
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
        extern PyType_Def PY_TYPE_DEF(PointValues$PointTree);
        extern PyTypeObject *PY_TYPE(PointValues$PointTree);

        class t_PointValues$PointTree {
        public:
          PyObject_HEAD
          PointValues$PointTree object;
          static PyObject *wrap_Object(const PointValues$PointTree&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
