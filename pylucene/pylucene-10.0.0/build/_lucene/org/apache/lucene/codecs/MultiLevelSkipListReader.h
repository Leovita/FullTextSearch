#ifndef org_apache_lucene_codecs_MultiLevelSkipListReader_H
#define org_apache_lucene_codecs_MultiLevelSkipListReader_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Closeable;
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
      namespace codecs {

        class MultiLevelSkipListReader : public ::java::lang::Object {
         public:
          enum {
            mid_close_3720c61b0679eb3e,
            mid_getDoc_20fbf7565993c3d7,
            mid_init_b0983bb665c1a771,
            mid_skipTo_3c9bba330f083871,
            mid_readSkipData_ecaf58c646b57409,
            mid_readLevelLength_6886de856ac1e531,
            mid_readChildPointer_6886de856ac1e531,
            mid_seekChild_540b2b23d51b1efd,
            mid_setLastSkipData_540b2b23d51b1efd,
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
