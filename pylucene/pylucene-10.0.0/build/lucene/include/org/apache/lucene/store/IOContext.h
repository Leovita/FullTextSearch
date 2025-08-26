#ifndef org_apache_lucene_store_IOContext_H
#define org_apache_lucene_store_IOContext_H

#include "java/lang/Record.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class ReadAdvice;
        class MergeInfo;
        class IOContext;
        class FlushInfo;
        class IOContext$Context;
      }
    }
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
            mid_init$_dce4b71fddbf0ad9,
            mid_init$_96da0ce470a2ad8f,
            mid_init$_9129b580f13852fc,
            mid_context_7a361c0fe5856bc6,
            mid_equals_00d17418847797d4,
            mid_flushInfo_bfeb58881b2fbf6e,
            mid_hashCode_bd89ce15dad49192,
            mid_mergeInfo_9a0328045cee16c5,
            mid_readAdvice_633707cd18f1593f,
            mid_toString_e7df854526d67fa3,
            mid_withReadAdvice_b0459f1892726ffd,
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
