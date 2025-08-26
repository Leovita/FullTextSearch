#ifndef org_apache_lucene_search_PointInSetQuery$Stream_H
#define org_apache_lucene_search_PointInSetQuery$Stream_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class BytesRefIterator;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class PointInSetQuery$Stream : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_next_adbedbc1fa61c358,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PointInSetQuery$Stream(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PointInSetQuery$Stream(const PointInSetQuery$Stream& obj) : ::java::lang::Object(obj) {}

          PointInSetQuery$Stream();

          ::org::apache::lucene::util::BytesRef next() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(PointInSetQuery$Stream);
        extern PyTypeObject *PY_TYPE(PointInSetQuery$Stream);

        class t_PointInSetQuery$Stream {
        public:
          PyObject_HEAD
          PointInSetQuery$Stream object;
          static PyObject *wrap_Object(const PointInSetQuery$Stream&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
