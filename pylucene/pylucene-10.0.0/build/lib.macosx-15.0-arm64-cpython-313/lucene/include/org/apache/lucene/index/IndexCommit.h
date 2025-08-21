#ifndef org_apache_lucene_index_IndexCommit_H
#define org_apache_lucene_index_IndexCommit_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Comparable;
    class Class;
    class String;
  }
  namespace util {
    class Collection;
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
        class IndexCommit;
      }
      namespace store {
        class Directory;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class IndexCommit : public ::java::lang::Object {
         public:
          enum {
            mid_compareTo_40bb340b0b4a6dd2,
            mid_delete_3720c61b0679eb3e,
            mid_equals_570b5248a6da3ef6,
            mid_getDirectory_0d3b52699e153434,
            mid_getFileNames_aa58b3beec16cbbd,
            mid_getGeneration_16939d9d0a9a9721,
            mid_getSegmentCount_20fbf7565993c3d7,
            mid_getSegmentsFileName_09a7afff1868fc5e,
            mid_getUserData_f125f26c07a7bec8,
            mid_hashCode_20fbf7565993c3d7,
            mid_isDeleted_947277eca0748c4e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexCommit(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexCommit(const IndexCommit& obj) : ::java::lang::Object(obj) {}

          jint compareTo(const IndexCommit &) const;
          void delete$() const;
          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::store::Directory getDirectory() const;
          ::java::util::Collection getFileNames() const;
          jlong getGeneration() const;
          jint getSegmentCount() const;
          ::java::lang::String getSegmentsFileName() const;
          ::java::util::Map getUserData() const;
          jint hashCode() const;
          jboolean isDeleted() const;
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
        extern PyType_Def PY_TYPE_DEF(IndexCommit);
        extern PyTypeObject *PY_TYPE(IndexCommit);

        class t_IndexCommit {
        public:
          PyObject_HEAD
          IndexCommit object;
          static PyObject *wrap_Object(const IndexCommit&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
