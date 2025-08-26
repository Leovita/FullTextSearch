#ifndef org_apache_lucene_codecs_uniformsplit_sharedterms_STBlockWriter_H
#define org_apache_lucene_codecs_uniformsplit_sharedterms_STBlockWriter_H

#include "org/apache/lucene/codecs/uniformsplit/BlockWriter.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
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
      namespace util {
        class BytesRef;
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

            class STBlockWriter : public ::org::apache::lucene::codecs::uniformsplit::BlockWriter {
             public:
              enum {
                mid_init$_7ebd87d81e05f1d7,
                mid_addLine_ed5a1b2436e42806,
                mid_createBlockLineSerializer_119d0a6549b55a52,
                mid_writeBlockLine_03a26e2e9b3359ce,
                mid_updateFieldMetadata_1d3149fac12f2af3,
                mid_finishLastBlock_2798b2c9e81a469e,
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
