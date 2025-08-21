#ifndef org_apache_lucene_index_OrdinalMap_H
#define org_apache_lucene_index_OrdinalMap_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SortedSetDocValues;
        class TermsEnum;
        class SortedDocValues;
        class IndexReader$CacheKey;
        class OrdinalMap;
      }
      namespace util {
        class Accountable;
        class LongValues;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
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
            mid_build_f1ec56fabebfcf9d,
            mid_build_5a89cd953a250eab,
            mid_build_3a4cc78012e53a0c,
            mid_getChildResources_aa58b3beec16cbbd,
            mid_getFirstSegmentNumber_35c872f03f347c10,
            mid_getFirstSegmentOrd_91d66fa3ea476cea,
            mid_getGlobalOrds_fa199d6af0992bd4,
            mid_getValueCount_16939d9d0a9a9721,
            mid_ramBytesUsed_16939d9d0a9a9721,
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
