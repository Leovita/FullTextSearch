#ifndef org_apache_lucene_codecs_uniformsplit_sharedterms_STBlockWriter_H
#define org_apache_lucene_codecs_uniformsplit_sharedterms_STBlockWriter_H

#include "org/apache/lucene/codecs/uniformsplit/BlockWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace store {
        class IndexOutput;
      }
      namespace codecs {
        namespace uniformsplit {
          class IndexDictionary$Builder;
          class BlockEncoder;
          namespace sharedterms {
            class FieldMetadataTermState;
          }
        }
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {
          namespace sharedterms {

            class STBlockWriter : public ::org::apache::lucene::codecs::uniformsplit::BlockWriter {
             public:
              enum {
                mid_init$_410ddb262214bd07,
                mid_addLine_9a353437f8f93d26,
                mid_createBlockLineSerializer_73ba64f41f1e264b,
                mid_writeBlockLine_968a024485a51fb6,
                mid_updateFieldMetadata_8b3d46852b435a94,
                mid_finishLastBlock_d103b6face46e3b6,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit STBlockWriter(jobject obj) : ::org::apache::lucene::codecs::uniformsplit::BlockWriter(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              STBlockWriter(const STBlockWriter& obj) : ::org::apache::lucene::codecs::uniformsplit::BlockWriter(obj) {}

              STBlockWriter(const ::org::apache::lucene::store::IndexOutput &, jint, jint, const ::org::apache::lucene::codecs::uniformsplit::BlockEncoder &);

              void addLine(const ::org::apache::lucene::util::BytesRef &, const ::java::util::List &, const ::org::apache::lucene::codecs::uniformsplit::IndexDictionary$Builder &) const;
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
            extern PyType_Def PY_TYPE_DEF(STBlockWriter);
            extern PyTypeObject *PY_TYPE(STBlockWriter);

            class t_STBlockWriter {
            public:
              PyObject_HEAD
              STBlockWriter object;
              static PyObject *wrap_Object(const STBlockWriter&);
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
