#ifndef org_apache_lucene_codecs_uniformsplit_sharedterms_UnionFieldMetadataBuilder_H
#define org_apache_lucene_codecs_uniformsplit_sharedterms_UnionFieldMetadataBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {
          namespace sharedterms {
            class UnionFieldMetadataBuilder;
          }
          class FieldMetadata;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {
          namespace sharedterms {

            class UnionFieldMetadataBuilder : public ::java::lang::Object {
             public:
              enum {
                mid_init$_3720c61b0679eb3e,
                mid_addFieldMetadata_22123bc396e0791f,
                mid_build_7dc336ebc7ed0f2e,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit UnionFieldMetadataBuilder(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              UnionFieldMetadataBuilder(const UnionFieldMetadataBuilder& obj) : ::java::lang::Object(obj) {}

              UnionFieldMetadataBuilder();

              UnionFieldMetadataBuilder addFieldMetadata(const ::org::apache::lucene::codecs::uniformsplit::FieldMetadata &) const;
              ::org::apache::lucene::codecs::uniformsplit::FieldMetadata build() const;
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
            extern PyType_Def PY_TYPE_DEF(UnionFieldMetadataBuilder);
            extern PyTypeObject *PY_TYPE(UnionFieldMetadataBuilder);

            class t_UnionFieldMetadataBuilder {
            public:
              PyObject_HEAD
              UnionFieldMetadataBuilder object;
              static PyObject *wrap_Object(const UnionFieldMetadataBuilder&);
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
