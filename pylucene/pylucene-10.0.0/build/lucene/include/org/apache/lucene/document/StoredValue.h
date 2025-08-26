#ifndef org_apache_lucene_document_StoredValue_H
#define org_apache_lucene_document_StoredValue_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace document {
        class StoredValue$Type;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class StoredValue : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ee46a189998009d6,
            mid_init$_920ce0cdf4259cc9,
            mid_init$_a03f734ddaeb69b4,
            mid_init$_675f4cb9a2529ee0,
            mid_init$_8226bd0b0fc13dba,
            mid_init$_1d3149fac12f2af3,
            mid_getBinaryValue_adbedbc1fa61c358,
            mid_getDoubleValue_6fb37e123fed7a1f,
            mid_getFloatValue_8b62236f0e4d0dbc,
            mid_getIntValue_bd89ce15dad49192,
            mid_getLongValue_0f176418e3e16541,
            mid_getStringValue_e7df854526d67fa3,
            mid_getType_851cee9c787e1b7d,
            mid_setBinaryValue_920ce0cdf4259cc9,
            mid_setDoubleValue_a03f734ddaeb69b4,
            mid_setFloatValue_675f4cb9a2529ee0,
            mid_setIntValue_8226bd0b0fc13dba,
            mid_setLongValue_1d3149fac12f2af3,
            mid_setStringValue_ee46a189998009d6,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StoredValue(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StoredValue(const StoredValue& obj) : ::java::lang::Object(obj) {}

          StoredValue(const ::java::lang::String &);
          StoredValue(const ::org::apache::lucene::util::BytesRef &);
          StoredValue(jdouble);
          StoredValue(jfloat);
          StoredValue(jint);
          StoredValue(jlong);

          ::org::apache::lucene::util::BytesRef getBinaryValue() const;
          jdouble getDoubleValue() const;
          jfloat getFloatValue() const;
          jint getIntValue() const;
          jlong getLongValue() const;
          ::java::lang::String getStringValue() const;
          ::org::apache::lucene::document::StoredValue$Type getType() const;
          void setBinaryValue(const ::org::apache::lucene::util::BytesRef &) const;
          void setDoubleValue(jdouble) const;
          void setFloatValue(jfloat) const;
          void setIntValue(jint) const;
          void setLongValue(jlong) const;
          void setStringValue(const ::java::lang::String &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        extern PyType_Def PY_TYPE_DEF(StoredValue);
        extern PyTypeObject *PY_TYPE(StoredValue);

        class t_StoredValue {
        public:
          PyObject_HEAD
          StoredValue object;
          static PyObject *wrap_Object(const StoredValue&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
