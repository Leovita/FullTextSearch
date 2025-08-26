#ifndef org_apache_lucene_util_RadixSelector_H
#define org_apache_lucene_util_RadixSelector_H

#include "org/apache/lucene/util/Selector.h"

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

        class RadixSelector : public ::org::apache::lucene::util::Selector {
         public:
          enum {
            mid_select_eee637a6cebc299b,
            mid_getFallbackSelector_a4248c77b2e4ceb0,
            mid_byteAt_7f27cf81a85a97e9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RadixSelector(jobject obj) : ::org::apache::lucene::util::Selector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RadixSelector(const RadixSelector& obj) : ::org::apache::lucene::util::Selector(obj) {}

          void select(jint, jint, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(RadixSelector);
        extern PyTypeObject *PY_TYPE(RadixSelector);

        class t_RadixSelector {
        public:
          PyObject_HEAD
          RadixSelector object;
          static PyObject *wrap_Object(const RadixSelector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
