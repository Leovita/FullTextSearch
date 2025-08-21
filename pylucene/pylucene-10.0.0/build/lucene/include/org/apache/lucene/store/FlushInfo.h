#ifndef org_apache_lucene_store_FlushInfo_H
#define org_apache_lucene_store_FlushInfo_H

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

        class FlushInfo : public ::java::lang::Record {
         public:
          enum {
            mid_init$_52c53d6e59b40db2,
            mid_equals_570b5248a6da3ef6,
            mid_estimatedSegmentSize_16939d9d0a9a9721,
            mid_hashCode_20fbf7565993c3d7,
            mid_numDocs_20fbf7565993c3d7,
            mid_toString_09a7afff1868fc5e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FlushInfo(jobject obj) : ::java::lang::Record(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FlushInfo(const FlushInfo& obj) : ::java::lang::Record(obj) {}

          FlushInfo(jint, jlong);

          jboolean equals(const ::java::lang::Object &) const;
          jlong estimatedSegmentSize() const;
          jint hashCode() const;
          jint numDocs() const;
          ::java::lang::String toString() const;
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
        extern PyType_Def PY_TYPE_DEF(FlushInfo);
        extern PyTypeObject *PY_TYPE(FlushInfo);

        class t_FlushInfo {
        public:
          PyObject_HEAD
          FlushInfo object;
          static PyObject *wrap_Object(const FlushInfo&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
