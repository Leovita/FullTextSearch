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
            mid_init$_e13cff512ebda969,
            mid_clear_3720c61b0679eb3e,
            mid_exists_ae22d3a856ad56f1,
            mid_find_3c9bba330f083871,
            mid_getSlot_3c9bba330f083871,
            mid_hash_3c9bba330f083871,
            mid_put_3c9bba330f083871,
            mid_ramBytesUsed_16939d9d0a9a9721,
            mid_rehash_3720c61b0679eb3e,
            mid_size_20fbf7565993c3d7,
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
