#ifndef org_apache_lucene_backward_codecs_lucene50_compressing_Lucene50CompressingTermVectorsReader_H
#define org_apache_lucene_backward_codecs_lucene50_compressing_Lucene50CompressingTermVectorsReader_H

#include "org/apache/lucene/codecs/TermVectorsReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
        class IOContext;
      }
      namespace index {
        class SegmentInfo;
        class Fields;
        class FieldInfos;
      }
      namespace backward_codecs {
        namespace compressing {
          class CompressionMode;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene50 {
          namespace compressing {

            class Lucene50CompressingTermVectorsReader : public ::org::apache::lucene::codecs::TermVectorsReader {
             public:
              enum {
                mid_init$_bd2900f0b87f53fa,
                mid_checkIntegrity_e7bdbe105ce1bafb,
                mid_clone_7a10ef35062ba8d1,
                mid_close_e7bdbe105ce1bafb,
                mid_get_fb85108cc18b1699,
                mid_toString_e7df854526d67fa3,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit Lucene50CompressingTermVectorsReader(jobject obj) : ::org::apache::lucene::codecs::TermVectorsReader(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              Lucene50CompressingTermVectorsReader(const Lucene50CompressingTermVectorsReader& obj) : ::org::apache::lucene::codecs::TermVectorsReader(obj) {}

              Lucene50CompressingTermVectorsReader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::java::lang::String &, const ::org::apache::lucene::index::FieldInfos &, const ::org::apache::lucene::store::IOContext &, const ::java::lang::String &, const ::org::apache::lucene::backward_codecs::compressing::CompressionMode &);

              void checkIntegrity() const;
              ::org::apache::lucene::codecs::TermVectorsReader clone() const;
              void close() const;
              ::org::apache::lucene::index::Fields get(jint) const;
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
      namespace backward_codecs {
        namespace lucene50 {
          namespace compressing {
            extern PyType_Def PY_TYPE_DEF(Lucene50CompressingTermVectorsReader);
            extern PyTypeObject *PY_TYPE(Lucene50CompressingTermVectorsReader);

            class t_Lucene50CompressingTermVectorsReader {
            public:
              PyObject_HEAD
              Lucene50CompressingTermVectorsReader object;
              static PyObject *wrap_Object(const Lucene50CompressingTermVectorsReader&);
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
