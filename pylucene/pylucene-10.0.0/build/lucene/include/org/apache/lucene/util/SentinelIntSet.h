#ifndef org_apache_lucene_util_SentinelIntSet_H
#define org_apache_lucene_util_SentinelIntSet_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class SentinelIntSet : public ::java::lang::Object {
         public:
          enum {
            mid_init$_645c25455f5b9b1c,
            mid_clear_e7bdbe105ce1bafb,
            mid_exists_a8281eb3b9d9672d,
            mid_find_a3904e10f5bb9437,
            mid_getSlot_a3904e10f5bb9437,
            mid_hash_a3904e10f5bb9437,
            mid_put_a3904e10f5bb9437,
            mid_ramBytesUsed_0f176418e3e16541,
            mid_rehash_e7bdbe105ce1bafb,
            mid_size_bd89ce15dad49192,
            max_mid
          };

          enum {
            fid_count,
            fid_emptyVal,
            fid_keys,
            fid_rehashCount,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SentinelIntSet(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SentinelIntSet(const SentinelIntSet& obj) : ::java::lang::Object(obj) {}

          jint _get_count() const;
          void _set_count(jint) const;
          jint _get_emptyVal() const;
          JArray< jint > _get_keys() const;
          void _set_keys(const JArray< jint > &) const;
          jint _get_rehashCount() const;
          void _set_rehashCount(jint) const;

          SentinelIntSet(jint, jint);

          void clear() const;
          jboolean exists(jint) const;
          jint find(jint) const;
          jint getSlot(jint) const;
          jint hash(jint) const;
          jint put(jint) const;
          jlong ramBytesUsed() const;
          void rehash() const;
          jint size() const;
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
        extern PyType_Def PY_TYPE_DEF(SentinelIntSet);
        extern PyTypeObject *PY_TYPE(SentinelIntSet);

        class t_SentinelIntSet {
        public:
          PyObject_HEAD
          SentinelIntSet object;
          static PyObject *wrap_Object(const SentinelIntSet&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
