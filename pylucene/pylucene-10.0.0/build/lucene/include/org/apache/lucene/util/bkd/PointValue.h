#ifndef org_apache_lucene_util_bkd_PointValue_H
#define org_apache_lucene_util_bkd_PointValue_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
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
        namespace bkd {

          class PointValue : public ::java::lang::Object {
           public:
            enum {
              mid_docID_bd89ce15dad49192,
              mid_packedValue_adbedbc1fa61c358,
              mid_packedValueDocIDBytes_adbedbc1fa61c358,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PointValue(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PointValue(const PointValue& obj) : ::java::lang::Object(obj) {}

            jint docID() const;
            ::org::apache::lucene::util::BytesRef packedValue() const;
            ::org::apache::lucene::util::BytesRef packedValueDocIDBytes() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace bkd {
          extern PyType_Def PY_TYPE_DEF(PointValue);
          extern PyTypeObject *PY_TYPE(PointValue);

          class t_PointValue {
          public:
            PyObject_HEAD
            PointValue object;
            static PyObject *wrap_Object(const PointValue&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
