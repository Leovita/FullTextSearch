#ifndef org_apache_lucene_document_FieldType_H
#define org_apache_lucene_document_FieldType_H

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
        class IndexableFieldType;
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
      namespace document {

        class FieldType : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_init$_7ce3b4ded8e60180,
            mid_docValuesSkipIndexType_105258e940575563,
            mid_docValuesType_0ce8ab755e2afd1f,
            mid_equals_570b5248a6da3ef6,
            mid_freeze_3720c61b0679eb3e,
            mid_getAttributes_f125f26c07a7bec8,
            mid_hashCode_20fbf7565993c3d7,
            mid_indexOptions_0d9f22852de1dba6,
            mid_omitNorms_947277eca0748c4e,
            mid_pointDimensionCount_20fbf7565993c3d7,
            mid_pointIndexDimensionCount_20fbf7565993c3d7,
            mid_pointNumBytes_20fbf7565993c3d7,
            mid_putAttribute_6829292399b85216,
            mid_setDimensions_e13cff512ebda969,
            mid_setDimensions_20022b6d5e83c732,
            mid_setDocValuesSkipIndexType_6da6475cf967a0ba,
            mid_setDocValuesType_55494b517509e0e2,
            mid_setIndexOptions_9f58bcf4414b6d8e,
            mid_setOmitNorms_b110fc3a58c081ab,
            mid_setStoreTermVectorOffsets_b110fc3a58c081ab,
            mid_setStoreTermVectorPayloads_b110fc3a58c081ab,
            mid_setStoreTermVectorPositions_b110fc3a58c081ab,
            mid_setStoreTermVectors_b110fc3a58c081ab,
            mid_setStored_b110fc3a58c081ab,
            mid_setTokenized_b110fc3a58c081ab,
            mid_setVectorAttributes_6d6cd28169bf0ad2,
            mid_storeTermVectorOffsets_947277eca0748c4e,
            mid_storeTermVectorPayloads_947277eca0748c4e,
            mid_storeTermVectorPositions_947277eca0748c4e,
            mid_storeTermVectors_947277eca0748c4e,
            mid_stored_947277eca0748c4e,
            mid_toString_09a7afff1868fc5e,
            mid_tokenized_947277eca0748c4e,
            mid_vectorDimension_20fbf7565993c3d7,
            mid_vectorEncoding_89ee194538cd6149,
            mid_vectorSimilarityFunction_ab08f5c5789ece7c,
            mid_checkIfFrozen_3720c61b0679eb3e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldType(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldType(const FieldType& obj) : ::java::lang::Object(obj) {}

          FieldType();
          FieldType(const ::org::apache::lucene::index::IndexableFieldType &);

          ::org::apache::lucene::index::DocValuesSkipIndexType docValuesSkipIndexType() const;
          ::org::apache::lucene::index::DocValuesType docValuesType() const;
          jboolean equals(const ::java::lang::Object &) const;
          void freeze() const;
          ::java::util::Map getAttributes() const;
          jint hashCode() const;
          ::org::apache::lucene::index::IndexOptions indexOptions() const;
          jboolean omitNorms() const;
          jint pointDimensionCount() const;
          jint pointIndexDimensionCount() const;
          jint pointNumBytes() const;
          ::java::lang::String putAttribute(const ::java::lang::String &, const ::java::lang::String &) const;
          void setDimensions(jint, jint) const;
          void setDimensions(jint, jint, jint) const;
          void setDocValuesSkipIndexType(const ::org::apache::lucene::index::DocValuesSkipIndexType &) const;
          void setDocValuesType(const ::org::apache::lucene::index::DocValuesType &) const;
          void setIndexOptions(const ::org::apache::lucene::index::IndexOptions &) const;
          void setOmitNorms(jboolean) const;
          void setStoreTermVectorOffsets(jboolean) const;
          void setStoreTermVectorPayloads(jboolean) const;
          void setStoreTermVectorPositions(jboolean) const;
          void setStoreTermVectors(jboolean) const;
          void setStored(jboolean) const;
          void setTokenized(jboolean) const;
          void setVectorAttributes(jint, const ::org::apache::lucene::index::VectorEncoding &, const ::org::apache::lucene::index::VectorSimilarityFunction &) const;
          jboolean storeTermVectorOffsets() const;
          jboolean storeTermVectorPayloads() const;
          jboolean storeTermVectorPositions() const;
          jboolean storeTermVectors() const;
          jboolean stored() const;
          ::java::lang::String toString() const;
          jboolean tokenized() const;
          jint vectorDimension() const;
          ::org::apache::lucene::index::VectorEncoding vectorEncoding() const;
          ::org::apache::lucene::index::VectorSimilarityFunction vectorSimilarityFunction() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        extern PyType_Def PY_TYPE_DEF(FieldType);
        extern PyTypeObject *PY_TYPE(FieldType);

        class t_FieldType {
        public:
          PyObject_HEAD
          FieldType object;
          static PyObject *wrap_Object(const FieldType&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
