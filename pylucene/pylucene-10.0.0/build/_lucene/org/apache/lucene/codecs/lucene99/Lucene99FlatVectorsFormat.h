#ifndef org_apache_lucene_codecs_lucene99_Lucene99FlatVectorsFormat_H
#define org_apache_lucene_codecs_lucene99_Lucene99FlatVectorsFormat_H

#include "org/apache/lucene/codecs/hnsw/FlatVectorsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentReadState;
        class SegmentWriteState;
      }
      namespace codecs {
        namespace hnsw {
          class FlatVectorsScorer;
          class FlatVectorsReader;
          class FlatVectorsWriter;
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
      namespace codecs {
        namespace lucene99 {

          class Lucene99FlatVectorsFormat : public ::org::apache::lucene::codecs::hnsw::FlatVectorsFormat {
           public:
            enum {
              mid_init$_1528c98833b309dc,
              mid_fieldsReader_d1a34b66ea06bc3b,
              mid_fieldsWriter_c8010db3218dc643,
              mid_toString_e7df854526d67fa3,
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
