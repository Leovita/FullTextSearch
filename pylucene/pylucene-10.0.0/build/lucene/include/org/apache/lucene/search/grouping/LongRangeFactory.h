#ifndef org_apache_lucene_search_grouping_LongRangeFactory_H
#define org_apache_lucene_search_grouping_LongRangeFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {
          class LongRange;
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

          class LongRangeFactory : public ::java::lang::Object {
           public:
            enum {
              mid_init$_871fb907cf155cae,
              mid_getRange_5a00679ffb73e5ce,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LongRangeFactory(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LongRangeFactory(const LongRangeFactory& obj) : ::java::lang::Object(obj) {}

            LongRangeFactory(jlong, jlong, jlong);

            ::org::apache::lucene::search::grouping::LongRange getRange(jlong, const ::org::apache::lucene::search::grouping::LongRange &) const;
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
          extern PyType_Def PY_TYPE_DEF(LongRangeFactory);
          extern PyTypeObject *PY_TYPE(LongRangeFactory);

          class t_LongRangeFactory {
          public:
            PyObject_HEAD
            LongRangeFactory object;
            static PyObject *wrap_Object(const LongRangeFactory&);
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
