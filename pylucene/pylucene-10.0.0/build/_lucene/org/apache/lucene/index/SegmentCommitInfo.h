#ifndef org_apache_lucene_index_SegmentCommitInfo_H
#define org_apache_lucene_index_SegmentCommitInfo_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Integer;
    class Class;
    class String;
  }
  namespace util {
    class Collection;
    class Set;
    class Map;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentCommitInfo;
        class SegmentInfo;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class SegmentCommitInfo : public ::java::lang::Object {
         public:
          enum {
            mid_init$_4b55f879234159fa,
            mid_clone_6f5c2e9d37fb2f83,
            mid_files_aa58b3beec16cbbd,
            mid_getDelCount_20fbf7565993c3d7,
            mid_getDelGen_16939d9d0a9a9721,
            mid_getDocValuesGen_16939d9d0a9a9721,
            mid_getDocValuesUpdatesFiles_f125f26c07a7bec8,
            mid_getFieldInfosFiles_4df174295554d7bd,
            mid_getFieldInfosGen_16939d9d0a9a9721,
            mid_getId_5560da88fc44aa82,
            mid_getNextDelGen_16939d9d0a9a9721,
            mid_getNextDocValuesGen_16939d9d0a9a9721,
            mid_getNextFieldInfosGen_16939d9d0a9a9721,
            mid_getSoftDelCount_20fbf7565993c3d7,
            mid_hasDeletions_947277eca0748c4e,
            mid_hasFieldUpdates_947277eca0748c4e,
            mid_setDocValuesUpdatesFiles_79ba0f5a7d05e623,
            mid_setFieldInfosFiles_1d5d4c6f11d1b2ab,
            mid_sizeInBytes_16939d9d0a9a9721,
            mid_toString_09a7afff1868fc5e,
            mid_toString_cd8436557ab831f9,
            max_mid
          };

          enum {
            fid_info,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SegmentCommitInfo(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SegmentCommitInfo(const SegmentCommitInfo& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::index::SegmentInfo _get_info() const;

          SegmentCommitInfo(const ::org::apache::lucene::index::SegmentInfo &, jint, jint, jlong, jlong, jlong, const JArray< jbyte > &);

          SegmentCommitInfo clone() const;
          ::java::util::Collection files() const;
          jint getDelCount() const;
          jlong getDelGen() const;
          jlong getDocValuesGen() const;
          ::java::util::Map getDocValuesUpdatesFiles() const;
          ::java::util::Set getFieldInfosFiles() const;
          jlong getFieldInfosGen() const;
          JArray< jbyte > getId() const;
          jlong getNextDelGen() const;
          jlong getNextDocValuesGen() const;
          jlong getNextFieldInfosGen() const;
          jint getSoftDelCount() const;
          jboolean hasDeletions() const;
          jboolean hasFieldUpdates() const;
          void setDocValuesUpdatesFiles(const ::java::util::Map &) const;
          void setFieldInfosFiles(const ::java::util::Set &) const;
          jlong sizeInBytes() const;
          ::java::lang::String toString() const;
          ::java::lang::String toString(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(SegmentCommitInfo);
        extern PyTypeObject *PY_TYPE(SegmentCommitInfo);

        class t_SegmentCommitInfo {
        public:
          PyObject_HEAD
          SegmentCommitInfo object;
          static PyObject *wrap_Object(const SegmentCommitInfo&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
