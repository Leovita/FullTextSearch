#ifndef org_apache_lucene_index_VectorEncoding_H
#define org_apache_lucene_index_VectorEncoding_H

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
        class VectorEncoding;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class VectorEncoding : public ::java::lang::Enum {
         public:
          enum {
            mid_valueOf_4e5706df6ceba2c0,
            mid_values_1ad9800ab94b0672,
            max_mid
          };

          enum {
            fid_byteSize,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit VectorEncoding(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          VectorEncoding(const VectorEncoding& obj) : ::java::lang::Enum(obj) {}

          static VectorEncoding *BYTE;
          static VectorEncoding *FLOAT32;

          jint _get_byteSize() const;

          static VectorEncoding valueOf(const ::java::lang::String &);
          static JArray< VectorEncoding > values();
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
        extern PyType_Def PY_TYPE_DEF(VectorEncoding);
        extern PyTypeObject *PY_TYPE(VectorEncoding);

        class t_VectorEncoding {
        public:
          PyObject_HEAD
          VectorEncoding object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_VectorEncoding *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const VectorEncoding&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const VectorEncoding&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
