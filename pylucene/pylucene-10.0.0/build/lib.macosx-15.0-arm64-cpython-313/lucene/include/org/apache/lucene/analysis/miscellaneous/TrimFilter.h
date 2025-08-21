#ifndef org_apache_lucene_analysis_miscellaneous_TrimFilter_H
#define org_apache_lucene_analysis_miscellaneous_TrimFilter_H

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

          class TrimFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_7d17c8514b99ffc6,
              mid_incrementToken_947277eca0748c4e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TrimFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TrimFilter(const TrimFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            TrimFilter(const ::org::apache::lucene::analysis::TokenStream &);

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
          extern PyType_Def PY_TYPE_DEF(TrimFilter);
          extern PyTypeObject *PY_TYPE(TrimFilter);

          class t_TrimFilter {
          public:
            PyObject_HEAD
            TrimFilter object;
            static PyObject *wrap_Object(const TrimFilter&);
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
