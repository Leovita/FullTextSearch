#ifndef org_apache_lucene_codecs_bloom_FuzzySet_H
#define org_apache_lucene_codecs_bloom_FuzzySet_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace bloom {
          class FuzzySet$ContainsResult;
          class FuzzySet;
        }
      }
      namespace store {
        class DataInput;
        class DataOutput;
      }
      namespace util {
        class Accountable;
        class BytesRef;
      }
    }
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
              mid_addValue_920ce0cdf4259cc9,
              mid_contains_99cb6f14133cb185,
              mid_createOptimalSet_45ee904532d93304,
              mid_createSetBasedOnMaxMemory_fe4f395b27f7e648,
              mid_createSetBasedOnQuality_20a0ef78331ff415,
              mid_deserialize_e9fd604f1575bb45,
              mid_downsize_31873e70d08d7715,
              mid_getEstimatedNumberUniqueValuesAllowingForCollisions_7f27cf81a85a97e9,
              mid_getEstimatedUniqueValues_bd89ce15dad49192,
              mid_getNearestSetSize_a3904e10f5bb9437,
              mid_getNearestSetSize_e1ec4434aefe4164,
              mid_getSaturation_8b62236f0e4d0dbc,
              mid_getTargetMaxSaturation_8b62236f0e4d0dbc,
              mid_ramBytesUsed_0f176418e3e16541,
              mid_serialize_949eccaa2018a6dc,
              mid_toString_e7df854526d67fa3,
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
