#ifndef org_apache_lucene_util_RamUsageEstimator_H
#define org_apache_lucene_util_RamUsageEstimator_H

#include "java/lang/Object.h"

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
namespace java {
  namespace lang {
    class Integer;
    class Class;
    class String;
    class Long;
  }
  namespace util {
    class Collection;
    class Map;
  }
  namespace text {
    class DecimalFormat;
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
            mid_alignObjectSize_91d66fa3ea476cea,
            mid_humanReadableUnits_f0c925499cca37b2,
            mid_humanReadableUnits_7f319908c3add2a5,
            mid_shallowSizeOf_7dab5080ccb55d77,
            mid_shallowSizeOf_90e997efee233afb,
            mid_shallowSizeOf_de9e3978dfe278c7,
            mid_shallowSizeOf_78d5d1569ad78ba1,
            mid_shallowSizeOf_557e39bb5021f66e,
            mid_shallowSizeOf_58ca7f1fb84194c8,
            mid_shallowSizeOf_f51729baf37fc971,
            mid_shallowSizeOf_6b2c318d939bfa56,
            mid_shallowSizeOf_7bee8443f9f075c3,
            mid_shallowSizeOf_eed3c4edb9cd98e2,
            mid_shallowSizeOfInstance_e0a1057005b61266,
            mid_sizeOf_b9750753b164b8f5,
            mid_sizeOf_0a2f7204813fa9d2,
            mid_sizeOf_7dab5080ccb55d77,
            mid_sizeOf_90e997efee233afb,
            mid_sizeOf_de9e3978dfe278c7,
            mid_sizeOf_78d5d1569ad78ba1,
            mid_sizeOf_557e39bb5021f66e,
            mid_sizeOf_58ca7f1fb84194c8,
            mid_sizeOf_e745ec38bd0adeb1,
            mid_sizeOf_b33a3cf49dabcee9,
            mid_sizeOf_6b2c318d939bfa56,
            mid_sizeOf_7bee8443f9f075c3,
            mid_sizeOf_e942a6f864c95ca0,
            mid_sizeOf_90631375eb656193,
            mid_sizeOf_49aff4b8bf515c13,
            mid_sizeOf_6035174dc560fd6c,
            mid_sizeOfCollection_ffd3e4b5e216555e,
            mid_sizeOfCollection_be69c100b5062f43,
            mid_sizeOfMap_9fe0a1c17a84b6fd,
            mid_sizeOfMap_3c8d56c0215f7de8,
            mid_sizeOfObject_eed3c4edb9cd98e2,
            mid_sizeOfObject_f119323f1d9c6133,
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
