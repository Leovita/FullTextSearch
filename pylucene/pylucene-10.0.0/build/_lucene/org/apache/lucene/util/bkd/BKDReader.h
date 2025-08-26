#ifndef org_apache_lucene_util_bkd_BKDReader_H
#define org_apache_lucene_util_bkd_BKDReader_H

#include "org/apache/lucene/index/PointValues.h"

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
        class PointValues$PointTree;
      }
      namespace store {
        class IndexInput;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace bkd {

          class BKDReader : public ::org::apache::lucene::index::PointValues {
           public:
            enum {
              mid_init$_1931affd87519978,
              mid_getBytesPerDimension_bd89ce15dad49192,
              mid_getDocCount_bd89ce15dad49192,
              mid_getMaxPackedValue_44e916dc40fc04cb,
              mid_getMinPackedValue_44e916dc40fc04cb,
              mid_getNumDimensions_bd89ce15dad49192,
              mid_getNumIndexDimensions_bd89ce15dad49192,
              mid_getPointTree_105acb8614b902b9,
              mid_size_0f176418e3e16541,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BKDReader(jobject obj) : ::org::apache::lucene::index::PointValues(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BKDReader(const BKDReader& obj) : ::org::apache::lucene::index::PointValues(obj) {}

            BKDReader(const ::org::apache::lucene::store::IndexInput &, const ::org::apache::lucene::store::IndexInput &, const ::org::apache::lucene::store::IndexInput &);

            jint getBytesPerDimension() const;
            jint getDocCount() const;
            JArray< jbyte > getMaxPackedValue() const;
            JArray< jbyte > getMinPackedValue() const;
            jint getNumDimensions() const;
            jint getNumIndexDimensions() const;
            ::org::apache::lucene::index::PointValues$PointTree getPointTree() const;
            jlong size() const;
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
          extern PyType_Def PY_TYPE_DEF(BKDReader);
          extern PyTypeObject *PY_TYPE(BKDReader);

          class t_BKDReader {
          public:
            PyObject_HEAD
            BKDReader object;
            static PyObject *wrap_Object(const BKDReader&);
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
