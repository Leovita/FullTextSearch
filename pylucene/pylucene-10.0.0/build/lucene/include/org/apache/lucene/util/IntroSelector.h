#ifndef org_apache_lucene_util_IntroSelector_H
#define org_apache_lucene_util_IntroSelector_H

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

        class IntroSelector : public ::org::apache::lucene::util::Selector {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_select_eee637a6cebc299b,
            mid_setPivot_8226bd0b0fc13dba,
            mid_comparePivot_a3904e10f5bb9437,
            mid_compare_7f27cf81a85a97e9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IntroSelector(jobject obj) : ::org::apache::lucene::util::Selector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IntroSelector(const IntroSelector& obj) : ::org::apache::lucene::util::Selector(obj) {}

          IntroSelector();

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
        extern PyType_Def PY_TYPE_DEF(IntroSelector);
        extern PyTypeObject *PY_TYPE(IntroSelector);

        class t_IntroSelector {
        public:
          PyObject_HEAD
          IntroSelector object;
          static PyObject *wrap_Object(const IntroSelector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
