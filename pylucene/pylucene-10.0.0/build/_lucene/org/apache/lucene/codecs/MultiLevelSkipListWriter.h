#ifndef org_apache_lucene_codecs_MultiLevelSkipListWriter_H
#define org_apache_lucene_codecs_MultiLevelSkipListWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexOutput;
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
      namespace codecs {

        class MultiLevelSkipListWriter : public ::java::lang::Object {
         public:
          enum {
            mid_bufferSkip_540b2b23d51b1efd,
            mid_writeSkip_861de2016dfd85d4,
            mid_resetSkip_3720c61b0679eb3e,
            mid_writeSkipData_5219d9c4529a5f9f,
            mid_writeChildPointer_64f4f315ba6157a7,
            mid_writeLevelLength_e04090c4de365a7b,
            mid_init_3720c61b0679eb3e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiLevelSkipListWriter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiLevelSkipListWriter(const MultiLevelSkipListWriter& obj) : ::java::lang::Object(obj) {}

          void bufferSkip(jint) const;
          jlong writeSkip(const ::org::apache::lucene::store::IndexOutput &) const;
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
        extern PyType_Def PY_TYPE_DEF(MultiLevelSkipListWriter);
        extern PyTypeObject *PY_TYPE(MultiLevelSkipListWriter);

        class t_MultiLevelSkipListWriter {
        public:
          PyObject_HEAD
          MultiLevelSkipListWriter object;
          static PyObject *wrap_Object(const MultiLevelSkipListWriter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
