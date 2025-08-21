#ifndef org_apache_lucene_analysis_charfilter_BaseCharFilter_H
#define org_apache_lucene_analysis_charfilter_BaseCharFilter_H

#include "org/apache/lucene/analysis/CharFilter.h"

namespace java {
  namespace io {
    class Reader;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace charfilter {

          class BaseCharFilter : public ::org::apache::lucene::analysis::CharFilter {
           public:
            enum {
              mid_init$_fa55492f0f5d7f31,
              mid_correct_3c9bba330f083871,
              mid_getLastCumulativeDiff_20fbf7565993c3d7,
              mid_addOffCorrectMap_e13cff512ebda969,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BaseCharFilter(jobject obj) : ::org::apache::lucene::analysis::CharFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BaseCharFilter(const BaseCharFilter& obj) : ::org::apache::lucene::analysis::CharFilter(obj) {}

            BaseCharFilter(const ::java::io::Reader &);
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
      namespace analysis {
        namespace charfilter {
          extern PyType_Def PY_TYPE_DEF(BaseCharFilter);
          extern PyTypeObject *PY_TYPE(BaseCharFilter);

          class t_BaseCharFilter {
          public:
            PyObject_HEAD
            BaseCharFilter object;
            static PyObject *wrap_Object(const BaseCharFilter&);
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
