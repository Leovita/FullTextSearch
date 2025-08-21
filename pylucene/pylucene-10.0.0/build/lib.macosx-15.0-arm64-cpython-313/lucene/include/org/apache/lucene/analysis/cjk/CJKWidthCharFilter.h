#ifndef org_apache_lucene_analysis_cjk_CJKWidthCharFilter_H
#define org_apache_lucene_analysis_cjk_CJKWidthCharFilter_H

#include "org/apache/lucene/analysis/charfilter/BaseCharFilter.h"

namespace java {
  namespace io {
    class Reader;
    class IOException;
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
        namespace cjk {

          class CJKWidthCharFilter : public ::org::apache::lucene::analysis::charfilter::BaseCharFilter {
           public:
            enum {
              mid_init$_fa55492f0f5d7f31,
              mid_read_20fbf7565993c3d7,
              mid_read_db543c1e894f3140,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CJKWidthCharFilter(jobject obj) : ::org::apache::lucene::analysis::charfilter::BaseCharFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CJKWidthCharFilter(const CJKWidthCharFilter& obj) : ::org::apache::lucene::analysis::charfilter::BaseCharFilter(obj) {}

            CJKWidthCharFilter(const ::java::io::Reader &);

            jint read() const;
            jint read(const JArray< jchar > &, jint, jint) const;
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
        namespace cjk {
          extern PyType_Def PY_TYPE_DEF(CJKWidthCharFilter);
          extern PyTypeObject *PY_TYPE(CJKWidthCharFilter);

          class t_CJKWidthCharFilter {
          public:
            PyObject_HEAD
            CJKWidthCharFilter object;
            static PyObject *wrap_Object(const CJKWidthCharFilter&);
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
