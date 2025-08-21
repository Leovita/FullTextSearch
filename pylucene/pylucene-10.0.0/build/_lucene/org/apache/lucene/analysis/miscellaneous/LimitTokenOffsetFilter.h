#ifndef org_apache_lucene_analysis_miscellaneous_LimitTokenOffsetFilter_H
#define org_apache_lucene_analysis_miscellaneous_LimitTokenOffsetFilter_H

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

          class LimitTokenOffsetFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_040618eef88cc819,
              mid_init$_f2751701704e4b00,
              mid_incrementToken_947277eca0748c4e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LimitTokenOffsetFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LimitTokenOffsetFilter(const LimitTokenOffsetFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            LimitTokenOffsetFilter(const ::org::apache::lucene::analysis::TokenStream &, jint);
            LimitTokenOffsetFilter(const ::org::apache::lucene::analysis::TokenStream &, jint, jboolean);

            jboolean incrementToken() const;
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
          extern PyType_Def PY_TYPE_DEF(LimitTokenOffsetFilter);
          extern PyTypeObject *PY_TYPE(LimitTokenOffsetFilter);

          class t_LimitTokenOffsetFilter {
          public:
            PyObject_HEAD
            LimitTokenOffsetFilter object;
            static PyObject *wrap_Object(const LimitTokenOffsetFilter&);
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
