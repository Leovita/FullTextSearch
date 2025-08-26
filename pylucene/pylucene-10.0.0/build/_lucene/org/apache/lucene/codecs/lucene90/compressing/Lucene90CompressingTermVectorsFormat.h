#ifndef org_apache_lucene_codecs_lucene90_compressing_Lucene90CompressingTermVectorsFormat_H
#define org_apache_lucene_codecs_lucene90_compressing_Lucene90CompressingTermVectorsFormat_H

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
        namespace compressing {
          class CompressionMode;
        }
        class TermVectorsReader;
      }
      namespace index {
        class SegmentInfo;
        class FieldInfos;
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
      namespace codecs {
        namespace lucene90 {
          namespace compressing {

            class Lucene90CompressingTermVectorsFormat : public ::org::apache::lucene::codecs::TermVectorsFormat {
             public:
              enum {
                mid_init$_f896f82228335569,
                mid_toString_e7df854526d67fa3,
                mid_vectorsReader_7d1a6a780d28332f,
                mid_vectorsWriter_b2b9759be25f6183,
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
