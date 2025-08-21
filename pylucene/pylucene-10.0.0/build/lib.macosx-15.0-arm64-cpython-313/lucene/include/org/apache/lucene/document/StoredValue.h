#ifndef org_apache_lucene_document_StoredValue_H
#define org_apache_lucene_document_StoredValue_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        class StoredValue$Type;
      }
      namespace util {
        class BytesRef;
      }
    }
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
            mid_init$_0d82408c6e55bc30,
            mid_init$_ac0de3ee0e03786d,
            mid_init$_b5bc1a2fb9ff9e90,
            mid_init$_c771a95b0227fb6a,
            mid_init$_540b2b23d51b1efd,
            mid_init$_8b3d46852b435a94,
            mid_getBinaryValue_9740fddd1c7df148,
            mid_getDoubleValue_32caabaad86c508b,
            mid_getFloatValue_9b6c3480dac00edf,
            mid_getIntValue_20fbf7565993c3d7,
            mid_getLongValue_16939d9d0a9a9721,
            mid_getStringValue_09a7afff1868fc5e,
            mid_getType_57412b55b4f5ff36,
            mid_setBinaryValue_ac0de3ee0e03786d,
            mid_setDoubleValue_b5bc1a2fb9ff9e90,
            mid_setFloatValue_c771a95b0227fb6a,
            mid_setIntValue_540b2b23d51b1efd,
            mid_setLongValue_8b3d46852b435a94,
            mid_setStringValue_0d82408c6e55bc30,
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
