#ifndef org_apache_lucene_search_SortedNumericSelector$Type_H
#define org_apache_lucene_search_SortedNumericSelector$Type_H

#include "java/lang/Enum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class SortedNumericSelector$Type;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class SortedNumericSelector$Type : public ::java::lang::Enum {
         public:
          enum {
            mid_valueOf_c90c102cbfc512bd,
            mid_values_c310e48c3e5d5910,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SortedNumericSelector$Type(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SortedNumericSelector$Type(const SortedNumericSelector$Type& obj) : ::java::lang::Enum(obj) {}

          static SortedNumericSelector$Type *MAX;
          static SortedNumericSelector$Type *MIN;

          static SortedNumericSelector$Type valueOf(const ::java::lang::String &);
          static JArray< SortedNumericSelector$Type > values();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(SortedNumericSelector$Type);
        extern PyTypeObject *PY_TYPE(SortedNumericSelector$Type);

        class t_SortedNumericSelector$Type {
        public:
          PyObject_HEAD
          SortedNumericSelector$Type object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_SortedNumericSelector$Type *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const SortedNumericSelector$Type&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const SortedNumericSelector$Type&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
