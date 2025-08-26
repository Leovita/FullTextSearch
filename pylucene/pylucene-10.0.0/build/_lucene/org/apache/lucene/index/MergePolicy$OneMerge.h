#ifndef org_apache_lucene_index_MergePolicy$OneMerge_H
#define org_apache_lucene_index_MergePolicy$OneMerge_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
        class MergeInfo;
      }
      namespace index {
        class SegmentCommitInfo;
        class MergePolicy$MergeAbortedException;
        class Sorter$DocMap;
        class CodecReader;
        class MergePolicy$OneMergeProgress;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
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
            mid_init$_e2bc57e6038dc6e4,
            mid_init$_acbb405b60a30822,
            mid_checkAborted_e7bdbe105ce1bafb,
            mid_getMergeInfo_5666aee396fcdc2a,
            mid_getMergeProgress_28ba09f9e16f8da3,
            mid_getStoreMergeInfo_9a0328045cee16c5,
            mid_isAborted_9aa4f33e82ea333f,
            mid_mergeFinished_625f7a21e54cb1c3,
            mid_mergeInit_e7bdbe105ce1bafb,
            mid_reorder_5f7456ece8b18a3b,
            mid_segString_e7df854526d67fa3,
            mid_setAborted_e7bdbe105ce1bafb,
            mid_setMergeInfo_848ab87634d8a590,
            mid_totalBytesSize_0f176418e3e16541,
            mid_totalNumDocs_bd89ce15dad49192,
            mid_wrapForMerge_97a04697f4a63d52,
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
