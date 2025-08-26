#ifndef org_apache_lucene_util_RamUsageEstimator_H
#define org_apache_lucene_util_RamUsageEstimator_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Integer;
    class Class;
    class Long;
    class String;
  }
  namespace util {
    class Map;
    class Collection;
  }
  namespace text {
    class DecimalFormat;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace util {
        class Accountable;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class RamUsageEstimator : public ::java::lang::Object {
         public:
          enum {
            mid_alignObjectSize_3dc1c6e3a5a0baf0,
            mid_humanReadableUnits_229c7997533c8554,
            mid_humanReadableUnits_64da472460598b88,
            mid_shallowSizeOf_2eea73e2513f100f,
            mid_shallowSizeOf_1b22e85d5ed71759,
            mid_shallowSizeOf_3a780600ffcdce4c,
            mid_shallowSizeOf_777436b1a69819b0,
            mid_shallowSizeOf_c09fa8358a3aebb6,
            mid_shallowSizeOf_9b6e7f492f1f8e04,
            mid_shallowSizeOf_60168c63e0080b93,
            mid_shallowSizeOf_a374da2f058f2110,
            mid_shallowSizeOf_5e84c3b93d36b099,
            mid_shallowSizeOf_5dbd30c7e10c20e0,
            mid_shallowSizeOfInstance_f8ffecff85bcb191,
            mid_sizeOf_dc37bbd447fd5310,
            mid_sizeOf_136b9d53556430e7,
            mid_sizeOf_2eea73e2513f100f,
            mid_sizeOf_1b22e85d5ed71759,
            mid_sizeOf_3a780600ffcdce4c,
            mid_sizeOf_777436b1a69819b0,
            mid_sizeOf_c09fa8358a3aebb6,
            mid_sizeOf_9b6e7f492f1f8e04,
            mid_sizeOf_2fd4d01b6225c364,
            mid_sizeOf_ff8176b3f920573c,
            mid_sizeOf_a374da2f058f2110,
            mid_sizeOf_5e84c3b93d36b099,
            mid_sizeOf_490f1686ea1cfda6,
            mid_sizeOf_273f2a9efa594dc9,
            mid_sizeOf_69c47e07c8ba94b4,
            mid_sizeOf_b3eca917281231d7,
            mid_sizeOfCollection_99d6d9c9e47b2b27,
            mid_sizeOfCollection_d0d653933bbedefb,
            mid_sizeOfMap_e9b2fb8718ee15b2,
            mid_sizeOfMap_68f8347d5cedf57e,
            mid_sizeOfObject_5dbd30c7e10c20e0,
            mid_sizeOfObject_622562a8a78614fa,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RamUsageEstimator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RamUsageEstimator(const RamUsageEstimator& obj) : ::java::lang::Object(obj) {}

          static jboolean COMPRESSED_REFS_ENABLED;
          static jlong HASHTABLE_RAM_BYTES_PER_ENTRY;
          static jlong LINKED_HASHTABLE_RAM_BYTES_PER_ENTRY;
          static jint MAX_DEPTH;
          static jint NUM_BYTES_ARRAY_HEADER;
          static jint NUM_BYTES_OBJECT_ALIGNMENT;
          static jint NUM_BYTES_OBJECT_HEADER;
          static jint NUM_BYTES_OBJECT_REF;
          static jlong ONE_GB;
          static jlong ONE_KB;
          static jlong ONE_MB;
          static jint QUERY_DEFAULT_RAM_BYTES_USED;
          static jint UNKNOWN_DEFAULT_RAM_BYTES_USED;
          static ::java::util::Map *primitiveSizes;

          static jlong alignObjectSize(jlong);
          static ::java::lang::String humanReadableUnits(jlong);
          static ::java::lang::String humanReadableUnits(jlong, const ::java::text::DecimalFormat &);
          static jlong shallowSizeOf(const JArray< jbyte > &);
          static jlong shallowSizeOf(const JArray< jchar > &);
          static jlong shallowSizeOf(const JArray< jdouble > &);
          static jlong shallowSizeOf(const JArray< jfloat > &);
          static jlong shallowSizeOf(const JArray< jint > &);
          static jlong shallowSizeOf(const JArray< jlong > &);
          static jlong shallowSizeOf(const JArray< ::java::lang::Object > &);
          static jlong shallowSizeOf(const JArray< jshort > &);
          static jlong shallowSizeOf(const JArray< jboolean > &);
          static jlong shallowSizeOf(const ::java::lang::Object &);
          static jlong shallowSizeOfInstance(const ::java::lang::Class &);
          static jlong sizeOf(const ::java::lang::Integer &);
          static jlong sizeOf(const ::java::lang::Long &);
          static jlong sizeOf(const JArray< jbyte > &);
          static jlong sizeOf(const JArray< jchar > &);
          static jlong sizeOf(const JArray< jdouble > &);
          static jlong sizeOf(const JArray< jfloat > &);
          static jlong sizeOf(const JArray< jint > &);
          static jlong sizeOf(const JArray< jlong > &);
          static jlong sizeOf(const JArray< ::java::lang::String > &);
          static jlong sizeOf(const JArray< ::org::apache::lucene::util::Accountable > &);
          static jlong sizeOf(const JArray< jshort > &);
          static jlong sizeOf(const JArray< jboolean > &);
          static jlong sizeOf(const ::java::lang::String &);
          static jlong sizeOf(const ::org::apache::lucene::search::Query &);
          static jlong sizeOf(const ::org::apache::lucene::util::Accountable &);
          static jlong sizeOf(const ::org::apache::lucene::search::Query &, jlong);
          static jlong sizeOfCollection(const ::java::util::Collection &);
          static jlong sizeOfCollection(const ::java::util::Collection &, jlong);
          static jlong sizeOfMap(const ::java::util::Map &);
          static jlong sizeOfMap(const ::java::util::Map &, jlong);
          static jlong sizeOfObject(const ::java::lang::Object &);
          static jlong sizeOfObject(const ::java::lang::Object &, jlong);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(RamUsageEstimator);
        extern PyTypeObject *PY_TYPE(RamUsageEstimator);

        class t_RamUsageEstimator {
        public:
          PyObject_HEAD
          RamUsageEstimator object;
          static PyObject *wrap_Object(const RamUsageEstimator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
