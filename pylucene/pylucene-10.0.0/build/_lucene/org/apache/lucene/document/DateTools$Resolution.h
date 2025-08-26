#ifndef org_apache_lucene_document_DateTools$Resolution_H
#define org_apache_lucene_document_DateTools$Resolution_H

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
      namespace document {
        class DateTools$Resolution;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class DateTools$Resolution : public ::java::lang::Enum {
         public:
          enum {
            mid_toString_e7df854526d67fa3,
            mid_valueOf_9aba0b95437a4f09,
            mid_values_eea11893cd4fd854,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DateTools$Resolution(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DateTools$Resolution(const DateTools$Resolution& obj) : ::java::lang::Enum(obj) {}

          static DateTools$Resolution *DAY;
          static DateTools$Resolution *HOUR;
          static DateTools$Resolution *MILLISECOND;
          static DateTools$Resolution *MINUTE;
          static DateTools$Resolution *MONTH;
          static DateTools$Resolution *SECOND;
          static DateTools$Resolution *YEAR;

          ::java::lang::String toString() const;
          static DateTools$Resolution valueOf(const ::java::lang::String &);
          static JArray< DateTools$Resolution > values();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        extern PyType_Def PY_TYPE_DEF(DateTools$Resolution);
        extern PyTypeObject *PY_TYPE(DateTools$Resolution);

        class t_DateTools$Resolution {
        public:
          PyObject_HEAD
          DateTools$Resolution object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_DateTools$Resolution *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const DateTools$Resolution&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const DateTools$Resolution&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
