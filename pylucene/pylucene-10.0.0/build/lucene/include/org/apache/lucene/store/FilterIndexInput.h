#ifndef org_apache_lucene_store_FilterIndexInput_H
#define org_apache_lucene_store_FilterIndexInput_H

#include "org/apache/lucene/store/IndexInput.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class String;
    class Class;
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
            mid_init$_6018e7300ea6df39,
            mid_close_e7bdbe105ce1bafb,
            mid_getDelegate_1107977def75ee66,
            mid_getFilePointer_0f176418e3e16541,
            mid_length_0f176418e3e16541,
            mid_readByte_1456044a01a5c9bf,
            mid_readBytes_116f7fcb5bff0f39,
            mid_seek_1d3149fac12f2af3,
            mid_slice_fa5539b2c5f0192d,
            mid_unwrap_0f782692de897731,
            mid_unwrapOnlyTest_0f782692de897731,
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
