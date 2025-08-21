#ifndef org_apache_lucene_codecs_KnnFieldVectorsWriter_H
#define org_apache_lucene_codecs_KnnFieldVectorsWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
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

        class KnnFieldVectorsWriter : public ::java::lang::Object {
         public:
          enum {
            mid_addValue_45daa0687d5df9b5,
            mid_copyValue_5fd81664d2d475e1,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KnnFieldVectorsWriter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KnnFieldVectorsWriter(const KnnFieldVectorsWriter& obj) : ::java::lang::Object(obj) {}

          void addValue(jint, const ::java::lang::Object &) const;
          ::java::lang::Object copyValue(const ::java::lang::Object &) const;
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
        extern PyType_Def PY_TYPE_DEF(KnnFieldVectorsWriter);
        extern PyTypeObject *PY_TYPE(KnnFieldVectorsWriter);

        class t_KnnFieldVectorsWriter {
        public:
          PyObject_HEAD
          KnnFieldVectorsWriter object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_KnnFieldVectorsWriter *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const KnnFieldVectorsWriter&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const KnnFieldVectorsWriter&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
