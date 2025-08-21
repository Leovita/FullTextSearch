#ifndef org_apache_lucene_codecs_lucene90_Lucene90PointsWriter_H
#define org_apache_lucene_codecs_lucene90_Lucene90PointsWriter_H

#include "org/apache/lucene/codecs/PointsWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergeState;
        class FieldInfo;
        class SegmentWriteState;
      }
      namespace codecs {
        class PointsReader;
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
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene90 {

          class Lucene90PointsWriter : public ::org::apache::lucene::codecs::PointsWriter {
           public:
            enum {
              mid_init$_45b2848804214eb5,
              mid_init$_4a3c51e774ed56a7,
              mid_close_3720c61b0679eb3e,
              mid_finish_3720c61b0679eb3e,
              mid_merge_1d534d5055fd8b5a,
              mid_writeField_47730f1914f6cee4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene90PointsWriter(jobject obj) : ::org::apache::lucene::codecs::PointsWriter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene90PointsWriter(const Lucene90PointsWriter& obj) : ::org::apache::lucene::codecs::PointsWriter(obj) {}

            Lucene90PointsWriter(const ::org::apache::lucene::index::SegmentWriteState &);
            Lucene90PointsWriter(const ::org::apache::lucene::index::SegmentWriteState &, jint, jdouble);

            void close() const;
            void finish() const;
            void merge(const ::org::apache::lucene::index::MergeState &) const;
            void writeField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::PointsReader &) const;
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
          extern PyType_Def PY_TYPE_DEF(Lucene90PointsWriter);
          extern PyTypeObject *PY_TYPE(Lucene90PointsWriter);

          class t_Lucene90PointsWriter {
          public:
            PyObject_HEAD
            Lucene90PointsWriter object;
            static PyObject *wrap_Object(const Lucene90PointsWriter&);
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
