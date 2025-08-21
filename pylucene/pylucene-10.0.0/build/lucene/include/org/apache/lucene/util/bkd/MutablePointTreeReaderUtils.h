#ifndef org_apache_lucene_util_bkd_MutablePointTreeReaderUtils_H
#define org_apache_lucene_util_bkd_MutablePointTreeReaderUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class MutablePointTree;
      }
      namespace util {
        namespace bkd {
          class BKDConfig;
        }
        class BytesRef;
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
      namespace util {
        namespace bkd {

          class MutablePointTreeReaderUtils : public ::java::lang::Object {
           public:
            enum {
              mid_partition_bc900f6e9be5d928,
              mid_sort_f034b13eef160d31,
              mid_sortByDim_5351eca67b2ecb52,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MutablePointTreeReaderUtils(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MutablePointTreeReaderUtils(const MutablePointTreeReaderUtils& obj) : ::java::lang::Object(obj) {}

            static void partition(const ::org::apache::lucene::util::bkd::BKDConfig &, jint, jint, jint, const ::org::apache::lucene::codecs::MutablePointTree &, jint, jint, jint, const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &);
            static void sort(const ::org::apache::lucene::util::bkd::BKDConfig &, jint, const ::org::apache::lucene::codecs::MutablePointTree &, jint, jint);
            static void sortByDim(const ::org::apache::lucene::util::bkd::BKDConfig &, jint, const JArray< jint > &, const ::org::apache::lucene::codecs::MutablePointTree &, jint, jint, const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &);
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace bkd {
          extern PyType_Def PY_TYPE_DEF(MutablePointTreeReaderUtils);
          extern PyTypeObject *PY_TYPE(MutablePointTreeReaderUtils);

          class t_MutablePointTreeReaderUtils {
          public:
            PyObject_HEAD
            MutablePointTreeReaderUtils object;
            static PyObject *wrap_Object(const MutablePointTreeReaderUtils&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
