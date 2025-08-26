#ifndef org_apache_lucene_index_FieldInfo_H
#define org_apache_lucene_index_FieldInfo_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Map;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class VectorEncoding;
        class VectorSimilarityFunction;
        class IndexOptions;
        class DocValuesType;
        class DocValuesSkipIndexType;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class FieldInfo : public ::java::lang::Object {
         public:
          enum {
            mid_init$_a10b728b025dcd04,
            mid_attributes_5004bdf19ed33453,
            mid_checkConsistency_e7bdbe105ce1bafb,
            mid_docValuesSkipIndexType_97cc35d5a06c6328,
            mid_getAttribute_fef9c036acf290a9,
            mid_getDocValuesGen_0f176418e3e16541,
            mid_getDocValuesType_632981fa09914ed1,
            mid_getFieldNumber_bd89ce15dad49192,
            mid_getIndexOptions_898aff4631b0024a,
            mid_getName_e7df854526d67fa3,
            mid_getPointDimensionCount_bd89ce15dad49192,
            mid_getPointIndexDimensionCount_bd89ce15dad49192,
            mid_getPointNumBytes_bd89ce15dad49192,
            mid_getVectorDimension_bd89ce15dad49192,
            mid_getVectorEncoding_667892793043e3ed,
            mid_getVectorSimilarityFunction_0f05516cfc8fbfdc,
            mid_hasNorms_9aa4f33e82ea333f,
            mid_hasPayloads_9aa4f33e82ea333f,
            mid_hasTermVectors_9aa4f33e82ea333f,
            mid_hasVectorValues_9aa4f33e82ea333f,
            mid_isParentField_9aa4f33e82ea333f,
            mid_isSoftDeletesField_9aa4f33e82ea333f,
            mid_omitsNorms_9aa4f33e82ea333f,
            mid_putAttribute_3bdb499546f6bd60,
            mid_setDocValuesType_e61a48e17304d135,
            mid_setOmitsNorms_e7bdbe105ce1bafb,
            mid_setPointDimensions_eee637a6cebc299b,
            max_mid
          };

          enum {
            fid_name,
            fid_number,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldInfo(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldInfo(const FieldInfo& obj) : ::java::lang::Object(obj) {}

          ::java::lang::String _get_name() const;
          jint _get_number() const;

          FieldInfo(const ::java::lang::String &, jint, jboolean, jboolean, jboolean, const ::org::apache::lucene::index::IndexOptions &, const ::org::apache::lucene::index::DocValuesType &, const ::org::apache::lucene::index::DocValuesSkipIndexType &, jlong, const ::java::util::Map &, jint, jint, jint, jint, const ::org::apache::lucene::index::VectorEncoding &, const ::org::apache::lucene::index::VectorSimilarityFunction &, jboolean, jboolean);

          ::java::util::Map attributes() const;
          void checkConsistency() const;
          ::org::apache::lucene::index::DocValuesSkipIndexType docValuesSkipIndexType() const;
          ::java::lang::String getAttribute(const ::java::lang::String &) const;
          jlong getDocValuesGen() const;
          ::org::apache::lucene::index::DocValuesType getDocValuesType() const;
          jint getFieldNumber() const;
          ::org::apache::lucene::index::IndexOptions getIndexOptions() const;
          ::java::lang::String getName() const;
          jint getPointDimensionCount() const;
          jint getPointIndexDimensionCount() const;
          jint getPointNumBytes() const;
          jint getVectorDimension() const;
          ::org::apache::lucene::index::VectorEncoding getVectorEncoding() const;
          ::org::apache::lucene::index::VectorSimilarityFunction getVectorSimilarityFunction() const;
          jboolean hasNorms() const;
          jboolean hasPayloads() const;
          jboolean hasTermVectors() const;
          jboolean hasVectorValues() const;
          jboolean isParentField() const;
          jboolean isSoftDeletesField() const;
          jboolean omitsNorms() const;
          ::java::lang::String putAttribute(const ::java::lang::String &, const ::java::lang::String &) const;
          void setDocValuesType(const ::org::apache::lucene::index::DocValuesType &) const;
          void setOmitsNorms() const;
          void setPointDimensions(jint, jint, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldInfo);
        extern PyTypeObject *PY_TYPE(FieldInfo);

        class t_FieldInfo {
        public:
          PyObject_HEAD
          FieldInfo object;
          static PyObject *wrap_Object(const FieldInfo&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
