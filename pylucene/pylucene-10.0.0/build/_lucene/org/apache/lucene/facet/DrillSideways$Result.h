#ifndef org_apache_lucene_facet_DrillSideways$Result_H
#define org_apache_lucene_facet_DrillSideways$Result_H

#include "java/lang/Record.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class String;
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        class DrillSideways$Result : public ::java::lang::Record {
         public:
          enum {
            mid_init$_aaa09616f10cf83b,
            mid_drillDownResult_4819806f62f1360a,
            mid_drillSidewaysResults_1387e1e2702ac173,
            mid_equals_00d17418847797d4,
            mid_hashCode_bd89ce15dad49192,
            mid_toString_e7df854526d67fa3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DrillSideways$Result(jobject obj) : ::java::lang::Record(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DrillSideways$Result(const DrillSideways$Result& obj) : ::java::lang::Record(obj) {}

          DrillSideways$Result(const ::java::lang::Object &, const ::java::util::List &);

          ::java::lang::Object drillDownResult() const;
          ::java::util::List drillSidewaysResults() const;
          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(DrillSideways$Result);
        extern PyTypeObject *PY_TYPE(DrillSideways$Result);

        class t_DrillSideways$Result {
        public:
          PyObject_HEAD
          DrillSideways$Result object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_DrillSideways$Result *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const DrillSideways$Result&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const DrillSideways$Result&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
