#ifndef org_apache_lucene_codecs_lucene90_Lucene90PointsFormat_H
#define org_apache_lucene_codecs_lucene90_Lucene90PointsFormat_H

#include "org/apache/lucene/codecs/PointsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentReadState;
        class SegmentWriteState;
      }
      namespace codecs {
        class PointsReader;
        class PointsWriter;
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

          class Lucene90PointsFormat : public ::org::apache::lucene::codecs::PointsFormat {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_fieldsReader_b76720d7b0d5e57b,
              mid_fieldsWriter_5ceea1c6eebefb67,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene90PointsFormat(jobject obj) : ::org::apache::lucene::codecs::PointsFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene90PointsFormat(const Lucene90PointsFormat& obj) : ::org::apache::lucene::codecs::PointsFormat(obj) {}

            static ::java::lang::String *DATA_EXTENSION;
            static ::java::lang::String *INDEX_EXTENSION;
            static ::java::lang::String *META_EXTENSION;

            Lucene90PointsFormat();

            ::org::apache::lucene::codecs::PointsReader fieldsReader(const ::org::apache::lucene::index::SegmentReadState &) const;
            ::org::apache::lucene::codecs::PointsWriter fieldsWriter(const ::org::apache::lucene::index::SegmentWriteState &) const;
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
        namespace lucene90 {
          extern PyType_Def PY_TYPE_DEF(Lucene90PointsFormat);
          extern PyTypeObject *PY_TYPE(Lucene90PointsFormat);

          class t_Lucene90PointsFormat {
          public:
            PyObject_HEAD
            Lucene90PointsFormat object;
            static PyObject *wrap_Object(const Lucene90PointsFormat&);
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
