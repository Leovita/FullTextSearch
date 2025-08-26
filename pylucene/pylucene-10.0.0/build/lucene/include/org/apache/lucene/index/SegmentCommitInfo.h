#ifndef org_apache_lucene_index_SegmentCommitInfo_H
#define org_apache_lucene_index_SegmentCommitInfo_H

#include "java/lang/Object.h"

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
namespace java {
  namespace lang {
    class Integer;
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Map;
    class Collection;
    class Set;
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
            mid_init$_3f51dfccd135639d,
            mid_clone_5666aee396fcdc2a,
            mid_files_4a269b968b3a511f,
            mid_getDelCount_bd89ce15dad49192,
            mid_getDelGen_0f176418e3e16541,
            mid_getDocValuesGen_0f176418e3e16541,
            mid_getDocValuesUpdatesFiles_5004bdf19ed33453,
            mid_getFieldInfosFiles_79131c6bbcf08916,
            mid_getFieldInfosGen_0f176418e3e16541,
            mid_getId_44e916dc40fc04cb,
            mid_getNextDelGen_0f176418e3e16541,
            mid_getNextDocValuesGen_0f176418e3e16541,
            mid_getNextFieldInfosGen_0f176418e3e16541,
            mid_getSoftDelCount_bd89ce15dad49192,
            mid_hasDeletions_9aa4f33e82ea333f,
            mid_hasFieldUpdates_9aa4f33e82ea333f,
            mid_setDocValuesUpdatesFiles_6a7e23584beb7c0f,
            mid_setFieldInfosFiles_478519f7d4301fc7,
            mid_sizeInBytes_0f176418e3e16541,
            mid_toString_e7df854526d67fa3,
            mid_toString_0da8f0b89b1e9a22,
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
