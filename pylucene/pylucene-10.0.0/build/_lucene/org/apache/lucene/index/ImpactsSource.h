#ifndef org_apache_lucene_index_ImpactsSource_H
#define org_apache_lucene_index_ImpactsSource_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Impacts;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class ImpactsSource : public ::java::lang::Object {
         public:
          enum {
            mid_advanceShallow_8226bd0b0fc13dba,
            mid_getImpacts_92b9bc95124e6d3a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ImpactsSource(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ImpactsSource(const ImpactsSource& obj) : ::java::lang::Object(obj) {}

          void advanceShallow(jint) const;
          ::org::apache::lucene::index::Impacts getImpacts() const;
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
        extern PyType_Def PY_TYPE_DEF(ImpactsSource);
        extern PyTypeObject *PY_TYPE(ImpactsSource);

        class t_ImpactsSource {
        public:
          PyObject_HEAD
          ImpactsSource object;
          static PyObject *wrap_Object(const ImpactsSource&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
