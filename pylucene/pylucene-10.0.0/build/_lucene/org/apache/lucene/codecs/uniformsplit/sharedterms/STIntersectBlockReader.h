#ifndef org_apache_lucene_codecs_uniformsplit_sharedterms_STIntersectBlockReader_H
#define org_apache_lucene_codecs_uniformsplit_sharedterms_STIntersectBlockReader_H

#include "org/apache/lucene/codecs/uniformsplit/IntersectBlockReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {
          class IndexDictionary$BrowserSupplier;
          class BlockDecoder;
          class FieldMetadata;
        }
        class PostingsReaderBase;
      }
      namespace util {
        namespace automaton {
          class CompiledAutomaton;
        }
        class BytesRef;
      }
      namespace store {
        class IndexInput;
      }
      namespace index {
        class FieldInfos;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {
          namespace sharedterms {

            class STIntersectBlockReader : public ::org::apache::lucene::codecs::uniformsplit::IntersectBlockReader {
             public:
              enum {
                mid_init$_3c678b707826e7de,
                mid_next_adbedbc1fa61c358,
                mid_createBlockLineSerializer_0b068f814020a587,
                mid_readTermState_90e39a1aad9f7074,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit STIntersectBlockReader(jobject obj) : ::org::apache::lucene::codecs::uniformsplit::IntersectBlockReader(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              STIntersectBlockReader(const STIntersectBlockReader& obj) : ::org::apache::lucene::codecs::uniformsplit::IntersectBlockReader(obj) {}

              STIntersectBlockReader(const ::org::apache::lucene::util::automaton::CompiledAutomaton &, const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::codecs::uniformsplit::IndexDictionary$BrowserSupplier &, const ::org::apache::lucene::store::IndexInput &, const ::org::apache::lucene::codecs::PostingsReaderBase &, const ::org::apache::lucene::codecs::uniformsplit::FieldMetadata &, const ::org::apache::lucene::codecs::uniformsplit::BlockDecoder &, const ::org::apache::lucene::index::FieldInfos &);

              ::org::apache::lucene::util::BytesRef next() const;
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
            extern PyType_Def PY_TYPE_DEF(STIntersectBlockReader);
            extern PyTypeObject *PY_TYPE(STIntersectBlockReader);

            class t_STIntersectBlockReader {
            public:
              PyObject_HEAD
              STIntersectBlockReader object;
              static PyObject *wrap_Object(const STIntersectBlockReader&);
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
