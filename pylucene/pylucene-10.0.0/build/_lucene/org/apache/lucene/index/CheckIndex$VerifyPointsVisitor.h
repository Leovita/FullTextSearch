#ifndef org_apache_lucene_index_CheckIndex$VerifyPointsVisitor_H
#define org_apache_lucene_index_CheckIndex$VerifyPointsVisitor_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class PointValues$IntersectVisitor;
        class PointValues;
        class PointValues$Relation;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
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
            mid_init$_ba815de8aaf22ffe,
            mid_compare_ede9f74e83c55eff,
            mid_getDocCountSeen_0f176418e3e16541,
            mid_getPointCountSeen_0f176418e3e16541,
            mid_visit_8226bd0b0fc13dba,
            mid_visit_027bd37cec7676d5,
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
