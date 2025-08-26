#ifndef org_apache_lucene_util_bkd_BKDRadixSelector_H
#define org_apache_lucene_util_bkd_BKDRadixSelector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
      }
      namespace util {
        namespace bkd {
          class BKDRadixSelector$PathSlice;
          class BKDConfig;
          class HeapPointWriter;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace bkd {

          class BKDRadixSelector : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ff0eef4ce518dc91,
              mid_heapRadixSort_af566a8110d9ddcf,
              mid_select_5be573b78b8f3d5d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BKDRadixSelector(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BKDRadixSelector(const BKDRadixSelector& obj) : ::java::lang::Object(obj) {}

            BKDRadixSelector(const ::org::apache::lucene::util::bkd::BKDConfig &, jint, const ::org::apache::lucene::store::Directory &, const ::java::lang::String &);

            void heapRadixSort(const ::org::apache::lucene::util::bkd::HeapPointWriter &, jint, jint, jint, jint) const;
            JArray< jbyte > select(const ::org::apache::lucene::util::bkd::BKDRadixSelector$PathSlice &, const JArray< ::org::apache::lucene::util::bkd::BKDRadixSelector$PathSlice > &, jlong, jlong, jlong, jint, jint) const;
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
          extern PyType_Def PY_TYPE_DEF(BKDRadixSelector);
          extern PyTypeObject *PY_TYPE(BKDRadixSelector);

          class t_BKDRadixSelector {
          public:
            PyObject_HEAD
            BKDRadixSelector object;
            static PyObject *wrap_Object(const BKDRadixSelector&);
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
