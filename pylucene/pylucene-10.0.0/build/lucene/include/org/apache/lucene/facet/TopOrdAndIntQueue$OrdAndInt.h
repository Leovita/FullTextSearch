#ifndef org_apache_lucene_facet_TopOrdAndIntQueue$OrdAndInt_H
#define org_apache_lucene_facet_TopOrdAndIntQueue$OrdAndInt_H

#include "org/apache/lucene/facet/TopOrdAndNumberQueue$OrdAndValue.h"

namespace java {
  namespace lang {
    class Number;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        class TopOrdAndIntQueue$OrdAndInt : public ::org::apache::lucene::facet::TopOrdAndNumberQueue$OrdAndValue {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_getValue_1b3282bb4db06655,
            mid_lessThan_c44a9bae0434ff5d,
            max_mid
          };

          enum {
            fid_value,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TopOrdAndIntQueue$OrdAndInt(jobject obj) : ::org::apache::lucene::facet::TopOrdAndNumberQueue$OrdAndValue(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TopOrdAndIntQueue$OrdAndInt(const TopOrdAndIntQueue$OrdAndInt& obj) : ::org::apache::lucene::facet::TopOrdAndNumberQueue$OrdAndValue(obj) {}

          jint _get_value() const;
          void _set_value(jint) const;

          TopOrdAndIntQueue$OrdAndInt();

          ::java::lang::Number getValue() const;
          jboolean lessThan(const ::org::apache::lucene::facet::TopOrdAndNumberQueue$OrdAndValue &) const;
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
        extern PyType_Def PY_TYPE_DEF(TopOrdAndIntQueue$OrdAndInt);
        extern PyTypeObject *PY_TYPE(TopOrdAndIntQueue$OrdAndInt);

        class t_TopOrdAndIntQueue$OrdAndInt {
        public:
          PyObject_HEAD
          TopOrdAndIntQueue$OrdAndInt object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_TopOrdAndIntQueue$OrdAndInt *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const TopOrdAndIntQueue$OrdAndInt&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const TopOrdAndIntQueue$OrdAndInt&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
