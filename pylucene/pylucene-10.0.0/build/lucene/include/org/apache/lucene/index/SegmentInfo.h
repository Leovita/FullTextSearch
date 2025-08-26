#ifndef org_apache_lucene_index_SegmentInfo_H
#define org_apache_lucene_index_SegmentInfo_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
      }
      namespace codecs {
        class Codec;
      }
      namespace util {
        class Version;
      }
      namespace search {
        class Sort;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
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

        class SegmentInfo : public ::java::lang::Object {
         public:
          enum {
            mid_init$_78fc59051bd96df0,
            mid_addDiagnostics_6a7e23584beb7c0f,
            mid_addFile_ee46a189998009d6,
            mid_addFiles_b5398b431eb321fb,
            mid_equals_00d17418847797d4,
            mid_files_79131c6bbcf08916,
            mid_getAttribute_fef9c036acf290a9,
            mid_getAttributes_5004bdf19ed33453,
            mid_getCodec_820c7dce26df28db,
            mid_getDiagnostics_5004bdf19ed33453,
            mid_getHasBlocks_9aa4f33e82ea333f,
            mid_getId_44e916dc40fc04cb,
            mid_getIndexSort_9a15197f7786b173,
            mid_getMinVersion_098638c0dde6da21,
            mid_getUseCompoundFile_9aa4f33e82ea333f,
            mid_getVersion_098638c0dde6da21,
            mid_hashCode_bd89ce15dad49192,
            mid_maxDoc_bd89ce15dad49192,
            mid_putAttribute_3bdb499546f6bd60,
            mid_setCodec_c295922ff311d3f8,
            mid_setFiles_b5398b431eb321fb,
            mid_toString_e7df854526d67fa3,
            mid_toString_0da8f0b89b1e9a22,
            max_mid
          };

          enum {
            fid_dir,
            fid_name,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SegmentInfo(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SegmentInfo(const SegmentInfo& obj) : ::java::lang::Object(obj) {}

          static jint NO;
          static jint YES;

          ::org::apache::lucene::store::Directory _get_dir() const;
          ::java::lang::String _get_name() const;

          SegmentInfo(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::util::Version &, const ::org::apache::lucene::util::Version &, const ::java::lang::String &, jint, jboolean, jboolean, const ::org::apache::lucene::codecs::Codec &, const ::java::util::Map &, const JArray< jbyte > &, const ::java::util::Map &, const ::org::apache::lucene::search::Sort &);

          void addDiagnostics(const ::java::util::Map &) const;
          void addFile(const ::java::lang::String &) const;
          void addFiles(const ::java::util::Collection &) const;
          jboolean equals(const ::java::lang::Object &) const;
          ::java::util::Set files() const;
          ::java::lang::String getAttribute(const ::java::lang::String &) const;
          ::java::util::Map getAttributes() const;
          ::org::apache::lucene::codecs::Codec getCodec() const;
          ::java::util::Map getDiagnostics() const;
          jboolean getHasBlocks() const;
          JArray< jbyte > getId() const;
          ::org::apache::lucene::search::Sort getIndexSort() const;
          ::org::apache::lucene::util::Version getMinVersion() const;
          jboolean getUseCompoundFile() const;
          ::org::apache::lucene::util::Version getVersion() const;
          jint hashCode() const;
          jint maxDoc() const;
          ::java::lang::String putAttribute(const ::java::lang::String &, const ::java::lang::String &) const;
          void setCodec(const ::org::apache::lucene::codecs::Codec &) const;
          void setFiles(const ::java::util::Collection &) const;
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
        extern PyType_Def PY_TYPE_DEF(SegmentInfo);
        extern PyTypeObject *PY_TYPE(SegmentInfo);

        class t_SegmentInfo {
        public:
          PyObject_HEAD
          SegmentInfo object;
          static PyObject *wrap_Object(const SegmentInfo&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
