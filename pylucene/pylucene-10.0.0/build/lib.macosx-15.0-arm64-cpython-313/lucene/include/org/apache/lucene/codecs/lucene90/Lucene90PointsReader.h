#ifndef org_apache_lucene_codecs_lucene90_Lucene90PointsReader_H
#define org_apache_lucene_codecs_lucene90_Lucene90PointsReader_H

#include "org/apache/lucene/codecs/PointsReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class PointValues;
        class SegmentReadState;
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
        namespace lucene90 {

          class Lucene90PointsReader : public ::org::apache::lucene::codecs::PointsReader {
           public:
            enum {
              mid_init$_3a0f0d76cb59d83b,
              mid_checkIntegrity_3720c61b0679eb3e,
              mid_close_3720c61b0679eb3e,
              mid_getValues_9d784340b5464260,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene90PointsReader(jobject obj) : ::org::apache::lucene::codecs::PointsReader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene90PointsReader(const Lucene90PointsReader& obj) : ::org::apache::lucene::codecs::PointsReader(obj) {}

            Lucene90PointsReader(const ::org::apache::lucene::index::SegmentReadState &);

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
      namespace codecs {
        namespace lucene90 {
          extern PyType_Def PY_TYPE_DEF(Lucene90PointsReader);
          extern PyTypeObject *PY_TYPE(Lucene90PointsReader);

          class t_Lucene90PointsReader {
          public:
            PyObject_HEAD
            Lucene90PointsReader object;
            static PyObject *wrap_Object(const Lucene90PointsReader&);
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
