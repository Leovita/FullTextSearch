#ifndef org_apache_lucene_index_IndexCommit_H
#define org_apache_lucene_index_IndexCommit_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
      }
      namespace index {
        class IndexCommit;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class Comparable;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Map;
    class Collection;
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
            mid_compareTo_6b24a169bddc674d,
            mid_delete_e7bdbe105ce1bafb,
            mid_equals_00d17418847797d4,
            mid_getDirectory_0b8988a9a36f43ec,
            mid_getFileNames_4a269b968b3a511f,
            mid_getGeneration_0f176418e3e16541,
            mid_getSegmentCount_bd89ce15dad49192,
            mid_getSegmentsFileName_e7df854526d67fa3,
            mid_getUserData_5004bdf19ed33453,
            mid_hashCode_bd89ce15dad49192,
            mid_isDeleted_9aa4f33e82ea333f,
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
