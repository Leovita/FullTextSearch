#ifndef org_apache_lucene_analysis_fa_PersianCharFilter_H
#define org_apache_lucene_analysis_fa_PersianCharFilter_H

#include "org/apache/lucene/analysis/CharFilter.h"

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
        namespace fa {

          class PersianCharFilter : public ::org::apache::lucene::analysis::CharFilter {
           public:
            enum {
              mid_init$_89ab2bee9aa84b00,
              mid_read_bd89ce15dad49192,
              mid_read_872baf22ed11fbaa,
              mid_correct_a3904e10f5bb9437,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PersianCharFilter(jobject obj) : ::org::apache::lucene::analysis::CharFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PersianCharFilter(const PersianCharFilter& obj) : ::org::apache::lucene::analysis::CharFilter(obj) {}

            PersianCharFilter(const ::java::io::Reader &);

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
        namespace fa {
          extern PyType_Def PY_TYPE_DEF(PersianCharFilter);
          extern PyTypeObject *PY_TYPE(PersianCharFilter);

          class t_PersianCharFilter {
          public:
            PyObject_HEAD
            PersianCharFilter object;
            static PyObject *wrap_Object(const PersianCharFilter&);
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
