#ifndef org_apache_lucene_codecs_lucene99_Lucene99FlatVectorsFormat_H
#define org_apache_lucene_codecs_lucene99_Lucene99FlatVectorsFormat_H

#include "org/apache/lucene/codecs/hnsw/FlatVectorsFormat.h"

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
        namespace hnsw {
          class FlatVectorsReader;
          class FlatVectorsScorer;
          class FlatVectorsWriter;
        }
      }
      namespace index {
        class SegmentReadState;
        class SegmentWriteState;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene99 {

          class Lucene99FlatVectorsFormat : public ::org::apache::lucene::codecs::hnsw::FlatVectorsFormat {
           public:
            enum {
              mid_init$_a5645d6209864bd2,
              mid_fieldsReader_b357f440421570ce,
              mid_fieldsWriter_2ec0cddb641511c1,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene99FlatVectorsFormat(jobject obj) : ::org::apache::lucene::codecs::hnsw::FlatVectorsFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene99FlatVectorsFormat(const Lucene99FlatVectorsFormat& obj) : ::org::apache::lucene::codecs::hnsw::FlatVectorsFormat(obj) {}

            static jint VERSION_CURRENT;
            static jint VERSION_START;

            Lucene99FlatVectorsFormat(const ::org::apache::lucene::codecs::hnsw::FlatVectorsScorer &);

            ::org::apache::lucene::codecs::hnsw::FlatVectorsReader fieldsReader(const ::org::apache::lucene::index::SegmentReadState &) const;
            ::org::apache::lucene::codecs::hnsw::FlatVectorsWriter fieldsWriter(const ::org::apache::lucene::index::SegmentWriteState &) const;
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
        namespace lucene99 {
          extern PyType_Def PY_TYPE_DEF(Lucene99FlatVectorsFormat);
          extern PyTypeObject *PY_TYPE(Lucene99FlatVectorsFormat);

          class t_Lucene99FlatVectorsFormat {
          public:
            PyObject_HEAD
            Lucene99FlatVectorsFormat object;
            static PyObject *wrap_Object(const Lucene99FlatVectorsFormat&);
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
