#ifndef org_apache_lucene_index_CheckIndex$VerifyPointsVisitor_H
#define org_apache_lucene_index_CheckIndex$VerifyPointsVisitor_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class PointValues;
        class PointValues$IntersectVisitor;
        class PointValues$Relation;
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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class CheckIndex$VerifyPointsVisitor : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3e323eb6663faa8e,
            mid_compare_d428ecb3f4dbdf11,
            mid_getDocCountSeen_16939d9d0a9a9721,
            mid_getPointCountSeen_16939d9d0a9a9721,
            mid_visit_540b2b23d51b1efd,
            mid_visit_255018cd4981ed89,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CheckIndex$VerifyPointsVisitor(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CheckIndex$VerifyPointsVisitor(const CheckIndex$VerifyPointsVisitor& obj) : ::java::lang::Object(obj) {}

          CheckIndex$VerifyPointsVisitor(const ::java::lang::String &, jint, const ::org::apache::lucene::index::PointValues &);

          ::org::apache::lucene::index::PointValues$Relation compare(const JArray< jbyte > &, const JArray< jbyte > &) const;
          jlong getDocCountSeen() const;
          jlong getPointCountSeen() const;
          void visit(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(CheckIndex$VerifyPointsVisitor);
        extern PyTypeObject *PY_TYPE(CheckIndex$VerifyPointsVisitor);

        class t_CheckIndex$VerifyPointsVisitor {
        public:
          PyObject_HEAD
          CheckIndex$VerifyPointsVisitor object;
          static PyObject *wrap_Object(const CheckIndex$VerifyPointsVisitor&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
