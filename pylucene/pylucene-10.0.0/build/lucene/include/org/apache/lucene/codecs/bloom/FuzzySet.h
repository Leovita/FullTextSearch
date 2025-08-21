#ifndef org_apache_lucene_codecs_bloom_FuzzySet_H
#define org_apache_lucene_codecs_bloom_FuzzySet_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        class BytesRef;
      }
      namespace store {
        class DataInput;
        class DataOutput;
      }
      namespace codecs {
        namespace bloom {
          class FuzzySet;
          class FuzzySet$ContainsResult;
        }
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
      namespace codecs {
        namespace bloom {

          class FuzzySet : public ::java::lang::Object {
           public:
            enum {
              mid_addValue_ac0de3ee0e03786d,
              mid_contains_9fb2aa8c0895ab2e,
              mid_createOptimalSet_76092f639ed9a392,
              mid_createSetBasedOnMaxMemory_39b887e5f25fbc4e,
              mid_createSetBasedOnQuality_0d10c88195c65be6,
              mid_deserialize_7b0fd792109af46f,
              mid_downsize_ec2c153eabd85ee7,
              mid_getEstimatedNumberUniqueValuesAllowingForCollisions_7f733b5d08bb5ec4,
              mid_getEstimatedUniqueValues_20fbf7565993c3d7,
              mid_getNearestSetSize_3c9bba330f083871,
              mid_getNearestSetSize_de5c7a0fc59420f3,
              mid_getSaturation_9b6c3480dac00edf,
              mid_getTargetMaxSaturation_9b6c3480dac00edf,
              mid_ramBytesUsed_16939d9d0a9a9721,
              mid_serialize_3a071e25ad99bd99,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FuzzySet(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FuzzySet(const FuzzySet& obj) : ::java::lang::Object(obj) {}

            void addValue(const ::org::apache::lucene::util::BytesRef &) const;
            ::org::apache::lucene::codecs::bloom::FuzzySet$ContainsResult contains(const ::org::apache::lucene::util::BytesRef &) const;
            static FuzzySet createOptimalSet(jint, jfloat);
            static FuzzySet createSetBasedOnMaxMemory(jint);
            static FuzzySet createSetBasedOnQuality(jint, jfloat, jint);
            static FuzzySet deserialize(const ::org::apache::lucene::store::DataInput &);
            FuzzySet downsize(jfloat) const;
            static jint getEstimatedNumberUniqueValuesAllowingForCollisions(jint, jint);
            jint getEstimatedUniqueValues() const;
            static jint getNearestSetSize(jint);
            static jint getNearestSetSize(jint, jfloat);
            jfloat getSaturation() const;
            jfloat getTargetMaxSaturation() const;
            jlong ramBytesUsed() const;
            void serialize(const ::org::apache::lucene::store::DataOutput &) const;
            ::java::lang::String toString() const;
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
        namespace bloom {
          extern PyType_Def PY_TYPE_DEF(FuzzySet);
          extern PyTypeObject *PY_TYPE(FuzzySet);

          class t_FuzzySet {
          public:
            PyObject_HEAD
            FuzzySet object;
            static PyObject *wrap_Object(const FuzzySet&);
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
