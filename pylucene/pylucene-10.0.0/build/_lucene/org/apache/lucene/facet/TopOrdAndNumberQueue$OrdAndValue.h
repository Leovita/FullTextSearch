#ifndef org_apache_lucene_facet_TopOrdAndNumberQueue$OrdAndValue_H
#define org_apache_lucene_facet_TopOrdAndNumberQueue$OrdAndValue_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Number;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class TopOrdAndNumberQueue$OrdAndValue;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        class TopOrdAndNumberQueue$OrdAndValue : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_getValue_b9665294ea488d3c,
            mid_lessThan_08ef0ee8820b17c6,
            max_mid
          };

          enum {
            fid_ord,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TopOrdAndNumberQueue$OrdAndValue(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TopOrdAndNumberQueue$OrdAndValue(const TopOrdAndNumberQueue$OrdAndValue& obj) : ::java::lang::Object(obj) {}

          jint _get_ord() const;
          void _set_ord(jint) const;

          TopOrdAndNumberQueue$OrdAndValue();

          ::java::lang::Number getValue() const;
          jboolean lessThan(const TopOrdAndNumberQueue$OrdAndValue &) const;
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
        extern PyType_Def PY_TYPE_DEF(TopOrdAndNumberQueue$OrdAndValue);
        extern PyTypeObject *PY_TYPE(TopOrdAndNumberQueue$OrdAndValue);

        class t_TopOrdAndNumberQueue$OrdAndValue {
        public:
          PyObject_HEAD
          TopOrdAndNumberQueue$OrdAndValue object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_TopOrdAndNumberQueue$OrdAndValue *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const TopOrdAndNumberQueue$OrdAndValue&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const TopOrdAndNumberQueue$OrdAndValue&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
