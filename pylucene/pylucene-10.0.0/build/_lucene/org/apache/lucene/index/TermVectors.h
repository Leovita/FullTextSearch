#ifndef org_apache_lucene_index_TermVectors_H
#define org_apache_lucene_index_TermVectors_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class TermVectors;
        class Terms;
        class Fields;
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
      namespace index {

        class TermVectors : public ::java::lang::Object {
         public:
          enum {
            mid_get_fb85108cc18b1699,
            mid_get_c75230ec6a909a2d,
            mid_prefetch_8226bd0b0fc13dba,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermVectors(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TermVectors(const TermVectors& obj) : ::java::lang::Object(obj) {}

          static TermVectors *EMPTY;

          ::org::apache::lucene::index::Fields get(jint) const;
          ::org::apache::lucene::index::Terms get(jint, const ::java::lang::String &) const;
          void prefetch(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(TermVectors);
        extern PyTypeObject *PY_TYPE(TermVectors);

        class t_TermVectors {
        public:
          PyObject_HEAD
          TermVectors object;
          static PyObject *wrap_Object(const TermVectors&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
