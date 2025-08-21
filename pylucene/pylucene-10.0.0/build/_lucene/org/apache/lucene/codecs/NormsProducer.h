#ifndef org_apache_lucene_codecs_NormsProducer_H
#define org_apache_lucene_codecs_NormsProducer_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class Closeable;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class NormsProducer;
      }
      namespace index {
        class FieldInfo;
        class NumericDocValues;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class NormsProducer : public ::java::lang::Object {
         public:
          enum {
            mid_checkIntegrity_3720c61b0679eb3e,
            mid_getMergeInstance_86a2ee031b1b0d77,
            mid_getNorms_e5ef0d0afbac0df8,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NormsProducer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NormsProducer(const NormsProducer& obj) : ::java::lang::Object(obj) {}

          void checkIntegrity() const;
          NormsProducer getMergeInstance() const;
          ::org::apache::lucene::index::NumericDocValues getNorms(const ::org::apache::lucene::index::FieldInfo &) const;
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
        extern PyType_Def PY_TYPE_DEF(NormsProducer);
        extern PyTypeObject *PY_TYPE(NormsProducer);

        class t_NormsProducer {
        public:
          PyObject_HEAD
          NormsProducer object;
          static PyObject *wrap_Object(const NormsProducer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
