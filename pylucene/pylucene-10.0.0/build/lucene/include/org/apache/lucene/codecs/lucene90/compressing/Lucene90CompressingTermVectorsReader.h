#ifndef org_apache_lucene_codecs_lucene90_compressing_Lucene90CompressingTermVectorsReader_H
#define org_apache_lucene_codecs_lucene90_compressing_Lucene90CompressingTermVectorsReader_H

#include "org/apache/lucene/codecs/TermVectorsReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Fields;
        class SegmentInfo;
        class FieldInfos;
      }
      namespace store {
        class IOContext;
        class Directory;
      }
      namespace codecs {
        namespace compressing {
          class CompressionMode;
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
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene90 {
          namespace compressing {

            class Lucene90CompressingTermVectorsReader : public ::org::apache::lucene::codecs::TermVectorsReader {
             public:
              enum {
                mid_init$_91ac17f9b9a8045f,
                mid_checkIntegrity_3720c61b0679eb3e,
                mid_clone_0b9ae2ecfa80c759,
                mid_close_3720c61b0679eb3e,
                mid_get_780247cb7111176e,
                mid_getMergeInstance_0b9ae2ecfa80c759,
                mid_prefetch_540b2b23d51b1efd,
                mid_toString_09a7afff1868fc5e,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit Lucene90CompressingTermVectorsReader(jobject obj) : ::org::apache::lucene::codecs::TermVectorsReader(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              Lucene90CompressingTermVectorsReader(const Lucene90CompressingTermVectorsReader& obj) : ::org::apache::lucene::codecs::TermVectorsReader(obj) {}

              Lucene90CompressingTermVectorsReader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::java::lang::String &, const ::org::apache::lucene::index::FieldInfos &, const ::org::apache::lucene::store::IOContext &, const ::java::lang::String &, const ::org::apache::lucene::codecs::compressing::CompressionMode &);

              void checkIntegrity() const;
              ::org::apache::lucene::codecs::TermVectorsReader clone() const;
              void close() const;
              ::org::apache::lucene::index::Fields get(jint) const;
              ::org::apache::lucene::codecs::TermVectorsReader getMergeInstance() const;
              void prefetch(jint) const;
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
        namespace lucene90 {
          namespace compressing {
            extern PyType_Def PY_TYPE_DEF(Lucene90CompressingTermVectorsReader);
            extern PyTypeObject *PY_TYPE(Lucene90CompressingTermVectorsReader);

            class t_Lucene90CompressingTermVectorsReader {
            public:
              PyObject_HEAD
              Lucene90CompressingTermVectorsReader object;
              static PyObject *wrap_Object(const Lucene90CompressingTermVectorsReader&);
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
