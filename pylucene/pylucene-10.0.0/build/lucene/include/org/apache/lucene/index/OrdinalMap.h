#ifndef org_apache_lucene_index_OrdinalMap_H
#define org_apache_lucene_index_OrdinalMap_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SortedSetDocValues;
        class IndexReader$CacheKey;
        class SortedDocValues;
        class OrdinalMap;
        class TermsEnum;
      }
      namespace util {
        class LongValues;
        class Accountable;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Collection;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class OrdinalMap : public ::java::lang::Object {
         public:
          enum {
            mid_build_0d1e64442fb6d898,
            mid_build_f4c9d109c856692a,
            mid_build_87e4f7dadf7e3753,
            mid_getChildResources_4a269b968b3a511f,
            mid_getFirstSegmentNumber_7af44747c1921bd4,
            mid_getFirstSegmentOrd_3dc1c6e3a5a0baf0,
            mid_getGlobalOrds_af3c88be26191202,
            mid_getValueCount_0f176418e3e16541,
            mid_ramBytesUsed_0f176418e3e16541,
            max_mid
          };

          enum {
            fid_owner,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OrdinalMap(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          OrdinalMap(const OrdinalMap& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::index::IndexReader$CacheKey _get_owner() const;

          static OrdinalMap build(const ::org::apache::lucene::index::IndexReader$CacheKey &, const JArray< ::org::apache::lucene::index::SortedDocValues > &, jfloat);
          static OrdinalMap build(const ::org::apache::lucene::index::IndexReader$CacheKey &, const JArray< ::org::apache::lucene::index::SortedSetDocValues > &, jfloat);
          static OrdinalMap build(const ::org::apache::lucene::index::IndexReader$CacheKey &, const JArray< ::org::apache::lucene::index::TermsEnum > &, const JArray< jlong > &, jfloat);
          ::java::util::Collection getChildResources() const;
          jint getFirstSegmentNumber(jlong) const;
          jlong getFirstSegmentOrd(jlong) const;
          ::org::apache::lucene::util::LongValues getGlobalOrds(jint) const;
          jlong getValueCount() const;
          jlong ramBytesUsed() const;
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
        extern PyType_Def PY_TYPE_DEF(OrdinalMap);
        extern PyTypeObject *PY_TYPE(OrdinalMap);

        class t_OrdinalMap {
        public:
          PyObject_HEAD
          OrdinalMap object;
          static PyObject *wrap_Object(const OrdinalMap&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
