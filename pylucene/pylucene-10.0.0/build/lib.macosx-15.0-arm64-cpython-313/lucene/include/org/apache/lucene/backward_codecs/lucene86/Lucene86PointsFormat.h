#ifndef org_apache_lucene_backward_codecs_lucene86_Lucene86PointsFormat_H
#define org_apache_lucene_backward_codecs_lucene86_Lucene86PointsFormat_H

#include "org/apache/lucene/codecs/PointsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class PointsReader;
        class PointsWriter;
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
      namespace backward_codecs {
        namespace lucene86 {

          class Lucene86PointsFormat : public ::org::apache::lucene::codecs::PointsFormat {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_fieldsReader_2cb00384dee16cea,
              mid_fieldsWriter_47318676b0878844,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene86PointsFormat(jobject obj) : ::org::apache::lucene::codecs::PointsFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene86PointsFormat(const Lucene86PointsFormat& obj) : ::org::apache::lucene::codecs::PointsFormat(obj) {}

            static ::java::lang::String *DATA_EXTENSION;
            static ::java::lang::String *INDEX_EXTENSION;
            static ::java::lang::String *META_EXTENSION;

            Lucene86PointsFormat();

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
      namespace backward_codecs {
        namespace lucene86 {
          extern PyType_Def PY_TYPE_DEF(Lucene86PointsFormat);
          extern PyTypeObject *PY_TYPE(Lucene86PointsFormat);

          class t_Lucene86PointsFormat {
          public:
            PyObject_HEAD
            Lucene86PointsFormat object;
            static PyObject *wrap_Object(const Lucene86PointsFormat&);
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
