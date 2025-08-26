#ifndef org_apache_lucene_backward_codecs_lucene87_Lucene87StoredFieldsFormat$Mode_H
#define org_apache_lucene_backward_codecs_lucene87_Lucene87StoredFieldsFormat$Mode_H

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
      namespace backward_codecs {
        namespace lucene87 {
          class Lucene87StoredFieldsFormat$Mode;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene87 {

          class Lucene87StoredFieldsFormat$Mode : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_75ea908bf7d45a36,
              mid_values_e7cd45c9776c32e8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene87StoredFieldsFormat$Mode(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene87StoredFieldsFormat$Mode(const Lucene87StoredFieldsFormat$Mode& obj) : ::java::lang::Enum(obj) {}

            static Lucene87StoredFieldsFormat$Mode *BEST_COMPRESSION;
            static Lucene87StoredFieldsFormat$Mode *BEST_SPEED;

            static Lucene87StoredFieldsFormat$Mode valueOf(const ::java::lang::String &);
            static JArray< Lucene87StoredFieldsFormat$Mode > values();
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene87 {
          extern PyType_Def PY_TYPE_DEF(Lucene87StoredFieldsFormat$Mode);
          extern PyTypeObject *PY_TYPE(Lucene87StoredFieldsFormat$Mode);

          class t_Lucene87StoredFieldsFormat$Mode {
          public:
            PyObject_HEAD
            Lucene87StoredFieldsFormat$Mode object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Lucene87StoredFieldsFormat$Mode *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Lucene87StoredFieldsFormat$Mode&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Lucene87StoredFieldsFormat$Mode&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
