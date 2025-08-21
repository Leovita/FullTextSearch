#ifndef org_apache_lucene_util_bkd_BKDReader_H
#define org_apache_lucene_util_bkd_BKDReader_H

#include "org/apache/lucene/index/PointValues.h"

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
namespace java {
  namespace io {
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
      namespace util {
        namespace bkd {

          class BKDReader : public ::org::apache::lucene::index::PointValues {
           public:
            enum {
              mid_init$_49a6bee61c8bb138,
              mid_getBytesPerDimension_20fbf7565993c3d7,
              mid_getDocCount_20fbf7565993c3d7,
              mid_getMaxPackedValue_5560da88fc44aa82,
              mid_getMinPackedValue_5560da88fc44aa82,
              mid_getNumDimensions_20fbf7565993c3d7,
              mid_getNumIndexDimensions_20fbf7565993c3d7,
              mid_getPointTree_f845dee012b447f9,
              mid_size_16939d9d0a9a9721,
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
