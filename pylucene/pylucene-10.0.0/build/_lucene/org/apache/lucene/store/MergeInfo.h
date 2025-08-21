#ifndef org_apache_lucene_store_MergeInfo_H
#define org_apache_lucene_store_MergeInfo_H

#include "java/lang/Record.h"

namespace java {
  namespace lang {
    class String;
    class Object;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class MergeInfo : public ::java::lang::Record {
         public:
          enum {
            mid_init$_97af632bcea28c55,
            mid_equals_570b5248a6da3ef6,
            mid_estimatedMergeBytes_16939d9d0a9a9721,
            mid_hashCode_20fbf7565993c3d7,
            mid_isExternal_947277eca0748c4e,
            mid_mergeMaxNumSegments_20fbf7565993c3d7,
            mid_toString_09a7afff1868fc5e,
            mid_totalMaxDoc_20fbf7565993c3d7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MergeInfo(jobject obj) : ::java::lang::Record(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MergeInfo(const MergeInfo& obj) : ::java::lang::Record(obj) {}

          MergeInfo(jint, jlong, jboolean, jint);

          jboolean equals(const ::java::lang::Object &) const;
          jlong estimatedMergeBytes() const;
          jint hashCode() const;
          jboolean isExternal() const;
          jint mergeMaxNumSegments() const;
          ::java::lang::String toString() const;
          jint totalMaxDoc() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        extern PyType_Def PY_TYPE_DEF(MergeInfo);
        extern PyTypeObject *PY_TYPE(MergeInfo);

        class t_MergeInfo {
        public:
          PyObject_HEAD
          MergeInfo object;
          static PyObject *wrap_Object(const MergeInfo&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
