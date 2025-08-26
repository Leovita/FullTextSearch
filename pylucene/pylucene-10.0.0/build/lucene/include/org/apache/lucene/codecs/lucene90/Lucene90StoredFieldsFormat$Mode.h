#ifndef org_apache_lucene_codecs_lucene90_Lucene90StoredFieldsFormat$Mode_H
#define org_apache_lucene_codecs_lucene90_Lucene90StoredFieldsFormat$Mode_H

#include "java/lang/Enum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene90 {
          class Lucene90StoredFieldsFormat$Mode;
        }
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
      namespace codecs {
        namespace lucene90 {

          class Lucene90StoredFieldsFormat$Mode : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_4c6aef58b41596bb,
              mid_values_fd52128bf582a9c0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene90StoredFieldsFormat$Mode(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene90StoredFieldsFormat$Mode(const Lucene90StoredFieldsFormat$Mode& obj) : ::java::lang::Enum(obj) {}

            static Lucene90StoredFieldsFormat$Mode *BEST_COMPRESSION;
            static Lucene90StoredFieldsFormat$Mode *BEST_SPEED;

            static Lucene90StoredFieldsFormat$Mode valueOf(const ::java::lang::String &);
            static JArray< Lucene90StoredFieldsFormat$Mode > values();
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
      namespace codecs {
        namespace lucene90 {
          extern PyType_Def PY_TYPE_DEF(Lucene90StoredFieldsFormat$Mode);
          extern PyTypeObject *PY_TYPE(Lucene90StoredFieldsFormat$Mode);

          class t_Lucene90StoredFieldsFormat$Mode {
          public:
            PyObject_HEAD
            Lucene90StoredFieldsFormat$Mode object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Lucene90StoredFieldsFormat$Mode *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Lucene90StoredFieldsFormat$Mode&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Lucene90StoredFieldsFormat$Mode&, PyTypeObject *);
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
