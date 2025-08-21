#ifndef org_apache_lucene_analysis_gl_GalicianStemFilter_H
#define org_apache_lucene_analysis_gl_GalicianStemFilter_H

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
        namespace gl {

          class GalicianStemFilter : public ::org::apache::lucene::analysis::TokenFilter {
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

            explicit GalicianStemFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GalicianStemFilter(const GalicianStemFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            GalicianStemFilter(const ::org::apache::lucene::analysis::TokenStream &);

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
        namespace gl {
          extern PyType_Def PY_TYPE_DEF(GalicianStemFilter);
          extern PyTypeObject *PY_TYPE(GalicianStemFilter);

          class t_GalicianStemFilter {
          public:
            PyObject_HEAD
            GalicianStemFilter object;
            static PyObject *wrap_Object(const GalicianStemFilter&);
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
