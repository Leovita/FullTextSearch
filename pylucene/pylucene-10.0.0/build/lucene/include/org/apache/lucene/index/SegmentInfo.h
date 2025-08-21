#ifndef org_apache_lucene_index_SegmentInfo_H
#define org_apache_lucene_index_SegmentInfo_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Sort;
      }
      namespace util {
        class Version;
      }
      namespace store {
        class Directory;
      }
      namespace codecs {
        class Codec;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
    class Set;
    class Map;
  }
  namespace lang {
    class Class;
    class String;
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
            mid_init$_52763435f08ce35f,
            mid_addDiagnostics_79ba0f5a7d05e623,
            mid_addFile_0d82408c6e55bc30,
            mid_addFiles_40eba2cff967cc45,
            mid_equals_570b5248a6da3ef6,
            mid_files_4df174295554d7bd,
            mid_getAttribute_cb0eb1432185fc94,
            mid_getAttributes_f125f26c07a7bec8,
            mid_getCodec_39da0291d4509749,
            mid_getDiagnostics_f125f26c07a7bec8,
            mid_getHasBlocks_947277eca0748c4e,
            mid_getId_5560da88fc44aa82,
            mid_getIndexSort_74d249da84538e70,
            mid_getMinVersion_f03381109b44c46a,
            mid_getUseCompoundFile_947277eca0748c4e,
            mid_getVersion_f03381109b44c46a,
            mid_hashCode_20fbf7565993c3d7,
            mid_maxDoc_20fbf7565993c3d7,
            mid_putAttribute_6829292399b85216,
            mid_setCodec_97e34c08d1ad9d65,
            mid_setFiles_40eba2cff967cc45,
            mid_toString_09a7afff1868fc5e,
            mid_toString_cd8436557ab831f9,
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
