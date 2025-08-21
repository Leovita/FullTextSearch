#ifndef org_apache_lucene_index_SegmentInfos_H
#define org_apache_lucene_index_SegmentInfos_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    class Collection;
    class List;
    class Map;
  }
  namespace lang {
    class Class;
    class String;
    class Iterable;
    class Cloneable;
  }
  namespace io {
    class IOException;
    class PrintStream;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SegmentInfos;
        class SegmentCommitInfo;
      }
      namespace store {
        class IndexOutput;
        class Directory;
        class ChecksumIndexInput;
      }
      namespace util {
        class Version;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class SegmentInfos : public ::java::lang::Object {
         public:
          enum {
            mid_init$_540b2b23d51b1efd,
            mid_add_3bfd7bf5d987134c,
            mid_addAll_eb4b05d4345caaf0,
            mid_asList_36830460e10839eb,
            mid_changed_3720c61b0679eb3e,
            mid_clear_3720c61b0679eb3e,
            mid_clone_8795f542c9448b69,
            mid_commit_3c151c130d7f3176,
            mid_files_e8440e59f7f7df15,
            mid_generationFromSegmentsFileName_e942a6f864c95ca0,
            mid_getCommitLuceneVersion_f03381109b44c46a,
            mid_getGeneration_16939d9d0a9a9721,
            mid_getId_5560da88fc44aa82,
            mid_getIndexCreatedVersionMajor_20fbf7565993c3d7,
            mid_getInfoStream_947dd8f8699f49bf,
            mid_getLastCommitGeneration_e745ec38bd0adeb1,
            mid_getLastCommitGeneration_11b970fc8cc466b5,
            mid_getLastCommitSegmentsFileName_a51b33ee713386d2,
            mid_getLastCommitSegmentsFileName_69d2ffd848815eb8,
            mid_getLastGeneration_16939d9d0a9a9721,
            mid_getMinSegmentLuceneVersion_f03381109b44c46a,
            mid_getSegmentsFileName_09a7afff1868fc5e,
            mid_getUserData_f125f26c07a7bec8,
            mid_getVersion_16939d9d0a9a9721,
            mid_info_9eb603804510021c,
            mid_iterator_0db4c76ff7ee995b,
            mid_readCommit_f6d813b5cc058b9c,
            mid_readCommit_3eb85ba3615df3ef,
            mid_readLatestCommit_4cece451fc25f8aa,
            mid_readLatestCommit_4dc9b424ff9e578f,
            mid_remove_b56e3f80943571da,
            mid_setInfoStream_f19a9aaf837ad692,
            mid_setNextWriteGeneration_8b3d46852b435a94,
            mid_setUserData_c878b6f1e980b1c9,
            mid_size_20fbf7565993c3d7,
            mid_toString_09a7afff1868fc5e,
            mid_totalMaxDoc_20fbf7565993c3d7,
            mid_updateGeneration_e774f28e2e3cb793,
            mid_write_c39b7a857991d9b7,
            max_mid
          };

          enum {
            fid_counter,
            fid_userData,
            fid_version,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SegmentInfos(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SegmentInfos(const SegmentInfos& obj) : ::java::lang::Object(obj) {}

          static jint VERSION_74;
          static jint VERSION_86;

          jlong _get_counter() const;
          void _set_counter(jlong) const;
          ::java::util::Map _get_userData() const;
          void _set_userData(const ::java::util::Map &) const;
          jlong _get_version() const;
          void _set_version(jlong) const;

          SegmentInfos(jint);

          void add(const ::org::apache::lucene::index::SegmentCommitInfo &) const;
          void addAll(const ::java::lang::Iterable &) const;
          ::java::util::List asList() const;
          void changed() const;
          void clear() const;
          SegmentInfos clone() const;
          void commit(const ::org::apache::lucene::store::Directory &) const;
          ::java::util::Collection files(jboolean) const;
          static jlong generationFromSegmentsFileName(const ::java::lang::String &);
          ::org::apache::lucene::util::Version getCommitLuceneVersion() const;
          jlong getGeneration() const;
          JArray< jbyte > getId() const;
          jint getIndexCreatedVersionMajor() const;
          static ::java::io::PrintStream getInfoStream();
          static jlong getLastCommitGeneration(const JArray< ::java::lang::String > &);
          static jlong getLastCommitGeneration(const ::org::apache::lucene::store::Directory &);
          static ::java::lang::String getLastCommitSegmentsFileName(const JArray< ::java::lang::String > &);
          static ::java::lang::String getLastCommitSegmentsFileName(const ::org::apache::lucene::store::Directory &);
          jlong getLastGeneration() const;
          ::org::apache::lucene::util::Version getMinSegmentLuceneVersion() const;
          ::java::lang::String getSegmentsFileName() const;
          ::java::util::Map getUserData() const;
          jlong getVersion() const;
          ::org::apache::lucene::index::SegmentCommitInfo info(jint) const;
          ::java::util::Iterator iterator() const;
          static SegmentInfos readCommit(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &);
          static SegmentInfos readCommit(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::ChecksumIndexInput &, jlong);
          static SegmentInfos readLatestCommit(const ::org::apache::lucene::store::Directory &);
          static SegmentInfos readLatestCommit(const ::org::apache::lucene::store::Directory &, jint);
          jboolean remove(const ::org::apache::lucene::index::SegmentCommitInfo &) const;
          static void setInfoStream(const ::java::io::PrintStream &);
          void setNextWriteGeneration(jlong) const;
          void setUserData(const ::java::util::Map &, jboolean) const;
          jint size() const;
          ::java::lang::String toString() const;
          jint totalMaxDoc() const;
          void updateGeneration(const SegmentInfos &) const;
          void write(const ::org::apache::lucene::store::IndexOutput &) const;
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
        extern PyType_Def PY_TYPE_DEF(SegmentInfos);
        extern PyTypeObject *PY_TYPE(SegmentInfos);

        class t_SegmentInfos {
        public:
          PyObject_HEAD
          SegmentInfos object;
          static PyObject *wrap_Object(const SegmentInfos&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
