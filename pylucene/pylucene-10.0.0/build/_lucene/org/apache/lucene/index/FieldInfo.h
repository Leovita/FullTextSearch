#ifndef org_apache_lucene_index_FieldInfo_H
#define org_apache_lucene_index_FieldInfo_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class DocValuesSkipIndexType;
        class DocValuesType;
        class VectorSimilarityFunction;
        class VectorEncoding;
        class IndexOptions;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Map;
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
            mid_init$_aff8f8348a69cfb8,
            mid_attributes_f125f26c07a7bec8,
            mid_checkConsistency_3720c61b0679eb3e,
            mid_docValuesSkipIndexType_105258e940575563,
            mid_getAttribute_cb0eb1432185fc94,
            mid_getDocValuesGen_16939d9d0a9a9721,
            mid_getDocValuesType_0ce8ab755e2afd1f,
            mid_getFieldNumber_20fbf7565993c3d7,
            mid_getIndexOptions_0d9f22852de1dba6,
            mid_getName_09a7afff1868fc5e,
            mid_getPointDimensionCount_20fbf7565993c3d7,
            mid_getPointIndexDimensionCount_20fbf7565993c3d7,
            mid_getPointNumBytes_20fbf7565993c3d7,
            mid_getVectorDimension_20fbf7565993c3d7,
            mid_getVectorEncoding_89ee194538cd6149,
            mid_getVectorSimilarityFunction_ab08f5c5789ece7c,
            mid_hasNorms_947277eca0748c4e,
            mid_hasPayloads_947277eca0748c4e,
            mid_hasTermVectors_947277eca0748c4e,
            mid_hasVectorValues_947277eca0748c4e,
            mid_isParentField_947277eca0748c4e,
            mid_isSoftDeletesField_947277eca0748c4e,
            mid_omitsNorms_947277eca0748c4e,
            mid_putAttribute_6829292399b85216,
            mid_setDocValuesType_55494b517509e0e2,
            mid_setOmitsNorms_3720c61b0679eb3e,
            mid_setPointDimensions_20022b6d5e83c732,
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
