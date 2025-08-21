#ifndef org_apache_lucene_util_GroupVIntUtil_H
#define org_apache_lucene_util_GroupVIntUtil_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataInput;
        class DataOutput;
      }
      namespace util {
        class GroupVIntUtil$IntReader;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class GroupVIntUtil : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_readGroupVInt_48865982d1e1d4a0,
            mid_readGroupVInt_2775316fcbec5fbf,
            mid_readGroupVInts_48865982d1e1d4a0,
            mid_writeGroupVInts_0c776a931de867fe,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GroupVIntUtil(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GroupVIntUtil(const GroupVIntUtil& obj) : ::java::lang::Object(obj) {}

          static jint MAX_LENGTH_PER_GROUP;

          GroupVIntUtil();

          static void readGroupVInt(const ::org::apache::lucene::store::DataInput &, const JArray< jlong > &, jint);
          static jint readGroupVInt(const ::org::apache::lucene::store::DataInput &, jlong, const ::org::apache::lucene::util::GroupVIntUtil$IntReader &, jlong, const JArray< jlong > &, jint);
          static void readGroupVInts(const ::org::apache::lucene::store::DataInput &, const JArray< jlong > &, jint);
          static void writeGroupVInts(const ::org::apache::lucene::store::DataOutput &, const JArray< jbyte > &, const JArray< jlong > &, jint);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(GroupVIntUtil);
        extern PyTypeObject *PY_TYPE(GroupVIntUtil);

        class t_GroupVIntUtil {
        public:
          PyObject_HEAD
          GroupVIntUtil object;
          static PyObject *wrap_Object(const GroupVIntUtil&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
