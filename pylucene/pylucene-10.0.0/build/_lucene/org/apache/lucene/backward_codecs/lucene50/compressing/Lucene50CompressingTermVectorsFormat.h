#ifndef org_apache_lucene_backward_codecs_lucene50_compressing_Lucene50CompressingTermVectorsFormat_H
#define org_apache_lucene_backward_codecs_lucene50_compressing_Lucene50CompressingTermVectorsFormat_H

#include "org/apache/lucene/codecs/TermVectorsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
        class IOContext;
      }
      namespace codecs {
        class TermVectorsWriter;
        class TermVectorsReader;
      }
      namespace index {
        class SegmentInfo;
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

            class Lucene50CompressingTermVectorsFormat : public ::org::apache::lucene::codecs::TermVectorsFormat {
             public:
              enum {
                mid_init$_dc92c386ef66ed75,
                mid_toString_e7df854526d67fa3,
                mid_vectorsReader_7d1a6a780d28332f,
                mid_vectorsWriter_b2b9759be25f6183,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit Lucene50CompressingTermVectorsFormat(jobject obj) : ::org::apache::lucene::codecs::TermVectorsFormat(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              Lucene50CompressingTermVectorsFormat(const Lucene50CompressingTermVectorsFormat& obj) : ::org::apache::lucene::codecs::TermVectorsFormat(obj) {}

              Lucene50CompressingTermVectorsFormat(const ::java::lang::String &, const ::java::lang::String &, const ::org::apache::lucene::backward_codecs::compressing::CompressionMode &, jint, jint, jint);

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
      namespace backward_codecs {
        namespace lucene50 {
          namespace compressing {
            extern PyType_Def PY_TYPE_DEF(Lucene50CompressingTermVectorsFormat);
            extern PyTypeObject *PY_TYPE(Lucene50CompressingTermVectorsFormat);

            class t_Lucene50CompressingTermVectorsFormat {
            public:
              PyObject_HEAD
              Lucene50CompressingTermVectorsFormat object;
              static PyObject *wrap_Object(const Lucene50CompressingTermVectorsFormat&);
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
