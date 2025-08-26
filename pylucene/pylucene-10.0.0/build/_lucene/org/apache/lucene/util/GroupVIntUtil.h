#ifndef org_apache_lucene_util_GroupVIntUtil_H
#define org_apache_lucene_util_GroupVIntUtil_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class GroupVIntUtil$IntReader;
      }
      namespace store {
        class DataInput;
        class DataOutput;
      }
    }
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
            mid_init$_e7bdbe105ce1bafb,
            mid_readGroupVInt_c94dcf8d5ed61430,
            mid_readGroupVInt_b0a9cb19a0433bb2,
            mid_readGroupVInts_c94dcf8d5ed61430,
            mid_writeGroupVInts_76d494c135499a9f,
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
