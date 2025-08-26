#ifndef org_apache_lucene_index_Fields_H
#define org_apache_lucene_index_Fields_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
    class Class;
    class String;
    class Iterable;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Terms;
        class Fields;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class Fields : public ::java::lang::Object {
         public:
          enum {
            mid_iterator_c7985fafdcf40e83,
            mid_size_bd89ce15dad49192,
            mid_terms_b30320f056ffba8d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Fields(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Fields(const Fields& obj) : ::java::lang::Object(obj) {}

          static JArray< Fields > *EMPTY_ARRAY;

          ::java::util::Iterator iterator() const;
          jint size() const;
          ::org::apache::lucene::index::Terms terms(const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(Fields);
        extern PyTypeObject *PY_TYPE(Fields);

        class t_Fields {
        public:
          PyObject_HEAD
          Fields object;
          static PyObject *wrap_Object(const Fields&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
