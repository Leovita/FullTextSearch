#ifndef org_apache_lucene_util_packed_PackedInts$Format_H
#define org_apache_lucene_util_packed_PackedInts$Format_H

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
      namespace util {
        namespace packed {
          class PackedInts$Format;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace packed {

          class PackedInts$Format : public ::java::lang::Enum {
           public:
            enum {
              mid_byId_dcc92efb842a5eb0,
              mid_byteCount_ca55e5fb7f55bd64,
              mid_getId_20fbf7565993c3d7,
              mid_isSupported_ae22d3a856ad56f1,
              mid_longCount_527fe3c890b0f1b1,
              mid_overheadPerValue_29cfa01aaad92564,
              mid_overheadRatio_29cfa01aaad92564,
              mid_valueOf_d879fe6abedfb34e,
              mid_values_44e25898b7adcb0f,
              max_mid
            };

            enum {
              fid_id,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PackedInts$Format(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PackedInts$Format(const PackedInts$Format& obj) : ::java::lang::Enum(obj) {}

            static PackedInts$Format *PACKED;
            static PackedInts$Format *PACKED_SINGLE_BLOCK;

            jint _get_id() const;

            static PackedInts$Format byId(jint);
            jlong byteCount(jint, jint, jint) const;
            jint getId() const;
            jboolean isSupported(jint) const;
            jint longCount(jint, jint, jint) const;
            jfloat overheadPerValue(jint) const;
            jfloat overheadRatio(jint) const;
            static PackedInts$Format valueOf(const ::java::lang::String &);
            static JArray< PackedInts$Format > values();
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
      namespace util {
        namespace packed {
          extern PyType_Def PY_TYPE_DEF(PackedInts$Format);
          extern PyTypeObject *PY_TYPE(PackedInts$Format);

          class t_PackedInts$Format {
          public:
            PyObject_HEAD
            PackedInts$Format object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_PackedInts$Format *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const PackedInts$Format&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const PackedInts$Format&, PyTypeObject *);
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
