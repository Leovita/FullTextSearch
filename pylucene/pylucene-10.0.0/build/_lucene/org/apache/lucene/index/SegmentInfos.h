#ifndef org_apache_lucene_index_SegmentInfos_H
#define org_apache_lucene_index_SegmentInfos_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
    class Map;
    class Collection;
    class List;
  }
  namespace lang {
    class Cloneable;
    class Class;
    class String;
    class Iterable;
  }
  namespace io {
    class IOException;
    class PrintStream;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
        class IndexOutput;
        class ChecksumIndexInput;
      }
      namespace index {
        class SegmentCommitInfo;
        class SegmentInfos;
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
            mid_init$_8226bd0b0fc13dba,
            mid_add_848ab87634d8a590,
            mid_addAll_e14ca79f217d88d0,
            mid_asList_1387e1e2702ac173,
            mid_changed_e7bdbe105ce1bafb,
            mid_clear_e7bdbe105ce1bafb,
            mid_clone_64f3216f596670dd,
            mid_commit_0bf39a7351552ef4,
            mid_files_fba1b70cd82d472e,
            mid_generationFromSegmentsFileName_490f1686ea1cfda6,
            mid_getCommitLuceneVersion_098638c0dde6da21,
            mid_getGeneration_0f176418e3e16541,
            mid_getId_44e916dc40fc04cb,
            mid_getIndexCreatedVersionMajor_bd89ce15dad49192,
            mid_getInfoStream_79862c7eebad3ab7,
            mid_getLastCommitGeneration_2fd4d01b6225c364,
            mid_getLastCommitGeneration_331e973e04e50972,
            mid_getLastCommitSegmentsFileName_6cc09e85e5e7973a,
            mid_getLastCommitSegmentsFileName_3a658f37b37d9d9b,
            mid_getLastGeneration_0f176418e3e16541,
            mid_getMinSegmentLuceneVersion_098638c0dde6da21,
            mid_getSegmentsFileName_e7df854526d67fa3,
            mid_getUserData_5004bdf19ed33453,
            mid_getVersion_0f176418e3e16541,
            mid_info_dcd709cd8e54250a,
            mid_iterator_c7985fafdcf40e83,
            mid_readCommit_5cbd73587b703646,
            mid_readCommit_dc12fdd5e8f4e8dd,
            mid_readLatestCommit_d1a9361d4c0e20c9,
            mid_readLatestCommit_7f375ae1df5f240c,
            mid_remove_c9718ef738158846,
            mid_setInfoStream_922e82480ddcbcc4,
            mid_setNextWriteGeneration_1d3149fac12f2af3,
            mid_setUserData_0d106768c19cbb43,
            mid_size_bd89ce15dad49192,
            mid_toString_e7df854526d67fa3,
            mid_totalMaxDoc_bd89ce15dad49192,
            mid_updateGeneration_4c4f4bfe6cd27c73,
            mid_write_9713fe0a5c49ff9f,
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
