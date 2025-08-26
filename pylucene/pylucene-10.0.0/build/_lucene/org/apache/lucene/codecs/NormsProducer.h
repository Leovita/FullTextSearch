#ifndef org_apache_lucene_codecs_NormsProducer_H
#define org_apache_lucene_codecs_NormsProducer_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Closeable;
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
        class NumericDocValues;
        class FieldInfo;
      }
      namespace codecs {
        class NormsProducer;
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
            mid_checkIntegrity_e7bdbe105ce1bafb,
            mid_getMergeInstance_bcb16c0940285072,
            mid_getNorms_cbb872df2173ef24,
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
