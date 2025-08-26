#ifndef org_apache_lucene_analysis_miscellaneous_DateRecognizerFilter_H
#define org_apache_lucene_analysis_miscellaneous_DateRecognizerFilter_H

#include "org/apache/lucene/analysis/FilteringTokenFilter.h"

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
  namespace lang {
    class String;
    class Class;
  }
  namespace text {
    class DateFormat;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace miscellaneous {

          class DateRecognizerFilter : public ::org::apache::lucene::analysis::FilteringTokenFilter {
           public:
            enum {
              mid_init$_4fe096967a533954,
              mid_init$_c297c2d358ce0c0c,
              mid_accept_9aa4f33e82ea333f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DateRecognizerFilter(jobject obj) : ::org::apache::lucene::analysis::FilteringTokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DateRecognizerFilter(const DateRecognizerFilter& obj) : ::org::apache::lucene::analysis::FilteringTokenFilter(obj) {}

            static ::java::lang::String *DATE_TYPE;

            DateRecognizerFilter(const ::org::apache::lucene::analysis::TokenStream &);
            DateRecognizerFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::java::text::DateFormat &);

            jboolean accept() const;
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
          extern PyType_Def PY_TYPE_DEF(DateRecognizerFilter);
          extern PyTypeObject *PY_TYPE(DateRecognizerFilter);

          class t_DateRecognizerFilter {
          public:
            PyObject_HEAD
            DateRecognizerFilter object;
            static PyObject *wrap_Object(const DateRecognizerFilter&);
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
