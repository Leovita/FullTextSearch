#ifndef org_apache_lucene_codecs_PointsReader_H
#define org_apache_lucene_codecs_PointsReader_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Closeable;
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
        class PointsReader;
      }
      namespace index {
        class PointValues;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class PointsReader : public ::java::lang::Object {
         public:
          enum {
            mid_checkIntegrity_e7bdbe105ce1bafb,
            mid_getMergeInstance_01e0d9afb4f515b4,
            mid_getValues_db6b2fb22b12e7e1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PointsReader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PointsReader(const PointsReader& obj) : ::java::lang::Object(obj) {}

          void checkIntegrity() const;
          PointsReader getMergeInstance() const;
          ::org::apache::lucene::index::PointValues getValues(const ::java::lang::String &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyType_Def PY_TYPE_DEF(PointsReader);
        extern PyTypeObject *PY_TYPE(PointsReader);

        class t_PointsReader {
        public:
          PyObject_HEAD
          PointsReader object;
          static PyObject *wrap_Object(const PointsReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
