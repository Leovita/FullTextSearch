#ifndef org_apache_lucene_codecs_uniformsplit_sharedterms_FieldMetadataTermState_H
#define org_apache_lucene_codecs_uniformsplit_sharedterms_FieldMetadataTermState_H

#include "java/lang/Record.h"

namespace java {
  namespace lang {
    class String;
    class Object;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {
          class FieldMetadata;
        }
        class BlockTermState;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {
          namespace sharedterms {

            class FieldMetadataTermState : public ::java::lang::Record {
             public:
              enum {
                mid_init$_97c2a440702ae6a6,
                mid_equals_00d17418847797d4,
                mid_fieldMetadata_e24ded8ac3dc53f2,
                mid_hashCode_bd89ce15dad49192,
                mid_state_90e39a1aad9f7074,
                mid_toString_e7df854526d67fa3,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FieldMetadataTermState(jobject obj) : ::java::lang::Record(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FieldMetadataTermState(const FieldMetadataTermState& obj) : ::java::lang::Record(obj) {}

              FieldMetadataTermState(const ::org::apache::lucene::codecs::uniformsplit::FieldMetadata &, const ::org::apache::lucene::codecs::BlockTermState &);

              jboolean equals(const ::java::lang::Object &) const;
              ::org::apache::lucene::codecs::uniformsplit::FieldMetadata fieldMetadata() const;
              jint hashCode() const;
              ::org::apache::lucene::codecs::BlockTermState state() const;
              ::java::lang::String toString() const;
            };
          }
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
        namespace uniformsplit {
          namespace sharedterms {
            extern PyType_Def PY_TYPE_DEF(FieldMetadataTermState);
            extern PyTypeObject *PY_TYPE(FieldMetadataTermState);

            class t_FieldMetadataTermState {
            public:
              PyObject_HEAD
              FieldMetadataTermState object;
              static PyObject *wrap_Object(const FieldMetadataTermState&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
