#ifndef org_apache_lucene_codecs_NormsConsumer_H
#define org_apache_lucene_codecs_NormsConsumer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergeState;
        class FieldInfo;
      }
      namespace codecs {
        class NormsProducer;
      }
    }
  }
}
namespace java {
  namespace io {
    class Closeable;
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

        class NormsConsumer : public ::java::lang::Object {
         public:
          enum {
            mid_addNormsField_104f6ae984362566,
            mid_merge_b7f5b82c43646887,
            mid_mergeNormsField_6efd9d341cba2a34,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NormsConsumer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NormsConsumer(const NormsConsumer& obj) : ::java::lang::Object(obj) {}

          void addNormsField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::NormsProducer &) const;
          void merge(const ::org::apache::lucene::index::MergeState &) const;
          void mergeNormsField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::index::MergeState &) const;
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
        extern PyType_Def PY_TYPE_DEF(NormsConsumer);
        extern PyTypeObject *PY_TYPE(NormsConsumer);

        class t_NormsConsumer {
        public:
          PyObject_HEAD
          NormsConsumer object;
          static PyObject *wrap_Object(const NormsConsumer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
