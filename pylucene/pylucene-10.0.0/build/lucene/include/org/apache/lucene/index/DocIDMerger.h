#ifndef org_apache_lucene_index_DocIDMerger_H
#define org_apache_lucene_index_DocIDMerger_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class DocIDMerger;
        class DocIDMerger$Sub;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class DocIDMerger : public ::java::lang::Object {
         public:
          enum {
            mid_next_1d43900cb9b674d1,
            mid_of_a3c6d38be7f2c499,
            mid_of_a18d1f18570150d2,
            mid_reset_e7bdbe105ce1bafb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocIDMerger(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocIDMerger(const DocIDMerger& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::index::DocIDMerger$Sub next() const;
          static DocIDMerger of(const ::java::util::List &, jboolean);
          static DocIDMerger of(const ::java::util::List &, jint, jboolean);
          void reset() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(DocIDMerger);
        extern PyTypeObject *PY_TYPE(DocIDMerger);

        class t_DocIDMerger {
        public:
          PyObject_HEAD
          DocIDMerger object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_DocIDMerger *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const DocIDMerger&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const DocIDMerger&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
