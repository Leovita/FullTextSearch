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
    class IOException;
    class Closeable;
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
            mid_addNormsField_e7e4c5153e0574ca,
            mid_merge_1d534d5055fd8b5a,
            mid_mergeNormsField_12bd7baeb6b4bf04,
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
