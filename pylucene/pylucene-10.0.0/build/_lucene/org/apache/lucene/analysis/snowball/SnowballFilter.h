#ifndef org_apache_lucene_analysis_snowball_SnowballFilter_H
#define org_apache_lucene_analysis_snowball_SnowballFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
      }
    }
  }
  namespace tartarus {
    namespace snowball {
      class SnowballStemmer;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace snowball {

          class SnowballFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_6f20f8fabd68a330,
              mid_init$_8418fe9e89083363,
              mid_incrementToken_9aa4f33e82ea333f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SnowballFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SnowballFilter(const SnowballFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            SnowballFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::tartarus::snowball::SnowballStemmer &);
            SnowballFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::java::lang::String &);

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
        namespace snowball {
          extern PyType_Def PY_TYPE_DEF(SnowballFilter);
          extern PyTypeObject *PY_TYPE(SnowballFilter);

          class t_SnowballFilter {
          public:
            PyObject_HEAD
            SnowballFilter object;
            static PyObject *wrap_Object(const SnowballFilter&);
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
