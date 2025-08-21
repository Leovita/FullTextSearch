#ifndef org_apache_lucene_search_grouping_DoubleRangeFactory_H
#define org_apache_lucene_search_grouping_DoubleRangeFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {
          class DoubleRange;
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
      namespace search {
        namespace grouping {

          class DoubleRangeFactory : public ::java::lang::Object {
           public:
            enum {
              mid_init$_4d2b38be0e1337a3,
              mid_getRange_81f5b556fbd6d364,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DoubleRangeFactory(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DoubleRangeFactory(const DoubleRangeFactory& obj) : ::java::lang::Object(obj) {}

            DoubleRangeFactory(jdouble, jdouble, jdouble);

            ::org::apache::lucene::search::grouping::DoubleRange getRange(jdouble, const ::org::apache::lucene::search::grouping::DoubleRange &) const;
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
      namespace search {
        namespace grouping {
          extern PyType_Def PY_TYPE_DEF(DoubleRangeFactory);
          extern PyTypeObject *PY_TYPE(DoubleRangeFactory);

          class t_DoubleRangeFactory {
          public:
            PyObject_HEAD
            DoubleRangeFactory object;
            static PyObject *wrap_Object(const DoubleRangeFactory&);
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
