#ifndef org_apache_lucene_search_FieldComparator_H
#define org_apache_lucene_search_FieldComparator_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class LeafFieldComparator;
      }
      namespace index {
        class LeafReaderContext;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class FieldComparator : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_compare_7f27cf81a85a97e9,
            mid_compareValues_69b7b8451ec9257c,
            mid_disableSkipping_e7bdbe105ce1bafb,
            mid_getLeafComparator_84b03b9ed9bc3019,
            mid_setSingleSort_e7bdbe105ce1bafb,
            mid_setTopValue_501c3eb890ff6d79,
            mid_value_2a2d7d7b9153274c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldComparator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldComparator(const FieldComparator& obj) : ::java::lang::Object(obj) {}

          FieldComparator();

          jint compare(jint, jint) const;
          jint compareValues(const ::java::lang::Object &, const ::java::lang::Object &) const;
          void disableSkipping() const;
          ::org::apache::lucene::search::LeafFieldComparator getLeafComparator(const ::org::apache::lucene::index::LeafReaderContext &) const;
          void setSingleSort() const;
          void setTopValue(const ::java::lang::Object &) const;
          ::java::lang::Object value(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldComparator);
        extern PyTypeObject *PY_TYPE(FieldComparator);

        class t_FieldComparator {
        public:
          PyObject_HEAD
          FieldComparator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldComparator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldComparator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldComparator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
