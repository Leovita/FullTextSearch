#ifndef org_apache_lucene_util_PagedBytes$PagedBytesDataOutput_H
#define org_apache_lucene_util_PagedBytes$PagedBytesDataOutput_H

#include "org/apache/lucene/store/DataOutput.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class PagedBytes;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class PagedBytes$PagedBytesDataOutput : public ::org::apache::lucene::store::DataOutput {
         public:
          enum {
            mid_init$_4d3ce72afaf37553,
            mid_getPosition_16939d9d0a9a9721,
            mid_writeByte_bcdac0a459ff35f6,
            mid_writeBytes_5fdd5da9426708e6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PagedBytes$PagedBytesDataOutput(jobject obj) : ::org::apache::lucene::store::DataOutput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PagedBytes$PagedBytesDataOutput(const PagedBytes$PagedBytesDataOutput& obj) : ::org::apache::lucene::store::DataOutput(obj) {}

          PagedBytes$PagedBytesDataOutput(const ::org::apache::lucene::util::PagedBytes &);

          jlong getPosition() const;
          void writeByte(jbyte) const;
          void writeBytes(const JArray< jbyte > &, jint, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(PagedBytes$PagedBytesDataOutput);
        extern PyTypeObject *PY_TYPE(PagedBytes$PagedBytesDataOutput);

        class t_PagedBytes$PagedBytesDataOutput {
        public:
          PyObject_HEAD
          PagedBytes$PagedBytesDataOutput object;
          static PyObject *wrap_Object(const PagedBytes$PagedBytesDataOutput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
