#ifndef org_apache_lucene_index_SegmentReadState_H
#define org_apache_lucene_index_SegmentReadState_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
        class IOContext;
      }
      namespace index {
        class SegmentInfo;
        class SegmentReadState;
        class FieldInfos;
      }
    }
  }
}
namespace java {
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

        class SegmentReadState : public ::java::lang::Object {
         public:
          enum {
            mid_init$_9393f024d84a3f5b,
            mid_init$_deeb245564001ba1,
            mid_init$_1d4567146056528c,
            max_mid
          };

          enum {
            fid_context,
            fid_directory,
            fid_fieldInfos,
            fid_segmentInfo,
            fid_segmentSuffix,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SegmentReadState(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SegmentReadState(const SegmentReadState& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::store::IOContext _get_context() const;
          ::org::apache::lucene::store::Directory _get_directory() const;
          ::org::apache::lucene::index::FieldInfos _get_fieldInfos() const;
          ::org::apache::lucene::index::SegmentInfo _get_segmentInfo() const;
          ::java::lang::String _get_segmentSuffix() const;

          SegmentReadState(const SegmentReadState &, const ::java::lang::String &);
          SegmentReadState(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::index::FieldInfos &, const ::org::apache::lucene::store::IOContext &);
          SegmentReadState(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::index::FieldInfos &, const ::org::apache::lucene::store::IOContext &, const ::java::lang::String &);
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
        extern PyType_Def PY_TYPE_DEF(SegmentReadState);
        extern PyTypeObject *PY_TYPE(SegmentReadState);

        class t_SegmentReadState {
        public:
          PyObject_HEAD
          SegmentReadState object;
          static PyObject *wrap_Object(const SegmentReadState&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
