#ifndef org_apache_lucene_index_MergePolicy$OneMerge_H
#define org_apache_lucene_index_MergePolicy$OneMerge_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergePolicy$MergeAbortedException;
        class Sorter$DocMap;
        class MergePolicy$OneMergeProgress;
        class SegmentCommitInfo;
        class CodecReader;
      }
      namespace store {
        class MergeInfo;
        class Directory;
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
  namespace util {
    class List;
    namespace concurrent {
      class Executor;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class MergePolicy$OneMerge : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e360e028b63ee226,
            mid_init$_9425cd4f62c94bce,
            mid_checkAborted_3720c61b0679eb3e,
            mid_getMergeInfo_6f5c2e9d37fb2f83,
            mid_getMergeProgress_62639b0388dc50ff,
            mid_getStoreMergeInfo_6033acd37091ac6a,
            mid_isAborted_947277eca0748c4e,
            mid_mergeFinished_c485d474c3ac8ca0,
            mid_mergeInit_3720c61b0679eb3e,
            mid_reorder_98d323a015ab4355,
            mid_segString_09a7afff1868fc5e,
            mid_setAborted_3720c61b0679eb3e,
            mid_setMergeInfo_3bfd7bf5d987134c,
            mid_totalBytesSize_16939d9d0a9a9721,
            mid_totalNumDocs_20fbf7565993c3d7,
            mid_wrapForMerge_1c28c4360592a6f7,
            max_mid
          };

          enum {
            fid_estimatedMergeBytes,
            fid_segments,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MergePolicy$OneMerge(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MergePolicy$OneMerge(const MergePolicy$OneMerge& obj) : ::java::lang::Object(obj) {}

          jlong _get_estimatedMergeBytes() const;
          void _set_estimatedMergeBytes(jlong) const;
          ::java::util::List _get_segments() const;

          MergePolicy$OneMerge(const JArray< ::org::apache::lucene::index::CodecReader > &);
          MergePolicy$OneMerge(const ::java::util::List &);

          void checkAborted() const;
          ::org::apache::lucene::index::SegmentCommitInfo getMergeInfo() const;
          ::org::apache::lucene::index::MergePolicy$OneMergeProgress getMergeProgress() const;
          ::org::apache::lucene::store::MergeInfo getStoreMergeInfo() const;
          jboolean isAborted() const;
          void mergeFinished(jboolean, jboolean) const;
          void mergeInit() const;
          ::org::apache::lucene::index::Sorter$DocMap reorder(const ::org::apache::lucene::index::CodecReader &, const ::org::apache::lucene::store::Directory &, const ::java::util::concurrent::Executor &) const;
          ::java::lang::String segString() const;
          void setAborted() const;
          void setMergeInfo(const ::org::apache::lucene::index::SegmentCommitInfo &) const;
          jlong totalBytesSize() const;
          jint totalNumDocs() const;
          ::org::apache::lucene::index::CodecReader wrapForMerge(const ::org::apache::lucene::index::CodecReader &) const;
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
        extern PyType_Def PY_TYPE_DEF(MergePolicy$OneMerge);
        extern PyTypeObject *PY_TYPE(MergePolicy$OneMerge);

        class t_MergePolicy$OneMerge {
        public:
          PyObject_HEAD
          MergePolicy$OneMerge object;
          static PyObject *wrap_Object(const MergePolicy$OneMerge&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
