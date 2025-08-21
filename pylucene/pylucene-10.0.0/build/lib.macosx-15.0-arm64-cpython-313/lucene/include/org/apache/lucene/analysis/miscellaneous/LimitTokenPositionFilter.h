#ifndef org_apache_lucene_analysis_miscellaneous_LimitTokenPositionFilter_H
#define org_apache_lucene_analysis_miscellaneous_LimitTokenPositionFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
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
        namespace miscellaneous {

          class LimitTokenPositionFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_040618eef88cc819,
              mid_init$_f2751701704e4b00,
              mid_incrementToken_947277eca0748c4e,
              mid_reset_3720c61b0679eb3e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LimitTokenPositionFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LimitTokenPositionFilter(const LimitTokenPositionFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            LimitTokenPositionFilter(const ::org::apache::lucene::analysis::TokenStream &, jint);
            LimitTokenPositionFilter(const ::org::apache::lucene::analysis::TokenStream &, jint, jboolean);

            jboolean incrementToken() const;
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
        namespace miscellaneous {
          extern PyType_Def PY_TYPE_DEF(LimitTokenPositionFilter);
          extern PyTypeObject *PY_TYPE(LimitTokenPositionFilter);

          class t_LimitTokenPositionFilter {
          public:
            PyObject_HEAD
            LimitTokenPositionFilter object;
            static PyObject *wrap_Object(const LimitTokenPositionFilter&);
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
