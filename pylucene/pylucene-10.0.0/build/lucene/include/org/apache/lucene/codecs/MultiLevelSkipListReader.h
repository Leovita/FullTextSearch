#ifndef org_apache_lucene_codecs_MultiLevelSkipListReader_H
#define org_apache_lucene_codecs_MultiLevelSkipListReader_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class Closeable;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class MultiLevelSkipListReader : public ::java::lang::Object {
         public:
          enum {
            mid_close_e7bdbe105ce1bafb,
            mid_getDoc_bd89ce15dad49192,
            mid_init_3d289b1efbb219e1,
            mid_skipTo_a3904e10f5bb9437,
            mid_seekChild_8226bd0b0fc13dba,
            mid_setLastSkipData_8226bd0b0fc13dba,
            mid_readSkipData_5f368c887824ddf9,
            mid_readChildPointer_698cbb5cc171d648,
            mid_readLevelLength_698cbb5cc171d648,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiLevelSkipListReader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiLevelSkipListReader(const MultiLevelSkipListReader& obj) : ::java::lang::Object(obj) {}

          void close() const;
          jint getDoc() const;
          void init(jlong, jint) const;
          jint skipTo(jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyType_Def PY_TYPE_DEF(MultiLevelSkipListReader);
        extern PyTypeObject *PY_TYPE(MultiLevelSkipListReader);

        class t_MultiLevelSkipListReader {
        public:
          PyObject_HEAD
          MultiLevelSkipListReader object;
          static PyObject *wrap_Object(const MultiLevelSkipListReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
