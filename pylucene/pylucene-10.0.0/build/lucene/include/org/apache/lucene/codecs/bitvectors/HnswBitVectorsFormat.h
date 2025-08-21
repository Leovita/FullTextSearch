#ifndef org_apache_lucene_codecs_bitvectors_HnswBitVectorsFormat_H
#define org_apache_lucene_codecs_bitvectors_HnswBitVectorsFormat_H

#include "org/apache/lucene/codecs/KnnVectorsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class KnnVectorsReader;
        class KnnVectorsWriter;
      }
      namespace index {
        class SegmentReadState;
        class SegmentWriteState;
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
    namespace concurrent {
      class ExecutorService;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace bitvectors {

          class HnswBitVectorsFormat : public ::org::apache::lucene::codecs::KnnVectorsFormat {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_e13cff512ebda969,
              mid_init$_097d1f1c9e054ec4,
              mid_fieldsReader_804fb3f7a48fdbd5,
              mid_fieldsWriter_9d6535131b264391,
              mid_getMaxDimensions_3f230d713d7fd2b0,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HnswBitVectorsFormat(jobject obj) : ::org::apache::lucene::codecs::KnnVectorsFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HnswBitVectorsFormat(const HnswBitVectorsFormat& obj) : ::org::apache::lucene::codecs::KnnVectorsFormat(obj) {}

            static ::java::lang::String *NAME;

            HnswBitVectorsFormat();
            HnswBitVectorsFormat(jint, jint);
            HnswBitVectorsFormat(jint, jint, jint, const ::java::util::concurrent::ExecutorService &);

            ::org::apache::lucene::codecs::KnnVectorsReader fieldsReader(const ::org::apache::lucene::index::SegmentReadState &) const;
            ::org::apache::lucene::codecs::KnnVectorsWriter fieldsWriter(const ::org::apache::lucene::index::SegmentWriteState &) const;
            jint getMaxDimensions(const ::java::lang::String &) const;
            ::java::lang::String toString() const;
          };
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
        namespace bitvectors {
          extern PyType_Def PY_TYPE_DEF(HnswBitVectorsFormat);
          extern PyTypeObject *PY_TYPE(HnswBitVectorsFormat);

          class t_HnswBitVectorsFormat {
          public:
            PyObject_HEAD
            HnswBitVectorsFormat object;
            static PyObject *wrap_Object(const HnswBitVectorsFormat&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
