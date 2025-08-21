#ifndef org_apache_lucene_util_bkd_HeapPointReader_H
#define org_apache_lucene_util_bkd_HeapPointReader_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace bkd {
          class PointReader;
          class PointValue;
        }
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

          class HeapPointReader : public ::java::lang::Object {
           public:
            enum {
              mid_close_3720c61b0679eb3e,
              mid_next_947277eca0748c4e,
              mid_pointValue_4371b70c8fbfafd8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit HeapPointReader(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            HeapPointReader(const HeapPointReader& obj) : ::java::lang::Object(obj) {}

            void close() const;
            jboolean next() const;
            ::org::apache::lucene::util::bkd::PointValue pointValue() const;
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
          extern PyType_Def PY_TYPE_DEF(HeapPointReader);
          extern PyTypeObject *PY_TYPE(HeapPointReader);

          class t_HeapPointReader {
          public:
            PyObject_HEAD
            HeapPointReader object;
            static PyObject *wrap_Object(const HeapPointReader&);
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
