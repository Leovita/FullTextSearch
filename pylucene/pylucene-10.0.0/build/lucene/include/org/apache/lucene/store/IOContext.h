#ifndef org_apache_lucene_store_IOContext_H
#define org_apache_lucene_store_IOContext_H

#include "java/lang/Record.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class MergeInfo;
        class IOContext$Context;
        class FlushInfo;
        class ReadAdvice;
        class IOContext;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class Object;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class IOContext : public ::java::lang::Record {
         public:
          enum {
            mid_init$_2b57326223d159ff,
            mid_init$_3f06ed6c0d86c7af,
            mid_init$_8a0849030a8180e4,
            mid_context_bdee817adbfe7670,
            mid_equals_570b5248a6da3ef6,
            mid_flushInfo_d1a3f55e0f77a7eb,
            mid_hashCode_20fbf7565993c3d7,
            mid_mergeInfo_6033acd37091ac6a,
            mid_readAdvice_ea938220c07e85c6,
            mid_toString_09a7afff1868fc5e,
            mid_withReadAdvice_4c97f01dceb6b123,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IOContext(jobject obj) : ::java::lang::Record(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IOContext(const IOContext& obj) : ::java::lang::Record(obj) {}

          static IOContext *DEFAULT;
          static IOContext *READONCE;

          IOContext(const ::org::apache::lucene::store::FlushInfo &);
          IOContext(const ::org::apache::lucene::store::MergeInfo &);
          IOContext(const ::org::apache::lucene::store::IOContext$Context &, const ::org::apache::lucene::store::MergeInfo &, const ::org::apache::lucene::store::FlushInfo &, const ::org::apache::lucene::store::ReadAdvice &);

          ::org::apache::lucene::store::IOContext$Context context() const;
          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::store::FlushInfo flushInfo() const;
          jint hashCode() const;
          ::org::apache::lucene::store::MergeInfo mergeInfo() const;
          ::org::apache::lucene::store::ReadAdvice readAdvice() const;
          ::java::lang::String toString() const;
          IOContext withReadAdvice(const ::org::apache::lucene::store::ReadAdvice &) const;
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
        extern PyType_Def PY_TYPE_DEF(IOContext);
        extern PyTypeObject *PY_TYPE(IOContext);

        class t_IOContext {
        public:
          PyObject_HEAD
          IOContext object;
          static PyObject *wrap_Object(const IOContext&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
