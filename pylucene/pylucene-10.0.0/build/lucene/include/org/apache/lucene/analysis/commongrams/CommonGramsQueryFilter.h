#ifndef org_apache_lucene_analysis_commongrams_CommonGramsQueryFilter_H
#define org_apache_lucene_analysis_commongrams_CommonGramsQueryFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace commongrams {
          class CommonGramsFilter;
        }
      }
    }
  }
}
namespace java {
  namespace io {
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
        namespace commongrams {

          class CommonGramsQueryFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_cac3a17e5526397c,
              mid_incrementToken_9aa4f33e82ea333f,
              mid_isGramType_9aa4f33e82ea333f,
              mid_reset_e7bdbe105ce1bafb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CommonGramsQueryFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CommonGramsQueryFilter(const CommonGramsQueryFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            CommonGramsQueryFilter(const ::org::apache::lucene::analysis::commongrams::CommonGramsFilter &);

            jboolean incrementToken() const;
            jboolean isGramType() const;
            void reset() const;
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
        namespace commongrams {
          extern PyType_Def PY_TYPE_DEF(CommonGramsQueryFilter);
          extern PyTypeObject *PY_TYPE(CommonGramsQueryFilter);

          class t_CommonGramsQueryFilter {
          public:
            PyObject_HEAD
            CommonGramsQueryFilter object;
            static PyObject *wrap_Object(const CommonGramsQueryFilter&);
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
