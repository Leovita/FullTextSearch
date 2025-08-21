#ifndef org_apache_lucene_codecs_perfield_PerFieldKnnVectorsFormat_H
#define org_apache_lucene_codecs_perfield_PerFieldKnnVectorsFormat_H

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
        namespace perfield {

          class PerFieldKnnVectorsFormat : public ::org::apache::lucene::codecs::KnnVectorsFormat {
           public:
            enum {
              mid_fieldsReader_804fb3f7a48fdbd5,
              mid_fieldsWriter_9d6535131b264391,
              mid_getKnnVectorsFormatForField_e43dc95f99c292bf,
              mid_getMaxDimensions_3f230d713d7fd2b0,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PerFieldKnnVectorsFormat(jobject obj) : ::org::apache::lucene::codecs::KnnVectorsFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PerFieldKnnVectorsFormat(const PerFieldKnnVectorsFormat& obj) : ::org::apache::lucene::codecs::KnnVectorsFormat(obj) {}

            static ::java::lang::String *PER_FIELD_FORMAT_KEY;
            static ::java::lang::String *PER_FIELD_NAME;
            static ::java::lang::String *PER_FIELD_SUFFIX_KEY;

            ::org::apache::lucene::codecs::KnnVectorsReader fieldsReader(const ::org::apache::lucene::index::SegmentReadState &) const;
            ::org::apache::lucene::codecs::KnnVectorsWriter fieldsWriter(const ::org::apache::lucene::index::SegmentWriteState &) const;
            ::org::apache::lucene::codecs::KnnVectorsFormat getKnnVectorsFormatForField(const ::java::lang::String &) const;
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
        namespace perfield {
          extern PyType_Def PY_TYPE_DEF(PerFieldKnnVectorsFormat);
          extern PyTypeObject *PY_TYPE(PerFieldKnnVectorsFormat);

          class t_PerFieldKnnVectorsFormat {
          public:
            PyObject_HEAD
            PerFieldKnnVectorsFormat object;
            static PyObject *wrap_Object(const PerFieldKnnVectorsFormat&);
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
