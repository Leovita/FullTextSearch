#ifndef org_apache_lucene_codecs_uniformsplit_FieldMetadata_H
#define org_apache_lucene_codecs_uniformsplit_FieldMetadata_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class FixedBitSet;
      }
      namespace index {
        class FieldInfo;
      }
      namespace codecs {
        class BlockTermState;
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
      namespace codecs {
        namespace uniformsplit {

          class FieldMetadata : public ::java::lang::Object {
           public:
            enum {
              mid_init$_484c149275e4150c,
              mid_init$_05d328eb61b954f6,
              mid_getDictionaryStartFP_16939d9d0a9a9721,
              mid_getDocCount_20fbf7565993c3d7,
              mid_getDocsSeen_5d012320ca853371,
              mid_getFieldInfo_53b09c8f6420c847,
              mid_getFirstBlockStartFP_16939d9d0a9a9721,
              mid_getLastBlockStartFP_16939d9d0a9a9721,
              mid_getLastTerm_9740fddd1c7df148,
              mid_getNumTerms_16939d9d0a9a9721,
              mid_getSumDocFreq_16939d9d0a9a9721,
              mid_getSumTotalTermFreq_16939d9d0a9a9721,
              mid_setDictionaryStartFP_8b3d46852b435a94,
              mid_setFirstBlockStartFP_8b3d46852b435a94,
              mid_setLastBlockStartFP_8b3d46852b435a94,
              mid_setLastTerm_ac0de3ee0e03786d,
              mid_updateStats_bb894f5bc802a30a,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FieldMetadata(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FieldMetadata(const FieldMetadata& obj) : ::java::lang::Object(obj) {}

            FieldMetadata(const ::org::apache::lucene::index::FieldInfo &, jint);
            FieldMetadata(jlong, jlong, jlong, const ::org::apache::lucene::util::BytesRef &);

            jlong getDictionaryStartFP() const;
            jint getDocCount() const;
            ::org::apache::lucene::util::FixedBitSet getDocsSeen() const;
            ::org::apache::lucene::index::FieldInfo getFieldInfo() const;
            jlong getFirstBlockStartFP() const;
            jlong getLastBlockStartFP() const;
            ::org::apache::lucene::util::BytesRef getLastTerm() const;
            jlong getNumTerms() const;
            jlong getSumDocFreq() const;
            jlong getSumTotalTermFreq() const;
            void setDictionaryStartFP(jlong) const;
            void setFirstBlockStartFP(jlong) const;
            void setLastBlockStartFP(jlong) const;
            void setLastTerm(const ::org::apache::lucene::util::BytesRef &) const;
            void updateStats(const ::org::apache::lucene::codecs::BlockTermState &) const;
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
      namespace codecs {
        namespace uniformsplit {
          extern PyType_Def PY_TYPE_DEF(FieldMetadata);
          extern PyTypeObject *PY_TYPE(FieldMetadata);

          class t_FieldMetadata {
          public:
            PyObject_HEAD
            FieldMetadata object;
            static PyObject *wrap_Object(const FieldMetadata&);
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
