#ifndef org_apache_lucene_codecs_uniformsplit_FieldMetadata_H
#define org_apache_lucene_codecs_uniformsplit_FieldMetadata_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {

          class FieldMetadata : public ::java::lang::Object {
           public:
            enum {
              mid_init$_7da17ba798519794,
              mid_init$_ef747ae4b4d96c13,
              mid_getDictionaryStartFP_0f176418e3e16541,
              mid_getDocCount_bd89ce15dad49192,
              mid_getDocsSeen_205700981fe48e9e,
              mid_getFieldInfo_4b0d373af1912442,
              mid_getFirstBlockStartFP_0f176418e3e16541,
              mid_getLastBlockStartFP_0f176418e3e16541,
              mid_getLastTerm_adbedbc1fa61c358,
              mid_getNumTerms_0f176418e3e16541,
              mid_getSumDocFreq_0f176418e3e16541,
              mid_getSumTotalTermFreq_0f176418e3e16541,
              mid_setDictionaryStartFP_1d3149fac12f2af3,
              mid_setFirstBlockStartFP_1d3149fac12f2af3,
              mid_setLastBlockStartFP_1d3149fac12f2af3,
              mid_setLastTerm_920ce0cdf4259cc9,
              mid_updateStats_1164e37ee4555dea,
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
