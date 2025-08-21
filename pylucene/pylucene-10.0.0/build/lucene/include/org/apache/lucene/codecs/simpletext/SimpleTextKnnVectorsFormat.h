#ifndef org_apache_lucene_codecs_simpletext_SimpleTextKnnVectorsFormat_H
#define org_apache_lucene_codecs_simpletext_SimpleTextKnnVectorsFormat_H

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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace simpletext {

          class SimpleTextKnnVectorsFormat : public ::org::apache::lucene::codecs::KnnVectorsFormat {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_fieldsReader_804fb3f7a48fdbd5,
              mid_fieldsWriter_9d6535131b264391,
              mid_getMaxDimensions_3f230d713d7fd2b0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleTextKnnVectorsFormat(jobject obj) : ::org::apache::lucene::codecs::KnnVectorsFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleTextKnnVectorsFormat(const SimpleTextKnnVectorsFormat& obj) : ::org::apache::lucene::codecs::KnnVectorsFormat(obj) {}

            SimpleTextKnnVectorsFormat();

            ::org::apache::lucene::codecs::KnnVectorsReader fieldsReader(const ::org::apache::lucene::index::SegmentReadState &) const;
            ::org::apache::lucene::codecs::KnnVectorsWriter fieldsWriter(const ::org::apache::lucene::index::SegmentWriteState &) const;
            jint getMaxDimensions(const ::java::lang::String &) const;
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
        namespace simpletext {
          extern PyType_Def PY_TYPE_DEF(SimpleTextKnnVectorsFormat);
          extern PyTypeObject *PY_TYPE(SimpleTextKnnVectorsFormat);

          class t_SimpleTextKnnVectorsFormat {
          public:
            PyObject_HEAD
            SimpleTextKnnVectorsFormat object;
            static PyObject *wrap_Object(const SimpleTextKnnVectorsFormat&);
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
