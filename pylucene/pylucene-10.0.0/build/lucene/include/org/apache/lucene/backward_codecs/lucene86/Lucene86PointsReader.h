#ifndef org_apache_lucene_backward_codecs_lucene86_Lucene86PointsReader_H
#define org_apache_lucene_backward_codecs_lucene86_Lucene86PointsReader_H

#include "org/apache/lucene/codecs/PointsReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentReadState;
        class PointValues;
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

          class Lucene86PointsReader : public ::org::apache::lucene::codecs::PointsReader {
           public:
            enum {
              mid_init$_7865ebfeefbeb536,
              mid_checkIntegrity_e7bdbe105ce1bafb,
              mid_close_e7bdbe105ce1bafb,
              mid_getValues_db6b2fb22b12e7e1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene86PointsReader(jobject obj) : ::org::apache::lucene::codecs::PointsReader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene86PointsReader(const Lucene86PointsReader& obj) : ::org::apache::lucene::codecs::PointsReader(obj) {}

            Lucene86PointsReader(const ::org::apache::lucene::index::SegmentReadState &);

            void checkIntegrity() const;
            void close() const;
            ::org::apache::lucene::index::PointValues getValues(const ::java::lang::String &) const;
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
          extern PyType_Def PY_TYPE_DEF(Lucene86PointsReader);
          extern PyTypeObject *PY_TYPE(Lucene86PointsReader);

          class t_Lucene86PointsReader {
          public:
            PyObject_HEAD
            Lucene86PointsReader object;
            static PyObject *wrap_Object(const Lucene86PointsReader&);
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
