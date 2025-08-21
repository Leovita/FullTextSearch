#ifndef org_apache_lucene_codecs_lucene90_compressing_Lucene90CompressingTermVectorsFormat_H
#define org_apache_lucene_codecs_lucene90_compressing_Lucene90CompressingTermVectorsFormat_H

#include "org/apache/lucene/codecs/TermVectorsFormat.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class TermVectorsReader;
        namespace compressing {
          class CompressionMode;
        }
        class TermVectorsWriter;
      }
      namespace store {
        class IOContext;
        class Directory;
      }
      namespace index {
        class SegmentInfo;
        class FieldInfos;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene90 {
          namespace compressing {

            class Lucene90CompressingTermVectorsFormat : public ::org::apache::lucene::codecs::TermVectorsFormat {
             public:
              enum {
                mid_init$_28460f543dcf8bac,
                mid_toString_09a7afff1868fc5e,
                mid_vectorsReader_1964f2596a25f5d6,
                mid_vectorsWriter_1818d8841252adb6,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit Lucene90CompressingTermVectorsFormat(jobject obj) : ::org::apache::lucene::codecs::TermVectorsFormat(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              Lucene90CompressingTermVectorsFormat(const Lucene90CompressingTermVectorsFormat& obj) : ::org::apache::lucene::codecs::TermVectorsFormat(obj) {}

              Lucene90CompressingTermVectorsFormat(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::codecs::compressing::CompressionMode &, jint, jint, jint);

              ::java::lang::String toString() const;
              ::org::apache::lucene::codecs::TermVectorsReader vectorsReader(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::index::FieldInfos &, const ::org::apache::lucene::store::IOContext &) const;
              ::org::apache::lucene::codecs::TermVectorsWriter vectorsWriter(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::store::IOContext &) const;
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
            extern PyType_Def PY_TYPE_DEF(Lucene90CompressingTermVectorsFormat);
            extern PyTypeObject *PY_TYPE(Lucene90CompressingTermVectorsFormat);

            class t_Lucene90CompressingTermVectorsFormat {
            public:
              PyObject_HEAD
              Lucene90CompressingTermVectorsFormat object;
              static PyObject *wrap_Object(const Lucene90CompressingTermVectorsFormat&);
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
