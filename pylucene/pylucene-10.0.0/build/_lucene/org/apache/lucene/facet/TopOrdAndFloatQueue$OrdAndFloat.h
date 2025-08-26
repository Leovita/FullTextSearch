#ifndef org_apache_lucene_facet_TopOrdAndFloatQueue$OrdAndFloat_H
#define org_apache_lucene_facet_TopOrdAndFloatQueue$OrdAndFloat_H

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

        class TopOrdAndFloatQueue$OrdAndFloat : public ::org::apache::lucene::facet::TopOrdAndNumberQueue$OrdAndValue {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_getValue_b9665294ea488d3c,
            mid_lessThan_08ef0ee8820b17c6,
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

          explicit TopOrdAndFloatQueue$OrdAndFloat(jobject obj) : ::org::apache::lucene::facet::TopOrdAndNumberQueue$OrdAndValue(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TopOrdAndFloatQueue$OrdAndFloat(const TopOrdAndFloatQueue$OrdAndFloat& obj) : ::org::apache::lucene::facet::TopOrdAndNumberQueue$OrdAndValue(obj) {}

          jfloat _get_value() const;
          void _set_value(jfloat) const;

          TopOrdAndFloatQueue$OrdAndFloat();

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
        extern PyType_Def PY_TYPE_DEF(TopOrdAndFloatQueue$OrdAndFloat);
        extern PyTypeObject *PY_TYPE(TopOrdAndFloatQueue$OrdAndFloat);

        class t_TopOrdAndFloatQueue$OrdAndFloat {
        public:
          PyObject_HEAD
          TopOrdAndFloatQueue$OrdAndFloat object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_TopOrdAndFloatQueue$OrdAndFloat *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const TopOrdAndFloatQueue$OrdAndFloat&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const TopOrdAndFloatQueue$OrdAndFloat&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
