#ifndef org_apache_lucene_store_FilterIndexInput_H
#define org_apache_lucene_store_FilterIndexInput_H

#include "org/apache/lucene/store/IndexInput.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class FilterIndexInput : public ::org::apache::lucene::store::IndexInput {
         public:
          enum {
            mid_init$_e9481d660a931c10,
            mid_close_3720c61b0679eb3e,
            mid_getDelegate_69ff96f993716366,
            mid_getFilePointer_16939d9d0a9a9721,
            mid_length_16939d9d0a9a9721,
            mid_readByte_847674f430f49e4c,
            mid_readBytes_5fdd5da9426708e6,
            mid_seek_8b3d46852b435a94,
            mid_slice_4c0286d0c02e55b3,
            mid_unwrap_1794d8b9f35d2ac2,
            mid_unwrapOnlyTest_1794d8b9f35d2ac2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterIndexInput(jobject obj) : ::org::apache::lucene::store::IndexInput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterIndexInput(const FilterIndexInput& obj) : ::org::apache::lucene::store::IndexInput(obj) {}

          FilterIndexInput(const ::java::lang::String &, const ::org::apache::lucene::store::IndexInput &);

          void close() const;
          ::org::apache::lucene::store::IndexInput getDelegate() const;
          jlong getFilePointer() const;
          jlong length() const;
          jbyte readByte() const;
          void readBytes(const JArray< jbyte > &, jint, jint) const;
          void seek(jlong) const;
          ::org::apache::lucene::store::IndexInput slice(const ::java::lang::String &, jlong, jlong) const;
          static ::org::apache::lucene::store::IndexInput unwrap(const ::org::apache::lucene::store::IndexInput &);
          static ::org::apache::lucene::store::IndexInput unwrapOnlyTest(const ::org::apache::lucene::store::IndexInput &);
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
        extern PyType_Def PY_TYPE_DEF(FilterIndexInput);
        extern PyTypeObject *PY_TYPE(FilterIndexInput);

        class t_FilterIndexInput {
        public:
          PyObject_HEAD
          FilterIndexInput object;
          static PyObject *wrap_Object(const FilterIndexInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
