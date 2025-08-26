#ifndef org_apache_lucene_index_PointValues_H
#define org_apache_lucene_index_PointValues_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class PointValues$IntersectVisitor;
        class PointValues$PointTree;
        class IndexReader;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class PointValues : public ::java::lang::Object {
         public:
          enum {
            mid_estimateDocCount_149f72f7af6a4410,
            mid_estimatePointCount_149f72f7af6a4410,
            mid_getBytesPerDimension_bd89ce15dad49192,
            mid_getDocCount_bd89ce15dad49192,
            mid_getDocCount_b3f5efcffe0aac36,
            mid_getMaxPackedValue_44e916dc40fc04cb,
            mid_getMaxPackedValue_60283476f16c2359,
            mid_getMinPackedValue_44e916dc40fc04cb,
            mid_getMinPackedValue_60283476f16c2359,
            mid_getNumDimensions_bd89ce15dad49192,
            mid_getNumIndexDimensions_bd89ce15dad49192,
            mid_getPointTree_105acb8614b902b9,
            mid_intersect_0ccbfe2d8ea647b2,
            mid_isEstimatedPointCountGreaterThanOrEqualTo_bee39d7128829816,
            mid_size_0f176418e3e16541,
            mid_size_eab1c2d1bb2a9f12,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PointValues(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PointValues(const PointValues& obj) : ::java::lang::Object(obj) {}

          static jint MAX_DIMENSIONS;
          static jint MAX_INDEX_DIMENSIONS;
          static jint MAX_NUM_BYTES;

          jlong estimateDocCount(const ::org::apache::lucene::index::PointValues$IntersectVisitor &) const;
          jlong estimatePointCount(const ::org::apache::lucene::index::PointValues$IntersectVisitor &) const;
          jint getBytesPerDimension() const;
          jint getDocCount() const;
          static jint getDocCount(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
          JArray< jbyte > getMaxPackedValue() const;
          static JArray< jbyte > getMaxPackedValue(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
          JArray< jbyte > getMinPackedValue() const;
          static JArray< jbyte > getMinPackedValue(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
          jint getNumDimensions() const;
          jint getNumIndexDimensions() const;
          ::org::apache::lucene::index::PointValues$PointTree getPointTree() const;
          void intersect(const ::org::apache::lucene::index::PointValues$IntersectVisitor &) const;
          static jboolean isEstimatedPointCountGreaterThanOrEqualTo(const ::org::apache::lucene::index::PointValues$IntersectVisitor &, const ::org::apache::lucene::index::PointValues$PointTree &, jlong);
          jlong size() const;
          static jlong size(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &);
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
        extern PyType_Def PY_TYPE_DEF(PointValues);
        extern PyTypeObject *PY_TYPE(PointValues);

        class t_PointValues {
        public:
          PyObject_HEAD
          PointValues object;
          static PyObject *wrap_Object(const PointValues&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
