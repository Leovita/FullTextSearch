#ifndef org_apache_lucene_index_PointValues$Relation_H
#define org_apache_lucene_index_PointValues$Relation_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
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

        class PointValues$Relation : public ::java::lang::Enum {
         public:
          enum {
            mid_valueOf_464f2af22122ba27,
            mid_values_a4977101d55f482c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PointValues$Relation(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PointValues$Relation(const PointValues$Relation& obj) : ::java::lang::Enum(obj) {}

          static PointValues$Relation *CELL_CROSSES_QUERY;
          static PointValues$Relation *CELL_INSIDE_QUERY;
          static PointValues$Relation *CELL_OUTSIDE_QUERY;

          static PointValues$Relation valueOf(const ::java::lang::String &);
          static JArray< PointValues$Relation > values();
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
        extern PyType_Def PY_TYPE_DEF(PointValues$Relation);
        extern PyTypeObject *PY_TYPE(PointValues$Relation);

        class t_PointValues$Relation {
        public:
          PyObject_HEAD
          PointValues$Relation object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_PointValues$Relation *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const PointValues$Relation&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const PointValues$Relation&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
