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
            mid_init$_9ac21abeca443e95,
            mid_equals_00d17418847797d4,
            mid_estimatedMergeBytes_0f176418e3e16541,
            mid_hashCode_bd89ce15dad49192,
            mid_isExternal_9aa4f33e82ea333f,
            mid_mergeMaxNumSegments_bd89ce15dad49192,
            mid_toString_e7df854526d67fa3,
            mid_totalMaxDoc_bd89ce15dad49192,
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
