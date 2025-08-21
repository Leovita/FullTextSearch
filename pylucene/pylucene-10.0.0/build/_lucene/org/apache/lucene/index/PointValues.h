#ifndef org_apache_lucene_index_PointValues_H
#define org_apache_lucene_index_PointValues_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class PointValues$PointTree;
        class PointValues$IntersectVisitor;
        class IndexReader;
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

        class PointValues : public ::java::lang::Object {
         public:
          enum {
            mid_estimateDocCount_fd598851f3d028de,
            mid_estimatePointCount_fd598851f3d028de,
            mid_getBytesPerDimension_20fbf7565993c3d7,
            mid_getDocCount_20fbf7565993c3d7,
            mid_getDocCount_a59bb07deb8784c0,
            mid_getMaxPackedValue_5560da88fc44aa82,
            mid_getMaxPackedValue_3a5595b41029d3cf,
            mid_getMinPackedValue_5560da88fc44aa82,
            mid_getMinPackedValue_3a5595b41029d3cf,
            mid_getNumDimensions_20fbf7565993c3d7,
            mid_getNumIndexDimensions_20fbf7565993c3d7,
            mid_getPointTree_f845dee012b447f9,
            mid_intersect_639354b6b3c6f802,
            mid_isEstimatedPointCountGreaterThanOrEqualTo_61f05c388d615a8f,
            mid_size_16939d9d0a9a9721,
            mid_size_475e703ea813243d,
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
