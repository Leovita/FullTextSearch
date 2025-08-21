#ifndef org_apache_lucene_codecs_uniformsplit_sharedterms_STBlockLine$Serializer_H
#define org_apache_lucene_codecs_uniformsplit_sharedterms_STBlockLine$Serializer_H

#include "org/apache/lucene/codecs/uniformsplit/BlockLine$Serializer.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataInput;
        class DataOutput;
      }
      namespace codecs {
        namespace uniformsplit {
          namespace sharedterms {
            class STBlockLine;
          }
          class BlockHeader;
          class DeltaBaseTermStateSerializer;
        }
        class BlockTermState;
      }
      namespace index {
        class FieldInfos;
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
    class String;
  }
  namespace util {
    class Map;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {
          namespace sharedterms {

            class STBlockLine$Serializer : public ::org::apache::lucene::codecs::uniformsplit::BlockLine$Serializer {
             public:
              enum {
                mid_init$_3720c61b0679eb3e,
                mid_readFieldIds_00e479089d9a5ccf,
                mid_readFieldTermStatesMap_963cb9a68721ee01,
                mid_readTermStateForField_577f272fb0efd8bd,
                mid_writeLineTermStates_07b26a0724fa59d5,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit STBlockLine$Serializer(jobject obj) : ::org::apache::lucene::codecs::uniformsplit::BlockLine$Serializer(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              STBlockLine$Serializer(const STBlockLine$Serializer& obj) : ::org::apache::lucene::codecs::uniformsplit::BlockLine$Serializer(obj) {}

              STBlockLine$Serializer();

              JArray< jint > readFieldIds(const ::org::apache::lucene::store::DataInput &, jint) const;
              void readFieldTermStatesMap(const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::codecs::uniformsplit::DeltaBaseTermStateSerializer &, const ::org::apache::lucene::codecs::uniformsplit::BlockHeader &, const ::org::apache::lucene::index::FieldInfos &, const ::java::util::Map &) const;
              ::org::apache::lucene::codecs::BlockTermState readTermStateForField(jint, const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::codecs::uniformsplit::DeltaBaseTermStateSerializer &, const ::org::apache::lucene::codecs::uniformsplit::BlockHeader &, const ::org::apache::lucene::index::FieldInfos &, const ::org::apache::lucene::codecs::BlockTermState &) const;
              void writeLineTermStates(const ::org::apache::lucene::store::DataOutput &, const ::org::apache::lucene::codecs::uniformsplit::sharedterms::STBlockLine &, const ::org::apache::lucene::codecs::uniformsplit::DeltaBaseTermStateSerializer &) const;
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
            extern PyType_Def PY_TYPE_DEF(STBlockLine$Serializer);
            extern PyTypeObject *PY_TYPE(STBlockLine$Serializer);

            class t_STBlockLine$Serializer {
            public:
              PyObject_HEAD
              STBlockLine$Serializer object;
              static PyObject *wrap_Object(const STBlockLine$Serializer&);
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
